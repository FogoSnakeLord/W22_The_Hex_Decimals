// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/UI/PostArcanaMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostArcanaMenu() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_UPostArcanaMenu_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_UPostArcanaMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
// End Cross Module References
	void UPostArcanaMenu::StaticRegisterNativesUPostArcanaMenu()
	{
	}
	UClass* Z_Construct_UClass_UPostArcanaMenu_NoRegister()
	{
		return UPostArcanaMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPostArcanaMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostArcanaMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostArcanaMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PostArcanaMenu.h" },
		{ "ModuleRelativePath", "UI/PostArcanaMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostArcanaMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostArcanaMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPostArcanaMenu_Statics::ClassParams = {
		&UPostArcanaMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostArcanaMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostArcanaMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostArcanaMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPostArcanaMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostArcanaMenu, 3959051541);
	template<> POSTARCANA_API UClass* StaticClass<UPostArcanaMenu>()
	{
		return UPostArcanaMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostArcanaMenu(Z_Construct_UClass_UPostArcanaMenu, &UPostArcanaMenu::StaticClass, TEXT("/Script/PostArcana"), TEXT("UPostArcanaMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostArcanaMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
