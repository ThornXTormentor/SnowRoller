// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNOWROLLERV2_PickUpItem_generated_h
#error "PickUpItem.generated.h already included, missing '#pragma once' in PickUpItem.h"
#endif
#define SNOWROLLERV2_PickUpItem_generated_h

#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_SPARSE_DATA
#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_RPC_WRAPPERS \
	virtual void IsCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execIsCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IsCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_EVENT_PARMS
#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_CALLBACK_WRAPPERS
#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpItem(); \
	friend struct Z_Construct_UClass_APickUpItem_Statics; \
public: \
	DECLARE_CLASS(APickUpItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(APickUpItem)


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpItem(); \
	friend struct Z_Construct_UClass_APickUpItem_Statics; \
public: \
	DECLARE_CLASS(APickUpItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SnowRollerV2"), NO_API) \
	DECLARE_SERIALIZER(APickUpItem)


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpItem(APickUpItem&&); \
	NO_API APickUpItem(const APickUpItem&); \
public:


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpItem(APickUpItem&&); \
	NO_API APickUpItem(const APickUpItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpItem)


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(APickUpItem, PickupMesh); }


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_9_PROLOG \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_EVENT_PARMS


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_RPC_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_CALLBACK_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_INCLASS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_PRIVATE_PROPERTY_OFFSET \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_SPARSE_DATA \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_CALLBACK_WRAPPERS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_INCLASS_NO_PURE_DECLS \
	SnowRollerV2_Source_SnowRollerV2_PickUpItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNOWROLLERV2_API UClass* StaticClass<class APickUpItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnowRollerV2_Source_SnowRollerV2_PickUpItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
