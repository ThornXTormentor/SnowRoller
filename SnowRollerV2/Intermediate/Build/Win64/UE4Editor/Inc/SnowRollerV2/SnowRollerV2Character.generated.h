// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNOWROLLERV2_SnowRollerV2Character_generated_h
#error "SnowRollerV2Character.generated.h already included, missing '#pragma once' in SnowRollerV2Character.h"
#endif
#define SNOWROLLERV2_SnowRollerV2Character_generated_h

#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_SPARSE_DATA
#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EnergyChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateEnergy(Z_Param_EnergyChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialEnergy(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EnergyChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateEnergy(Z_Param_EnergyChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialEnergy(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnowRollerV2Character(); \
	friend struct Z_Construct_UClass_ASnowRollerV2Character_Statics; \
public: \
	DECLARE_CLASS(ASnowRollerV2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(ASnowRollerV2Character)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASnowRollerV2Character(); \
	friend struct Z_Construct_UClass_ASnowRollerV2Character_Statics; \
public: \
	DECLARE_CLASS(ASnowRollerV2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(ASnowRollerV2Character)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnowRollerV2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnowRollerV2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnowRollerV2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowRollerV2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnowRollerV2Character(ASnowRollerV2Character&&); \
	NO_API ASnowRollerV2Character(const ASnowRollerV2Character&); \
public:


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnowRollerV2Character(ASnowRollerV2Character&&); \
	NO_API ASnowRollerV2Character(const ASnowRollerV2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnowRollerV2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowRollerV2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnowRollerV2Character)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SBall() { return STRUCT_OFFSET(ASnowRollerV2Character, SBall); } \
	FORCEINLINE static uint32 __PPO__SSpringArm() { return STRUCT_OFFSET(ASnowRollerV2Character, SSpringArm); } \
	FORCEINLINE static uint32 __PPO__SCamera() { return STRUCT_OFFSET(ASnowRollerV2Character, SCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ASnowRollerV2Character, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialEnergy() { return STRUCT_OFFSET(ASnowRollerV2Character, InitialEnergy); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ASnowRollerV2Character, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ASnowRollerV2Character, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__CharacterEnergy() { return STRUCT_OFFSET(ASnowRollerV2Character, CharacterEnergy); }


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_9_PROLOG
#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_RPC_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_INCLASS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_INCLASS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNOWROLLERV2_API UClass* StaticClass<class ASnowRollerV2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnowRollerV2_Source_SnowRollerV2_SnowRollerV2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
