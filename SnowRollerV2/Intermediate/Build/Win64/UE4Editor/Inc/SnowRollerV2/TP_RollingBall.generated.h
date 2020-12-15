// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNOWROLLERV2_TP_RollingBall_generated_h
#error "TP_RollingBall.generated.h already included, missing '#pragma once' in TP_RollingBall.h"
#endif
#define SNOWROLLERV2_TP_RollingBall_generated_h

#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_SPARSE_DATA
#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_RPC_WRAPPERS \
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


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_RollingBall(); \
	friend struct Z_Construct_UClass_ATP_RollingBall_Statics; \
public: \
	DECLARE_CLASS(ATP_RollingBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(ATP_RollingBall)


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATP_RollingBall(); \
	friend struct Z_Construct_UClass_ATP_RollingBall_Statics; \
public: \
	DECLARE_CLASS(ATP_RollingBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(ATP_RollingBall)


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP_RollingBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP_RollingBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_RollingBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_RollingBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_RollingBall(ATP_RollingBall&&); \
	NO_API ATP_RollingBall(const ATP_RollingBall&); \
public:


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_RollingBall(ATP_RollingBall&&); \
	NO_API ATP_RollingBall(const ATP_RollingBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_RollingBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_RollingBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_RollingBall)


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(ATP_RollingBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATP_RollingBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATP_RollingBall, Camera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ATP_RollingBall, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialEnergy() { return STRUCT_OFFSET(ATP_RollingBall, InitialEnergy); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ATP_RollingBall, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ATP_RollingBall, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__CharacterEnergy() { return STRUCT_OFFSET(ATP_RollingBall, CharacterEnergy); }


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_9_PROLOG
#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_RPC_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_INCLASS \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_INCLASS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNOWROLLERV2_API UClass* StaticClass<class ATP_RollingBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnowRollerV2_Source_SnowRollerV2_TP_Rolling_TP_RollingBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
