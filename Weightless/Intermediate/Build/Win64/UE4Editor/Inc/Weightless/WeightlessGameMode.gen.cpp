// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weightless/WeightlessGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightlessGameMode() {}
// Cross Module References
	WEIGHTLESS_API UClass* Z_Construct_UClass_AWeightlessGameMode_NoRegister();
	WEIGHTLESS_API UClass* Z_Construct_UClass_AWeightlessGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Weightless();
// End Cross Module References
	void AWeightlessGameMode::StaticRegisterNativesAWeightlessGameMode()
	{
	}
	UClass* Z_Construct_UClass_AWeightlessGameMode_NoRegister()
	{
		return AWeightlessGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWeightlessGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeightlessGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Weightless,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeightlessGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WeightlessGameMode.h" },
		{ "ModuleRelativePath", "WeightlessGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeightlessGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeightlessGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeightlessGameMode_Statics::ClassParams = {
		&AWeightlessGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWeightlessGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeightlessGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeightlessGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeightlessGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeightlessGameMode, 1373856867);
	template<> WEIGHTLESS_API UClass* StaticClass<AWeightlessGameMode>()
	{
		return AWeightlessGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeightlessGameMode(Z_Construct_UClass_AWeightlessGameMode, &AWeightlessGameMode::StaticClass, TEXT("/Script/Weightless"), TEXT("AWeightlessGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeightlessGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
