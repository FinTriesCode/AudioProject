// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioProject_init() {}
	AUDIOPROJECT_API UFunction* Z_Construct_UDelegateFunction_AudioProject_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AudioProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AudioProject()
	{
		if (!Z_Registration_Info_UPackage__Script_AudioProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AudioProject_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AudioProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B8AF440,
				0x64451BDC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AudioProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AudioProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AudioProject(Z_Construct_UPackage__Script_AudioProject, TEXT("/Script/AudioProject"), Z_Registration_Info_UPackage__Script_AudioProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B8AF440, 0x64451BDC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
