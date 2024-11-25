// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamAudioListenerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioListenerComponent_generated_h
#error "SteamAudioListenerComponent.generated.h already included, missing '#pragma once' in SteamAudioListenerComponent.h"
#endif
#define STEAMAUDIO_SteamAudioListenerComponent_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioListenerComponent(); \
	friend struct Z_Construct_UClass_USteamAudioListenerComponent_Statics; \
public: \
	DECLARE_CLASS(USteamAudioListenerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioListenerComponent)


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamAudioListenerComponent(USteamAudioListenerComponent&&); \
	USteamAudioListenerComponent(const USteamAudioListenerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioListenerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioListenerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioListenerComponent) \
	NO_API virtual ~USteamAudioListenerComponent();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_48_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioListenerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioListenerComponent_h


#define FOREACH_ENUM_EREVERBSIMULATIONTYPE(op) \
	op(EReverbSimulationType::REALTIME) \
	op(EReverbSimulationType::BAKED) 

enum class EReverbSimulationType : uint8;
template<> struct TIsUEnumClass<EReverbSimulationType> { enum { Value = true }; };
template<> STEAMAUDIO_API UEnum* StaticEnum<EReverbSimulationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
