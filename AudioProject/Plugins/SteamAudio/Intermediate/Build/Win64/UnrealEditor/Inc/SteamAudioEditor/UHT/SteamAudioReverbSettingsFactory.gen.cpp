// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudioEditor/Private/SteamAudioReverbSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioReverbSettingsFactory() {}

// Begin Cross Module References
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioReverbSettingsFactory();
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USteamAudioReverbSettingsFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References

// Begin Class USteamAudioReverbSettingsFactory
void USteamAudioReverbSettingsFactory::StaticRegisterNativesUSteamAudioReverbSettingsFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioReverbSettingsFactory);
UClass* Z_Construct_UClass_USteamAudioReverbSettingsFactory_NoRegister()
{
	return USteamAudioReverbSettingsFactory::StaticClass();
}
struct Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instantiates an Reverb Settings asset.\n" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "SteamAudioReverbSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/SteamAudioReverbSettingsFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates an Reverb Settings asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioReverbSettingsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::ClassParams = {
	&USteamAudioReverbSettingsFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioReverbSettingsFactory()
{
	if (!Z_Registration_Info_UClass_USteamAudioReverbSettingsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioReverbSettingsFactory.OuterSingleton, Z_Construct_UClass_USteamAudioReverbSettingsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioReverbSettingsFactory.OuterSingleton;
}
template<> STEAMAUDIOEDITOR_API UClass* StaticClass<USteamAudioReverbSettingsFactory>()
{
	return USteamAudioReverbSettingsFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioReverbSettingsFactory);
USteamAudioReverbSettingsFactory::~USteamAudioReverbSettingsFactory() {}
// End Class USteamAudioReverbSettingsFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioReverbSettingsFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioReverbSettingsFactory, USteamAudioReverbSettingsFactory::StaticClass, TEXT("USteamAudioReverbSettingsFactory"), &Z_Registration_Info_UClass_USteamAudioReverbSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioReverbSettingsFactory), 4217672131U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioReverbSettingsFactory_h_3125232520(TEXT("/Script/SteamAudioEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioReverbSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SteamAudioReverbSettingsFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
