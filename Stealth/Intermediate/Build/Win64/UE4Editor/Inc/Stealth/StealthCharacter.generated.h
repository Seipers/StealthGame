// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEALTH_StealthCharacter_generated_h
#error "StealthCharacter.generated.h already included, missing '#pragma once' in StealthCharacter.h"
#endif
#define STEALTH_StealthCharacter_generated_h

#define Stealth_Source_Stealth_StealthCharacter_h_14_RPC_WRAPPERS
#define Stealth_Source_Stealth_StealthCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Stealth_Source_Stealth_StealthCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend STEALTH_API class UClass* Z_Construct_UClass_AStealthCharacter(); \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Source_Stealth_StealthCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAStealthCharacter(); \
	friend STEALTH_API class UClass* Z_Construct_UClass_AStealthCharacter(); \
public: \
	DECLARE_CLASS(AStealthCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Stealth"), NO_API) \
	DECLARE_SERIALIZER(AStealthCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Stealth_Source_Stealth_StealthCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStealthCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStealthCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public:


#define Stealth_Source_Stealth_StealthCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStealthCharacter(AStealthCharacter&&); \
	NO_API AStealthCharacter(const AStealthCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStealthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStealthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStealthCharacter)


#define Stealth_Source_Stealth_StealthCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AStealthCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AStealthCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AStealthCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AStealthCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AStealthCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AStealthCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AStealthCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AStealthCharacter, L_MotionController); }


#define Stealth_Source_Stealth_StealthCharacter_h_11_PROLOG
#define Stealth_Source_Stealth_StealthCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_14_RPC_WRAPPERS \
	Stealth_Source_Stealth_StealthCharacter_h_14_INCLASS \
	Stealth_Source_Stealth_StealthCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stealth_Source_Stealth_StealthCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stealth_Source_Stealth_StealthCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Stealth_Source_Stealth_StealthCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Stealth_Source_Stealth_StealthCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stealth_Source_Stealth_StealthCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
