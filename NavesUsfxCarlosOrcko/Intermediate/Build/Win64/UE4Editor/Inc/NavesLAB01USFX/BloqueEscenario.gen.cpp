// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/BloqueEscenario.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueEscenario() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ABloqueEscenario_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_ABloqueEscenario();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABloqueEscenario::StaticRegisterNativesABloqueEscenario()
	{
	}
	UClass* Z_Construct_UClass_ABloqueEscenario_NoRegister()
	{
		return ABloqueEscenario::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueEscenario_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaBloque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueEscenario_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueEscenario_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueEscenario.h" },
		{ "ModuleRelativePath", "BloqueEscenario.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueEscenario_Statics::NewProp_MallaBloque_MetaData[] = {
		{ "Category", "Escenario" },
		{ "Comment", "// Componente visual del bloque\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueEscenario.h" },
		{ "ToolTip", "Componente visual del bloque" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueEscenario_Statics::NewProp_MallaBloque = { "MallaBloque", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueEscenario, MallaBloque), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueEscenario_Statics::NewProp_MallaBloque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEscenario_Statics::NewProp_MallaBloque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueEscenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueEscenario_Statics::NewProp_MallaBloque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueEscenario_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueEscenario>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueEscenario_Statics::ClassParams = {
		&ABloqueEscenario::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueEscenario_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEscenario_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueEscenario_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueEscenario_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueEscenario()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueEscenario_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueEscenario, 1600627911);
	template<> NAVESLAB01USFX_API UClass* StaticClass<ABloqueEscenario>()
	{
		return ABloqueEscenario::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueEscenario(Z_Construct_UClass_ABloqueEscenario, &ABloqueEscenario::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("ABloqueEscenario"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueEscenario);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
