// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAudioSpatializationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioSpatializationSettings_generated_h
#error "SteamAudioSpatializationSettings.generated.h already included, missing '#pragma once' in SteamAudioSpatializationSettings.h"
#endif
#define STEAMAUDIO_SteamAudioSpatializationSettings_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioSpatializationSettings(); \
	friend struct Z_Construct_UClass_USteamAudioSpatializationSettings_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSpatializationSettings, USpatializationPluginSourceSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSpatializationSettings)


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamAudioSpatializationSettings(USteamAudioSpatializationSettings&&); \
	USteamAudioSpatializationSettings(const USteamAudioSpatializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSpatializationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSpatializationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioSpatializationSettings) \
	NO_API virtual ~USteamAudioSpatializationSettings();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_45_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_48_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioSpatializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSpatializationSettings_h


#define FOREACH_ENUM_EHRTFINTERPOLATION(op) \
	op(EHRTFInterpolation::NEAREST) \
	op(EHRTFInterpolation::BILINEAR) 

enum class EHRTFInterpolation : uint8;
template<> struct TIsUEnumClass<EHRTFInterpolation> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFInterpolation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
