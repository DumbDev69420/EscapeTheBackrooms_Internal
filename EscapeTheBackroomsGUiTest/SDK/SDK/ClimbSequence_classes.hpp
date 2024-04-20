#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass ClimbSequence.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent_0();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AMP_Level94_C* K2Node_DynamicCast_AsMP_Level_94, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsStandalone_ReturnValue);
};

}


