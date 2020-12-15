// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowRollerV2/SnowRollerV2Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowRollerV2Character() {}
// Cross Module References
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowRollerV2Character_NoRegister();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowRollerV2Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SnowRollerV2();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASnowRollerV2Character::StaticRegisterNativesASnowRollerV2Character()
	{
		UClass* Class = ASnowRollerV2Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", &ASnowRollerV2Character::execCollectPickups },
			{ "GetCurrentEnergy", &ASnowRollerV2Character::execGetCurrentEnergy },
			{ "GetInitialEnergy", &ASnowRollerV2Character::execGetInitialEnergy },
			{ "UpdateEnergy", &ASnowRollerV2Character::execUpdateEnergy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//Called when we press a key to collect pickups inside sphere of collectionsphere\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Called when we press a key to collect pickups inside sphere of collectionsphere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2Character, nullptr, "CollectPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics
	{
		struct SnowRollerV2Character_eventGetCurrentEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowRollerV2Character_eventGetCurrentEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Accessor function for current energy\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Accessor function for current energy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2Character, nullptr, "GetCurrentEnergy", nullptr, nullptr, sizeof(SnowRollerV2Character_eventGetCurrentEnergy_Parms), Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics
	{
		struct SnowRollerV2Character_eventGetInitialEnergy_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowRollerV2Character_eventGetInitialEnergy_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Accessor function for initial energy\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Accessor function for initial energy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2Character, nullptr, "GetInitialEnergy", nullptr, nullptr, sizeof(SnowRollerV2Character_eventGetInitialEnergy_Parms), Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics
	{
		struct SnowRollerV2Character_eventUpdateEnergy_Parms
		{
			float EnergyChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::NewProp_EnergyChange = { "EnergyChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowRollerV2Character_eventUpdateEnergy_Parms, EnergyChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::NewProp_EnergyChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Function to update player's energy\n//@param EnergyChange | this is the amount to change the Energy by, and it can be positive or negative\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Function to update player's energy\n@param EnergyChange | this is the amount to change the Energy by, and it can be positive or negative" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2Character, nullptr, "UpdateEnergy", nullptr, nullptr, sizeof(SnowRollerV2Character_eventUpdateEnergy_Parms), Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnowRollerV2Character_NoRegister()
	{
		return ASnowRollerV2Character::StaticClass();
	}
	struct Z_Construct_UClass_ASnowRollerV2Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SSpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SBall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnowRollerV2Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowRollerV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnowRollerV2Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnowRollerV2Character_CollectPickups, "CollectPickups" }, // 3683774544
		{ &Z_Construct_UFunction_ASnowRollerV2Character_GetCurrentEnergy, "GetCurrentEnergy" }, // 2567470447
		{ &Z_Construct_UFunction_ASnowRollerV2Character_GetInitialEnergy, "GetInitialEnergy" }, // 2439490233
		{ &Z_Construct_UFunction_ASnowRollerV2Character_UpdateEnergy, "UpdateEnergy" }, // 267392834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnowRollerV2Character.h" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CharacterEnergy_MetaData[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Current energy level of character\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Current energy level of character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CharacterEnergy = { "CharacterEnergy", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, CharacterEnergy), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CharacterEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CharacterEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//speed when power level is 0\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "speed when power level is 0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Multiplier for player speed\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Multiplier for player speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_InitialEnergy_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Starting energy for player\n" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Starting energy for player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_InitialEnergy = { "InitialEnergy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, InitialEnergy), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_InitialEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_InitialEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Torque to apply when trying to roll ball */" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, RollTorque), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_RollTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_RollTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Vertical impulse to apply when pressing jump */" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_JumpImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//Collection\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Camera to view the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SCamera = { "SCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, SCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring arm for positioning the camera above the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SSpringArm = { "SSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, SSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SSpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SBall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnowRollerV2Character.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SBall = { "SBall", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2Character, SBall), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SBall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnowRollerV2Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CharacterEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_InitialEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_RollTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SSpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2Character_Statics::NewProp_SBall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnowRollerV2Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnowRollerV2Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnowRollerV2Character_Statics::ClassParams = {
		&ASnowRollerV2Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnowRollerV2Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnowRollerV2Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnowRollerV2Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnowRollerV2Character, 3865939671);
	template<> SNOWROLLERV2_API UClass* StaticClass<ASnowRollerV2Character>()
	{
		return ASnowRollerV2Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnowRollerV2Character(Z_Construct_UClass_ASnowRollerV2Character, &ASnowRollerV2Character::StaticClass, TEXT("/Script/SnowRollerV2"), TEXT("ASnowRollerV2Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnowRollerV2Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
