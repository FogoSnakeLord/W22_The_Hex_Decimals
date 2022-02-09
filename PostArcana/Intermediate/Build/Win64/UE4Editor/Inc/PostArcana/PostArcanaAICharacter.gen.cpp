// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/PostArcanaAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaAICharacter() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaAICharacter_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaAICharacter();
	POSTARCANA_API UClass* Z_Construct_UClass_AGameObject();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	void APostArcanaAICharacter::StaticRegisterNativesAPostArcanaAICharacter()
	{
	}
	UClass* Z_Construct_UClass_APostArcanaAICharacter_NoRegister()
	{
		return APostArcanaAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_APostArcanaAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericTeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericTeamId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimuliSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionStimuliSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostArcanaAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PostArcanaAICharacter.h" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_GenericTeamId_MetaData[] = {
		{ "Category", "TEAM_ID" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_GenericTeamId = { "GenericTeamId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, GenericTeamId), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_GenericTeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_GenericTeamId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData[] = {
		{ "Category", "Perception" },
		{ "Comment", "// 0 = Stagnant, 1 = chasing character\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PostArcanaAICharacter.h" },
		{ "ToolTip", "0 = Stagnant, 1 = chasing character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource = { "AIPerceptionStimuliSource", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, AIPerceptionStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostArcanaAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_GenericTeamId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APostArcanaAICharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(APostArcanaAICharacter, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostArcanaAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostArcanaAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostArcanaAICharacter_Statics::ClassParams = {
		&APostArcanaAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APostArcanaAICharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostArcanaAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostArcanaAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostArcanaAICharacter, 1061216890);
	template<> POSTARCANA_API UClass* StaticClass<APostArcanaAICharacter>()
	{
		return APostArcanaAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostArcanaAICharacter(Z_Construct_UClass_APostArcanaAICharacter, &APostArcanaAICharacter::StaticClass, TEXT("/Script/PostArcana"), TEXT("APostArcanaAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostArcanaAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
