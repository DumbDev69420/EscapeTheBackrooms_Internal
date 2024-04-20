#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EasyVoiceChat.VoiceFunctionLibrary
// (None)

class UClass* UVoiceFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceFunctionLibrary");

	return Clss;
}


// VoiceFunctionLibrary EasyVoiceChat.Default__VoiceFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoiceFunctionLibrary* UVoiceFunctionLibrary::GetDefaultObj()
{
	static class UVoiceFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceFunctionLibrary*>(UVoiceFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyVoiceChat.VoiceFunctionLibrary.GetAllPawnsFromState
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       CurrentPlayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APawn*>               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class APawn*> UVoiceFunctionLibrary::GetAllPawnsFromState(class UObject* WorldContextObject, class APawn* CurrentPlayer, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceFunctionLibrary", "GetAllPawnsFromState");

	Params::UVoiceFunctionLibrary_GetAllPawnsFromState_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CurrentPlayer = CurrentPlayer;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class EasyVoiceChat.VoipAudioComponent
// (SceneComponent)

class UClass* UVoipAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipAudioComponent");

	return Clss;
}


// VoipAudioComponent EasyVoiceChat.Default__VoipAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipAudioComponent* UVoipAudioComponent::GetDefaultObj()
{
	static class UVoipAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipAudioComponent*>(UVoipAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyVoiceChat.VoipAudioComponent.PlayVoiceData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      CompressedVoiceData                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVoipAudioComponent::PlayVoiceData(TArray<uint8>& CompressedVoiceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipAudioComponent", "PlayVoiceData");

	Params::UVoipAudioComponent_PlayVoiceData_Params Parms{};

	Parms.CompressedVoiceData = CompressedVoiceData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class EasyVoiceChat.VoipManagerComponent
// (None)

class UClass* UVoipManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipManagerComponent");

	return Clss;
}


// VoipManagerComponent EasyVoiceChat.Default__VoipManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipManagerComponent* UVoipManagerComponent::GetDefaultObj()
{
	static class UVoipManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipManagerComponent*>(UVoipManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<uint8>                      VoiceBuffer                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              MicLevel                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoipManagerComponent::OnVoiceGeneratedBP(TArray<uint8>& VoiceBuffer, float MicLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "OnVoiceGeneratedBP");

	Params::UVoipManagerComponent_OnVoiceGeneratedBP_Params Parms{};

	Parms.VoiceBuffer = VoiceBuffer;
	Parms.MicLevel = MicLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoipManagerComponent::OnPlayerStopTalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "OnPlayerStopTalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVoipManagerComponent::OnPlayerStartTalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "OnPlayerStartTalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EasyVoiceChat.VoipManagerComponent.InitVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoipManagerComponent::InitVoice(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "InitVoice");

	Params::UVoipManagerComponent_InitVoice_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyVoiceChat.VoipManagerComponent.GetCaptureDevices
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVoipManagerComponent::GetCaptureDevices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "GetCaptureDevices");

	Params::UVoipManagerComponent_GetCaptureDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EasyVoiceChat.VoipManagerComponent.ChangeAudioCaptureDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewDeviceName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVoipManagerComponent::ChangeAudioCaptureDevice(const class FString& NewDeviceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipManagerComponent", "ChangeAudioCaptureDevice");

	Params::UVoipManagerComponent_ChangeAudioCaptureDevice_Params Parms{};

	Parms.NewDeviceName = NewDeviceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


