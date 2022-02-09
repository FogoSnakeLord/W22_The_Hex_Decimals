// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/PostArcanaAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaAIController() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaAIController_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APostArcanaAIController::execOnPerceptionUpdated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APostArcanaAIController::execOnTargetPerceptionUpdate)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetPerceptionUpdate(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void APostArcanaAIController::StaticRegisterNativesAPostArcanaAIController()
	{
		UClass* Class = APostArcanaAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPerceptionUpdated", &APostArcanaAIController::execOnPerceptionUpdated },
			{ "OnTargetPerceptionUpdate", &APostArcanaAIController::execOnTargetPerceptionUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics
	{
		struct PostArcanaAIController_eventOnPerceptionUpdated_Parms
		{
			TArray<AActor*> UpdatedActors;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostArcanaAIController_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PostArcanaAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostArcanaAIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(PostArcanaAIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics
	{
		struct PostArcanaAIController_eventOnTargetPerceptionUpdate_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostArcanaAIController_eventOnTargetPerceptionUpdate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PostArcanaAIController_eventOnTargetPerceptionUpdate_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PostArcanaAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APostArcanaAIController, nullptr, "OnTargetPerceptionUpdate", nullptr, nullptr, sizeof(PostArcanaAIController_eventOnTargetPerceptionUpdate_Parms), Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APostArcanaAIController_NoRegister()
	{
		return APostArcanaAIController::StaticClass();
	}
	struct Z_Construct_UClass_APostArcanaAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostArcanaAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APostArcanaAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APostArcanaAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 401710046
		{ &Z_Construct_UFunction_APostArcanaAIController_OnTargetPerceptionUpdate, "OnTargetPerceptionUpdate" }, // 1550061842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PostArcanaAIController.h" },
		{ "ModuleRelativePath", "PostArcanaAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "PostArcanaAIController" },
		{ "ModuleRelativePath", "PostArcanaAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaAIController_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAIController_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostArcanaAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAIController_Statics::NewProp_BehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostArcanaAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostArcanaAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostArcanaAIController_Statics::ClassParams = {
		&APostArcanaAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APostArcanaAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostArcanaAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostArcanaAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostArcanaAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostArcanaAIController, 1898950886);
	template<> POSTARCANA_API UClass* StaticClass<APostArcanaAIController>()
	{
		return APostArcanaAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostArcanaAIController(Z_Construct_UClass_APostArcanaAIController, &APostArcanaAIController::StaticClass, TEXT("/Script/PostArcana"), TEXT("APostArcanaAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostArcanaAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
