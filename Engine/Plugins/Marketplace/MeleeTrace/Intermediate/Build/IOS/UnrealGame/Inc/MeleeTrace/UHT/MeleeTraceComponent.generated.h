// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeleeTraceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMeleeTraceComponent;
class UObject;
struct FMeleeTraceInfo;
struct FMeleeTraceInstanceHandle;
#ifdef MELEETRACE_MeleeTraceComponent_generated_h
#error "MeleeTraceComponent.generated.h already included, missing '#pragma once' in MeleeTraceComponent.h"
#endif
#define MELEETRACE_MeleeTraceComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_15_DELEGATE \
MELEETRACE_API void FMeleeTraceStart_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceStart, UMeleeTraceComponent* ThisComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_20_DELEGATE \
MELEETRACE_API void FMeleeTraceEnd_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceEnd, UMeleeTraceComponent* ThisComponent, int32 HitCount);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_31_DELEGATE \
MELEETRACE_API void FMeleeTraceHit_DelegateWrapper(const FMulticastScriptDelegate& MeleeTraceHit, UMeleeTraceComponent* ThisComponent, AActor* HitActor, FVector const& HitLocation, FVector const& HitNormal, FName HitBoneName);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeTraceInstanceHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MELEETRACE_API UScriptStruct* StaticStruct<struct FMeleeTraceInstanceHandle>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsMeleeTraceHandleValid); \
	DECLARE_FUNCTION(execInvalidateMeleeTraceHandle); \
	DECLARE_FUNCTION(execGetActorsHitByTrace); \
	DECLARE_FUNCTION(execGetActorsHitByTraceWithContext); \
	DECLARE_FUNCTION(execGetTraceChannel); \
	DECLARE_FUNCTION(execSetTraceChannel); \
	DECLARE_FUNCTION(execIsAnyTraceActive); \
	DECLARE_FUNCTION(execForceEndAllTraces); \
	DECLARE_FUNCTION(execEndTrace); \
	DECLARE_FUNCTION(execStartTrace); \
	DECLARE_FUNCTION(execEndTraceWithContext); \
	DECLARE_FUNCTION(execStartTraceWithContext);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeleeTraceComponent(); \
	friend struct Z_Construct_UClass_UMeleeTraceComponent_Statics; \
public: \
	DECLARE_CLASS(UMeleeTraceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MeleeTrace"), NO_API) \
	DECLARE_SERIALIZER(UMeleeTraceComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMeleeTraceComponent(UMeleeTraceComponent&&); \
	UMeleeTraceComponent(const UMeleeTraceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeleeTraceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeleeTraceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeleeTraceComponent) \
	NO_API virtual ~UMeleeTraceComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_42_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MELEETRACE_API UClass* StaticClass<class UMeleeTraceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
