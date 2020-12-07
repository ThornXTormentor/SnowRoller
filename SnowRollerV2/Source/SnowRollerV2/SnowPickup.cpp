// Fill out your copyright notice in the Description page of Project Settings.
#include "SnowPickup.h"
#include "SnowRollerV2.h"
#include "Components/StaticMeshComponent.h"


//Set Default Values
void ASnowPickup::ASnowPickUp() 
{
	GetMesh()->SetSimulatePhysics(true);

	//Base energy level of snow
	SnowEnergy = 150.0f;
}

void ASnowPickup::IsCollected_Implementation() 
{
	//Use base pickup behavior
	Super::IsCollected_Implementation();
	//Destroy object
	Destroy();
}

float ASnowPickup::GetEnergy()
{
	return SnowEnergy;
}