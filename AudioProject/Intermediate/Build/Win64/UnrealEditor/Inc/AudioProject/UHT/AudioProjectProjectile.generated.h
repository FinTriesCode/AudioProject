// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AUDIOPROJECT_AudioProjectProjectile_generated_h
#error "AudioProjectProjectile.generated.h already included, missing '#pragma once' in AudioProjectProjectile.h"
#endif
#define AUDIOPROJECT_AudioProjectProjectile_generated_h

#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioProjectProjectile(); \
	friend struct Z_Construct_UClass_AAudioProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AAudioProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioProject"), NO_API) \
	DECLARE_SERIALIZER(AAudioProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAudioProjectProjectile(AAudioProjectProjectile&&); \
	AAudioProjectProjectile(const AAudioProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAudioProjectProjectile) \
	NO_API virtual ~AAudioProjectProjectile();


#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_12_PROLOG
#define FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOPROJECT_API UClass* StaticClass<class AAudioProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
