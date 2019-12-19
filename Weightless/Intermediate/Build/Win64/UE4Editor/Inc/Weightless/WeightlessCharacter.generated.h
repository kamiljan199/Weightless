// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WEIGHTLESS_WeightlessCharacter_generated_h
#error "WeightlessCharacter.generated.h already included, missing '#pragma once' in WeightlessCharacter.h"
#endif
#define WEIGHTLESS_WeightlessCharacter_generated_h

#define Weightless_Source_Weightless_WeightlessCharacter_h_14_SPARSE_DATA
#define Weightless_Source_Weightless_WeightlessCharacter_h_14_RPC_WRAPPERS
#define Weightless_Source_Weightless_WeightlessCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Weightless_Source_Weightless_WeightlessCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeightlessCharacter(); \
	friend struct Z_Construct_UClass_AWeightlessCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeightlessCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weightless"), NO_API) \
	DECLARE_SERIALIZER(AWeightlessCharacter)


#define Weightless_Source_Weightless_WeightlessCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeightlessCharacter(); \
	friend struct Z_Construct_UClass_AWeightlessCharacter_Statics; \
public: \
	DECLARE_CLASS(AWeightlessCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weightless"), NO_API) \
	DECLARE_SERIALIZER(AWeightlessCharacter)


#define Weightless_Source_Weightless_WeightlessCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeightlessCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeightlessCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeightlessCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeightlessCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeightlessCharacter(AWeightlessCharacter&&); \
	NO_API AWeightlessCharacter(const AWeightlessCharacter&); \
public:


#define Weightless_Source_Weightless_WeightlessCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeightlessCharacter(AWeightlessCharacter&&); \
	NO_API AWeightlessCharacter(const AWeightlessCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeightlessCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeightlessCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeightlessCharacter)


#define Weightless_Source_Weightless_WeightlessCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AWeightlessCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AWeightlessCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AWeightlessCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AWeightlessCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AWeightlessCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AWeightlessCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AWeightlessCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AWeightlessCharacter, L_MotionController); }


#define Weightless_Source_Weightless_WeightlessCharacter_h_11_PROLOG
#define Weightless_Source_Weightless_WeightlessCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_SPARSE_DATA \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_RPC_WRAPPERS \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_INCLASS \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weightless_Source_Weightless_WeightlessCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_SPARSE_DATA \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Weightless_Source_Weightless_WeightlessCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEIGHTLESS_API UClass* StaticClass<class AWeightlessCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weightless_Source_Weightless_WeightlessCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
