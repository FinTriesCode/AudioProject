// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioDynamicObjectComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioDynamicObjectComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioDynamicObjectComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioDynamicObjectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioDynamicObjectComponent
void USteamAudioDynamicObjectComponent::StaticRegisterNativesUSteamAudioDynamicObjectComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioDynamicObjectComponent);
UClass* Z_Construct_UClass_USteamAudioDynamicObjectComponent_NoRegister()
{
	return USteamAudioDynamicObjectComponent::StaticClass();
}
struct Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tags an actor and its children as belonging to a dynamic object. Dynamic objects are not included in a scene's\n * static geometry when exporting geometry to Steam Audio. A Steam Audio Dynamic Object component can be attached to\n * any actor in a level, or to a blueprint.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "SteamAudioDynamicObjectComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioDynamicObjectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags an actor and its children as belonging to a dynamic object. Dynamic objects are not included in a scene's\nstatic geometry when exporting geometry to Steam Audio. A Steam Audio Dynamic Object component can be attached to\nany actor in a level, or to a blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioSerializedObject" },
		{ "Category", "ExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the .uasset containing this dynamic object's geometry data. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioDynamicObjectComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the .uasset containing this dynamic object's geometry data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioDynamicObjectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioDynamicObjectComponent, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::NewProp_Asset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::ClassParams = {
	&USteamAudioDynamicObjectComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioDynamicObjectComponent()
{
	if (!Z_Registration_Info_UClass_USteamAudioDynamicObjectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioDynamicObjectComponent.OuterSingleton, Z_Construct_UClass_USteamAudioDynamicObjectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioDynamicObjectComponent.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioDynamicObjectComponent>()
{
	return USteamAudioDynamicObjectComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioDynamicObjectComponent);
USteamAudioDynamicObjectComponent::~USteamAudioDynamicObjectComponent() {}
// End Class USteamAudioDynamicObjectComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioDynamicObjectComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioDynamicObjectComponent, USteamAudioDynamicObjectComponent::StaticClass, TEXT("USteamAudioDynamicObjectComponent"), &Z_Registration_Info_UClass_USteamAudioDynamicObjectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioDynamicObjectComponent), 3912950949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioDynamicObjectComponent_h_1213634704(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioDynamicObjectComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioDynamicObjectComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
