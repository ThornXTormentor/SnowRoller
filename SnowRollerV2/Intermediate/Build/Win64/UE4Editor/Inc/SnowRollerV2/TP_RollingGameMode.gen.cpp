// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowRollerV2/TP_Rolling/TP_RollingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_RollingGameMode() {}
// Cross Module References
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ATP_RollingGameMode_NoRegister();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ATP_RollingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SnowRollerV2();
// End Cross Module References
	void ATP_RollingGameMode::StaticRegisterNativesATP_RollingGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_RollingGameMode_NoRegister()
	{
		return ATP_RollingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_RollingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_RollingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowRollerV2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_RollingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_Rolling/TP_RollingGameMode.h" },
		{ "ModuleRelativePath", "TP_Rolling/TP_RollingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_RollingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_RollingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_RollingGameMode_Statics::ClassParams = {
		&ATP_RollingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP_RollingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_RollingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_RollingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_RollingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_RollingGameMode, 2709133280);
	template<> SNOWROLLERV2_API UClass* StaticClass<ATP_RollingGameMode>()
	{
		return ATP_RollingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_RollingGameMode(Z_Construct_UClass_ATP_RollingGameMode, &ATP_RollingGameMode::StaticClass, TEXT("/Script/SnowRollerV2"), TEXT("ATP_RollingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_RollingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
