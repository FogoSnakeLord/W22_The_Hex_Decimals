// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/AI/BTDecorator_CheckBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CheckBool() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_UBTDecorator_CheckBool_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_UBTDecorator_CheckBool();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_CheckBool::StaticRegisterNativesUBTDecorator_CheckBool()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_CheckBool_NoRegister()
	{
		return UBTDecorator_CheckBool::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_CheckBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolToCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoolToCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_CheckBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckBool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTDecorator_CheckBool.h" },
		{ "ModuleRelativePath", "AI/BTDecorator_CheckBool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_CheckBool_Statics::NewProp_BoolToCheck_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "AI/BTDecorator_CheckBool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CheckBool_Statics::NewProp_BoolToCheck = { "BoolToCheck", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_CheckBool, BoolToCheck), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckBool_Statics::NewProp_BoolToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckBool_Statics::NewProp_BoolToCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CheckBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CheckBool_Statics::NewProp_BoolToCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_CheckBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CheckBool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CheckBool_Statics::ClassParams = {
		&UBTDecorator_CheckBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_CheckBool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckBool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_CheckBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CheckBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_CheckBool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_CheckBool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_CheckBool, 3708723590);
	template<> POSTARCANA_API UClass* StaticClass<UBTDecorator_CheckBool>()
	{
		return UBTDecorator_CheckBool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_CheckBool(Z_Construct_UClass_UBTDecorator_CheckBool, &UBTDecorator_CheckBool::StaticClass, TEXT("/Script/PostArcana"), TEXT("UBTDecorator_CheckBool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CheckBool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
