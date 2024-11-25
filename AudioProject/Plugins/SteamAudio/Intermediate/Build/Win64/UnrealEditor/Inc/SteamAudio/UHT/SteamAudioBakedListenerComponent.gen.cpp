// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioBakedListenerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioBakedListenerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioBakedListenerComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioBakedListenerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioBakedListenerComponent
void USteamAudioBakedListenerComponent::StaticRegisterNativesUSteamAudioBakedListenerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioBakedListenerComponent);
UClass* Z_Construct_UClass_USteamAudioBakedListenerComponent_NoRegister()
{
	return USteamAudioBakedListenerComponent::StaticClass();
}
struct Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A virtual listener to which reflections can be baked.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "SteamAudioBakedListenerComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioBakedListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A virtual listener to which reflections can be baked." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceRadius_MetaData[] = {
		{ "Category", "BakedListenerSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance within which a probe must lie in order for reflections to be baked. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioBakedListenerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance within which a probe must lie in order for reflections to be baked." },
#endif
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000000" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioBakedListenerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::NewProp_InfluenceRadius = { "InfluenceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioBakedListenerComponent, InfluenceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluenceRadius_MetaData), NewProp_InfluenceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::NewProp_InfluenceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::ClassParams = {
	&USteamAudioBakedListenerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioBakedListenerComponent()
{
	if (!Z_Registration_Info_UClass_USteamAudioBakedListenerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioBakedListenerComponent.OuterSingleton, Z_Construct_UClass_USteamAudioBakedListenerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioBakedListenerComponent.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioBakedListenerComponent>()
{
	return USteamAudioBakedListenerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioBakedListenerComponent);
USteamAudioBakedListenerComponent::~USteamAudioBakedListenerComponent() {}
// End Class USteamAudioBakedListenerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioBakedListenerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioBakedListenerComponent, USteamAudioBakedListenerComponent::StaticClass, TEXT("USteamAudioBakedListenerComponent"), &Z_Registration_Info_UClass_USteamAudioBakedListenerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioBakedListenerComponent), 613992386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioBakedListenerComponent_h_3544390093(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioBakedListenerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioBakedListenerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
