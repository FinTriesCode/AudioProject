// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Private/SteamAudioReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioReverb() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_NoRegister();
STEAMAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin ScriptStruct FSteamAudioReverbSubmixPluginSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings;
class UScriptStruct* FSteamAudioReverbSubmixPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("SteamAudioReverbSubmixPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.OuterSingleton;
}
template<> STEAMAUDIO_API UScriptStruct* StaticStruct<FSteamAudioReverbSubmixPluginSettings>()
{
	return FSteamAudioReverbSubmixPluginSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actual settings for the submix plugin.\n */" },
#endif
		{ "ModuleRelativePath", "Private/SteamAudioReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actual settings for the submix plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyReverb_MetaData[] = {
		{ "Category", "SubmixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, listener-centric reverb will be applied to the audio received as input to this submix. */" },
#endif
		{ "ModuleRelativePath", "Private/SteamAudioReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, listener-centric reverb will be applied to the audio received as input to this submix." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHRTF_MetaData[] = {
		{ "Category", "SubmixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the reverb and mixed reflections will be rendered using binaural rendering. */" },
#endif
		{ "ModuleRelativePath", "Private/SteamAudioReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the reverb and mixed reflections will be rendered using binaural rendering." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bApplyReverb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyReverb;
	static void NewProp_bApplyHRTF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHRTF;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamAudioReverbSubmixPluginSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyReverb_SetBit(void* Obj)
{
	((FSteamAudioReverbSubmixPluginSettings*)Obj)->bApplyReverb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyReverb = { "bApplyReverb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamAudioReverbSubmixPluginSettings), &Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyReverb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyReverb_MetaData), NewProp_bApplyReverb_MetaData) };
void Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyHRTF_SetBit(void* Obj)
{
	((FSteamAudioReverbSubmixPluginSettings*)Obj)->bApplyHRTF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyHRTF = { "bApplyHRTF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamAudioReverbSubmixPluginSettings), &Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyHRTF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyHRTF_MetaData), NewProp_bApplyHRTF_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyReverb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewProp_bApplyHRTF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	&NewStructOps,
	"SteamAudioReverbSubmixPluginSettings",
	Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::PropPointers),
	sizeof(FSteamAudioReverbSubmixPluginSettings),
	alignof(FSteamAudioReverbSubmixPluginSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings.InnerSingleton;
}
// End ScriptStruct FSteamAudioReverbSubmixPluginSettings

// Begin Class USteamAudioReverbSubmixPluginPreset
void USteamAudioReverbSubmixPluginPreset::StaticRegisterNativesUSteamAudioReverbSubmixPluginPreset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioReverbSubmixPluginPreset);
UClass* Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_NoRegister()
{
	return USteamAudioReverbSubmixPluginPreset::StaticClass();
}
struct Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings object for the submix plugin.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SteamAudioReverb.h" },
		{ "ModuleRelativePath", "Private/SteamAudioReverb.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings object for the submix plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixPreset" },
		{ "ModuleRelativePath", "Private/SteamAudioReverb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioReverbSubmixPluginPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioReverbSubmixPluginPreset, Settings), Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3570572943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::ClassParams = {
	&USteamAudioReverbSubmixPluginPreset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::PropPointers),
	0,
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset()
{
	if (!Z_Registration_Info_UClass_USteamAudioReverbSubmixPluginPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioReverbSubmixPluginPreset.OuterSingleton, Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioReverbSubmixPluginPreset.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioReverbSubmixPluginPreset>()
{
	return USteamAudioReverbSubmixPluginPreset::StaticClass();
}
USteamAudioReverbSubmixPluginPreset::USteamAudioReverbSubmixPluginPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioReverbSubmixPluginPreset);
USteamAudioReverbSubmixPluginPreset::~USteamAudioReverbSubmixPluginPreset() {}
// End Class USteamAudioReverbSubmixPluginPreset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamAudioReverbSubmixPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FSteamAudioReverbSubmixPluginSettings_Statics::NewStructOps, TEXT("SteamAudioReverbSubmixPluginSettings"), &Z_Registration_Info_UScriptStruct_SteamAudioReverbSubmixPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamAudioReverbSubmixPluginSettings), 3570572943U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioReverbSubmixPluginPreset, USteamAudioReverbSubmixPluginPreset::StaticClass, TEXT("USteamAudioReverbSubmixPluginPreset"), &Z_Registration_Info_UClass_USteamAudioReverbSubmixPluginPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioReverbSubmixPluginPreset), 1100110359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_4253911296(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Private_SteamAudioReverb_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
