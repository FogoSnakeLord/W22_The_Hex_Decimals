// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/PostArcanaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaGameMode() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaGameMode_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
// End Cross Module References
	void APostArcanaGameMode::StaticRegisterNativesAPostArcanaGameMode()
	{
	}
	UClass* Z_Construct_UClass_APostArcanaGameMode_NoRegister()
	{
		return APostArcanaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APostArcanaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostArcanaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PostArcanaGameMode.h" },
		{ "ModuleRelativePath", "PostArcanaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostArcanaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostArcanaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostArcanaGameMode_Statics::ClassParams = {
		&APostArcanaGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APostArcanaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostArcanaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostArcanaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostArcanaGameMode, 1115839602);
	template<> POSTARCANA_API UClass* StaticClass<APostArcanaGameMode>()
	{
		return APostArcanaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostArcanaGameMode(Z_Construct_UClass_APostArcanaGameMode, &APostArcanaGameMode::StaticClass, TEXT("/Script/PostArcana"), TEXT("APostArcanaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostArcanaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
