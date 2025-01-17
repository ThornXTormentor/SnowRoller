// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TP_RollingBall.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include <SnowRollerV2\PickUpItem.h>
#include <SnowRollerV2\SnowPickup.h>
#include <Runtime\Engine\Classes\GameFramework\Character.h>

ATP_RollingBall::ATP_RollingBall()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the ball
	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
	Ball->SetStaticMesh(BallMesh.Object);
	Ball->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Ball->SetSimulatePhysics(true);
	Ball->SetAngularDamping(0.1f);
	Ball->SetLinearDamping(0.1f);
	Ball->BodyInstance.MassScale = 3.5f;
	Ball->BodyInstance.MaxAngularVelocity = 800.0f;
	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	// Create a camera boom attached to the root (ball)
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bDoCollisionTest = false;
	SpringArm->SetUsingAbsoluteRotation(true); // Rotation of the ball should not affect rotation of boom
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SpringArm->TargetArmLength = 1200.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 3.f;

	// Create a camera and attach to boom
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Set up forces
	RollTorque = 50000000.0f;
	JumpImpulse = 350000.0f;
	bCanJump = true; // Start being able to jump

	// Create Collection Sphere for Pickups
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(100.0f);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//Set Base energy level for the character
	InitialEnergy = 2000.0f;
	CharacterEnergy = InitialEnergy;

	//Set the dependence of speed on energy level
	SpeedFactor = 0.75f;
	BaseSpeed = 10.0f;
}


void ATP_RollingBall::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP_RollingBall::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATP_RollingBall::MoveForward);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ATP_RollingBall::Jump);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATP_RollingBall::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATP_RollingBall::TouchStopped);

	PlayerInputComponent->BindAction("Collect", IE_Pressed, this, &ATP_RollingBall::CollectPickups);
}

void ATP_RollingBall::MoveRight(float Val)
{
	const FVector Torque = FVector(-1.f * Val * RollTorque, 0.f, 0.f);
	Ball->AddTorqueInRadians(Torque);
}

void ATP_RollingBall::MoveForward(float Val)
{
	const FVector Torque = FVector(0.f, Val * RollTorque, 0.f);
	Ball->AddTorqueInRadians(Torque);	
}

void ATP_RollingBall::Jump()
{
	if(bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void ATP_RollingBall::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bCanJump = true;
}

void ATP_RollingBall::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}

}

void ATP_RollingBall::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void ATP_RollingBall::CollectPickups()
{
	//Get all overlapping actors and store them in an array
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	//Keep track of collected energy
	float CollectedEnergy = 0;

	//For each actor we collected
	for (int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		//Cast the actor to APickUpItem
		APickUpItem* const TestPickup = Cast<APickUpItem>(CollectedActors[iCollected]);

		//If the cast is successful AND pickup is valid and active
		if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
		{
			//Call the pickups IsCollected function
			TestPickup->IsCollected();
			//Check to see if pickup is Snow
			ASnowPickup* const TestSnow = Cast<ASnowPickup>(TestPickup);
			if (TestSnow)
			{
				//Increase collected power
				CollectedEnergy += TestSnow->GetEnergy();
			}
			//Deactivate pickup
			TestPickup->SetActive(false);
		}
	}

	if (CollectedEnergy > 0)
	{
		UpdateEnergy(CollectedEnergy);
	}

}

float ATP_RollingBall::GetInitialEnergy()
{
	//Reports Starting energy
	return InitialEnergy;
}

float ATP_RollingBall::GetCurrentEnergy()
{
	//Reports current energy
	return CharacterEnergy;
}

//Called whenever power is increased or decreased
void ATP_RollingBall::UpdateEnergy(float EnergyChange)
{
	//Change energy
	CharacterEnergy = CharacterEnergy + EnergyChange;

	//Change speed based on energy
	//GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + (SpeedFactor * CharacterEnergy);
}
