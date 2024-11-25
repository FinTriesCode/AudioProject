// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioMaterial();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioMaterial
void USteamAudioMaterial::StaticRegisterNativesUSteamAudioMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioMaterial);
UClass* Z_Construct_UClass_USteamAudioMaterial_NoRegister()
{
	return USteamAudioMaterial::StaticClass();
}
struct Z_Construct_UClass_USteamAudioMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Acoustic material properties that can be serialized to an asset.\n */" },
#endif
		{ "IncludePath", "SteamAudioMaterial.h" },
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acoustic material properties that can be serialized to an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionLow_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Low frequency (0 - 800Hz) absorption. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Low frequency (0 - 800Hz) absorption." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMid_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mid frequency (800Hz - 8kHz) absorption. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mid frequency (800Hz - 8kHz) absorption." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionHigh_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** High frequency (8kHz - 22kHz) absorption. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High frequency (8kHz - 22kHz) absorption." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scattering_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scattering coefficient. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scattering coefficient." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionLow_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Low frequency (0 - 800Hz) transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Low frequency (0 - 800Hz) transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionMid_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mid frequency (800Hz - 8kHz) transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mid frequency (800Hz - 8kHz) transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransmissionHigh_MetaData[] = {
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** High frequency (8kHz - 22kHz) transmission. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioMaterial.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "High frequency (8kHz - 22kHz) transmission." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionMid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionHigh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scattering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionLow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionMid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransmissionHigh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionLow = { "AbsorptionLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, AbsorptionLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionLow_MetaData), NewProp_AbsorptionLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionMid = { "AbsorptionMid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, AbsorptionMid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionMid_MetaData), NewProp_AbsorptionMid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionHigh = { "AbsorptionHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, AbsorptionHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsorptionHigh_MetaData), NewProp_AbsorptionHigh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_Scattering = { "Scattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, Scattering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scattering_MetaData), NewProp_Scattering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionLow = { "TransmissionLow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, TransmissionLow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionLow_MetaData), NewProp_TransmissionLow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionMid = { "TransmissionMid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, TransmissionMid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionMid_MetaData), NewProp_TransmissionMid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionHigh = { "TransmissionHigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioMaterial, TransmissionHigh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransmissionHigh_MetaData), NewProp_TransmissionHigh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_AbsorptionHigh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_Scattering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionLow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionMid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioMaterial_Statics::NewProp_TransmissionHigh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioMaterial_Statics::ClassParams = {
	&USteamAudioMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterial_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioMaterial()
{
	if (!Z_Registration_Info_UClass_USteamAudioMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioMaterial.OuterSingleton, Z_Construct_UClass_USteamAudioMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioMaterial.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioMaterial>()
{
	return USteamAudioMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioMaterial);
USteamAudioMaterial::~USteamAudioMaterial() {}
// End Class USteamAudioMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioMaterial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioMaterial, USteamAudioMaterial::StaticClass, TEXT("USteamAudioMaterial"), &Z_Registration_Info_UClass_USteamAudioMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioMaterial), 2796974487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioMaterial_h_3523217906(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioMaterial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
