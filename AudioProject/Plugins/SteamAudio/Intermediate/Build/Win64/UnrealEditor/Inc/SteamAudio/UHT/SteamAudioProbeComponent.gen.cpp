// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioProbeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioProbeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioProbeComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioProbeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioProbeComponent
void USteamAudioProbeComponent::StaticRegisterNativesUSteamAudioProbeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioProbeComponent);
UClass* Z_Construct_UClass_USteamAudioProbeComponent_NoRegister()
{
	return USteamAudioProbeComponent::StaticClass();
}
struct Z_Construct_UClass_USteamAudioProbeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component of ASteamAudioProbeVolume that stores the probe positions for in-editor visualization.\n */" },
#endif
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "SteamAudioProbeComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component of ASteamAudioProbeVolume that stores the probe positions for in-editor visualization." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbePositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The probe positions. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioProbeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probe positions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProbePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProbePositions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioProbeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_Inner = { "ProbePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions = { "ProbePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioProbeComponent, ProbePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbePositions_MetaData), NewProp_ProbePositions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioProbeComponent_Statics::NewProp_ProbePositions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioProbeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioProbeComponent_Statics::ClassParams = {
	&USteamAudioProbeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioProbeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioProbeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioProbeComponent()
{
	if (!Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton, Z_Construct_UClass_USteamAudioProbeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioProbeComponent.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioProbeComponent>()
{
	return USteamAudioProbeComponent::StaticClass();
}
USteamAudioProbeComponent::USteamAudioProbeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioProbeComponent);
USteamAudioProbeComponent::~USteamAudioProbeComponent() {}
// End Class USteamAudioProbeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioProbeComponent, USteamAudioProbeComponent::StaticClass, TEXT("USteamAudioProbeComponent"), &Z_Registration_Info_UClass_USteamAudioProbeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioProbeComponent), 2035763247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_4175907563(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
