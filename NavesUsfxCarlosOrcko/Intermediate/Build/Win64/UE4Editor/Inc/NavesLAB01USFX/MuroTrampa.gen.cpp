// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesLAB01USFX/MuroTrampa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroTrampa() {}
// Cross Module References
	NAVESLAB01USFX_API UEnum* Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento();
	UPackage* Z_Construct_UPackage__Script_NavesLAB01USFX();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroTrampa_NoRegister();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuroTrampa();
	NAVESLAB01USFX_API UClass* Z_Construct_UClass_AMuro();
// End Cross Module References
	static UEnum* EEjeMovimiento_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento, Z_Construct_UPackage__Script_NavesLAB01USFX(), TEXT("EEjeMovimiento"));
		}
		return Singleton;
	}
	template<> NAVESLAB01USFX_API UEnum* StaticEnum<EEjeMovimiento>()
	{
		return EEjeMovimiento_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEjeMovimiento(EEjeMovimiento_StaticEnum, TEXT("/Script/NavesLAB01USFX"), TEXT("EEjeMovimiento"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento_Hash() { return 1203110143U; }
	UEnum* Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NavesLAB01USFX();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEjeMovimiento"), 0, Get_Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEjeMovimiento::Movimiento_X", (int64)EEjeMovimiento::Movimiento_X },
				{ "EEjeMovimiento::Movimiento_Y", (int64)EEjeMovimiento::Movimiento_Y },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enumeraci?n para elegir el eje de movimiento desde el editor\n" },
				{ "ModuleRelativePath", "MuroTrampa.h" },
				{ "Movimiento_X.DisplayName", "Eje X (Horizontal)" },
				{ "Movimiento_X.Name", "EEjeMovimiento::Movimiento_X" },
				{ "Movimiento_Y.DisplayName", "Eje Y (Lateral/Vertical)" },
				{ "Movimiento_Y.Name", "EEjeMovimiento::Movimiento_Y" },
				{ "ToolTip", "Enumeraci?n para elegir el eje de movimiento desde el editor" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
				nullptr,
				"EEjeMovimiento",
				"EEjeMovimiento",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMuroTrampa::StaticRegisterNativesAMuroTrampa()
	{
	}
	UClass* Z_Construct_UClass_AMuroTrampa_NoRegister()
	{
		return AMuroTrampa::StaticClass();
	}
	struct Z_Construct_UClass_AMuroTrampa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanciaMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanciaMovimiento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TipoDeMovimiento_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipoDeMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TipoDeMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroTrampa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMuro,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesLAB01USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroTrampa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroTrampa.h" },
		{ "ModuleRelativePath", "MuroTrampa.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroTrampa_Statics::NewProp_DistanciaMovimiento_MetaData[] = {
		{ "Category", "Configuracion Trap" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Encapsulaci?n de variables de configuraci?n del movimiento\n// 'DistanciaMovimiento' es la amplitud de la oscilaci?n (ej. 200cm a cada lado)\n" },
		{ "ModuleRelativePath", "MuroTrampa.h" },
		{ "ToolTip", "Encapsulaci?n de variables de configuraci?n del movimiento\n'DistanciaMovimiento' es la amplitud de la oscilaci?n (ej. 200cm a cada lado)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroTrampa_Statics::NewProp_DistanciaMovimiento = { "DistanciaMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroTrampa, DistanciaMovimiento), METADATA_PARAMS(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_DistanciaMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_DistanciaMovimiento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroTrampa_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Configuracion Trap" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// 'VelocidadMovimiento' es la frecuencia del movimiento (ciclos por segundo)\n" },
		{ "ModuleRelativePath", "MuroTrampa.h" },
		{ "ToolTip", "'VelocidadMovimiento' es la frecuencia del movimiento (ciclos por segundo)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMuroTrampa_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroTrampa, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento_MetaData[] = {
		{ "Category", "Configuracion Trap" },
		{ "Comment", "// Selector del eje de movimiento seg?n el dise?o del nivel\n" },
		{ "ModuleRelativePath", "MuroTrampa.h" },
		{ "ToolTip", "Selector del eje de movimiento seg?n el dise?o del nivel" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento = { "TipoDeMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroTrampa, TipoDeMovimiento), Z_Construct_UEnum_NavesLAB01USFX_EEjeMovimiento, METADATA_PARAMS(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroTrampa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroTrampa_Statics::NewProp_DistanciaMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroTrampa_Statics::NewProp_VelocidadMovimiento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroTrampa_Statics::NewProp_TipoDeMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroTrampa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroTrampa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroTrampa_Statics::ClassParams = {
		&AMuroTrampa::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroTrampa_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroTrampa_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroTrampa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroTrampa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroTrampa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroTrampa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroTrampa, 669187627);
	template<> NAVESLAB01USFX_API UClass* StaticClass<AMuroTrampa>()
	{
		return AMuroTrampa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroTrampa(Z_Construct_UClass_AMuroTrampa, &AMuroTrampa::StaticClass, TEXT("/Script/NavesLAB01USFX"), TEXT("AMuroTrampa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroTrampa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
