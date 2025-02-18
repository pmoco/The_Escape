// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/ActiveMeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveMeleeTraceInfo() {}

// Begin Cross Module References
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveMeleeTraceInfo();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin ScriptStruct FActiveMeleeTraceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo;
class UScriptStruct* FActiveMeleeTraceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveMeleeTraceInfo, (UObject*)Z_Construct_UPackage__Script_MeleeTrace(), TEXT("ActiveMeleeTraceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.OuterSingleton;
}
template<> MELEETRACE_API UScriptStruct* StaticStruct<FActiveMeleeTraceInfo>()
{
	return FActiveMeleeTraceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActiveMeleeTraceInfo.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveMeleeTraceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
	nullptr,
	&NewStructOps,
	"ActiveMeleeTraceInfo",
	nullptr,
	0,
	sizeof(FActiveMeleeTraceInfo),
	alignof(FActiveMeleeTraceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveMeleeTraceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton, Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo.InnerSingleton;
}
// End ScriptStruct FActiveMeleeTraceInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActiveMeleeTraceInfo::StaticStruct, Z_Construct_UScriptStruct_FActiveMeleeTraceInfo_Statics::NewStructOps, TEXT("ActiveMeleeTraceInfo"), &Z_Registration_Info_UScriptStruct_ActiveMeleeTraceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveMeleeTraceInfo), 2612405508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_487313422(TEXT("/Script/MeleeTrace"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_ActiveMeleeTraceInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
