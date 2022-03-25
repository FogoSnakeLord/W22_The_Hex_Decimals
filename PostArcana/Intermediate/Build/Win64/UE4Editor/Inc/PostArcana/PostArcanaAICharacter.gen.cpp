// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/AI/PostArcanaAICharacter.h"
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
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionStimuliSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionStimuliSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
		{ "IncludePath", "AI/PostArcanaAICharacter.h" },
		{ "ModuleRelativePath", "AI/PostArcanaAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData[] = {
		{ "Category", "Perception" },
		{ "Comment", "//Needs this to see\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/PostArcanaAICharacter.h" },
		{ "ToolTip", "Needs this to see" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource = { "AIPerceptionStimuliSource", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, AIPerceptionStimuliSource), Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "GameStats" },
		{ "Comment", "//To determine damage dealt to player\n" },
		{ "ModuleRelativePath", "AI/PostArcanaAICharacter.h" },
		{ "ToolTip", "To determine damage dealt to player" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaAICharacter, Damage), METADATA_PARAMS(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostArcanaAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_AIPerceptionStimuliSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaAICharacter_Statics::NewProp_Damage,
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaAICharacter_Statics::PropPointers),
		0,
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
	IMPLEMENT_CLASS(APostArcanaAICharacter, 760747686);
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
