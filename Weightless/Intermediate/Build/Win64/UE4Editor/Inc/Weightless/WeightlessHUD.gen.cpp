// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weightless/WeightlessHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightlessHUD() {}
// Cross Module References
	WEIGHTLESS_API UClass* Z_Construct_UClass_AWeightlessHUD_NoRegister();
	WEIGHTLESS_API UClass* Z_Construct_UClass_AWeightlessHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Weightless();
// End Cross Module References
	void AWeightlessHUD::StaticRegisterNativesAWeightlessHUD()
	{
	}
	UClass* Z_Construct_UClass_AWeightlessHUD_NoRegister()
	{
		return AWeightlessHUD::StaticClass();
	}
	struct Z_Construct_UClass_AWeightlessHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeightlessHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Weightless,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeightlessHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "WeightlessHUD.h" },
		{ "ModuleRelativePath", "WeightlessHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeightlessHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeightlessHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeightlessHUD_Statics::ClassParams = {
		&AWeightlessHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AWeightlessHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeightlessHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeightlessHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeightlessHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeightlessHUD, 1034398292);
	template<> WEIGHTLESS_API UClass* StaticClass<AWeightlessHUD>()
	{
		return AWeightlessHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeightlessHUD(Z_Construct_UClass_AWeightlessHUD, &AWeightlessHUD::StaticClass, TEXT("/Script/Weightless"), TEXT("AWeightlessHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeightlessHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
