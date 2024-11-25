// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EAudioEngineType();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EHRTFNormType();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EReflectionEffectType();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_ESceneType();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Enum EAudioEngineType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioEngineType;
static UEnum* EAudioEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EAudioEngineType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EAudioEngineType"));
	}
	return Z_Registration_Info_UEnum_EAudioEngineType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EAudioEngineType>()
{
	return EAudioEngineType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The audio engine with which we want to integrate.\n */" },
#endif
		{ "FMODSTUDIO.DisplayName", "FMOD Studio" },
		{ "FMODSTUDIO.Name", "EAudioEngineType::FMODSTUDIO" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio engine with which we want to integrate." },
#endif
		{ "UNREAL.DisplayName", "Unreal" },
		{ "UNREAL.Name", "EAudioEngineType::UNREAL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAudioEngineType::UNREAL", (int64)EAudioEngineType::UNREAL },
		{ "EAudioEngineType::FMODSTUDIO", (int64)EAudioEngineType::FMODSTUDIO },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EAudioEngineType",
	"EAudioEngineType",
	Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EAudioEngineType()
{
	if (!Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EAudioEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAudioEngineType.InnerSingleton;
}
// End Enum EAudioEngineType

// Begin Enum ESceneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneType;
static UEnum* ESceneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESceneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESceneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_ESceneType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("ESceneType"));
	}
	return Z_Registration_Info_UEnum_ESceneType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<ESceneType>()
{
	return ESceneType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_ESceneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLSceneType.\n */" },
#endif
		{ "DEFAULT.DisplayName", "Default" },
		{ "DEFAULT.Name", "ESceneType::DEFAULT" },
		{ "EMBREE.DisplayName", "Embree" },
		{ "EMBREE.Name", "ESceneType::EMBREE" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "RADEONRAYS.DisplayName", "Radeon Rays" },
		{ "RADEONRAYS.Name", "ESceneType::RADEONRAYS" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLSceneType." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESceneType::DEFAULT", (int64)ESceneType::DEFAULT },
		{ "ESceneType::EMBREE", (int64)ESceneType::EMBREE },
		{ "ESceneType::RADEONRAYS", (int64)ESceneType::RADEONRAYS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_ESceneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"ESceneType",
	"ESceneType",
	Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_ESceneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_ESceneType()
{
	if (!Z_Registration_Info_UEnum_ESceneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneType.InnerSingleton, Z_Construct_UEnum_SteamAudio_ESceneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESceneType.InnerSingleton;
}
// End Enum ESceneType

// Begin Enum EReflectionEffectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionEffectType;
static UEnum* EReflectionEffectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EReflectionEffectType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EReflectionEffectType"));
	}
	return Z_Registration_Info_UEnum_EReflectionEffectType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionEffectType>()
{
	return EReflectionEffectType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLReflectionEffectType.\n */" },
#endif
		{ "CONVOLUTION.DisplayName", "Convolution" },
		{ "CONVOLUTION.Name", "EReflectionEffectType::CONVOLUTION" },
		{ "HYBRID.DisplayName", "Hybrid" },
		{ "HYBRID.Name", "EReflectionEffectType::HYBRID" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "PARAMETRIC.DisplayName", "Parametric" },
		{ "PARAMETRIC.Name", "EReflectionEffectType::PARAMETRIC" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLReflectionEffectType." },
#endif
		{ "TRUEAUDIONEXT.DisplayName", "TrueAudio Next" },
		{ "TRUEAUDIONEXT.Name", "EReflectionEffectType::TRUEAUDIONEXT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReflectionEffectType::CONVOLUTION", (int64)EReflectionEffectType::CONVOLUTION },
		{ "EReflectionEffectType::PARAMETRIC", (int64)EReflectionEffectType::PARAMETRIC },
		{ "EReflectionEffectType::HYBRID", (int64)EReflectionEffectType::HYBRID },
		{ "EReflectionEffectType::TRUEAUDIONEXT", (int64)EReflectionEffectType::TRUEAUDIONEXT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EReflectionEffectType",
	"EReflectionEffectType",
	Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EReflectionEffectType()
{
	if (!Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EReflectionEffectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReflectionEffectType.InnerSingleton;
}
// End Enum EReflectionEffectType

// Begin Enum EOpenCLDeviceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCLDeviceType;
static UEnum* EOpenCLDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EOpenCLDeviceType"));
	}
	return Z_Registration_Info_UEnum_EOpenCLDeviceType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EOpenCLDeviceType>()
{
	return EOpenCLDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ANY.DisplayName", "Any" },
		{ "ANY.Name", "EOpenCLDeviceType::ANY" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLOpenCLDeviceType.\n */" },
#endif
		{ "CPU.DisplayName", "CPU" },
		{ "CPU.Name", "EOpenCLDeviceType::CPU" },
		{ "GPU.DisplayName", "GPU" },
		{ "GPU.Name", "EOpenCLDeviceType::GPU" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLOpenCLDeviceType." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOpenCLDeviceType::ANY", (int64)EOpenCLDeviceType::ANY },
		{ "EOpenCLDeviceType::CPU", (int64)EOpenCLDeviceType::CPU },
		{ "EOpenCLDeviceType::GPU", (int64)EOpenCLDeviceType::GPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EOpenCLDeviceType",
	"EOpenCLDeviceType",
	Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType()
{
	if (!Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOpenCLDeviceType.InnerSingleton;
}
// End Enum EOpenCLDeviceType

// Begin Enum EHRTFNormType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHRTFNormType;
static UEnum* EHRTFNormType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EHRTFNormType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EHRTFNormType"));
	}
	return Z_Registration_Info_UEnum_EHRTFNormType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFNormType>()
{
	return EHRTFNormType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLHRTFNormType.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "EHRTFNormType::NONE" },
		{ "RMS.DisplayName", "RMS" },
		{ "RMS.Name", "EHRTFNormType::RMS" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLHRTFNormType." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHRTFNormType::NONE", (int64)EHRTFNormType::NONE },
		{ "EHRTFNormType::RMS", (int64)EHRTFNormType::RMS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EHRTFNormType",
	"EHRTFNormType",
	Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EHRTFNormType()
{
	if (!Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EHRTFNormType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHRTFNormType.InnerSingleton;
}
// End Enum EHRTFNormType

// Begin Class USteamAudioSettings
void USteamAudioSettings::StaticRegisterNativesUSteamAudioSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSettings);
UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister()
{
	return USteamAudioSettings::StaticClass();
}
struct Z_Construct_UClass_USteamAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Global settings for the Steam Audio plugin.\n */" },
#endif
		{ "IncludePath", "SteamAudioSettings.h" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global settings for the Steam Audio plugin." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioEngine_MetaData[] = {
		{ "Category", "AudioEngineSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The audio engine with which we want to integrate. If this is set to use third-party middleware, the\n        corresponding Steam Audio support plugin must also be enabled in your project settings. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The audio engine with which we want to integrate. If this is set to use third-party middleware, the\n       corresponding Steam Audio support plugin must also be enabled in your project settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportLandscapeGeometry_MetaData[] = {
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, Landscape actors (terrain) will be exported as part of a level's static geometry. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Landscape actors (terrain) will be exported as part of a level's static geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportBSPGeometry_MetaData[] = {
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, BSP geometry will be exported as part of a level's static geometry. */" },
#endif
		{ "DisplayName", "Export BSP Geometry" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, BSP geometry will be exported as part of a level's static geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for Static Mesh actors. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for Static Mesh actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapeMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for Landscape actors. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for Landscape actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBSPMaterial_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "SceneExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Material asset to use as the default material for BSP geometry. */" },
#endif
		{ "DisplayName", "Default BSP Material" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Material asset to use as the default material for BSP geometry." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneType_MetaData[] = {
		{ "Category", "RayTracerSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionSamples_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum possible value of Occlusion Samples that can be specified on any Steam Audio Source component. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum possible value of Occlusion Samples that can be specified on any Steam Audio Source component." },
#endif
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeRays_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "65536" },
		{ "UIMin", "1024" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeBounces_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeDuration_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeAmbisonicOrder_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeMaxSources_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeCPUCoresPercentage_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Real Time CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeIrradianceMinDistance_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeConvolution_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeParametric_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingRays_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "65536" },
		{ "UIMin", "1024" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingBounces_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "64" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingDuration_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingAmbisonicOrder_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingCPUCoresPercentage_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "DisplayName", "Baking CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingIrradianceMinDistance_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "ReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilitySamples_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityRadius_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityThreshold_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingVisibilityRange_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingPathRange_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedPathingCPUCoresPercentage_MetaData[] = {
		{ "Category", "PathingSettings" },
		{ "DisplayName", "Baked Pathing CPU Cores Percentage" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationUpdateInterval_MetaData[] = {
		{ "Category", "SimulationUpdateSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionEffectType_MetaData[] = {
		{ "Category", "ReflectionEffectSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HybridReverbTransitionTime_MetaData[] = {
		{ "Category", "HybridReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HybridReverbOverlapPercent_MetaData[] = {
		{ "Category", "HybridReverbSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxReservedComputeUnits_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FractionComputeUnitsForIRUpdate_MetaData[] = {
		{ "Category", "OpenCL Settings" },
		{ "DisplayName", "Fraction Compute Units For IR Update" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakingBatchSize_MetaData[] = {
		{ "Category", "RadeonRaysSettings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "16" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TANDuration_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Duration" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TANAmbisonicOrder_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Ambisonic Order" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TANMaxSources_MetaData[] = {
		{ "Category", "TrueAudio Next Settings" },
		{ "DisplayName", "TAN Max Sources" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HRTFVolume_MetaData[] = {
		{ "Category", "Default HRTF Settings" },
		{ "DisplayName", "HRTF Volume Gain (dB)" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
		{ "UIMax", "12.0" },
		{ "UIMin", "-12.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HRTFNormalizationType_MetaData[] = {
		{ "Category", "Default HRTF Settings" },
		{ "DisplayName", "HRTF Normalization Type" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SOFAFile_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SOFAFile" },
		{ "Category", "Custom HRTF Settings" },
		{ "DisplayName", "SOFA File" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableValidation_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ModuleRelativePath", "Public/SteamAudioSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AudioEngine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioEngine;
	static void NewProp_bExportLandscapeGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLandscapeGeometry;
	static void NewProp_bExportBSPGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportBSPGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMeshMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLandscapeMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBSPMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOcclusionSamples;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeRays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeBounces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RealTimeDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeAmbisonicOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeMaxSources;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeCPUCoresPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RealTimeIrradianceMinDistance;
	static void NewProp_bBakeConvolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeConvolution;
	static void NewProp_bBakeParametric_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeParametric;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingRays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingBounces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingAmbisonicOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingCPUCoresPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingIrradianceMinDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSubmix;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingVisibilitySamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingVisibilityRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingPathRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakedPathingCPUCoresPercentage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationUpdateInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionEffectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionEffectType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HybridReverbTransitionTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HybridReverbOverlapPercent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxReservedComputeUnits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionComputeUnitsForIRUpdate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BakingBatchSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TANDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TANAmbisonicOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TANMaxSources;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HRTFVolume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HRTFNormalizationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HRTFNormalizationType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SOFAFile;
	static void NewProp_EnableValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableValidation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine = { "AudioEngine", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, AudioEngine), Z_Construct_UEnum_SteamAudio_EAudioEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioEngine_MetaData), NewProp_AudioEngine_MetaData) }; // 3497021800
void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_SetBit(void* Obj)
{
	((USteamAudioSettings*)Obj)->bExportLandscapeGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry = { "bExportLandscapeGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportLandscapeGeometry_MetaData), NewProp_bExportLandscapeGeometry_MetaData) };
void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_SetBit(void* Obj)
{
	((USteamAudioSettings*)Obj)->bExportBSPGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry = { "bExportBSPGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportBSPGeometry_MetaData), NewProp_bExportBSPGeometry_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial = { "DefaultMeshMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultMeshMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMeshMaterial_MetaData), NewProp_DefaultMeshMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial = { "DefaultLandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultLandscapeMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandscapeMaterial_MetaData), NewProp_DefaultLandscapeMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial = { "DefaultBSPMaterial", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DefaultBSPMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBSPMaterial_MetaData), NewProp_DefaultBSPMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType = { "SceneType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SceneType), Z_Construct_UEnum_SteamAudio_ESceneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneType_MetaData), NewProp_SceneType_MetaData) }; // 1128415163
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples = { "MaxOcclusionSamples", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, MaxOcclusionSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOcclusionSamples_MetaData), NewProp_MaxOcclusionSamples_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays = { "RealTimeRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeRays_MetaData), NewProp_RealTimeRays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces = { "RealTimeBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeBounces_MetaData), NewProp_RealTimeBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration = { "RealTimeDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeDuration_MetaData), NewProp_RealTimeDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder = { "RealTimeAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeAmbisonicOrder_MetaData), NewProp_RealTimeAmbisonicOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources = { "RealTimeMaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeMaxSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeMaxSources_MetaData), NewProp_RealTimeMaxSources_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage = { "RealTimeCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeCPUCoresPercentage_MetaData), NewProp_RealTimeCPUCoresPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance = { "RealTimeIrradianceMinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, RealTimeIrradianceMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealTimeIrradianceMinDistance_MetaData), NewProp_RealTimeIrradianceMinDistance_MetaData) };
void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_SetBit(void* Obj)
{
	((USteamAudioSettings*)Obj)->bBakeConvolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution = { "bBakeConvolution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeConvolution_MetaData), NewProp_bBakeConvolution_MetaData) };
void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_SetBit(void* Obj)
{
	((USteamAudioSettings*)Obj)->bBakeParametric = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric = { "bBakeParametric", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeParametric_MetaData), NewProp_bBakeParametric_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays = { "BakingRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingRays_MetaData), NewProp_BakingRays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces = { "BakingBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingBounces_MetaData), NewProp_BakingBounces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration = { "BakingDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingDuration_MetaData), NewProp_BakingDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder = { "BakingAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingAmbisonicOrder_MetaData), NewProp_BakingAmbisonicOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage = { "BakingCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingCPUCoresPercentage_MetaData), NewProp_BakingCPUCoresPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance = { "BakingIrradianceMinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingIrradianceMinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingIrradianceMinDistance_MetaData), NewProp_BakingIrradianceMinDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix = { "ReverbSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, ReverbSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverbSubmix_MetaData), NewProp_ReverbSubmix_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples = { "BakingVisibilitySamples", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilitySamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingVisibilitySamples_MetaData), NewProp_BakingVisibilitySamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius = { "BakingVisibilityRadius", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingVisibilityRadius_MetaData), NewProp_BakingVisibilityRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold = { "BakingVisibilityThreshold", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingVisibilityThreshold_MetaData), NewProp_BakingVisibilityThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange = { "BakingVisibilityRange", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingVisibilityRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingVisibilityRange_MetaData), NewProp_BakingVisibilityRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange = { "BakingPathRange", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingPathRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingPathRange_MetaData), NewProp_BakingPathRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage = { "BakedPathingCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakedPathingCPUCoresPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedPathingCPUCoresPercentage_MetaData), NewProp_BakedPathingCPUCoresPercentage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval = { "SimulationUpdateInterval", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SimulationUpdateInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationUpdateInterval_MetaData), NewProp_SimulationUpdateInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType = { "ReflectionEffectType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, ReflectionEffectType), Z_Construct_UEnum_SteamAudio_EReflectionEffectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionEffectType_MetaData), NewProp_ReflectionEffectType_MetaData) }; // 3071289956
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime = { "HybridReverbTransitionTime", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HybridReverbTransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HybridReverbTransitionTime_MetaData), NewProp_HybridReverbTransitionTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent = { "HybridReverbOverlapPercent", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HybridReverbOverlapPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HybridReverbOverlapPercent_MetaData), NewProp_HybridReverbOverlapPercent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, DeviceType), Z_Construct_UEnum_SteamAudio_EOpenCLDeviceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceType_MetaData), NewProp_DeviceType_MetaData) }; // 1260700495
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits = { "MaxReservedComputeUnits", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, MaxReservedComputeUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxReservedComputeUnits_MetaData), NewProp_MaxReservedComputeUnits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate = { "FractionComputeUnitsForIRUpdate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, FractionComputeUnitsForIRUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FractionComputeUnitsForIRUpdate_MetaData), NewProp_FractionComputeUnitsForIRUpdate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize = { "BakingBatchSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, BakingBatchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakingBatchSize_MetaData), NewProp_BakingBatchSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration = { "TANDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TANDuration_MetaData), NewProp_TANDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder = { "TANAmbisonicOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANAmbisonicOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TANAmbisonicOrder_MetaData), NewProp_TANAmbisonicOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources = { "TANMaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, TANMaxSources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TANMaxSources_MetaData), NewProp_TANMaxSources_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume = { "HRTFVolume", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HRTFVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HRTFVolume_MetaData), NewProp_HRTFVolume_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType = { "HRTFNormalizationType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, HRTFNormalizationType), Z_Construct_UEnum_SteamAudio_EHRTFNormType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HRTFNormalizationType_MetaData), NewProp_HRTFNormalizationType_MetaData) }; // 2550393299
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile = { "SOFAFile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSettings, SOFAFile), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SOFAFile_MetaData), NewProp_SOFAFile_MetaData) };
void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_SetBit(void* Obj)
{
	((USteamAudioSettings*)Obj)->EnableValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation = { "EnableValidation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableValidation_MetaData), NewProp_EnableValidation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportLandscapeGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bExportBSPGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultLandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DefaultBSPMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SceneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxOcclusionSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeAmbisonicOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeMaxSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeIrradianceMinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeConvolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_bBakeParametric,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingAmbisonicOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingIrradianceMinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReverbSubmix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilitySamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingVisibilityRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingPathRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedPathingCPUCoresPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SimulationUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ReflectionEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbTransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HybridReverbOverlapPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxReservedComputeUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingBatchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANAmbisonicOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_HRTFNormalizationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_SOFAFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_EnableValidation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams = {
	&USteamAudioSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioSettings()
{
	if (!Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton, Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSettings>()
{
	return USteamAudioSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSettings);
USteamAudioSettings::~USteamAudioSettings() {}
// End Class USteamAudioSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAudioEngineType_StaticEnum, TEXT("EAudioEngineType"), &Z_Registration_Info_UEnum_EAudioEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3497021800U) },
		{ ESceneType_StaticEnum, TEXT("ESceneType"), &Z_Registration_Info_UEnum_ESceneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1128415163U) },
		{ EReflectionEffectType_StaticEnum, TEXT("EReflectionEffectType"), &Z_Registration_Info_UEnum_EReflectionEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3071289956U) },
		{ EOpenCLDeviceType_StaticEnum, TEXT("EOpenCLDeviceType"), &Z_Registration_Info_UEnum_EOpenCLDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1260700495U) },
		{ EHRTFNormType_StaticEnum, TEXT("EHRTFNormType"), &Z_Registration_Info_UEnum_EHRTFNormType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2550393299U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSettings, USteamAudioSettings::StaticClass, TEXT("USteamAudioSettings"), &Z_Registration_Info_UClass_USteamAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSettings), 2755761612U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_3121955034(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
