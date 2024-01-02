// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevenLabs_TTS_init() {}
	ELEVENLABS_TTS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature();
	ELEVENLABS_TTS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ElevenLabs_TTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ElevenLabs_TTS()
	{
		if (!Z_Registration_Info_UPackage__Script_ElevenLabs_TTS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ElevenLabs_TTS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEC9AA452,
				0x2C17B756,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ElevenLabs_TTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ElevenLabs_TTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ElevenLabs_TTS(Z_Construct_UPackage__Script_ElevenLabs_TTS, TEXT("/Script/ElevenLabs_TTS"), Z_Registration_Info_UPackage__Script_ElevenLabs_TTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEC9AA452, 0x2C17B756));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
