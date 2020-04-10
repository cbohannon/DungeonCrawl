// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawl/OpenRightDoorStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenRightDoorStart() {}
// Cross Module References
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_UOpenRightDoorStart_NoRegister();
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_UOpenRightDoorStart();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawl();
// End Cross Module References
	void UOpenRightDoorStart::StaticRegisterNativesUOpenRightDoorStart()
	{
	}
	UClass* Z_Construct_UClass_UOpenRightDoorStart_NoRegister()
	{
		return UOpenRightDoorStart::StaticClass();
	}
	struct Z_Construct_UClass_UOpenRightDoorStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenRightDoorStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenRightDoorStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenRightDoorStart.h" },
		{ "ModuleRelativePath", "OpenRightDoorStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenRightDoorStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenRightDoorStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenRightDoorStart_Statics::ClassParams = {
		&UOpenRightDoorStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenRightDoorStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenRightDoorStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenRightDoorStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenRightDoorStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenRightDoorStart, 1347602987);
	template<> DUNGEONCRAWL_API UClass* StaticClass<UOpenRightDoorStart>()
	{
		return UOpenRightDoorStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenRightDoorStart(Z_Construct_UClass_UOpenRightDoorStart, &UOpenRightDoorStart::StaticClass, TEXT("/Script/DungeonCrawl"), TEXT("UOpenRightDoorStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenRightDoorStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
