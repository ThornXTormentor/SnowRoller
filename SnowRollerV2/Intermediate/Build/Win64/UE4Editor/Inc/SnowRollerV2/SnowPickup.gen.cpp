// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowRollerV2/SnowPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowPickup() {}
// Cross Module References
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowPickup_NoRegister();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowPickup();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_APickUpItem();
	UPackage* Z_Construct_UPackage__Script_SnowRollerV2();
// End Cross Module References
	void ASnowPickup::StaticRegisterNativesASnowPickup()
	{
	}
	UClass* Z_Construct_UClass_ASnowPickup_NoRegister()
	{
		return ASnowPickup::StaticClass();
	}
	struct Z_Construct_UClass_ASnowPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnowEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnowEnergy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnowPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickUpItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowRollerV2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SnowPickup.h" },
		{ "ModuleRelativePath", "SnowPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowPickup_Statics::NewProp_SnowEnergy_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Set the amount of energy the snow gives the character\n" },
		{ "ModuleRelativePath", "SnowPickup.h" },
		{ "ToolTip", "Set the amount of energy the snow gives the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowPickup_Statics::NewProp_SnowEnergy = { "SnowEnergy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowPickup, SnowEnergy), METADATA_PARAMS(Z_Construct_UClass_ASnowPickup_Statics::NewProp_SnowEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowPickup_Statics::NewProp_SnowEnergy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnowPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowPickup_Statics::NewProp_SnowEnergy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnowPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnowPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnowPickup_Statics::ClassParams = {
		&ASnowPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASnowPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnowPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnowPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnowPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnowPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnowPickup, 706610346);
	template<> SNOWROLLERV2_API UClass* StaticClass<ASnowPickup>()
	{
		return ASnowPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnowPickup(Z_Construct_UClass_ASnowPickup, &ASnowPickup::StaticClass, TEXT("/Script/SnowRollerV2"), TEXT("ASnowPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnowPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
