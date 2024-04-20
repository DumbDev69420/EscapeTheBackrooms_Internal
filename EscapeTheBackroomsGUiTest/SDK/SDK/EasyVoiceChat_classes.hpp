#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class EasyVoiceChat.VoiceFunctionLibrary
class UVoiceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVoiceFunctionLibrary* GetDefaultObj();

	TArray<class APawn*> GetAllPawnsFromState(class UObject* WorldContextObject, class APawn* CurrentPlayer, float Distance);
};

// 0x20 (0x740 - 0x720)
// Class EasyVoiceChat.VoipAudioComponent
class UVoipAudioComponent : public UVoipListenerSynthComponent
{
public:
	uint8                                        Pad_D43[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipAudioComponent* GetDefaultObj();

	void PlayVoiceData(TArray<uint8>& CompressedVoiceData);
};

// 0xD8 (0x188 - 0xB0)
// Class EasyVoiceChat.VoipManagerComponent
class UVoipManagerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            VoiceGenerated;                                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerTalking;                                     // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerStopTalking;                                 // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0x8C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StopTalkingThreshold;                              // 0x16C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoSetConsoleVariables;                          // 0x170(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SilenceDetectionThreshold;                         // 0x174(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        NoiseGateThreshold;                                // 0x178(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VoiceBufferDelay;                                  // 0x17C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D4A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipManagerComponent* GetDefaultObj();

	void OnVoiceGeneratedBP(TArray<uint8>& VoiceBuffer, float MicLevel);
	void OnPlayerStopTalking();
	void OnPlayerStartTalking();
	bool InitVoice(class AController* Controller);
	TArray<class FString> GetCaptureDevices();
	bool ChangeAudioCaptureDevice(const class FString& NewDeviceName);
};

}


