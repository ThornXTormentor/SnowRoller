// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Core.h"
#include "GameFramework/Character.h"
#include "SnowRollerV2Character.generated.h"

UCLASS(config=Game)
class ASnowRollerV2Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	//Collection
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollectionSphere;

public:
	ASnowRollerV2Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//Accessor function for initial energy
	UFUNCTION(BlueprintPure, Category="Energy")
	float GetInitialEnergy();

	//Accessor function for current energy
	UFUNCTION(BlueprintPure, Category = "Energy")
	float GetCurrentEnergy();

	//Function to update player's energy
	//@param EnergyChange | this is the amount to change the Energy by, and it can be positive or negative
	UFUNCTION(BlueprintCallable, Category="Energy")
	void UpdateEnergy(float EnergyChange);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	//Called when we press a key to collect pickups inside sphere of collectionsphere
	UFUNCTION(BlueprintCallable, Category="Pickup")
	void CollectPickups();

	//Starting energy for player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Energy", Meta = (BlueprintProtected = "true"))
	float InitialEnergy;

	//Multiplier for player speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Energy", Meta = (BlueprintProtected = "true"))
	float SpeedFactor;

	//speed when power level is 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Energy", Meta = (BlueprintProtected = "true"))
	float BaseSpeed;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	//Collection Sphere
	FORCEINLINE class USphereComponent* GetCollectionSphere() const { return CollectionSphere; }

private:
	//Current energy level of character
	UPROPERTY(VisibleAnywhere, Category="Energy")
	float CharacterEnergy;
};

