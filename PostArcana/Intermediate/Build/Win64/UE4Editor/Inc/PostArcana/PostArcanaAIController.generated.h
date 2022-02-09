// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef POSTARCANA_PostArcanaAIController_generated_h
#error "PostArcanaAIController.generated.h already included, missing '#pragma once' in PostArcanaAIController.h"
#endif
#define POSTARCANA_PostArcanaAIController_generated_h

#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_SPARSE_DATA
#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdate);


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdate);


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPostArcanaAIController(); \
	friend struct Z_Construct_UClass_APostArcanaAIController_Statics; \
public: \
	DECLARE_CLASS(APostArcanaAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaAIController)


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPostArcanaAIController(); \
	friend struct Z_Construct_UClass_APostArcanaAIController_Statics; \
public: \
	DECLARE_CLASS(APostArcanaAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PostArcana"), NO_API) \
	DECLARE_SERIALIZER(APostArcanaAIController)


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APostArcanaAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APostArcanaAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaAIController(APostArcanaAIController&&); \
	NO_API APostArcanaAIController(const APostArcanaAIController&); \
public:


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APostArcanaAIController(APostArcanaAIController&&); \
	NO_API APostArcanaAIController(const APostArcanaAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APostArcanaAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APostArcanaAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APostArcanaAIController)


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_PRIVATE_PROPERTY_OFFSET
#define PostArcana_Source_PostArcana_PostArcanaAIController_h_15_PROLOG
#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_RPC_WRAPPERS \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_INCLASS \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PostArcana_Source_PostArcana_PostArcanaAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_SPARSE_DATA \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_INCLASS_NO_PURE_DECLS \
	PostArcana_Source_PostArcana_PostArcanaAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSTARCANA_API UClass* StaticClass<class APostArcanaAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PostArcana_Source_PostArcana_PostArcanaAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
