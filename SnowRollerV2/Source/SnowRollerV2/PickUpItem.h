// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickUpItem.generated.h"

UCLASS()
class SNOWROLLERV2_API APickUpItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickUpItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//True when pickup can be used, false when not
	bool itemIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*Return mesh for pickup*/
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	//Return whether or not pickup is active
	UFUNCTION(BlueprintPure, Category = "PickupItem")
	bool IsActive();

	//Allows other classes to safely change whether or not pickup is active
	UFUNCTION(BlueprintCallable, Category = "PickupItem")
	void SetActive(bool NewPickupState);

	//Function to call when pickup is collected
	UFUNCTION(BlueprintNativeEvent, Category = "PickupItem")
	void IsCollected();
	virtual void IsCollected_Implementation();

private:
	/** Static mesh to represent the pickup in the level*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PickupItem", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;

};
