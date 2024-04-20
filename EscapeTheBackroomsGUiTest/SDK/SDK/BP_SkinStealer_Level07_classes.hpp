#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x562 - 0x545)
// BlueprintGeneratedClass BP_SkinStealer_Level07.BP_SkinStealer_Level07_C
class ABP_SkinStealer_Level07_C : public ABP_SkinStealer_C
{
public:
	uint8                                        Pad_22AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_0_Speed_D7C79FA14894E597DC9F8A98D999EEAE; // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_D7C79FA14894E597DC9F8A98D999EEAE; // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LessSight;                                         // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         LessSpeed;                                         // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_SkinStealer_Level07_C* GetDefaultObj();

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void UpdateEvent();
	void ReceiveBeginPlay();
	void JumpTimer();
	void ToggleSprint(bool IsSprinting);
	void ExecuteUbergraph_BP_SkinStealer_Level07(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIC_SkinStealer_C* K2Node_DynamicCast_AsAIC_Skin_Stealer, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, bool K2Node_Event_IsSprinting, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


