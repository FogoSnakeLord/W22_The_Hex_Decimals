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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId();
	AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGameObject::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AGameObject::StaticRegisterNativesAGameObject()
	{
		UClass* Class = AGameObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", &AGameObject::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameObject_OnHit_Statics
	{
		struct GameObject_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameObject_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameObject_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameObject_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameObject_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameObject_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameObject_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameObject_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameObject_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//For taking damge \n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "For taking damge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameObject_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameObject, nullptr, "OnHit", nullptr, nullptr, sizeof(GameObject_eventOnHit_Parms), Z_Construct_UFunction_AGameObject_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameObject_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameObject_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameObject_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameObject_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameObject_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameObject_NoRegister()
	{
		return AGameObject::StaticClass();
	}
	struct Z_Construct_UClass_AGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Endurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Intelligence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Will_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Will;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Toughness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Toughness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELevelBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ELevelBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ILevelBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ILevelBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ALevelBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ALevelBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TLevelBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TLevelBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseMaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMinMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseMinMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMaxMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseMaxMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDefence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseDefence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenericTeamId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenericTeamId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PostArcana,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameObject_OnHit, "OnHit" }, // 1495770041
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
		{ "Category", "GameStats" },
		{ "Comment", "//You will find the stats under the GameStats catagory.\n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "You will find the stats under the GameStats catagory." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Health), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Mana), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, MaxMana), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen = { "ManaRegen", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, ManaRegen), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed = { "BaseMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed = { "BaseSprintSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData[] = {
		{ "Category", "GameStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Defence = { "Defence", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Defence), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Defence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Endurance_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "Comment", "//Player level up stats - can be used to make strong enemies as well\n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "Player level up stats - can be used to make strong enemies as well" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Endurance), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Endurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Endurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Intelligence), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Intelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Intelligence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Will_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Will = { "Will", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Will), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Will_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Will_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Agility_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Agility), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Agility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Agility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_Toughness_MetaData[] = {
		{ "Category", "PlayerStats" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_Toughness = { "Toughness", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, Toughness), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_Toughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_Toughness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_ELevelBonus_MetaData[] = {
		{ "Category", "LevelBonus" },
		{ "Comment", "//Level up bonus - how much the stat is altered on level up\n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "Level up bonus - how much the stat is altered on level up" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_ELevelBonus = { "ELevelBonus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, ELevelBonus), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_ELevelBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_ELevelBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_ILevelBonus_MetaData[] = {
		{ "Category", "LevelBonus" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_ILevelBonus = { "ILevelBonus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, ILevelBonus), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_ILevelBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_ILevelBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_ALevelBonus_MetaData[] = {
		{ "Category", "LevelBonus" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_ALevelBonus = { "ALevelBonus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, ALevelBonus), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_ALevelBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_ALevelBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_TLevelBonus_MetaData[] = {
		{ "Category", "LevelBonus" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_TLevelBonus = { "TLevelBonus", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, TLevelBonus), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_TLevelBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_TLevelBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxHealth_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "Comment", "//Base/Starting Stats\n" },
		{ "ModuleRelativePath", "GameObject.h" },
		{ "ToolTip", "Base/Starting Stats" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxHealth = { "BaseMaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMaxHealth), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMana_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMana = { "BaseMaxMana", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMaxMana), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMinMoveSpeed_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMinMoveSpeed = { "BaseMinMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMinMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMinMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMinMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMoveSpeed_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMoveSpeed = { "BaseMaxMoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseMaxMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_BaseDefence_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_BaseDefence = { "BaseDefence", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, BaseDefence), METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseDefence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_BaseDefence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObject_Statics::NewProp_GenericTeamId_MetaData[] = {
		{ "Category", "TEAM_ID" },
		{ "ModuleRelativePath", "GameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameObject_Statics::NewProp_GenericTeamId = { "GenericTeamId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameObject, GenericTeamId), Z_Construct_UScriptStruct_FGenericTeamId, METADATA_PARAMS(Z_Construct_UClass_AGameObject_Statics::NewProp_GenericTeamId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::NewProp_GenericTeamId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_ManaRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Defence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Endurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Intelligence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Will,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Agility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_Toughness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_ELevelBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_ILevelBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_ALevelBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_TLevelBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMinMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseMaxMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_BaseDefence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameObject_Statics::NewProp_GenericTeamId,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGameObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AGameObject, IGenericTeamAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameObject_Statics::ClassParams = {
		&AGameObject::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AGameObject, 2361984313);
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
