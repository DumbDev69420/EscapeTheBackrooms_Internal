#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// BlueprintGeneratedClass OceanMap.OceanMap_C
class AOceanMap_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AOceanMap_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_OceanMap(int32 EntryPoint, class AEight_FFT_H_Ocean_Sim_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class AEight_FFT_H_Ocean_Sim_C* CallFunc_GetActorOfClass_ReturnValue_1, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
};

}


