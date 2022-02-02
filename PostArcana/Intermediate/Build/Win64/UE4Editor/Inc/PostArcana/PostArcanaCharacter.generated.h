// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef POSTARCANA_PostArcanaCharacter_generated_h
#error "PostArcanaCharacter.generated.h already included, missing '#pragma once' in PostArcanaCharacter.h"
#endif
#define POSTARCANA_PostArcanaCharacter_generated_h

#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_SPARSE_DATA
#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPostArcanaCharacter(); \
	friend struct Z_Construct_UClass_APostArcanaCharacter_Statics; \
public: \
	DECLARE_CLASS(APostArcanaCharacter, AGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaCharacter)


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAPostArcanaCharacter(); \
	friend struct Z_Construct_UClass_APostArcanaCharacter_Statics; \
public: \
	DECLARE_CLASS(APostArcanaCharacter, AGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaCharacter)


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APostArcanaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostArcanaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaCharacter(APostArcanaCharacter&&); \
	NO_API APostArcanaCharacter(const APostArcanaCharacter&); \
public:


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaCharacter(APostArcanaCharacter&&); \
	NO_API APostArcanaCharacter(const APostArcanaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APostArcanaCharacter)


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(APostArcanaCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(APostArcanaCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(APostArcanaCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(APostArcanaCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(APostArcanaCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(APostArcanaCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(APostArcanaCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(APostArcanaCharacter, L_MotionController); }


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_18_PROLOG
#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_RPC_WRAPPERS \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_INCLASS \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_INCLASS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTARCANA_API UClass* StaticClass<class APostArcanaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostArcana_Source_PostArcana_PostArcanaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
