// Fill out your copyright notice in the Description page of Project Settings.


#include "PickUpItem.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APickUpItem::APickUpItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Create Static Mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	RootComponent = PickupMesh;

	//All pickups start active
	itemIsActive = true;

}

// Called when the game starts or when spawned
void APickUpItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickUpItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Returns active state
bool APickUpItem::IsActive() 
{
	return itemIsActive;
}

//Changes Active state
void APickUpItem::SetActive(bool NewPickupState) 
{
	itemIsActive = NewPickupState;

}

void APickUpItem::IsCollected_Implementation() {
	//Log debug
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT(" You have collected %s"), *PickupDebugString);
}

