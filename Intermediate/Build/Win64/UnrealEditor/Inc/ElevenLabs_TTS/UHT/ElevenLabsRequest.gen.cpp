// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../ElevenLabs_TTS/Public/ElevenLabsRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevenLabsRequest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELEVENLABS_TTS_API UClass* Z_Construct_UClass_UElevenLabsRequest();
	ELEVENLABS_TTS_API UClass* Z_Construct_UClass_UElevenLabsRequest_NoRegister();
	ELEVENLABS_TTS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature();
	ELEVENLABS_TTS_API UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ElevenLabs_TTS();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics
	{
		struct _Script_ElevenLabs_TTS_eventOnActionCompleted_Parms
		{
			USoundWave* SoundWave;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_TTS_eventOnActionCompleted_Parms, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs_TTS, nullptr, "OnActionCompleted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::_Script_ElevenLabs_TTS_eventOnActionCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::_Script_ElevenLabs_TTS_eventOnActionCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnActionCompleted, USoundWave* SoundWave)
{
	struct _Script_ElevenLabs_TTS_eventOnActionCompleted_Parms
	{
		USoundWave* SoundWave;
	};
	_Script_ElevenLabs_TTS_eventOnActionCompleted_Parms Parms;
	Parms.SoundWave=SoundWave;
	OnActionCompleted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics
	{
		struct _Script_ElevenLabs_TTS_eventOnActionFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ElevenLabs_TTS_eventOnActionFailed_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData), Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ElevenLabs_TTS, nullptr, "OnActionFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::_Script_ElevenLabs_TTS_eventOnActionFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::_Script_ElevenLabs_TTS_eventOnActionFailed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnActionFailed_DelegateWrapper(const FMulticastScriptDelegate& OnActionFailed, const FString& ErrorMessage)
{
	struct _Script_ElevenLabs_TTS_eventOnActionFailed_Parms
	{
		FString ErrorMessage;
	};
	_Script_ElevenLabs_TTS_eventOnActionFailed_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	OnActionFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UElevenLabsRequest::execTextToSpeech)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimilarityBoost);
		P_GET_PROPERTY(FStrProperty,Z_Param_API_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UElevenLabsRequest**)Z_Param__Result=UElevenLabsRequest::TextToSpeech(Z_Param_WorldContextObject,Z_Param_VoiceId,Z_Param_Text,Z_Param_Stability,Z_Param_SimilarityBoost,Z_Param_API_Key);
		P_NATIVE_END;
	}
	void UElevenLabsRequest::StaticRegisterNativesUElevenLabsRequest()
	{
		UClass* Class = UElevenLabsRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextToSpeech", &UElevenLabsRequest::execTextToSpeech },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics
	{
		struct ElevenLabsRequest_eventTextToSpeech_Parms
		{
			UObject* WorldContextObject;
			FString VoiceId;
			FString Text;
			float Stability;
			float SimilarityBoost;
			FString API_Key;
			UElevenLabsRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimilarityBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_API_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_API_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_VoiceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_VoiceId = { "VoiceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, VoiceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_VoiceId_MetaData), Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_VoiceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Stability = { "Stability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, Stability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_SimilarityBoost = { "SimilarityBoost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, SimilarityBoost), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_API_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_API_Key = { "API_Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, API_Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_API_Key_MetaData), Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_API_Key_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElevenLabsRequest_eventTextToSpeech_Parms, ReturnValue), Z_Construct_UClass_UElevenLabsRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_VoiceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_Stability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_SimilarityBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_API_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "ElevenLabs" },
		{ "DisplayName", "Text to Speech" },
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UElevenLabsRequest, nullptr, "TextToSpeech", nullptr, nullptr, Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::PropPointers), sizeof(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::ElevenLabsRequest_eventTextToSpeech_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::Function_MetaDataParams), Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::ElevenLabsRequest_eventTextToSpeech_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UElevenLabsRequest);
	UClass* Z_Construct_UClass_UElevenLabsRequest_NoRegister()
	{
		return UElevenLabsRequest::StaticClass();
	}
	struct Z_Construct_UClass_UElevenLabsRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElevenLabsRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ElevenLabs_TTS,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UElevenLabsRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UElevenLabsRequest_TextToSpeech, "TextToSpeech" }, // 1753500545
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ElevenLabsRequest.h" },
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsRequest, OnCompleted), Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted_MetaData) }; // 1175521143
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsRequest, OnFailed), Z_Construct_UDelegateFunction_ElevenLabs_TTS_OnActionFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData), Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed_MetaData) }; // 571427312
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ElevenLabsRequest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UElevenLabsRequest, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData), Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_OnFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElevenLabsRequest_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElevenLabsRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElevenLabsRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UElevenLabsRequest_Statics::ClassParams = {
		&UElevenLabsRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams), Z_Construct_UClass_UElevenLabsRequest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UElevenLabsRequest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UElevenLabsRequest()
	{
		if (!Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton, Z_Construct_UClass_UElevenLabsRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UElevenLabsRequest.OuterSingleton;
	}
	template<> ELEVENLABS_TTS_API UClass* StaticClass<UElevenLabsRequest>()
	{
		return UElevenLabsRequest::StaticClass();
	}
	UElevenLabsRequest::UElevenLabsRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElevenLabsRequest);
	UElevenLabsRequest::~UElevenLabsRequest() {}
	struct Z_CompiledInDeferFile_FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UElevenLabsRequest, UElevenLabsRequest::StaticClass, TEXT("UElevenLabsRequest"), &Z_Registration_Info_UClass_UElevenLabsRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UElevenLabsRequest), 1416804799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_2937406001(TEXT("/Script/ElevenLabs_TTS"),
		Z_CompiledInDeferFile_FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
