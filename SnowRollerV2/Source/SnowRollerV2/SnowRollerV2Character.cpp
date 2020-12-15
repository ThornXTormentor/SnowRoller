// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SnowRollerV2Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "PickUpItem.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include <SnowRollerV2\SnowPickup.h>

//////////////////////////////////////////////////////////////////////////
// ASnowRollerV2Character

ASnowRollerV2Character::ASnowRollerV2Character()
{
	//// Set size for collision capsule
	//GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	//// set our turn rates for input
	//BaseTurnRate = 45.f;
	//BaseLookUpRate = 45.f;

	//// Don't rotate when the controller rotates. Let that just affect the camera.
	//bUseControllerRotationPitch = false;
	//bUseControllerRotationYaw = false;
	//bUseControllerRotationRoll = false;

	//// Configure character movement
	//GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	//GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	//GetCharacterMovement()->JumpZVelocity = 600.f;
	//GetCharacterMovement()->AirControl = 0.2f;

	//// Create a camera boom (pulls in towards the player if there is a collision)
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);
	//CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	//CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	//// Create a follow camera
	//FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	//FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	//FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BallMesh(TEXT("/Game/Rolling/Meshes/BallMesh.BallMesh"));

	// Create mesh component for the ball
	SBall = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SnowBall0"));
	SBall->SetStaticMesh(BallMesh.Object);
	SBall->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	SBall->SetSimulatePhysics(true);
	SBall->SetAngularDamping(0.1f);
	SBall->SetLinearDamping(0.1f);
	SBall->BodyInstance.MassScale = 3.5f;
	SBall->BodyInstance.MaxAngularVelocity = 800.0f;
	SBall->SetNotifyRigidBodyCollision(true);
	RootComponent = SBall;

	// Create a camera boom attached to the root (ball)
	SSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SnowSpringArm0"));
	SSpringArm->SetupAttachment(RootComponent);
	SSpringArm->bDoCollisionTest = false;
	SSpringArm->SetUsingAbsoluteRotation(true); // Rotation of the ball should not affect rotation of boom
	SSpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SSpringArm->TargetArmLength = 1200.f;
	SSpringArm->bEnableCameraLag = false;
	SSpringArm->CameraLagSpeed = 3.f;

	// Create a camera and attach to boom
	SCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SnowCamera0"));
	SCamera->SetupAttachment(SSpringArm, USpringArmComponent::SocketName);
	SCamera->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Set up forces
	RollTorque = 500000.0f;
	JumpImpulse = 35000.0f;
	bCanJump = true; // Start being able to jump

	// Create Collection Sphere for Pickups
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(200.0f);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//Set Base energy level for the character
	InitialEnergy = 1000.0f;
	CharacterEnergy = InitialEnergy;

	//Set the dependence of speed on energy level
	SpeedFactor = 0.75f;
	BaseSpeed = 10.0f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASnowRollerV2Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//// Set up gameplay key bindings
	check(PlayerInputComponent);
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	//PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//PlayerInputComponent->BindAxis("MoveForward", this, &ASnowRollerV2Character::MoveForward);
	//PlayerInputComponent->BindAxis("MoveRight", this, &ASnowRollerV2Character::MoveRight);

	//// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	//// "turn" handles devices that provide an absolute delta, such as a mouse.
	//// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	//PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	//PlayerInputComponent->BindAxis("TurnRate", this, &ASnowRollerV2Character::TurnAtRate);
	//PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	//PlayerInputComponent->BindAxis("LookUpRate", this, &ASnowRollerV2Character::LookUpAtRate);

	//// handle touch devices
	//PlayerInputComponent->BindTouch(IE_Pressed, this, &ASnowRollerV2Character::TouchStarted);
	//PlayerInputComponent->BindTouch(IE_Released, this, &ASnowRollerV2Character::TouchStopped);

	//// VR headset functionality
	//PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ASnowRollerV2Character::OnResetVR);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis("MoveRight", this, &ASnowRollerV2Character::MoveRight);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASnowRollerV2Character::MoveForward);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASnowRollerV2Character::Jump);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ASnowRollerV2Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ASnowRollerV2Character::TouchStopped);

	PlayerInputComponent->BindAction("Collect", IE_Pressed, this, &ASnowRollerV2Character::CollectPickups);
}


//void ASnowRollerV2Character::OnResetVR()
//{
//	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
//}

//void ASnowRollerV2Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
//{
//		Jump();
//}
//
//void ASnowRollerV2Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
//{
//		StopJumping();
//}

//void ASnowRollerV2Character::TurnAtRate(float Rate)
//{
//	// calculate delta for this frame from the rate information
//	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
//}
//
//void ASnowRollerV2Character::LookUpAtRate(float Rate)
//{
//	// calculate delta for this frame from the rate information
//	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
//}

//void ASnowRollerV2Character::MoveForward(float Value)
//{
//	if ((Controller != NULL) && (Value != 0.0f))
//	{
//		// find out which way is forward
//		const FRotator Rotation = Controller->GetControlRotation();
//		const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//		// get forward vector
//		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
//		AddMovementInput(Direction, Value);
//	}
//}
//
//void ASnowRollerV2Character::MoveRight(float Value)
//{
//	if ( (Controller != NULL) && (Value != 0.0f) )
//	{
//		// find out which way is right
//		const FRotator Rotation = Controller->GetControlRotation();
//		const FRotator YawRotation(0, Rotation.Yaw, 0);
//	
//		// get right vector 
//		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
//		// add movement in that direction
//		AddMovementInput(Direction, Value);
//	}
//}

void ASnowRollerV2Character::MoveRight(float Val)
{
	const FVector Torque = FVector(-1.f * Val * RollTorque, 0.f, 0.f);
	SBall->AddTorqueInRadians(Torque);
}

void ASnowRollerV2Character::MoveForward(float Val)
{
	const FVector Torque = FVector(0.f, Val * RollTorque, 0.f);
	SBall->AddTorqueInRadians(Torque);
}

void ASnowRollerV2Character::Jump()
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		SBall->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void ASnowRollerV2Character::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bCanJump = true;
}

void ASnowRollerV2Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		SBall->AddImpulse(Impulse);
		bCanJump = false;
	}

}

void ASnowRollerV2Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	if (bCanJump)
	{
		const FVector Impulse = FVector(0.f, 0.f, JumpImpulse);
		SBall->AddImpulse(Impulse);
		bCanJump = false;
	}
}

void ASnowRollerV2Character::CollectPickups() 
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

float ASnowRollerV2Character::GetInitialEnergy()
{
	//Reports Starting energy
	return InitialEnergy;
}

float ASnowRollerV2Character::GetCurrentEnergy()
{
	//Reports current energy
	return CharacterEnergy;
}

//Called whenever power is increased or decreased
void ASnowRollerV2Character::UpdateEnergy(float EnergyChange) 
{
	//Change energy
	CharacterEnergy = CharacterEnergy + EnergyChange;

	//Change speed based on energy
	GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + (SpeedFactor * CharacterEnergy);
}
