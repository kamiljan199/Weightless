// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef WEIGHTLESS_WeightlessProjectile_generated_h
#error "WeightlessProjectile.generated.h already included, missing '#pragma once' in WeightlessProjectile.h"
#endif
#define WEIGHTLESS_WeightlessProjectile_generated_h

#define Weightless_Source_Weightless_WeightlessProjectile_h_12_SPARSE_DATA
#define Weightless_Source_Weightless_WeightlessProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Weightless_Source_Weightless_WeightlessProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Weightless_Source_Weightless_WeightlessProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeightlessProjectile(); \
	friend struct Z_Construct_UClass_AWeightlessProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeightlessProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weightless"), NO_API) \
	DECLARE_SERIALIZER(AWeightlessProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Weightless_Source_Weightless_WeightlessProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWeightlessProjectile(); \
	friend struct Z_Construct_UClass_AWeightlessProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeightlessProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Weightless"), NO_API) \
	DECLARE_SERIALIZER(AWeightlessProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Weightless_Source_Weightless_WeightlessProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeightlessProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeightlessProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeightlessProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeightlessProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeightlessProjectile(AWeightlessProjectile&&); \
	NO_API AWeightlessProjectile(const AWeightlessProjectile&); \
public:


#define Weightless_Source_Weightless_WeightlessProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeightlessProjectile(AWeightlessProjectile&&); \
	NO_API AWeightlessProjectile(const AWeightlessProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeightlessProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeightlessProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeightlessProjectile)


#define Weightless_Source_Weightless_WeightlessProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AWeightlessProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AWeightlessProjectile, ProjectileMovement); }


#define Weightless_Source_Weightless_WeightlessProjectile_h_9_PROLOG
#define Weightless_Source_Weightless_WeightlessProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_SPARSE_DATA \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_RPC_WRAPPERS \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_INCLASS \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Weightless_Source_Weightless_WeightlessProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_SPARSE_DATA \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Weightless_Source_Weightless_WeightlessProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEIGHTLESS_API UClass* StaticClass<class AWeightlessProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Weightless_Source_Weightless_WeightlessProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
