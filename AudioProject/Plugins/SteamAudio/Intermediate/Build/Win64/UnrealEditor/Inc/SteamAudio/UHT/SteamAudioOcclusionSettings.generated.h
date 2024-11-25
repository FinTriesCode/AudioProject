// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAudioOcclusionSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioOcclusionSettings_generated_h
#error "SteamAudioOcclusionSettings.generated.h already included, missing '#pragma once' in SteamAudioOcclusionSettings.h"
#endif
#define STEAMAUDIO_SteamAudioOcclusionSettings_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioOcclusionSettings(); \
	friend struct Z_Construct_UClass_USteamAudioOcclusionSettings_Statics; \
public: \
	DECLARE_CLASS(USteamAudioOcclusionSettings, UOcclusionPluginSourceSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioOcclusionSettings)


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamAudioOcclusionSettings(USteamAudioOcclusionSettings&&); \
	USteamAudioOcclusionSettings(const USteamAudioOcclusionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioOcclusionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioOcclusionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioOcclusionSettings) \
	NO_API virtual ~USteamAudioOcclusionSettings();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_43_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_46_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioOcclusionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioOcclusionSettings_h


#define FOREACH_ENUM_ETRANSMISSIONTYPE(op) \
	op(ETransmissionType::FREQUENCY_INDEPENDENT) \
	op(ETransmissionType::FREQUENCY_DEPENDENT) 

enum class ETransmissionType : uint8;
template<> struct TIsUEnumClass<ETransmissionType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<ETransmissionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
