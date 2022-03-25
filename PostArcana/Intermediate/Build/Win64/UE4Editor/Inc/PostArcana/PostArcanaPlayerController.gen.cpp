// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/Player/PostArcanaPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaPlayerController() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaPlayerController_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_APostArcanaPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	POSTARCANA_API UClass* Z_Construct_UClass_UPostArcanaMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void APostArcanaPlayerController::StaticRegisterNativesAPostArcanaPlayerController()
	{
	}
	UClass* Z_Construct_UClass_APostArcanaPlayerController_NoRegister()
	{
		return APostArcanaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APostArcanaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MenuBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostArcanaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/PostArcanaPlayerController.h" },
		{ "ModuleRelativePath", "Player/PostArcanaPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PostArcanaPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaPlayerController, MenuWidget), Z_Construct_UClass_UPostArcanaMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuBP_MetaData[] = {
		{ "Category", "PostArcanaPlayerController" },
		{ "ModuleRelativePath", "Player/PostArcanaPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuBP = { "MenuBP", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APostArcanaPlayerController, MenuBP), Z_Construct_UClass_UPostArcanaMenu_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostArcanaPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostArcanaPlayerController_Statics::NewProp_MenuBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostArcanaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostArcanaPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostArcanaPlayerController_Statics::ClassParams = {
		&APostArcanaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APostArcanaPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APostArcanaPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APostArcanaPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostArcanaPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostArcanaPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostArcanaPlayerController, 2815702465);
	template<> POSTARCANA_API UClass* StaticClass<APostArcanaPlayerController>()
	{
		return APostArcanaPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostArcanaPlayerController(Z_Construct_UClass_APostArcanaPlayerController, &APostArcanaPlayerController::StaticClass, TEXT("/Script/PostArcana"), TEXT("APostArcanaPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostArcanaPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
