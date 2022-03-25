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

#define PostArcana_Source_PostArcana_GameObject_h_21_SPARSE_DATA
#define PostArcana_Source_PostArcana_GameObject_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_GameObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PostArcana_Source_PostArcana_GameObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameObject(); \
	friend struct Z_Construct_UClass_AGameObject_Statics; \
public: \
	DECLARE_CLASS(AGameObject, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(AGameObject) \
	virtual UObject* _getUObject() const override { return const_cast<AGameObject*>(this); }


#define PostArcana_Source_PostArcana_GameObject_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAGameObject(); \
	friend struct Z_Construct_UClass_AGameObject_Statics; \
public: \
	DECLARE_CLASS(AGameObject, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(AGameObject) \
	virtual UObject* _getUObject() const override { return const_cast<AGameObject*>(this); }


#define PostArcana_Source_PostArcana_GameObject_h_21_STANDARD_CONSTRUCTORS \
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


#define PostArcana_Source_PostArcana_GameObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameObject(AGameObject&&); \
	NO_API AGameObject(const AGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameObject)


#define PostArcana_Source_PostArcana_GameObject_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AGameObject, Health); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(AGameObject, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__Mana() { return STRUCT_OFFSET(AGameObject, Mana); } \
	FORCEINLINE static uint32 __PPO__MaxMana() { return STRUCT_OFFSET(AGameObject, MaxMana); } \
	FORCEINLINE static uint32 __PPO__ManaRegen() { return STRUCT_OFFSET(AGameObject, ManaRegen); } \
	FORCEINLINE static uint32 __PPO__BaseMoveSpeed() { return STRUCT_OFFSET(AGameObject, BaseMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseSprintSpeed() { return STRUCT_OFFSET(AGameObject, BaseSprintSpeed); } \
	FORCEINLINE static uint32 __PPO__Defence() { return STRUCT_OFFSET(AGameObject, Defence); } \
	FORCEINLINE static uint32 __PPO__Endurance() { return STRUCT_OFFSET(AGameObject, Endurance); } \
	FORCEINLINE static uint32 __PPO__Intelligence() { return STRUCT_OFFSET(AGameObject, Intelligence); } \
	FORCEINLINE static uint32 __PPO__Will() { return STRUCT_OFFSET(AGameObject, Will); } \
	FORCEINLINE static uint32 __PPO__Agility() { return STRUCT_OFFSET(AGameObject, Agility); } \
	FORCEINLINE static uint32 __PPO__Toughness() { return STRUCT_OFFSET(AGameObject, Toughness); } \
	FORCEINLINE static uint32 __PPO__ELevelBonus() { return STRUCT_OFFSET(AGameObject, ELevelBonus); } \
	FORCEINLINE static uint32 __PPO__ILevelBonus() { return STRUCT_OFFSET(AGameObject, ILevelBonus); } \
	FORCEINLINE static uint32 __PPO__ALevelBonus() { return STRUCT_OFFSET(AGameObject, ALevelBonus); } \
	FORCEINLINE static uint32 __PPO__TLevelBonus() { return STRUCT_OFFSET(AGameObject, TLevelBonus); } \
	FORCEINLINE static uint32 __PPO__BaseMaxHealth() { return STRUCT_OFFSET(AGameObject, BaseMaxHealth); } \
	FORCEINLINE static uint32 __PPO__BaseMaxMana() { return STRUCT_OFFSET(AGameObject, BaseMaxMana); } \
	FORCEINLINE static uint32 __PPO__BaseMinMoveSpeed() { return STRUCT_OFFSET(AGameObject, BaseMinMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseMaxMoveSpeed() { return STRUCT_OFFSET(AGameObject, BaseMaxMoveSpeed); } \
	FORCEINLINE static uint32 __PPO__BaseDefence() { return STRUCT_OFFSET(AGameObject, BaseDefence); }


#define PostArcana_Source_PostArcana_GameObject_h_18_PROLOG
#define PostArcana_Source_PostArcana_GameObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_GameObject_h_21_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_GameObject_h_21_SPARSE_DATA \
	PostArcana_Source_PostArcana_GameObject_h_21_RPC_WRAPPERS \
	PostArcana_Source_PostArcana_GameObject_h_21_INCLASS \
	PostArcana_Source_PostArcana_GameObject_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostArcana_Source_PostArcana_GameObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_GameObject_h_21_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_GameObject_h_21_SPARSE_DATA \
	PostArcana_Source_PostArcana_GameObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_GameObject_h_21_INCLASS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_GameObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTARCANA_API UClass* StaticClass<class AGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostArcana_Source_PostArcana_GameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
