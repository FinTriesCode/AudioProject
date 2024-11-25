// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioSettings_generated_h
#error "SteamAudioSettings.generated.h already included, missing '#pragma once' in SteamAudioSettings.h"
#endif
#define STEAMAUDIO_SteamAudioSettings_generated_h

#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_SPARSE_DATA
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_RPC_WRAPPERS
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioSettings(); \
	friend struct Z_Construct_UClass_USteamAudioSettings_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUSteamAudioSettings(); \
	friend struct Z_Construct_UClass_USteamAudioSettings_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamAudioSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamAudioSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamAudioSettings(USteamAudioSettings&&); \
	NO_API USteamAudioSettings(const USteamAudioSettings&); \
public:


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamAudioSettings(USteamAudioSettings&&); \
	NO_API USteamAudioSettings(const USteamAudioSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioSettings)


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_147_PROLOG
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_SPARSE_DATA \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_RPC_WRAPPERS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_SPARSE_DATA \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSettings_h


#define FOREACH_ENUM_EHRTFNORMTYPE(op) \
	op(EHRTFNormType::NONE) \
	op(EHRTFNormType::RMS) 

enum class EHRTFNormType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EHRTFNormType>();

#define FOREACH_ENUM_EOPENCLDEVICETYPE(op) \
	op(EOpenCLDeviceType::ANY) \
	op(EOpenCLDeviceType::CPU) \
	op(EOpenCLDeviceType::GPU) 

enum class EOpenCLDeviceType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EOpenCLDeviceType>();

#define FOREACH_ENUM_EREFLECTIONEFFECTTYPE(op) \
	op(EReflectionEffectType::CONVOLUTION) \
	op(EReflectionEffectType::PARAMETRIC) \
	op(EReflectionEffectType::HYBRID) \
	op(EReflectionEffectType::TRUEAUDIONEXT) 

enum class EReflectionEffectType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionEffectType>();

#define FOREACH_ENUM_ESCENETYPE(op) \
	op(ESceneType::DEFAULT) \
	op(ESceneType::EMBREE) \
	op(ESceneType::RADEONRAYS) 

enum class ESceneType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<ESceneType>();

#define FOREACH_ENUM_EAUDIOENGINETYPE(op) \
	op(EAudioEngineType::UNREAL) \
	op(EAudioEngineType::FMODSTUDIO) 

enum class EAudioEngineType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EAudioEngineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
