// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioSpatializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSpatializationSettings() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSpatializationSettings();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSpatializationSettings_NoRegister();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EHRTFInterpolation();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Enum EHRTFInterpolation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHRTFInterpolation;
static UEnum* EHRTFInterpolation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHRTFInterpolation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHRTFInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EHRTFInterpolation, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EHRTFInterpolation"));
	}
	return Z_Registration_Info_UEnum_EHRTFInterpolation.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFInterpolation>()
{
	return EHRTFInterpolation_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BILINEAR.DisplayName", "Bilinear" },
		{ "BILINEAR.Name", "EHRTFInterpolation::BILINEAR" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLHRTFInterpolation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
		{ "NEAREST.DisplayName", "Nearest-Neighbor" },
		{ "NEAREST.Name", "EHRTFInterpolation::NEAREST" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLHRTFInterpolation." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHRTFInterpolation::NEAREST", (int64)EHRTFInterpolation::NEAREST },
		{ "EHRTFInterpolation::BILINEAR", (int64)EHRTFInterpolation::BILINEAR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EHRTFInterpolation",
	"EHRTFInterpolation",
	Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EHRTFInterpolation()
{
	if (!Z_Registration_Info_UEnum_EHRTFInterpolation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHRTFInterpolation.InnerSingleton, Z_Construct_UEnum_SteamAudio_EHRTFInterpolation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHRTFInterpolation.InnerSingleton;
}
// End Enum EHRTFInterpolation

// Begin Class USteamAudioSpatializationSettings
void USteamAudioSpatializationSettings::StaticRegisterNativesUSteamAudioSpatializationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSpatializationSettings);
UClass* Z_Construct_UClass_USteamAudioSpatializationSettings_NoRegister()
{
	return USteamAudioSpatializationSettings::StaticClass();
}
struct Z_Construct_UClass_USteamAudioSpatializationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings that can be serialized to an asset and re-used with multiple Audio components to configure how the\n * spatialization plugin renders them.\n */" },
#endif
		{ "IncludePath", "SteamAudioSpatializationSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings that can be serialized to an asset and re-used with multiple Audio components to configure how the\nspatialization plugin renders them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBinaural_MetaData[] = {
		{ "Category", "SpatializationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, use the HRTF to spatialize. If false, use Steam Audio's panning algorithm. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, use the HRTF to spatialize. If false, use Steam Audio's panning algorithm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpolation_MetaData[] = {
		{ "Category", "SpatializationSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to interpolate between HRTF samples. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to interpolate between HRTF samples." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyPathing_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyHRTFToPathing_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "DisplayName", "Apply HRTF To Pathing" },
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathingMixLevel_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSpatializationSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBinaural_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBinaural;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Interpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Interpolation;
	static void NewProp_bApplyPathing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyPathing;
	static void NewProp_bApplyHRTFToPathing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyHRTFToPathing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PathingMixLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSpatializationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bBinaural_SetBit(void* Obj)
{
	((USteamAudioSpatializationSettings*)Obj)->bBinaural = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bBinaural = { "bBinaural", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSpatializationSettings), &Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bBinaural_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBinaural_MetaData), NewProp_bBinaural_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_Interpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_Interpolation = { "Interpolation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSpatializationSettings, Interpolation), Z_Construct_UEnum_SteamAudio_EHRTFInterpolation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpolation_MetaData), NewProp_Interpolation_MetaData) }; // 246982138
void Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyPathing_SetBit(void* Obj)
{
	((USteamAudioSpatializationSettings*)Obj)->bApplyPathing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyPathing = { "bApplyPathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSpatializationSettings), &Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyPathing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyPathing_MetaData), NewProp_bApplyPathing_MetaData) };
void Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyHRTFToPathing_SetBit(void* Obj)
{
	((USteamAudioSpatializationSettings*)Obj)->bApplyHRTFToPathing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyHRTFToPathing = { "bApplyHRTFToPathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSpatializationSettings), &Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyHRTFToPathing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyHRTFToPathing_MetaData), NewProp_bApplyHRTFToPathing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_PathingMixLevel = { "PathingMixLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSpatializationSettings, PathingMixLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathingMixLevel_MetaData), NewProp_PathingMixLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bBinaural,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_Interpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_Interpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyPathing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_bApplyHRTFToPathing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::NewProp_PathingMixLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::ClassParams = {
	&USteamAudioSpatializationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::PropPointers),
	0,
	0x001010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioSpatializationSettings()
{
	if (!Z_Registration_Info_UClass_USteamAudioSpatializationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSpatializationSettings.OuterSingleton, Z_Construct_UClass_USteamAudioSpatializationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioSpatializationSettings.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSpatializationSettings>()
{
	return USteamAudioSpatializationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSpatializationSettings);
USteamAudioSpatializationSettings::~USteamAudioSpatializationSettings() {}
// End Class USteamAudioSpatializationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHRTFInterpolation_StaticEnum, TEXT("EHRTFInterpolation"), &Z_Registration_Info_UEnum_EHRTFInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 246982138U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSpatializationSettings, USteamAudioSpatializationSettings::StaticClass, TEXT("USteamAudioSpatializationSettings"), &Z_Registration_Info_UClass_USteamAudioSpatializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSpatializationSettings), 205300756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_494827866(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
