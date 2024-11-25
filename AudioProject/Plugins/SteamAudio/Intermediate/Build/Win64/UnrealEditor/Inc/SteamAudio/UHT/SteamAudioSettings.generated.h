// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAudioSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioSettings_generated_h
#error "SteamAudioSettings.generated.h already included, missing '#pragma once' in SteamAudioSettings.h"
#endif
#define STEAMAUDIO_SteamAudioSettings_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioSettings(); \
	friend struct Z_Construct_UClass_USteamAudioSettings_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamAudioSettings(USteamAudioSettings&&); \
	USteamAudioSettings(const USteamAudioSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioSettings) \
	NO_API virtual ~USteamAudioSettings();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_147_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h


#define FOREACH_ENUM_EAUDIOENGINETYPE(op) \
	op(EAudioEngineType::UNREAL) \
	op(EAudioEngineType::FMODSTUDIO) 

enum class EAudioEngineType : uint8;
template<> struct TIsUEnumClass<EAudioEngineType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EAudioEngineType>();

#define FOREACH_ENUM_ESCENETYPE(op) \
	op(ESceneType::DEFAULT) \
	op(ESceneType::EMBREE) \
	op(ESceneType::RADEONRAYS) 

enum class ESceneType : uint8;
template<> struct TIsUEnumClass<ESceneType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<ESceneType>();

#define FOREACH_ENUM_EREFLECTIONEFFECTTYPE(op) \
	op(EReflectionEffectType::CONVOLUTION) \
	op(EReflectionEffectType::PARAMETRIC) \
	op(EReflectionEffectType::HYBRID) \
	op(EReflectionEffectType::TRUEAUDIONEXT) 

enum class EReflectionEffectType : uint8;
template<> struct TIsUEnumClass<EReflectionEffectType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionEffectType>();

#define FOREACH_ENUM_EOPENCLDEVICETYPE(op) \
	op(EOpenCLDeviceType::ANY) \
	op(EOpenCLDeviceType::CPU) \
	op(EOpenCLDeviceType::GPU) 

enum class EOpenCLDeviceType : uint8;
template<> struct TIsUEnumClass<EOpenCLDeviceType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EOpenCLDeviceType>();

#define FOREACH_ENUM_EHRTFNORMTYPE(op) \
	op(EHRTFNormType::NONE) \
	op(EHRTFNormType::RMS) 

enum class EHRTFNormType : uint8;
template<> struct TIsUEnumClass<EHRTFNormType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFNormType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
