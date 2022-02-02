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
struct FVector;
struct FHitResult;
#ifdef POSTARCANA_PostArcanaProjectile_generated_h
#error "PostArcanaProjectile.generated.h already included, missing '#pragma once' in PostArcanaProjectile.h"
#endif
#define POSTARCANA_PostArcanaProjectile_generated_h

#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_SPARSE_DATA
#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPostArcanaProjectile(); \
	friend struct Z_Construct_UClass_APostArcanaProjectile_Statics; \
public: \
	DECLARE_CLASS(APostArcanaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPostArcanaProjectile(); \
	friend struct Z_Construct_UClass_APostArcanaProjectile_Statics; \
public: \
	DECLARE_CLASS(APostArcanaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APostArcanaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostArcanaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaProjectile(APostArcanaProjectile&&); \
	NO_API APostArcanaProjectile(const APostArcanaProjectile&); \
public:


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaProjectile(APostArcanaProjectile&&); \
	NO_API APostArcanaProjectile(const APostArcanaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APostArcanaProjectile)


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APostArcanaProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APostArcanaProjectile, ProjectileMovement); }


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_12_PROLOG
#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_RPC_WRAPPERS \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_INCLASS \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTARCANA_API UClass* StaticClass<class APostArcanaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostArcana_Source_PostArcana_PostArcanaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
