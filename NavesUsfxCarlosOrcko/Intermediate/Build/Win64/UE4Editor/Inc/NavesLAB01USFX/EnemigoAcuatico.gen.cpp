// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/EnemigoAcuatico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAcuatico() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigoAcuatico();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AEnemigoAcuatico::StaticRegisterNativesAEnemigoAcuatico()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAcuatico_NoRegister()
	{
		return AEnemigoAcuatico::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAcuatico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NivelAgua_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NivelAgua;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmplitudNado_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmplitudNado;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrecuenciaNado_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrecuenciaNado;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAcuatico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoAcuatico.h" },
		{ "ModuleRelativePath", "EnemigoAcuatico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_NivelAgua_MetaData[] = {
		{ "Category", "Movimiento Acuatico" },
		{ "Comment", "// Nivel del mar o superficie del agua\n" },
		{ "ModuleRelativePath", "EnemigoAcuatico.h" },
		{ "ToolTip", "Nivel del mar o superficie del agua" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_NivelAgua = { "NivelAgua", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAcuatico, NivelAgua), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_NivelAgua_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_NivelAgua_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_AmplitudNado_MetaData[] = {
		{ "Category", "Movimiento Acuatico" },
		{ "Comment", "// Fuerza del oleaje/nado lateral\n" },
		{ "ModuleRelativePath", "EnemigoAcuatico.h" },
		{ "ToolTip", "Fuerza del oleaje/nado lateral" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_AmplitudNado = { "AmplitudNado", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAcuatico, AmplitudNado), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_AmplitudNado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_AmplitudNado_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_FrecuenciaNado_MetaData[] = {
		{ "Category", "Movimiento Acuatico" },
		{ "ModuleRelativePath", "EnemigoAcuatico.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_FrecuenciaNado = { "FrecuenciaNado", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAcuatico, FrecuenciaNado), METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_FrecuenciaNado_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_FrecuenciaNado_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAcuatico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_NivelAgua,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_AmplitudNado,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAcuatico_Statics::NewProp_FrecuenciaNado,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAcuatico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAcuatico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams = {
		&AEnemigoAcuatico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAcuatico_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuatico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAcuatico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAcuatico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAcuatico, 4040756068);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AEnemigoAcuatico>()
	{
		return AEnemigoAcuatico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAcuatico(Z_Construct_UClass_AEnemigoAcuatico, &AEnemigoAcuatico::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AEnemigoAcuatico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAcuatico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
