// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/AI/BTTaskNode_FindRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode_FindRandomLocation() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_UBTTaskNode_FindRandomLocation_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_UBTTaskNode_FindRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTTaskNode_FindRandomLocation::StaticRegisterNativesUBTTaskNode_FindRandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskNode_FindRandomLocation_NoRegister()
	{
		return UBTTaskNode_FindRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DestinationVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/BTTaskNode_FindRandomLocation.h" },
		{ "ModuleRelativePath", "AI/BTTaskNode_FindRandomLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_DestinationVector_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "AI/BTTaskNode_FindRandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_DestinationVector = { "DestinationVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTaskNode_FindRandomLocation, DestinationVector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_DestinationVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_DestinationVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "AI/BTTaskNode_FindRandomLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTaskNode_FindRandomLocation, Radius), METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_DestinationVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_FindRandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::ClassParams = {
		&UBTTaskNode_FindRandomLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskNode_FindRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTaskNode_FindRandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTaskNode_FindRandomLocation, 584991355);
	template<> POSTARCANA_API UClass* StaticClass<UBTTaskNode_FindRandomLocation>()
	{
		return UBTTaskNode_FindRandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskNode_FindRandomLocation(Z_Construct_UClass_UBTTaskNode_FindRandomLocation, &UBTTaskNode_FindRandomLocation::StaticClass, TEXT("/Script/PostArcana"), TEXT("UBTTaskNode_FindRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_FindRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
