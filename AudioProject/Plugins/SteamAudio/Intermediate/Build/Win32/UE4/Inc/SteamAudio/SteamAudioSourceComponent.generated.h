// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMAUDIO_SteamAudioSourceComponent_generated_h
#error "SteamAudioSourceComponent.generated.h already included, missing '#pragma once' in SteamAudioSourceComponent.h"
#endif
#define STEAMAUDIO_SteamAudioSourceComponent_generated_h

#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_SPARSE_DATA
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_RPC_WRAPPERS
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamAudioSourceComponent(); \
	friend struct Z_Construct_UClass_USteamAudioSourceComponent_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSourceComponent)


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUSteamAudioSourceComponent(); \
	friend struct Z_Construct_UClass_USteamAudioSourceComponent_Statics; \
public: \
	DECLARE_CLASS(USteamAudioSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamAudio"), NO_API) \
	DECLARE_SERIALIZER(USteamAudioSourceComponent)


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamAudioSourceComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamAudioSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSourceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamAudioSourceComponent(USteamAudioSourceComponent&&); \
	NO_API USteamAudioSourceComponent(const USteamAudioSourceComponent&); \
public:


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamAudioSourceComponent(USteamAudioSourceComponent&&); \
	NO_API USteamAudioSourceComponent(const USteamAudioSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamAudioSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamAudioSourceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamAudioSourceComponent)


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_65_PROLOG
#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_SPARSE_DATA \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_RPC_WRAPPERS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_INCLASS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_SPARSE_DATA \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMAUDIO_API UClass* StaticClass<class USteamAudioSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSourceComponent_h


#define FOREACH_ENUM_EREFLECTIONSIMULATIONTYPE(op) \
	op(EReflectionSimulationType::REALTIME) \
	op(EReflectionSimulationType::BAKED_STATIC_SOURCE) \
	op(EReflectionSimulationType::BAKED_STATIC_LISTENER) 

enum class EReflectionSimulationType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EReflectionSimulationType>();

#define FOREACH_ENUM_EOCCLUSIONTYPE(op) \
	op(EOcclusionType::RAYCAST) \
	op(EOcclusionType::VOLUMETRIC) 

enum class EOcclusionType : uint8;
template<> STEAMAUDIO_API UEnum* StaticEnum<EOcclusionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
