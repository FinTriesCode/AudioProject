// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAudioProbeVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioProbeVolume_generated_h
#error "SteamAudioProbeVolume.generated.h already included, missing '#pragma once' in SteamAudioProbeVolume.h"
#endif
#define STEAMAUDIO_SteamAudioProbeVolume_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAudioBakedDataInfo_Statics; \
	STEAMAUDIO_API static class UScriptStruct* StaticStruct();


template<> STEAMAUDIO_API UScriptStruct* StaticStruct<struct FSteamAudioBakedDataInfo>();

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteamAudioProbeVolume(); \
	friend struct Z_Construct_UClass_ASteamAudioProbeVolume_Statics; \
public: \
	DECLARE_CLASS(ASteamAudioProbeVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(ASteamAudioProbeVolume)


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASteamAudioProbeVolume(ASteamAudioProbeVolume&&); \
	ASteamAudioProbeVolume(const ASteamAudioProbeVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteamAudioProbeVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteamAudioProbeVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASteamAudioProbeVolume) \
	NO_API virtual ~ASteamAudioProbeVolume();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_86_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_89_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class ASteamAudioProbeVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioProbeVolume_h


#define FOREACH_ENUM_EPROBEGENERATIONTYPE(op) \
	op(EProbeGenerationType::CENTROID) \
	op(EProbeGenerationType::UNIFORM_FLOOR) 

enum class EProbeGenerationType : uint8;
template<> struct TIsUEnumClass<EProbeGenerationType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EProbeGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
