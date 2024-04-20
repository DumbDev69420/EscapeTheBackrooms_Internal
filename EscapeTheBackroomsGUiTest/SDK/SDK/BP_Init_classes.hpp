#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_Init.BP_Init_C
class ABP_Init_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                  MediaSound;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  Password;                                          // 0x238(0x18)(Edit, BlueprintVisible)
	class UUI_Desktop_C*                         DesktopWidget;                                     // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Init_C* GetDefaultObj();

	void Logined(class UUI_SignIn_C* Widget);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Init(int32 EntryPoint, class UUI_Desktop_C* CallFunc_Create_ReturnValue, class UUI_SignIn_C* CallFunc_Create_ReturnValue_1, class UUI_SignIn_C* K2Node_CustomEvent_Widget, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}


