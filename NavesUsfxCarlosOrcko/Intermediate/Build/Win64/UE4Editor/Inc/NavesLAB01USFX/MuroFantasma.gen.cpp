// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroFantasma() {}
// Cross Module References
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroFantasma_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroFantasma();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuro();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
// End Cross Module References
	void AMuroFantasma::StaticRegisterNativesAMuroFantasma()
	{
	}
	UClass* Z_Construct_UClass_AMuroFantasma_NoRegister()
	{
		return AMuroFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AMuroFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntervaloFlash_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntervaloFlash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroFantasma.h" },
		{ "ModuleRelativePath", "MuroFantasma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroFantasma_Statics::NewProp_IntervaloFlash_MetaData[] = {
		{ "Category", "Configuracion" },
		{ "ModuleRelativePath", "MuroFantasma.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroFantasma_Statics::NewProp_IntervaloFlash = { "IntervaloFlash", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroFantasma, IntervaloFlash), METADATA_PARAMS(Z_Construct_UClass_AMuroFantasma_Statics::NewProp_IntervaloFlash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFantasma_Statics::NewProp_IntervaloFlash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroFantasma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroFantasma_Statics::NewProp_IntervaloFlash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroFantasma_Statics::ClassParams = {
		&AMuroFantasma::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroFantasma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFantasma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroFantasma, 2277059316);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroFantasma>()
	{
		return AMuroFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroFantasma(Z_Construct_UClass_AMuroFantasma, &AMuroFantasma::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
