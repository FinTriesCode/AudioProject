// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioStaticMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioStaticMeshActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_AActor();
STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor();
STEAMAUDIO_API UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class ASteamAudioStaticMeshActor
void ASteamAudioStaticMeshActor::StaticRegisterNativesASteamAudioStaticMeshActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamAudioStaticMeshActor);
UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor_NoRegister()
{
	return ASteamAudioStaticMeshActor::StaticClass();
}
struct Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An actor that references static geometry for a level.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "SteamAudioStaticMeshActor.h" },
		{ "ModuleRelativePath", "Public/SteamAudioStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An actor that references static geometry for a level." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioSerializedObject" },
		{ "Category", "ExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the Steam Audio Serialized Object asset containing static geometry data. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioStaticMeshActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the Steam Audio Serialized Object asset containing static geometry data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamAudioStaticMeshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASteamAudioStaticMeshActor, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::ClassParams = {
	&ASteamAudioStaticMeshActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteamAudioStaticMeshActor()
{
	if (!Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton, Z_Construct_UClass_ASteamAudioStaticMeshActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamAudioStaticMeshActor.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<ASteamAudioStaticMeshActor>()
{
	return ASteamAudioStaticMeshActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamAudioStaticMeshActor);
ASteamAudioStaticMeshActor::~ASteamAudioStaticMeshActor() {}
// End Class ASteamAudioStaticMeshActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamAudioStaticMeshActor, ASteamAudioStaticMeshActor::StaticClass, TEXT("ASteamAudioStaticMeshActor"), &Z_Registration_Info_UClass_ASteamAudioStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamAudioStaticMeshActor), 867193783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_336810257(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioStaticMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
