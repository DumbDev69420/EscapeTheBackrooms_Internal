#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass BP_MothJelly.BP_MothJelly_C
class ABP_MothJelly_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        HoverDown_Z_EB7179E447BA8799493D5BACD216363D;      // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HoverDown__Direction_EB7179E447BA8799493D5BACD216363D; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_219F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    HoverDown;                                         // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MothJelly_C* GetDefaultObj();

	void HoverDown__FinishedFunc();
	void HoverDown__UpdateFunc();
	void OnNotifyEnd_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnNotifyBegin_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnInterrupted_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnBlendOut_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void OnCompleted_1CCDCF174099237E391B5AA1C23BF140(class FName NotifyName);
	void UseItem();
	void PlayAnimation();
	void SRV_FinishEat();
	void ToggleEvent(bool Enable);
	void OnEventLoaded(enum class EEventType EventType);
	void ExecuteUbergraph_BP_MothJelly(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AMP_PS_C* K2Node_DynamicCast_AsMP_PS, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


