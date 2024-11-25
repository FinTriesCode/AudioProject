// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudioEditor/Private/SOFAFileFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOFAFileFactory() {}

// Begin Cross Module References
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USOFAFileFactory();
STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_USOFAFileFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References

// Begin Class USOFAFileFactory
void USOFAFileFactory::StaticRegisterNativesUSOFAFileFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USOFAFileFactory);
UClass* Z_Construct_UClass_USOFAFileFactory_NoRegister()
{
	return USOFAFileFactory::StaticClass();
}
struct Z_Construct_UClass_USOFAFileFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Instantiates a USOFAFile asset.\n */" },
#endif
		{ "IncludePath", "SOFAFileFactory.h" },
		{ "ModuleRelativePath", "Private/SOFAFileFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiates a USOFAFile asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USOFAFileFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USOFAFileFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFileFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USOFAFileFactory_Statics::ClassParams = {
	&USOFAFileFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USOFAFileFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USOFAFileFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USOFAFileFactory()
{
	if (!Z_Registration_Info_UClass_USOFAFileFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USOFAFileFactory.OuterSingleton, Z_Construct_UClass_USOFAFileFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USOFAFileFactory.OuterSingleton;
}
template<> STEAMAUDIOEDITOR_API UClass* StaticClass<USOFAFileFactory>()
{
	return USOFAFileFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USOFAFileFactory);
USOFAFileFactory::~USOFAFileFactory() {}
// End Class USOFAFileFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SOFAFileFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USOFAFileFactory, USOFAFileFactory::StaticClass, TEXT("USOFAFileFactory"), &Z_Registration_Info_UClass_USOFAFileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USOFAFileFactory), 2574401162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SOFAFileFactory_h_2612495362(TEXT("/Script/SteamAudioEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SOFAFileFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudioEditor_Private_SOFAFileFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
