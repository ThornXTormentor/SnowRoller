// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnowRollerV2/SnowRollerV2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnowRollerV2GameMode() {}
// Cross Module References
	SNOWROLLERV2_API UEnum* Z_Construct_UEnum_SnowRollerV2_ESnowPlayState();
	UPackage* Z_Construct_UPackage__Script_SnowRollerV2();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowRollerV2GameMode_NoRegister();
	SNOWROLLERV2_API UClass* Z_Construct_UClass_ASnowRollerV2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState();
	SNOWROLLERV2_API UFunction* Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* ESnowPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SnowRollerV2_ESnowPlayState, Z_Construct_UPackage__Script_SnowRollerV2(), TEXT("ESnowPlayState"));
		}
		return Singleton;
	}
	template<> SNOWROLLERV2_API UEnum* StaticEnum<ESnowPlayState>()
	{
		return ESnowPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESnowPlayState(ESnowPlayState_StaticEnum, TEXT("/Script/SnowRollerV2"), TEXT("ESnowPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SnowRollerV2_ESnowPlayState_Hash() { return 2374103816U; }
	UEnum* Z_Construct_UEnum_SnowRollerV2_ESnowPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SnowRollerV2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESnowPlayState"), 0, Get_Z_Construct_UEnum_SnowRollerV2_ESnowPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESnowPlayState::EPlaying", (int64)ESnowPlayState::EPlaying },
				{ "ESnowPlayState::EGameOver", (int64)ESnowPlayState::EGameOver },
				{ "ESnowPlayState::EWon", (int64)ESnowPlayState::EWon },
				{ "ESnowPlayState::EUnknown", (int64)ESnowPlayState::EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Enum to store current state of gameplay\n" },
				{ "EGameOver.Name", "ESnowPlayState::EGameOver" },
				{ "EPlaying.Name", "ESnowPlayState::EPlaying" },
				{ "EUnknown.Name", "ESnowPlayState::EUnknown" },
				{ "EWon.Name", "ESnowPlayState::EWon" },
				{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
				{ "ToolTip", "Enum to store current state of gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SnowRollerV2,
				nullptr,
				"ESnowPlayState",
				"ESnowPlayState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASnowRollerV2GameMode::StaticRegisterNativesASnowRollerV2GameMode()
	{
		UClass* Class = ASnowRollerV2GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ASnowRollerV2GameMode::execGetCurrentState },
			{ "GetEnergyToWin", &ASnowRollerV2GameMode::execGetEnergyToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics
	{
		struct SnowRollerV2GameMode_eventGetCurrentState_Parms
		{
			ESnowPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowRollerV2GameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_SnowRollerV2_ESnowPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Returns the current playing state\n" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Returns the current playing state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2GameMode, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SnowRollerV2GameMode_eventGetCurrentState_Parms), Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics
	{
		struct SnowRollerV2GameMode_eventGetEnergyToWin_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnowRollerV2GameMode_eventGetEnergyToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Energy" },
		{ "Comment", "//Returns energy needed to win for HUD\n" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Returns energy needed to win for HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnowRollerV2GameMode, nullptr, "GetEnergyToWin", nullptr, nullptr, sizeof(SnowRollerV2GameMode_eventGetEnergyToWin_Parms), Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASnowRollerV2GameMode_NoRegister()
	{
		return ASnowRollerV2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASnowRollerV2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedDecayRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnowRollerV2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnowRollerV2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnowRollerV2GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnowRollerV2GameMode_GetCurrentState, "GetCurrentState" }, // 197190935
		{ &Z_Construct_UFunction_ASnowRollerV2GameMode_GetEnergyToWin, "GetEnergyToWin" }, // 231149698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SnowRollerV2GameMode.h" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "//Instance of HUD Widget Class\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Instance of HUD Widget Class" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2GameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Widget class to use for HUD screen\n" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Widget class to use for HUD screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2GameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_EnergyToWin_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Energy needed to win game\n" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Energy needed to win game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_EnergyToWin = { "EnergyToWin", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2GameMode, EnergyToWin), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_EnergyToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_EnergyToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_SpeedDecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Energy" },
		{ "Comment", "//Rate at which the character loses energy\n" },
		{ "ModuleRelativePath", "SnowRollerV2GameMode.h" },
		{ "ToolTip", "Rate at which the character loses energy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_SpeedDecayRate = { "SpeedDecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnowRollerV2GameMode, SpeedDecayRate), METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_SpeedDecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_SpeedDecayRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnowRollerV2GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_EnergyToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnowRollerV2GameMode_Statics::NewProp_SpeedDecayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnowRollerV2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnowRollerV2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASnowRollerV2GameMode_Statics::ClassParams = {
		&ASnowRollerV2GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnowRollerV2GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnowRollerV2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnowRollerV2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASnowRollerV2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASnowRollerV2GameMode, 1273891094);
	template<> SNOWROLLERV2_API UClass* StaticClass<ASnowRollerV2GameMode>()
	{
		return ASnowRollerV2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASnowRollerV2GameMode(Z_Construct_UClass_ASnowRollerV2GameMode, &ASnowRollerV2GameMode::StaticClass, TEXT("/Script/SnowRollerV2"), TEXT("ASnowRollerV2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnowRollerV2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
