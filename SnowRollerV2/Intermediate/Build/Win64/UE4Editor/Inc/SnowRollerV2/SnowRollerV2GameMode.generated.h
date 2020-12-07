// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESnowPlayState : uint8;
#ifdef SNOWROLLERV2_SnowRollerV2GameMode_generated_h
#error "SnowRollerV2GameMode.generated.h already included, missing '#pragma once' in SnowRollerV2GameMode.h"
#endif
#define SNOWROLLERV2_SnowRollerV2GameMode_generated_h

#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_SPARSE_DATA
#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESnowPlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnergyToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnergyToWin(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESnowPlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnergyToWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEnergyToWin(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnowRollerV2GameMode(); \
	friend struct Z_Construct_UClass_ASnowRollerV2GameMode_Statics; \
public: \
	DECLARE_CLASS(ASnowRollerV2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), SNOWROLLERV2_API) \
	DECLARE_SERIALIZER(ASnowRollerV2GameMode)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASnowRollerV2GameMode(); \
	friend struct Z_Construct_UClass_ASnowRollerV2GameMode_Statics; \
public: \
	DECLARE_CLASS(ASnowRollerV2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), SNOWROLLERV2_API) \
	DECLARE_SERIALIZER(ASnowRollerV2GameMode)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNOWROLLERV2_API ASnowRollerV2GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnowRollerV2GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNOWROLLERV2_API, ASnowRollerV2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowRollerV2GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNOWROLLERV2_API ASnowRollerV2GameMode(ASnowRollerV2GameMode&&); \
	SNOWROLLERV2_API ASnowRollerV2GameMode(const ASnowRollerV2GameMode&); \
public:


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNOWROLLERV2_API ASnowRollerV2GameMode(ASnowRollerV2GameMode&&); \
	SNOWROLLERV2_API ASnowRollerV2GameMode(const ASnowRollerV2GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNOWROLLERV2_API, ASnowRollerV2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowRollerV2GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnowRollerV2GameMode)


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpeedDecayRate() { return STRUCT_OFFSET(ASnowRollerV2GameMode, SpeedDecayRate); } \
	FORCEINLINE static uint32 __PPO__EnergyToWin() { return STRUCT_OFFSET(ASnowRollerV2GameMode, EnergyToWin); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ASnowRollerV2GameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ASnowRollerV2GameMode, CurrentWidget); }


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_21_PROLOG
#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_RPC_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_INCLASS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_INCLASS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNOWROLLERV2_API UClass* StaticClass<class ASnowRollerV2GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnowRollerV2_Source_SnowRollerV2_SnowRollerV2GameMode_h


#define FOREACH_ENUM_ESNOWPLAYSTATE(op) \
	op(ESnowPlayState::EPlaying) \
	op(ESnowPlayState::EGameOver) \
	op(ESnowPlayState::EWon) \
	op(ESnowPlayState::EUnknown) 

enum class ESnowPlayState : uint8;
template<> SNOWROLLERV2_API UEnum* StaticEnum<ESnowPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
