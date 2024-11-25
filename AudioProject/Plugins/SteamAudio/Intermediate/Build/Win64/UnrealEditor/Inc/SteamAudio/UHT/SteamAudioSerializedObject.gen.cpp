// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioSerializedObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSerializedObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSerializedObject();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSerializedObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioSerializedObject
void USteamAudioSerializedObject::StaticRegisterNativesUSteamAudioSerializedObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSerializedObject);
UClass* Z_Construct_UClass_USteamAudioSerializedObject_NoRegister()
{
	return USteamAudioSerializedObject::StaticClass();
}
struct Z_Construct_UClass_USteamAudioSerializedObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An object containing data from an IPLSerializedObject that can be serialized to a .uasset file.\n */" },
#endif
		{ "IncludePath", "SteamAudioSerializedObject.h" },
		{ "ModuleRelativePath", "Public/SteamAudioSerializedObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An object containing data from an IPLSerializedObject that can be serialized to a .uasset file." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The data to serialize. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioSerializedObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The data to serialize." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSerializedObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSerializedObject_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamAudioSerializedObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioSerializedObject, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSerializedObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSerializedObject_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSerializedObject_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSerializedObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioSerializedObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSerializedObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSerializedObject_Statics::ClassParams = {
	&USteamAudioSerializedObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioSerializedObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSerializedObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSerializedObject_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioSerializedObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioSerializedObject()
{
	if (!Z_Registration_Info_UClass_USteamAudioSerializedObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSerializedObject.OuterSingleton, Z_Construct_UClass_USteamAudioSerializedObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioSerializedObject.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSerializedObject>()
{
	return USteamAudioSerializedObject::StaticClass();
}
USteamAudioSerializedObject::USteamAudioSerializedObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSerializedObject);
USteamAudioSerializedObject::~USteamAudioSerializedObject() {}
// End Class USteamAudioSerializedObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSerializedObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSerializedObject, USteamAudioSerializedObject::StaticClass, TEXT("USteamAudioSerializedObject"), &Z_Registration_Info_UClass_USteamAudioSerializedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSerializedObject), 1716827699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSerializedObject_h_1416336032(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSerializedObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioSerializedObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
