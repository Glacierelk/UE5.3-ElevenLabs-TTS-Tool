// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElevenLabs_TTS.h"

#define LOCTEXT_NAMESPACE "FElevenLabs_TTSModule"

void FElevenLabs_TTSModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FElevenLabs_TTSModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FElevenLabs_TTSModule, ElevenLabs_TTS)