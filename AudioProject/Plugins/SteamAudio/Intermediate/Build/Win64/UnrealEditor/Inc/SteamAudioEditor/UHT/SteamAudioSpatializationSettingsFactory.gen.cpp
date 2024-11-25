// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudioEditor/Private/SteamAudioSpatializationSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSpatializationSettingsFactory() {}

// Begin Cross Module References
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioSpatializationSettingsFactory();
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References

// Begin Class USteamAudioSpatializationSettingsFactory
void USteamAudioSpatializationSettingsFactory::StaticRegisterNativesUSteamAudioSpatializationSettingsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSpatializationSettingsFactory);
UClass* Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_NoRegister()
{
	return USteamAudioSpatializationSettingsFactory::StaticClass();
}
struct Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantiates a Spatialization Settings asset.\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SteamAudioSpatializationSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/SteamAudioSpatializationSettingsFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates a Spatialization Settings asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSpatializationSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::ClassParams = {
	&USteamAudioSpatializationSettingsFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioSpatializationSettingsFactory()
{
	if (!Z_Registration_Info_UClass_USteamAudioSpatializationSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSpatializationSettingsFactory.OuterSingleton, Z_Construct_UClass_USteamAudioSpatializationSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioSpatializationSettingsFactory.OuterSingleton;
}
template<> STEAMAUDIOEDITOR_API UClass* StaticClass<USteamAudioSpatializationSettingsFactory>()
{
	return USteamAudioSpatializationSettingsFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSpatializationSettingsFactory);
USteamAudioSpatializationSettingsFactory::~USteamAudioSpatializationSettingsFactory() {}
// End Class USteamAudioSpatializationSettingsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioSpatializationSettingsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSpatializationSettingsFactory, USteamAudioSpatializationSettingsFactory::StaticClass, TEXT("USteamAudioSpatializationSettingsFactory"), &Z_Registration_Info_UClass_USteamAudioSpatializationSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSpatializationSettingsFactory), 1365737635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioSpatializationSettingsFactory_h_322343111(TEXT("/Script/SteamAudioEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioSpatializationSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioSpatializationSettingsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
