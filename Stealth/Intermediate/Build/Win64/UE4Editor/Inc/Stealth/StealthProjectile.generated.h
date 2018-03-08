// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STEALTH_StealthProjectile_generated_h
#error "StealthProjectile.generated.h already included, missing '#pragma once' in StealthProjectile.h"
#endif
#define STEALTH_StealthProjectile_generated_h

#define Stealth_Source_Stealth_StealthProjectile_h_12_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Stealth_Source_Stealth_StealthProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Stealth_Source_Stealth_StealthProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthProjectile(); \
	friend STEALTH_API class UClass* Z_Construct_UClass_AStealthProjectile(); \
public: \
	DECLARE_CLASS(AStealthProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Stealth_Source_Stealth_StealthProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStealthProjectile(); \
	friend STEALTH_API class UClass* Z_Construct_UClass_AStealthProjectile(); \
public: \
	DECLARE_CLASS(AStealthProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Stealth_Source_Stealth_StealthProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthProjectile(AStealthProjectile&&); \
	NO_API AStealthProjectile(const AStealthProjectile&); \
public:


#define Stealth_Source_Stealth_StealthProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthProjectile(AStealthProjectile&&); \
	NO_API AStealthProjectile(const AStealthProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthProjectile)


#define Stealth_Source_Stealth_StealthProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AStealthProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AStealthProjectile, ProjectileMovement); }


#define Stealth_Source_Stealth_StealthProjectile_h_9_PROLOG
#define Stealth_Source_Stealth_StealthProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthProjectile_h_12_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthProjectile_h_12_INCLASS \
	Stealth_Source_Stealth_StealthProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
