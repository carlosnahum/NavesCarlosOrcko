// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESLAB01USFX_MuroTrampa_generated_h
#error "MuroTrampa.generated.h already included, missing '#pragma once' in MuroTrampa.h"
#endif
#define NAVESLAB01USFX_MuroTrampa_generated_h

#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_SPARSE_DATA
#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_RPC_WRAPPERS
#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMuroTrampa(); \
	friend struct Z_Construct_UClass_AMuroTrampa_Statics; \
public: \
	DECLARE_CLASS(AMuroTrampa, AMuro, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavesLAB01USFX"), NO_API) \
	DECLARE_SERIALIZER(AMuroTrampa)


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAMuroTrampa(); \
	friend struct Z_Construct_UClass_AMuroTrampa_Statics; \
public: \
	DECLARE_CLASS(AMuroTrampa, AMuro, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavesLAB01USFX"), NO_API) \
	DECLARE_SERIALIZER(AMuroTrampa)


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMuroTrampa(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMuroTrampa) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuroTrampa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuroTrampa); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuroTrampa(AMuroTrampa&&); \
	NO_API AMuroTrampa(const AMuroTrampa&); \
public:


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMuroTrampa(AMuroTrampa&&); \
	NO_API AMuroTrampa(const AMuroTrampa&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMuroTrampa); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMuroTrampa); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMuroTrampa)


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DistanciaMovimiento() { return STRUCT_OFFSET(AMuroTrampa, DistanciaMovimiento); } \
	FORCEINLINE static uint32 __PPO__VelocidadMovimiento() { return STRUCT_OFFSET(AMuroTrampa, VelocidadMovimiento); } \
	FORCEINLINE static uint32 __PPO__TipoDeMovimiento() { return STRUCT_OFFSET(AMuroTrampa, TipoDeMovimiento); }


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_14_PROLOG
#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_PRIVATE_PROPERTY_OFFSET \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_SPARSE_DATA \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_RPC_WRAPPERS \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_INCLASS \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_PRIVATE_PROPERTY_OFFSET \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_SPARSE_DATA \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_INCLASS_NO_PURE_DECLS \
	NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESLAB01USFX_API UClass* StaticClass<class AMuroTrampa>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavesUsfxCarlosOrcko_Source_NavesLAB01USFX_MuroTrampa_h


#define FOREACH_ENUM_EEJEMOVIMIENTO(op) \
	op(EEjeMovimiento::Movimiento_X) \
	op(EEjeMovimiento::Movimiento_Y) 

enum class EEjeMovimiento : uint8;
template<> NAVESLAB01USFX_API UEnum* StaticEnum<EEjeMovimiento>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
