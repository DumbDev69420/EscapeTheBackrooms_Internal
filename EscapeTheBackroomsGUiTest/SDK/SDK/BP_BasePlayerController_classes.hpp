#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x578 - 0x570)
// BlueprintGeneratedClass BP_BasePlayerController.BP_BasePlayerController_C
class ABP_BasePlayerController_C : public AFancyPlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_BasePlayerController_C* GetDefaultObj();

	void UnlockAchievement(class FName AchievementName);
	void ExecuteUbergraph_BP_BasePlayerController(int32 EntryPoint, class FName K2Node_CustomEvent_AchievementName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


