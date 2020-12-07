// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Core.h"
#include "Misc/App.h"
#include "GameFramework/Actor.h"
#include "GameFramework/GameModeBase.h"
#include "SnowRollerV2GameMode.generated.h"

//Enum to store current state of gameplay
UENUM(BlueprintType)
enum class ESnowPlayState : uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ASnowRollerV2GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASnowRollerV2GameMode();

	virtual void Tick(float DeltaTime) override;

	//Returns energy needed to win for HUD
	UFUNCTION(BlueprintPure, Category="Energy")
	float GetEnergyToWin() const;

	virtual void BeginPlay() override;

	//Returns the current playing state
	UFUNCTION(BlueprintPure, Category="Energy")
	ESnowPlayState GetCurrentState() const;

	//Sets new play state
	void SetCurrentState(ESnowPlayState NewState);

protected:
	//Rate at which the character loses energy
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Energy", Meta = (BlueprintProtected = "true"))
	float SpeedDecayRate;

	//Energy needed to win game
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Energy", Meta = (BlueprintProtected = "true"))
	float EnergyToWin;

	//Widget class to use for HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Energy", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	//Instance of HUD Widget Class
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:
	//Keeps track of current playing state
	ESnowPlayState CurrentState;

	//
	TArray<class ASpawnVolume*> SpawnVolumeActors;

	//Handle any function calls that rely on changing the playing state of game
	void HandleNewState(ESnowPlayState NewState);
};



