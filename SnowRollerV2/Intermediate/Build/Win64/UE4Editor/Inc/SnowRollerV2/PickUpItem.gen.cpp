// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowRollerV2/PickUpItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpItem() {}
// Cross Module References
	SNOWROLLERV2_API UClass* Z_Construct_UClass_APickUpItem_NoRegister();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_APickUpItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnowRollerV2();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_APickUpItem_IsActive();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_APickUpItem_IsCollected();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_APickUpItem_SetActive();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_APickUpItem_IsCollected = FName(TEXT("IsCollected"));
	void APickUpItem::IsCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickUpItem_IsCollected),NULL);
	}
	void APickUpItem::StaticRegisterNativesAPickUpItem()
	{
		UClass* Class = APickUpItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &APickUpItem::execIsActive },
			{ "IsCollected", &APickUpItem::execIsCollected },
			{ "SetActive", &APickUpItem::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickUpItem_IsActive_Statics
	{
		struct PickUpItem_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickUpItem_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PickUpItem_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUpItem_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUpItem_eventIsActive_Parms), &Z_Construct_UFunction_APickUpItem_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpItem_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpItem_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpItem_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "PickupItem" },
		{ "Comment", "//Return whether or not pickup is active\n" },
		{ "ModuleRelativePath", "PickUpItem.h" },
		{ "ToolTip", "Return whether or not pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpItem_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpItem, nullptr, "IsActive", nullptr, nullptr, sizeof(PickUpItem_eventIsActive_Parms), Z_Construct_UFunction_APickUpItem_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpItem_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpItem_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpItem_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpItem_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpItem_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUpItem_IsCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpItem_IsCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "PickupItem" },
		{ "Comment", "//Function to call when pickup is collected\n" },
		{ "ModuleRelativePath", "PickUpItem.h" },
		{ "ToolTip", "Function to call when pickup is collected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpItem_IsCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpItem, nullptr, "IsCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpItem_IsCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpItem_IsCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpItem_IsCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpItem_IsCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickUpItem_SetActive_Statics
	{
		struct PickUpItem_eventSetActive_Parms
		{
			bool NewPickupState;
		};
		static void NewProp_NewPickupState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewPickupState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickUpItem_SetActive_Statics::NewProp_NewPickupState_SetBit(void* Obj)
	{
		((PickUpItem_eventSetActive_Parms*)Obj)->NewPickupState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickUpItem_SetActive_Statics::NewProp_NewPickupState = { "NewPickupState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickUpItem_eventSetActive_Parms), &Z_Construct_UFunction_APickUpItem_SetActive_Statics::NewProp_NewPickupState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickUpItem_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickUpItem_SetActive_Statics::NewProp_NewPickupState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickUpItem_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "PickupItem" },
		{ "Comment", "//Allows other classes to safely change whether or not pickup is active\n" },
		{ "ModuleRelativePath", "PickUpItem.h" },
		{ "ToolTip", "Allows other classes to safely change whether or not pickup is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickUpItem_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickUpItem, nullptr, "SetActive", nullptr, nullptr, sizeof(PickUpItem_eventSetActive_Parms), Z_Construct_UFunction_APickUpItem_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpItem_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickUpItem_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickUpItem_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickUpItem_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickUpItem_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickUpItem_NoRegister()
	{
		return APickUpItem::StaticClass();
	}
	struct Z_Construct_UClass_APickUpItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUpItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowRollerV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickUpItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickUpItem_IsActive, "IsActive" }, // 3823071715
		{ &Z_Construct_UFunction_APickUpItem_IsCollected, "IsCollected" }, // 147926666
		{ &Z_Construct_UFunction_APickUpItem_SetActive, "SetActive" }, // 3616321625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUpItem.h" },
		{ "ModuleRelativePath", "PickUpItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUpItem_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PickupItem" },
		{ "Comment", "/** Static mesh to represent the pickup in the level*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUpItem.h" },
		{ "ToolTip", "Static mesh to represent the pickup in the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUpItem_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUpItem, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUpItem_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::NewProp_PickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUpItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUpItem_Statics::NewProp_PickupMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUpItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUpItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUpItem_Statics::ClassParams = {
		&APickUpItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickUpItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUpItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUpItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUpItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUpItem, 3827253942);
	template<> SNOWROLLERV2_API UClass* StaticClass<APickUpItem>()
	{
		return APickUpItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUpItem(Z_Construct_UClass_APickUpItem, &APickUpItem::StaticClass, TEXT("/Script/SnowRollerV2"), TEXT("APickUpItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUpItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
