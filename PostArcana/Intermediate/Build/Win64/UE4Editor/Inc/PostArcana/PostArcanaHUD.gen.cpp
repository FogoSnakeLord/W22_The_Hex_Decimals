// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/UI/PostArcanaHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaHUD() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaHUD_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void APostArcanaHUD::StaticRegisterNativesAPostArcanaHUD()
	{
	}
	UClass* Z_Construct_UClass_APostArcanaHUD_NoRegister()
	{
		return APostArcanaHUD::StaticClass();
	}
	struct Z_Construct_UClass_APostArcanaHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGuiClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerGuiClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGui_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerGui;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostArcanaHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/PostArcanaHUD.h" },
		{ "ModuleRelativePath", "UI/PostArcanaHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGuiClass_MetaData[] = {
		{ "Category", "Game Hud" },
		{ "ModuleRelativePath", "UI/PostArcanaHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGuiClass = { "PlayerGuiClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaHUD, PlayerGuiClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGuiClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGuiClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGui_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/PostArcanaHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGui = { "PlayerGui", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaHUD, PlayerGui), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGui_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGui_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostArcanaHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGuiClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaHUD_Statics::NewProp_PlayerGui,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostArcanaHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostArcanaHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostArcanaHUD_Statics::ClassParams = {
		&APostArcanaHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APostArcanaHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APostArcanaHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostArcanaHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostArcanaHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostArcanaHUD, 1995593893);
	template<> POSTARCANA_API UClass* StaticClass<APostArcanaHUD>()
	{
		return APostArcanaHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostArcanaHUD(Z_Construct_UClass_APostArcanaHUD, &APostArcanaHUD::StaticClass, TEXT("/Script/PostArcana"), TEXT("APostArcanaHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostArcanaHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
