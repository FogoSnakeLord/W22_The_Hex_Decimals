// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/Test/Test_HealBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_HealBox() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_ATest_HealBox_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_ATest_HealBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ATest_HealBox::StaticRegisterNativesATest_HealBox()
	{
	}
	UClass* Z_Construct_UClass_ATest_HealBox_NoRegister()
	{
		return ATest_HealBox::StaticClass();
	}
	struct Z_Construct_UClass_ATest_HealBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealAmnt_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HealAmnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_HealBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_HealBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test/Test_HealBox.h" },
		{ "ModuleRelativePath", "Test/Test_HealBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_HealBox_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Test/Test_HealBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_HealBox_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00200800000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_HealBox, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATest_HealBox_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_HealBox_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_HealBox_Statics::NewProp_HealAmnt_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "//Base amount - can be set in the editor for multiple tests at different values \n" },
		{ "ModuleRelativePath", "Test/Test_HealBox.h" },
		{ "ToolTip", "Base amount - can be set in the editor for multiple tests at different values" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATest_HealBox_Statics::NewProp_HealAmnt = { "HealAmnt", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATest_HealBox, HealAmnt), METADATA_PARAMS(Z_Construct_UClass_ATest_HealBox_Statics::NewProp_HealAmnt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_HealBox_Statics::NewProp_HealAmnt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATest_HealBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_HealBox_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_HealBox_Statics::NewProp_HealAmnt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_HealBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_HealBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_HealBox_Statics::ClassParams = {
		&ATest_HealBox::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATest_HealBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATest_HealBox_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATest_HealBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_HealBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_HealBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_HealBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_HealBox, 1669392922);
	template<> POSTARCANA_API UClass* StaticClass<ATest_HealBox>()
	{
		return ATest_HealBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_HealBox(Z_Construct_UClass_ATest_HealBox, &ATest_HealBox::StaticClass, TEXT("/Script/PostArcana"), TEXT("ATest_HealBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_HealBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
