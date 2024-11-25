// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioProbeVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioProbeVolume() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AVolume();
STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioProbeVolume();
STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioProbeVolume_NoRegister();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioProbeComponent_NoRegister();
STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EProbeGenerationType();
STEAMAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Enum EProbeGenerationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProbeGenerationType;
static UEnum* EProbeGenerationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProbeGenerationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProbeGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EProbeGenerationType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EProbeGenerationType"));
	}
	return Z_Registration_Info_UEnum_EProbeGenerationType.OuterSingleton;
}
template<> STEAMAUDIO_API UEnum* StaticEnum<EProbeGenerationType>()
{
	return EProbeGenerationType_StaticEnum();
}
struct Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CENTROID.DisplayName", "Centroid" },
		{ "CENTROID.Name", "EProbeGenerationType::CENTROID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Equivalent to IPLProbeGenerationType.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equivalent to IPLProbeGenerationType." },
#endif
		{ "UNIFORM_FLOOR.DisplayName", "Uniform Floor" },
		{ "UNIFORM_FLOOR.Name", "EProbeGenerationType::UNIFORM_FLOOR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProbeGenerationType::CENTROID", (int64)EProbeGenerationType::CENTROID },
		{ "EProbeGenerationType::UNIFORM_FLOOR", (int64)EProbeGenerationType::UNIFORM_FLOOR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	"EProbeGenerationType",
	"EProbeGenerationType",
	Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamAudio_EProbeGenerationType()
{
	if (!Z_Registration_Info_UEnum_EProbeGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProbeGenerationType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EProbeGenerationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProbeGenerationType.InnerSingleton;
}
// End Enum EProbeGenerationType

// Begin ScriptStruct FSteamAudioBakedDataInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo;
class UScriptStruct* FSteamAudioBakedDataInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("SteamAudioBakedDataInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.OuterSingleton;
}
template<> STEAMAUDIO_API UScriptStruct* StaticStruct<FSteamAudioBakedDataInfo>()
{
	return FSteamAudioBakedDataInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Information about a single layer of baked data in a probe batch.\n */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Information about a single layer of baked data in a probe batch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the actor associated with this layer (or \"Reverb\" if this layer is reverb). */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the actor associated with this layer (or \"Reverb\" if this layer is reverb)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See IPLBakedDataIdentifier. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See IPLBakedDataIdentifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variation_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See IPLBakedDataIdentifier. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See IPLBakedDataIdentifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointCenter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See IPLBakedDataIdentifier. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See IPLBakedDataIdentifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointRadius_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** See IPLBakedDataIdentifier. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "See IPLBakedDataIdentifier." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size (in bytes) of the baked data in this layer. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size (in bytes) of the baked data in this layer." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Variation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndpointRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamAudioBakedDataInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Variation = { "Variation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, Variation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variation_MetaData), NewProp_Variation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_EndpointCenter = { "EndpointCenter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, EndpointCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointCenter_MetaData), NewProp_EndpointCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_EndpointRadius = { "EndpointRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, EndpointRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointRadius_MetaData), NewProp_EndpointRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamAudioBakedDataInfo, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Variation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_EndpointCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_EndpointRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	nullptr,
	&NewStructOps,
	"SteamAudioBakedDataInfo",
	Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::PropPointers),
	sizeof(FSteamAudioBakedDataInfo),
	alignof(FSteamAudioBakedDataInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.InnerSingleton, Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo.InnerSingleton;
}
// End ScriptStruct FSteamAudioBakedDataInfo

// Begin Class ASteamAudioProbeVolume
void ASteamAudioProbeVolume::StaticRegisterNativesASteamAudioProbeVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamAudioProbeVolume);
UClass* Z_Construct_UClass_ASteamAudioProbeVolume_NoRegister()
{
	return ASteamAudioProbeVolume::StaticClass();
}
struct Z_Construct_UClass_ASteamAudioProbeVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A volume in which Steam Audio probes can be placed for baking reflections, reverb, or pathing data.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "SteamAudioProbeVolume.h" },
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A volume in which Steam Audio probes can be placed for baking reflections, reverb, or pathing data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioSerializedObject" },
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Serialized Object asset containing probe data. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Serialized Object asset containing probe data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationType_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to place probes within the volume, */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to place probes within the volume," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpacing_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Horizontal spacing (in meters) between adjacent probes. Only when using uniform floor probe generation. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Horizontal spacing (in meters) between adjacent probes. Only when using uniform floor probe generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightAboveFloor_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Height above the floor (in meters) at which to place probes. Only when using uniform floor probe generation. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Height above the floor (in meters) at which to place probes. Only when using uniform floor probe generation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumProbes_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of probes generated. */" },
#endif
		{ "DisplayName", "Probes" },
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of probes generated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSize_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size (in bytes) of the probe data. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size (in bytes) of the probe data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailedStats_MetaData[] = {
		{ "Category", "ProbeBatchSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detailed size information about each layer of baked data in this probe volume. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detailed size information about each layer of baked data in this probe volume." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbeComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component containing probe data for in-editor visualization. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SteamAudioProbeVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component containing probe data for in-editor visualization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GenerationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GenerationType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAboveFloor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProbes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DetailedStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DetailedStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProbeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamAudioProbeVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_GenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_GenerationType = { "GenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, GenerationType), Z_Construct_UEnum_SteamAudio_EProbeGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationType_MetaData), NewProp_GenerationType_MetaData) }; // 1172596801
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_HorizontalSpacing = { "HorizontalSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, HorizontalSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalSpacing_MetaData), NewProp_HorizontalSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_HeightAboveFloor = { "HeightAboveFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, HeightAboveFloor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightAboveFloor_MetaData), NewProp_HeightAboveFloor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_NumProbes = { "NumProbes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, NumProbes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumProbes_MetaData), NewProp_NumProbes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DataSize = { "DataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, DataSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSize_MetaData), NewProp_DataSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DetailedStats_Inner = { "DetailedStats", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo, METADATA_PARAMS(0, nullptr) }; // 673966929
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DetailedStats = { "DetailedStats", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, DetailedStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailedStats_MetaData), NewProp_DetailedStats_MetaData) }; // 673966929
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_ProbeComponent = { "ProbeComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioProbeVolume, ProbeComponent), Z_Construct_UClass_USteamAudioProbeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbeComponent_MetaData), NewProp_ProbeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASteamAudioProbeVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_GenerationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_GenerationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_HorizontalSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_HeightAboveFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_NumProbes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DataSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DetailedStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_DetailedStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioProbeVolume_Statics::NewProp_ProbeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioProbeVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASteamAudioProbeVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioProbeVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamAudioProbeVolume_Statics::ClassParams = {
	&ASteamAudioProbeVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASteamAudioProbeVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioProbeVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioProbeVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamAudioProbeVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteamAudioProbeVolume()
{
	if (!Z_Registration_Info_UClass_ASteamAudioProbeVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamAudioProbeVolume.OuterSingleton, Z_Construct_UClass_ASteamAudioProbeVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamAudioProbeVolume.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<ASteamAudioProbeVolume>()
{
	return ASteamAudioProbeVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamAudioProbeVolume);
ASteamAudioProbeVolume::~ASteamAudioProbeVolume() {}
// End Class ASteamAudioProbeVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProbeGenerationType_StaticEnum, TEXT("EProbeGenerationType"), &Z_Registration_Info_UEnum_EProbeGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1172596801U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamAudioBakedDataInfo::StaticStruct, Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics::NewStructOps, TEXT("SteamAudioBakedDataInfo"), &Z_Registration_Info_UScriptStruct_SteamAudioBakedDataInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamAudioBakedDataInfo), 673966929U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamAudioProbeVolume, ASteamAudioProbeVolume::StaticClass, TEXT("ASteamAudioProbeVolume"), &Z_Registration_Info_UClass_ASteamAudioProbeVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamAudioProbeVolume), 100987816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_2722510462(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
