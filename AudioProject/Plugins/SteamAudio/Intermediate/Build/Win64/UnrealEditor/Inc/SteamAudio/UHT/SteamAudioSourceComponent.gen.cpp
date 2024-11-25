// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSourceComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioProbeVolume_NoRegister();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSourceComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSourceComponent_NoRegister();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EOcclusionType();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EReflectionSimulationType();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Enum EOcclusionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOcclusionType;
static UEnum* EOcclusionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOcclusionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOcclusionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EOcclusionType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EOcclusionType"));
	}
	return Z_Registration_Info_UEnum_EOcclusionType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EOcclusionType>()
{
	return EOcclusionType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLOcclusionType.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
		{ "RAYCAST.DisplayName", "Raycast" },
		{ "RAYCAST.Name", "EOcclusionType::RAYCAST" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLOcclusionType." },
#endif
		{ "VOLUMETRIC.DisplayName", "Volumetric" },
		{ "VOLUMETRIC.Name", "EOcclusionType::VOLUMETRIC" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOcclusionType::RAYCAST", (int64)EOcclusionType::RAYCAST },
		{ "EOcclusionType::VOLUMETRIC", (int64)EOcclusionType::VOLUMETRIC },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EOcclusionType",
	"EOcclusionType",
	Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EOcclusionType()
{
	if (!Z_Registration_Info_UEnum_EOcclusionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOcclusionType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EOcclusionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOcclusionType.InnerSingleton;
}
// End Enum EOcclusionType

// Begin Enum EReflectionSimulationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionSimulationType;
static UEnum* EReflectionSimulationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReflectionSimulationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReflectionSimulationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EReflectionSimulationType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EReflectionSimulationType"));
	}
	return Z_Registration_Info_UEnum_EReflectionSimulationType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionSimulationType>()
{
	return EReflectionSimulationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BAKED_STATIC_LISTENER.DisplayName", "Baked Static Listener" },
		{ "BAKED_STATIC_LISTENER.Name", "EReflectionSimulationType::BAKED_STATIC_LISTENER" },
		{ "BAKED_STATIC_SOURCE.DisplayName", "Baked Static Source" },
		{ "BAKED_STATIC_SOURCE.Name", "EReflectionSimulationType::BAKED_STATIC_SOURCE" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Ways in which reflections can be simulated for a source.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
		{ "REALTIME.DisplayName", "Real-time" },
		{ "REALTIME.Name", "EReflectionSimulationType::REALTIME" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ways in which reflections can be simulated for a source." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReflectionSimulationType::REALTIME", (int64)EReflectionSimulationType::REALTIME },
		{ "EReflectionSimulationType::BAKED_STATIC_SOURCE", (int64)EReflectionSimulationType::BAKED_STATIC_SOURCE },
		{ "EReflectionSimulationType::BAKED_STATIC_LISTENER", (int64)EReflectionSimulationType::BAKED_STATIC_LISTENER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EReflectionSimulationType",
	"EReflectionSimulationType",
	Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EReflectionSimulationType()
{
	if (!Z_Registration_Info_UEnum_EReflectionSimulationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionSimulationType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EReflectionSimulationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReflectionSimulationType.InnerSingleton;
}
// End Enum EReflectionSimulationType

// Begin Class USteamAudioSourceComponent
void USteamAudioSourceComponent::StaticRegisterNativesUSteamAudioSourceComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSourceComponent);
UClass* Z_Construct_UClass_USteamAudioSourceComponent_NoRegister()
{
	return USteamAudioSourceComponent::StaticClass();
}
struct Z_Construct_UClass_USteamAudioSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Specifies Steam Audio simulation settings to use for an Actor that contains an Audio Component.\n */" },
#endif
		{ "HideCategories", "Activation Collision Tags Rendering Physics LOD Mobility Cooking AssetUserData" },
		{ "IncludePath", "SteamAudioSourceComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies Steam Audio simulation settings to use for an Actor that contains an Audio Component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateOcclusion_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, occlusion will be simulated via ray tracing. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, occlusion will be simulated via ray tracing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionType_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Specifies how rays should be traced to model occlusion. Only if simulating occlusion. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies how rays should be traced to model occlusion. Only if simulating occlusion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRadius_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The apparent size of the sound source. Only if using volumetric occlusion. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The apparent size of the sound source. Only if using volumetric occlusion." },
#endif
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionSamples_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of rays to trace from the listener to various points in a sphere around the source. Only if using\n        volumetric occlusion. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of rays to trace from the listener to various points in a sphere around the source. Only if using\n       volumetric occlusion." },
#endif
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The occlusion attenuation value. Only if not simulating occlusion. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The occlusion attenuation value. Only if not simulating occlusion." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateTransmission_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, transmission will be simulated via ray tracing. Only if simulating occlusion. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, transmission will be simulated via ray tracing. Only if simulating occlusion." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionLowValue_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The low frequency (up to 800 Hz) EQ value for transmission. Only if not simulating transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The low frequency (up to 800 Hz) EQ value for transmission. Only if not simulating transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionMidValue_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The middle frequency (800 Hz to 8 kHz) EQ value for transmission. Only if not simulating transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The middle frequency (800 Hz to 8 kHz) EQ value for transmission. Only if not simulating transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionHighValue_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The high frequency (8 kHz and above) EQ value for transmission. Only if not simulating transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The high frequency (8 kHz and above) EQ value for transmission. Only if not simulating transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTransmissionSurfaces_MetaData[] = {
		{ "Category", "OcclusionSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum number of rays to trace when finding surfaces between the source and the listener for the\n        purposes of simulating transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of rays to trace when finding surfaces between the source and the listener for the\n       purposes of simulating transmission." },
#endif
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateReflections_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, reflections from the source to the listener will be simulated. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, reflections from the source to the listener will be simulated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionsType_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to simulate reflections. Only if simulating reflections. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to simulate reflections. Only if simulating reflections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBakedSource_MetaData[] = {
		{ "Category", "ReflectionsSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The static source from which to simulate reflections. Only if simulating reflections. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The static source from which to simulate reflections. Only if simulating reflections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatePathing_MetaData[] = {
		{ "Category", "PathingSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, pathing from the source to the listener will be simulated. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, pathing from the source to the listener will be simulated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathingProbeBatch_MetaData[] = {
		{ "Category", "PathingSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The probe volume within which to simulate pathing. Only if simulating pathing. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probe volume within which to simulate pathing. Only if simulating pathing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPathValidation_MetaData[] = {
		{ "Category", "PathingSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, baked paths are checked for occlusion by dynamic geometry. Only if simulating pathing. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, baked paths are checked for occlusion by dynamic geometry. Only if simulating pathing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFindAlternatePaths_MetaData[] = {
		{ "Category", "PathingSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, if a baked path is occluded by dynamic geometry, alternate paths will be searched for at runtime. Only if simulating pathing. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSourceComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, if a baked path is occluded by dynamic geometry, alternate paths will be searched for at runtime. Only if simulating pathing." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bSimulateOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateOcclusion;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OcclusionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
	static void NewProp_bSimulateTransmission_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateTransmission;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionLowValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionMidValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionHighValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTransmissionSurfaces;
	static void NewProp_bSimulateReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateReflections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionsType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionsType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentBakedSource;
	static void NewProp_bSimulatePathing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatePathing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathingProbeBatch;
	static void NewProp_bPathValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathValidation;
	static void NewProp_bFindAlternatePaths_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindAlternatePaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSourceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateOcclusion_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bSimulateOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateOcclusion = { "bSimulateOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateOcclusion_MetaData), NewProp_bSimulateOcclusion_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionType = { "OcclusionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, OcclusionType), Z_Construct_UEnum_SteamAudio_EOcclusionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionType_MetaData), NewProp_OcclusionType_MetaData) }; // 2079273032
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionRadius = { "OcclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, OcclusionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionRadius_MetaData), NewProp_OcclusionRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionSamples = { "OcclusionSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, OcclusionSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionSamples_MetaData), NewProp_OcclusionSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, OcclusionValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionValue_MetaData), NewProp_OcclusionValue_MetaData) };
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateTransmission_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bSimulateTransmission = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateTransmission = { "bSimulateTransmission", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateTransmission_MetaData), NewProp_bSimulateTransmission_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionLowValue = { "TransmissionLowValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, TransmissionLowValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionLowValue_MetaData), NewProp_TransmissionLowValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionMidValue = { "TransmissionMidValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, TransmissionMidValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionMidValue_MetaData), NewProp_TransmissionMidValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionHighValue = { "TransmissionHighValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, TransmissionHighValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionHighValue_MetaData), NewProp_TransmissionHighValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_MaxTransmissionSurfaces = { "MaxTransmissionSurfaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, MaxTransmissionSurfaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTransmissionSurfaces_MetaData), NewProp_MaxTransmissionSurfaces_MetaData) };
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateReflections_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bSimulateReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateReflections = { "bSimulateReflections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulateReflections_MetaData), NewProp_bSimulateReflections_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_ReflectionsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_ReflectionsType = { "ReflectionsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, ReflectionsType), Z_Construct_UEnum_SteamAudio_EReflectionSimulationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionsType_MetaData), NewProp_ReflectionsType_MetaData) }; // 1421924501
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_CurrentBakedSource = { "CurrentBakedSource", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, CurrentBakedSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBakedSource_MetaData), NewProp_CurrentBakedSource_MetaData) };
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulatePathing_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bSimulatePathing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulatePathing = { "bSimulatePathing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulatePathing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatePathing_MetaData), NewProp_bSimulatePathing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_PathingProbeBatch = { "PathingProbeBatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSourceComponent, PathingProbeBatch), Z_Construct_UClass_ASteamAudioProbeVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathingProbeBatch_MetaData), NewProp_PathingProbeBatch_MetaData) };
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bPathValidation_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bPathValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bPathValidation = { "bPathValidation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bPathValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPathValidation_MetaData), NewProp_bPathValidation_MetaData) };
void Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bFindAlternatePaths_SetBit(void* Obj)
{
	((USteamAudioSourceComponent*)Obj)->bFindAlternatePaths = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bFindAlternatePaths = { "bFindAlternatePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioSourceComponent), &Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bFindAlternatePaths_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFindAlternatePaths_MetaData), NewProp_bFindAlternatePaths_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_OcclusionValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateTransmission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionLowValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionMidValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_TransmissionHighValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_MaxTransmissionSurfaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulateReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_ReflectionsType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_ReflectionsType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_CurrentBakedSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bSimulatePathing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_PathingProbeBatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bPathValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSourceComponent_Statics::NewProp_bFindAlternatePaths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSourceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioSourceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSourceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSourceComponent_Statics::ClassParams = {
	&USteamAudioSourceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioSourceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSourceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSourceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSourceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioSourceComponent()
{
	if (!Z_Registration_Info_UClass_USteamAudioSourceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSourceComponent.OuterSingleton, Z_Construct_UClass_USteamAudioSourceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioSourceComponent.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSourceComponent>()
{
	return USteamAudioSourceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSourceComponent);
USteamAudioSourceComponent::~USteamAudioSourceComponent() {}
// End Class USteamAudioSourceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOcclusionType_StaticEnum, TEXT("EOcclusionType"), &Z_Registration_Info_UEnum_EOcclusionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2079273032U) },
		{ EReflectionSimulationType_StaticEnum, TEXT("EReflectionSimulationType"), &Z_Registration_Info_UEnum_EReflectionSimulationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1421924501U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSourceComponent, USteamAudioSourceComponent::StaticClass, TEXT("USteamAudioSourceComponent"), &Z_Registration_Info_UClass_USteamAudioSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSourceComponent), 4293201312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_156516598(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
