// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamAudio/Public/SteamAudioGeometryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioGeometryComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioGeometryComponent();
STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioGeometryComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References

// Begin Class USteamAudioGeometryComponent
void USteamAudioGeometryComponent::StaticRegisterNativesUSteamAudioGeometryComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioGeometryComponent);
UClass* Z_Construct_UClass_USteamAudioGeometryComponent_NoRegister()
{
	return USteamAudioGeometryComponent::StaticClass();
}
struct Z_Construct_UClass_USteamAudioGeometryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamAudio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Tags an actor (and optionally its children) as containing geometry that should be exported to Steam Audio. This\n * should be attached to Static Mesh actors or Landscape actors.\n */" },
#endif
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "SteamAudioGeometryComponent.h" },
		{ "ModuleRelativePath", "Public/SteamAudioGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags an actor (and optionally its children) as containing geometry that should be exported to Steam Audio. This\nshould be attached to Static Mesh actors or Landscape actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "AllowedClasses", "/Script/SteamAudio.SteamAudioMaterial" },
		{ "Category", "MaterialSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the material asset that should be applied to all triangles exported as part of this component. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the material asset that should be applied to all triangles exported as part of this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExportAllChildren_MetaData[] = {
		{ "Category", "ExportSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether or not to export all actors attached to this actor. */" },
#endif
		{ "ModuleRelativePath", "Public/SteamAudioGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not to export all actors attached to this actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[] = {
		{ "Category", "GeometryStatistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of vertices exported to Steam Audio. */" },
#endif
		{ "DisplayName", "Vertices" },
		{ "ModuleRelativePath", "Public/SteamAudioGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of vertices exported to Steam Audio." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTriangles_MetaData[] = {
		{ "Category", "GeometryStatistics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The number of triangles exported to Steam Audio. */" },
#endif
		{ "DisplayName", "Triangles" },
		{ "ModuleRelativePath", "Public/SteamAudioGeometryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of triangles exported to Steam Audio." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static void NewProp_bExportAllChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAllChildren;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTriangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioGeometryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioGeometryComponent, Material), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
void Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_bExportAllChildren_SetBit(void* Obj)
{
	((USteamAudioGeometryComponent*)Obj)->bExportAllChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_bExportAllChildren = { "bExportAllChildren", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamAudioGeometryComponent), &Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_bExportAllChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExportAllChildren_MetaData), NewProp_bExportAllChildren_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioGeometryComponent, NumVertices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVertices_MetaData), NewProp_NumVertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_NumTriangles = { "NumTriangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamAudioGeometryComponent, NumTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTriangles_MetaData), NewProp_NumTriangles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioGeometryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_bExportAllChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_NumVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioGeometryComponent_Statics::NewProp_NumTriangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioGeometryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamAudioGeometryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioGeometryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioGeometryComponent_Statics::ClassParams = {
	&USteamAudioGeometryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamAudioGeometryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioGeometryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioGeometryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamAudioGeometryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamAudioGeometryComponent()
{
	if (!Z_Registration_Info_UClass_USteamAudioGeometryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioGeometryComponent.OuterSingleton, Z_Construct_UClass_USteamAudioGeometryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamAudioGeometryComponent.OuterSingleton;
}
template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioGeometryComponent>()
{
	return USteamAudioGeometryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioGeometryComponent);
USteamAudioGeometryComponent::~USteamAudioGeometryComponent() {}
// End Class USteamAudioGeometryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioGeometryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioGeometryComponent, USteamAudioGeometryComponent::StaticClass, TEXT("USteamAudioGeometryComponent"), &Z_Registration_Info_UClass_USteamAudioGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioGeometryComponent), 3292037846U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioGeometryComponent_h_152951264(TEXT("/Script/SteamAudio"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_Uni_Work_AudioProject_AudioProject_AudioProject_Plugins_SteamAudio_Source_SteamAudio_Public_SteamAudioGeometryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
