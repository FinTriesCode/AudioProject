// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioReverbSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioReverbSettings() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSettings();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioReverbSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioReverbSettings
void USteamAudioReverbSettings::StaticRegisterNativesUSteamAudioReverbSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioReverbSettings);
UClass* Z_Construct_UClass_USteamAudioReverbSettings_NoRegister()
{
	return USteamAudioReverbSettings::StaticClass();
}
struct Z_Construct_UClass_USteamAudioReverbSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\n// reverb plugin renders them.\n" },
#endif
		{ "IncludePath", "SteamAudioReverbSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings that can be serialized to an asset and re-used with multiple Audio Components to configure how the\nreverb plugin renders them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyReflections_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHRTFToReflections_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Apply HRTF To Reflections" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsMixLevel_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioReverbSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bApplyReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyReflections;
	static void NewProp_bApplyHRTFToReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHRTFToReflections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionsMixLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioReverbSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_SetBit(void* Obj)
{
	((USteamAudioReverbSettings*)Obj)->bApplyReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections = { "bApplyReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioReverbSettings), &Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyReflections_MetaData), NewProp_bApplyReflections_MetaData) };
void Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_SetBit(void* Obj)
{
	((USteamAudioReverbSettings*)Obj)->bApplyHRTFToReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections = { "bApplyHRTFToReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioReverbSettings), &Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyHRTFToReflections_MetaData), NewProp_bApplyHRTFToReflections_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel = { "ReflectionsMixLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioReverbSettings, ReflectionsMixLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsMixLevel_MetaData), NewProp_ReflectionsMixLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_bApplyHRTFToReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioReverbSettings_Statics::NewProp_ReflectionsMixLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioReverbSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UReverbPluginSourceSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioReverbSettings_Statics::ClassParams = {
	&USteamAudioReverbSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioReverbSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioReverbSettings()
{
	if (!Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton, Z_Construct_UClass_USteamAudioReverbSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioReverbSettings.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioReverbSettings>()
{
	return USteamAudioReverbSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioReverbSettings);
USteamAudioReverbSettings::~USteamAudioReverbSettings() {}
// End Class USteamAudioReverbSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioReverbSettings, USteamAudioReverbSettings::StaticClass, TEXT("USteamAudioReverbSettings"), &Z_Registration_Info_UClass_USteamAudioReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioReverbSettings), 594201530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_2864859396(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioReverbSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
