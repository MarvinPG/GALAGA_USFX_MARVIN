// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GALAGA_USFX_MARVIN/FactoryNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactoryNaves() {}
// Cross Module References
	GALAGA_USFX_MARVIN_API UClass* Z_Construct_UClass_AFactoryNaves_NoRegister();
	GALAGA_USFX_MARVIN_API UClass* Z_Construct_UClass_AFactoryNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GALAGA_USFX_MARVIN();
// End Cross Module References
	void AFactoryNaves::StaticRegisterNativesAFactoryNaves()
	{
	}
	UClass* Z_Construct_UClass_AFactoryNaves_NoRegister()
	{
		return AFactoryNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFactoryNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFactoryNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GALAGA_USFX_MARVIN,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFactoryNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FactoryNaves.h" },
		{ "ModuleRelativePath", "FactoryNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFactoryNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFactoryNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFactoryNaves_Statics::ClassParams = {
		&AFactoryNaves::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFactoryNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFactoryNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFactoryNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFactoryNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFactoryNaves, 3315785683);
	template<> GALAGA_USFX_MARVIN_API UClass* StaticClass<AFactoryNaves>()
	{
		return AFactoryNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFactoryNaves(Z_Construct_UClass_AFactoryNaves, &AFactoryNaves::StaticClass, TEXT("/Script/GALAGA_USFX_MARVIN"), TEXT("AFactoryNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFactoryNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
