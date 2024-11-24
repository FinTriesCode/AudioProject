// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioProject/AudioProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioProjectGameMode() {}

// Begin Cross Module References
AUDIOPROJECT_API UClass* Z_Construct_UClass_AAudioProjectGameMode();
AUDIOPROJECT_API UClass* Z_Construct_UClass_AAudioProjectGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AudioProject();
// End Cross Module References

// Begin Class AAudioProjectGameMode
void AAudioProjectGameMode::StaticRegisterNativesAAudioProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioProjectGameMode);
UClass* Z_Construct_UClass_AAudioProjectGameMode_NoRegister()
{
	return AAudioProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AAudioProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AudioProjectGameMode.h" },
		{ "ModuleRelativePath", "AudioProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAudioProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioProjectGameMode_Statics::ClassParams = {
	&AAudioProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAudioProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAudioProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AAudioProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioProjectGameMode.OuterSingleton, Z_Construct_UClass_AAudioProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAudioProjectGameMode.OuterSingleton;
}
template<> AUDIOPROJECT_API UClass* StaticClass<AAudioProjectGameMode>()
{
	return AAudioProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioProjectGameMode);
AAudioProjectGameMode::~AAudioProjectGameMode() {}
// End Class AAudioProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAudioProjectGameMode, AAudioProjectGameMode::StaticClass, TEXT("AAudioProjectGameMode"), &Z_Registration_Info_UClass_AAudioProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioProjectGameMode), 1002223257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectGameMode_h_88482661(TEXT("/Script/AudioProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
