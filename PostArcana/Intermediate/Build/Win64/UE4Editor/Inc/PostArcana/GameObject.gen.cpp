// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PostArcana/GameObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameObject() {}
// Cross Module References
	POSTARCANA_API UClass* Z_Construct_UClass_AGameObject_NoRegister();
	POSTARCANA_API UClass* Z_Construct_UClass_AGameObject();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PostArcana();
// End Cross Module References
	void AGameObject::StaticRegisterNativesAGameObject()
	{
	}
	UClass* Z_Construct_UClass_AGameObject_NoRegister()
	{
		return AGameObject::StaticClass();
	}
	struct Z_Construct_UClass_AGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ManaRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Defence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameObject.h" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "//Stats - by making these a uproperty with these parameters you can change the stats of a gameobject in the editor. \n//You will find the stats under the stat catagory. If you need more info please let me know and i can show you where.\n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "Stats - by making these a uproperty with these parameters you can change the stats of a gameobject in the editor.\nYou will find the stats under the stat catagory. If you need more info please let me know and i can show you where." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Health), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Mana), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, MaxMana), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen = { "ManaRegen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, ManaRegen), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed = { "BaseMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed = { "BaseSprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Defence), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Defence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameObject_Statics::ClassParams = {
		&AGameObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameObject, 1748021068);
	template<> POSTARCANA_API UClass* StaticClass<AGameObject>()
	{
		return AGameObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameObject(Z_Construct_UClass_AGameObject, &AGameObject::StaticClass, TEXT("/Script/PostArcana"), TEXT("AGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
