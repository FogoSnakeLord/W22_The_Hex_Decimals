// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/AI/BTService_UpdateChasing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateChasing() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_UBTService_UpdateChasing_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_UBTService_UpdateChasing();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UBTService_UpdateChasing::StaticRegisterNativesUBTService_UpdateChasing()
	{
	}
	UClass* Z_Construct_UClass_UBTService_UpdateChasing_NoRegister()
	{
		return UBTService_UpdateChasing::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdateChasing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanSeePlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CanSeePlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastKnownPositionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastKnownPositionKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdateChasing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateChasing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/BTService_UpdateChasing.h" },
		{ "ModuleRelativePath", "AI/BTService_UpdateChasing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_CanSeePlayerKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "//Blackboard Keys\n" },
		{ "ModuleRelativePath", "AI/BTService_UpdateChasing.h" },
		{ "ToolTip", "Blackboard Keys" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_CanSeePlayerKey = { "CanSeePlayerKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_UpdateChasing, CanSeePlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_CanSeePlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_CanSeePlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "AI/BTService_UpdateChasing.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerKey = { "PlayerKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_UpdateChasing, PlayerKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_LastKnownPositionKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "AI/BTService_UpdateChasing.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_LastKnownPositionKey = { "LastKnownPositionKey", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_UpdateChasing, LastKnownPositionKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_LastKnownPositionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_LastKnownPositionKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerClass_MetaData[] = {
		{ "Category", "PlayerClass" },
		{ "ModuleRelativePath", "AI/BTService_UpdateChasing.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_UpdateChasing, PlayerClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateChasing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_CanSeePlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_LastKnownPositionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateChasing_Statics::NewProp_PlayerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdateChasing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateChasing>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateChasing_Statics::ClassParams = {
		&UBTService_UpdateChasing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_UpdateChasing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_UpdateChasing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateChasing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_UpdateChasing()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_UpdateChasing_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_UpdateChasing, 1625661940);
	template<> POSTARCANA_API UClass* StaticClass<UBTService_UpdateChasing>()
	{
		return UBTService_UpdateChasing::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_UpdateChasing(Z_Construct_UClass_UBTService_UpdateChasing, &UBTService_UpdateChasing::StaticClass, TEXT("/Script/PostArcana"), TEXT("UBTService_UpdateChasing"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateChasing);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
