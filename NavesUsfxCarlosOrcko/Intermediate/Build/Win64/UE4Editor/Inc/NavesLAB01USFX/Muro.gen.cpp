// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/Muro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuro() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuro_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuro();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMuro::StaticRegisterNativesAMuro()
	{
	}
	UClass* Z_Construct_UClass_AMuro_NoRegister()
	{
		return AMuro::StaticClass();
	}
	struct Z_Construct_UClass_AMuro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaMuro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaMuro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resistencia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Resistencia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEsDestructible_MetaData[];
#endif
		static void NewProp_bEsDestructible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEsDestructible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Muro.h" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::NewProp_MallaMuro_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Componente visual y f?sico\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Muro.h" },
		{ "ToolTip", "Componente visual y f?sico" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_MallaMuro = { "MallaMuro", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuro, MallaMuro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::NewProp_MallaMuro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::NewProp_MallaMuro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::NewProp_Resistencia_MetaData[] = {
		{ "Category", "Atributos" },
		{ "Comment", "// Atributos base que heredar?n los hijos\n" },
		{ "ModuleRelativePath", "Muro.h" },
		{ "ToolTip", "Atributos base que heredar?n los hijos" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_Resistencia = { "Resistencia", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuro, Resistencia), METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::NewProp_Resistencia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::NewProp_Resistencia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible_MetaData[] = {
		{ "Category", "Atributos" },
		{ "ModuleRelativePath", "Muro.h" },
	};
#endif
	void Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible_SetBit(void* Obj)
	{
		((AMuro*)Obj)->bEsDestructible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible = { "bEsDestructible", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMuro), &Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuro_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_MallaMuro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_Resistencia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuro_Statics::NewProp_bEsDestructible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuro>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuro_Statics::ClassParams = {
		&AMuro::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuro_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuro()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuro_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuro, 3555329961);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuro>()
	{
		return AMuro::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuro(Z_Construct_UClass_AMuro, &AMuro::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuro"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuro);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
