// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/EnemigoTerrestre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestre() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigoTerrestre_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigoTerrestre();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AEnemigoTerrestre::StaticRegisterNativesAEnemigoTerrestre()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoTerrestre_NoRegister()
	{
		return AEnemigoTerrestre::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoTerrestre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlturaSuelo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlturaSuelo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoTerrestre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoTerrestre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoTerrestre.h" },
		{ "ModuleRelativePath", "EnemigoTerrestre.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoTerrestre_Statics::NewProp_AlturaSuelo_MetaData[] = {
		{ "Category", "Movimiento Terrestre" },
		{ "Comment", "// Propiedad espec?fica para ajustar la altura respecto al suelo\n" },
		{ "ModuleRelativePath", "EnemigoTerrestre.h" },
		{ "ToolTip", "Propiedad espec?fica para ajustar la altura respecto al suelo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoTerrestre_Statics::NewProp_AlturaSuelo = { "AlturaSuelo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoTerrestre, AlturaSuelo), METADATA_PARAMS(Z_Construct_UClass_AEnemigoTerrestre_Statics::NewProp_AlturaSuelo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre_Statics::NewProp_AlturaSuelo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoTerrestre_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoTerrestre_Statics::NewProp_AlturaSuelo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoTerrestre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestre_Statics::ClassParams = {
		&AEnemigoTerrestre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoTerrestre_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoTerrestre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoTerrestre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoTerrestre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoTerrestre, 2631596043);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AEnemigoTerrestre>()
	{
		return AEnemigoTerrestre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoTerrestre(Z_Construct_UClass_AEnemigoTerrestre, &AEnemigoTerrestre::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AEnemigoTerrestre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
