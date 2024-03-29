// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ElevenLabsRequest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UElevenLabsRequest;
class UObject;
class USoundWave;
#ifdef ELEVENLABS_TTS_ElevenLabsRequest_generated_h
#error "ElevenLabsRequest.generated.h already included, missing '#pragma once' in ElevenLabsRequest.h"
#endif
#define ELEVENLABS_TTS_ElevenLabsRequest_generated_h

#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_9_DELEGATE \
ELEVENLABS_TTS_API void FOnActionCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnActionCompleted, USoundWave* SoundWave);


#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_10_DELEGATE \
ELEVENLABS_TTS_API void FOnActionFailed_DelegateWrapper(const FMulticastScriptDelegate& OnActionFailed, const FString& ErrorMessage);


#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_SPARSE_DATA
#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTextToSpeech);


#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_ACCESSORS
#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElevenLabsRequest(); \
	friend struct Z_Construct_UClass_UElevenLabsRequest_Statics; \
public: \
	DECLARE_CLASS(UElevenLabsRequest, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElevenLabs_TTS"), NO_API) \
	DECLARE_SERIALIZER(UElevenLabsRequest)


#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElevenLabsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElevenLabsRequest(UElevenLabsRequest&&); \
	NO_API UElevenLabsRequest(const UElevenLabsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElevenLabsRequest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElevenLabsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElevenLabsRequest) \
	NO_API virtual ~UElevenLabsRequest();


#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_12_PROLOG
#define FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_SPARSE_DATA \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_ACCESSORS \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_INCLASS_NO_PURE_DECLS \
	FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELEVENLABS_TTS_API UClass* StaticClass<class UElevenLabsRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ElevenLabsTTS_Plugins_ElevenLabs_TTS_Source_ElevenLabs_TTS_Public_ElevenLabsRequest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
