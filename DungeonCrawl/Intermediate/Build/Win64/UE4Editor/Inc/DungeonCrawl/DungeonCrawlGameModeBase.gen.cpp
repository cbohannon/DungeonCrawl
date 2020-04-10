// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawl/DungeonCrawlGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCrawlGameModeBase() {}
// Cross Module References
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_ADungeonCrawlGameModeBase_NoRegister();
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_ADungeonCrawlGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawl();
// End Cross Module References
	void ADungeonCrawlGameModeBase::StaticRegisterNativesADungeonCrawlGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADungeonCrawlGameModeBase_NoRegister()
	{
		return ADungeonCrawlGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DungeonCrawlGameModeBase.h" },
		{ "ModuleRelativePath", "DungeonCrawlGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCrawlGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::ClassParams = {
		&ADungeonCrawlGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADungeonCrawlGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADungeonCrawlGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADungeonCrawlGameModeBase, 3079965309);
	template<> DUNGEONCRAWL_API UClass* StaticClass<ADungeonCrawlGameModeBase>()
	{
		return ADungeonCrawlGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADungeonCrawlGameModeBase(Z_Construct_UClass_ADungeonCrawlGameModeBase, &ADungeonCrawlGameModeBase::StaticClass, TEXT("/Script/DungeonCrawl"), TEXT("ADungeonCrawlGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCrawlGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
