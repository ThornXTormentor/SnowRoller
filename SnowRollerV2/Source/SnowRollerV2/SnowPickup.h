// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUpItem.h"
#include "SnowPickup.generated.h"

/**
 * 
 */
UCLASS()
class SNOWROLLERV2_API ASnowPickup : public APickUpItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	void ASnowPickUp();

	//Override IsCollected Function - use implementation because its a blueprint native
	void IsCollected_Implementation() override;

	//Public way to access snow energy level
	float GetEnergy();

protected:
	//Set the amount of energy the snow gives the character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Energy", Meta = (BlueprintProtected = "true"))
	float SnowEnergy;

};
