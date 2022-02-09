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
#ifdef POSTARCANA_GameObject_generated_h
#error "GameObject.generated.h already included, missing '#pragma once' in GameObject.h"
#endif
#define POSTARCANA_GameObject_generated_h

#define PostArcana_Source_PostArcana_GameObject_h_12_SPARSE_DATA
#define PostArcana_Source_PostArcana_GameObject_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_GameObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_GameObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameObject(); \
	friend struct Z_Construct_UClass_AGameObject_Statics; \
public: \
	DECLARE_CLASS(AGameObject, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(AGameObject)


#define PostArcana_Source_PostArcana_GameObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGameObject(); \
	friend struct Z_Construct_UClass_AGameObject_Statics; \
public: \
	DECLARE_CLASS(AGameObject, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(AGameObject)


#define PostArcana_Source_PostArcana_GameObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameObject(AGameObject&&); \
	NO_API AGameObject(const AGameObject&); \
public:


#define PostArcana_Source_PostArcana_GameObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameObject(AGameObject&&); \
	NO_API AGameObject(const AGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameObject)


#define PostArcana_Source_PostArcana_GameObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AGameObject, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AGameObject, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Mana() { return STRUCT_OFFSET(AGameObject, Mana); } \
	FORCEINLINE static uint32 __PPO__MaxMana() { return STRUCT_OFFSET(AGameObject, MaxMana); } \
	FORCEINLINE static uint32 __PPO__ManaRegen() { return STRUCT_OFFSET(AGameObject, ManaRegen); } \
	FORCEINLINE static uint32 __PPO__BaseMoveSpeed() { return STRUCT_OFFSET(AGameObject, BaseMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseSprintSpeed() { return STRUCT_OFFSET(AGameObject, BaseSprintSpeed); } \
	FORCEINLINE static uint32 __PPO__Defence() { return STRUCT_OFFSET(AGameObject, Defence); }


#define PostArcana_Source_PostArcana_GameObject_h_9_PROLOG
#define PostArcana_Source_PostArcana_GameObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_GameObject_h_12_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_GameObject_h_12_SPARSE_DATA \
	PostArcana_Source_PostArcana_GameObject_h_12_RPC_WRAPPERS \
	PostArcana_Source_PostArcana_GameObject_h_12_INCLASS \
	PostArcana_Source_PostArcana_GameObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostArcana_Source_PostArcana_GameObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_GameObject_h_12_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_GameObject_h_12_SPARSE_DATA \
	PostArcana_Source_PostArcana_GameObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_GameObject_h_12_INCLASS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_GameObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTARCANA_API UClass* StaticClass<class AGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostArcana_Source_PostArcana_GameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
