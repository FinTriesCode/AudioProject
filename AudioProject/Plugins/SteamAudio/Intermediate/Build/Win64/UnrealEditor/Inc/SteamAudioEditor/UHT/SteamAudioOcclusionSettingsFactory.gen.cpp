// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudioEditor/Private/SteamAudioOcclusionSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioOcclusionSettingsFactory() {}

// Begin Cross Module References
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioOcclusionSettingsFactory();
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References

// Begin Class USteamAudioOcclusionSettingsFactory
void USteamAudioOcclusionSettingsFactory::StaticRegisterNativesUSteamAudioOcclusionSettingsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioOcclusionSettingsFactory);
UClass* Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_NoRegister()
{
	return USteamAudioOcclusionSettingsFactory::StaticClass();
}
struct Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantiates an Occlusion Settings asset.\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SteamAudioOcclusionSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/SteamAudioOcclusionSettingsFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates an Occlusion Settings asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioOcclusionSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::ClassParams = {
	&USteamAudioOcclusionSettingsFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioOcclusionSettingsFactory()
{
	if (!Z_Registration_Info_UClass_USteamAudioOcclusionSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioOcclusionSettingsFactory.OuterSingleton, Z_Construct_UClass_USteamAudioOcclusionSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioOcclusionSettingsFactory.OuterSingleton;
}
template<> STEAMAUDIOEDITOR_API UClass* StaticClass<USteamAudioOcclusionSettingsFactory>()
{
	return USteamAudioOcclusionSettingsFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioOcclusionSettingsFactory);
USteamAudioOcclusionSettingsFactory::~USteamAudioOcclusionSettingsFactory() {}
// End Class USteamAudioOcclusionSettingsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioOcclusionSettingsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioOcclusionSettingsFactory, USteamAudioOcclusionSettingsFactory::StaticClass, TEXT("USteamAudioOcclusionSettingsFactory"), &Z_Registration_Info_UClass_USteamAudioOcclusionSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioOcclusionSettingsFactory), 409408315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioOcclusionSettingsFactory_h_2358378459(TEXT("/Script/SteamAudioEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioOcclusionSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioOcclusionSettingsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
