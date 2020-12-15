// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "SnowRollerV2GameMode.h"
#include "SnowRollerV2.h"
#include "SnowRollerV2Character.h"
#include "Core.h"
#include "Misc/App.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"

ASnowRollerV2GameMode::ASnowRollerV2GameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/RollingCPP/Blueprints/PhysicsBallBP"));

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SnowRoller/Blueprints/SnowBallRoller"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		UE_LOG(LogClass, Warning, TEXT("Found Pawn"));
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	//Base Decay Rate
	SpeedDecayRate = 0.05f;
}

void ASnowRollerV2GameMode::BeginPlay() 
{
	Super::BeginPlay();

	//Find all spawn volume actors
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	UE_LOG(LogClass, Warning, TEXT(FoundActors));

	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			UE_LOG(LogClass, Warning, TEXT("Found Spawn Volume"));
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(ESnowPlayState::EPlaying);

	//Set score to beat
	ASnowRollerV2Character* MyCharacter = Cast<ASnowRollerV2Character>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (MyCharacter) 
	{
		UE_LOG(LogClass, Warning, TEXT("Found Character"));
		EnergyToWin = (MyCharacter->GetInitialEnergy()) * 2.5f;
	}
	else
	{
		UE_LOG(LogClass, Warning, TEXT("Missing Character"));
	}

	if(HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);

		if (CurrentWidget != nullptr) 
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ASnowRollerV2GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check to see if were using the player character
	ASnowRollerV2Character* MyCharacter = Cast<ASnowRollerV2Character>(UGameplayStatics::GetPlayerPawn(this, 0));

	if (MyCharacter) 
	{
		UE_LOG(LogClass, Warning, TEXT("Found Player"));
		//If energy is greater than needed to win, set games state to won
		if (MyCharacter->GetCurrentEnergy() > EnergyToWin) {
			SetCurrentState(ESnowPlayState::EWon);
		}
		else if (MyCharacter->GetCurrentEnergy() > 0)
		{
			//Decrease player power using decay rate
			MyCharacter->UpdateEnergy(-DeltaTime * SpeedDecayRate *(MyCharacter->GetInitialEnergy()));
			UE_LOG(LogClass, Warning, TEXT("Updated Energy Hit"));
		}
		else
		{
			SetCurrentState(ESnowPlayState::EGameOver);
		}
	}
}

float ASnowRollerV2GameMode::GetEnergyToWin() const 
{
	return EnergyToWin;
}

ESnowPlayState ASnowRollerV2GameMode::GetCurrentState() const {
	return CurrentState;
}

void ASnowRollerV2GameMode::SetCurrentState(ESnowPlayState NewState)
{
	CurrentState = NewState;
	//Handle new state
	HandleNewState(CurrentState);
}

void ASnowRollerV2GameMode::HandleNewState(ESnowPlayState NewState) 
{
	switch(NewState)
	{
		//If currently playing
		case ESnowPlayState::EPlaying: 
		{
			//Spawn volume active
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(true);
			}
		}
		break;
		//If Won game
		case ESnowPlayState::EWon:
		{
			//Spawn volume inactive
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}
		}
		break;
		//If lost game
		case ESnowPlayState::EGameOver:
		{
			//Spawn volume inactive and block player input and ragdoll player
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}

			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if(PlayerController)
			{
				PlayerController->SetCinematicMode(true, false, false, true, true);
			}

			ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
			if(MyCharacter)
			{
				MyCharacter->GetMesh()->SetSimulatePhysics(true);
				MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;
			}
		}
		break;
		//If unknown
		case ESnowPlayState::EUnknown:
		{
			//do nothing
		}
		break;
	}
}
