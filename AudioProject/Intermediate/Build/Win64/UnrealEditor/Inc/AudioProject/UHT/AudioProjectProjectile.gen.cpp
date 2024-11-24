// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioProject/AudioProjectProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioProjectProjectile() {}

// Begin Cross Module References
AUDIOPROJECT_API UClass* Z_Construct_UClass_AAudioProjectProjectile();
AUDIOPROJECT_API UClass* Z_Construct_UClass_AAudioProjectProjectile_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_AudioProject();
// End Cross Module References

// Begin Class AAudioProjectProjectile Function OnHit
struct Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics
{
	struct AudioProjectProjectile_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when projectile hits something */" },
#endif
		{ "ModuleRelativePath", "AudioProjectProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when projectile hits something" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioProjectProjectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioProjectProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioProjectProjectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioProjectProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioProjectProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAudioProjectProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::AudioProjectProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::AudioProjectProjectile_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAudioProjectProjectile_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAudioProjectProjectile_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAudioProjectProjectile::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AAudioProjectProjectile Function OnHit

// Begin Class AAudioProjectProjectile
void AAudioProjectProjectile::StaticRegisterNativesAAudioProjectProjectile()
{
	UClass* Class = AAudioProjectProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &AAudioProjectProjectile::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAudioProjectProjectile);
UClass* Z_Construct_UClass_AAudioProjectProjectile_NoRegister()
{
	return AAudioProjectProjectile::StaticClass();
}
struct Z_Construct_UClass_AAudioProjectProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AudioProjectProjectile.h" },
		{ "ModuleRelativePath", "AudioProjectProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere collision component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioProjectProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere collision component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Projectile movement component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AudioProjectProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile movement component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAudioProjectProjectile_OnHit, "OnHit" }, // 607424962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAudioProjectProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioProjectProjectile_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioProjectProjectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAudioProjectProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAudioProjectProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAudioProjectProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioProjectProjectile_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAudioProjectProjectile_Statics::NewProp_ProjectileMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAudioProjectProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAudioProjectProjectile_Statics::ClassParams = {
	&AAudioProjectProjectile::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAudioProjectProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectProjectile_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAudioProjectProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAudioProjectProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAudioProjectProjectile()
{
	if (!Z_Registration_Info_UClass_AAudioProjectProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAudioProjectProjectile.OuterSingleton, Z_Construct_UClass_AAudioProjectProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAudioProjectProjectile.OuterSingleton;
}
template<> AUDIOPROJECT_API UClass* StaticClass<AAudioProjectProjectile>()
{
	return AAudioProjectProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAudioProjectProjectile);
AAudioProjectProjectile::~AAudioProjectProjectile() {}
// End Class AAudioProjectProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAudioProjectProjectile, AAudioProjectProjectile::StaticClass, TEXT("AAudioProjectProjectile"), &Z_Registration_Info_UClass_AAudioProjectProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAudioProjectProjectile), 1033368079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_1343192101(TEXT("/Script/AudioProject"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Source_AudioProject_AudioProjectProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS