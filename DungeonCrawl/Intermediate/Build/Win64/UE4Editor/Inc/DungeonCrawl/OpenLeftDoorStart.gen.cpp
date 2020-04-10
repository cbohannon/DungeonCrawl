// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonCrawl/OpenLeftDoorStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenLeftDoorStart() {}
// Cross Module References
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_UOpenLeftDoorStart_NoRegister();
	DUNGEONCRAWL_API UClass* Z_Construct_UClass_UOpenLeftDoorStart();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DungeonCrawl();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UOpenLeftDoorStart::StaticRegisterNativesUOpenLeftDoorStart()
	{
	}
	UClass* Z_Construct_UClass_UOpenLeftDoorStart_NoRegister()
	{
		return UOpenLeftDoorStart::StaticClass();
	}
	struct Z_Construct_UClass_UOpenLeftDoorStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheActorThatOpens_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TheActorThatOpens;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenLeftDoorStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DungeonCrawl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenLeftDoorStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "OpenLeftDoorStart.h" },
		{ "ModuleRelativePath", "OpenLeftDoorStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TheActorThatOpens_MetaData[] = {
		{ "Category", "OpenLeftDoorStart" },
		{ "ModuleRelativePath", "OpenLeftDoorStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TheActorThatOpens = { "TheActorThatOpens", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenLeftDoorStart, TheActorThatOpens), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TheActorThatOpens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TheActorThatOpens_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "OpenLeftDoorStart" },
		{ "ModuleRelativePath", "OpenLeftDoorStart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenLeftDoorStart, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_PressurePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_PressurePlate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TargetYaw_MetaData[] = {
		{ "Category", "OpenLeftDoorStart" },
		{ "ModuleRelativePath", "OpenLeftDoorStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TargetYaw = { "TargetYaw", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenLeftDoorStart, TargetYaw), METADATA_PARAMS(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TargetYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenLeftDoorStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TheActorThatOpens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_PressurePlate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenLeftDoorStart_Statics::NewProp_TargetYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenLeftDoorStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenLeftDoorStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOpenLeftDoorStart_Statics::ClassParams = {
		&UOpenLeftDoorStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenLeftDoorStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenLeftDoorStart_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenLeftDoorStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenLeftDoorStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenLeftDoorStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOpenLeftDoorStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOpenLeftDoorStart, 1881722360);
	template<> DUNGEONCRAWL_API UClass* StaticClass<UOpenLeftDoorStart>()
	{
		return UOpenLeftDoorStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOpenLeftDoorStart(Z_Construct_UClass_UOpenLeftDoorStart, &UOpenLeftDoorStart::StaticClass, TEXT("/Script/DungeonCrawl"), TEXT("UOpenLeftDoorStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenLeftDoorStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
