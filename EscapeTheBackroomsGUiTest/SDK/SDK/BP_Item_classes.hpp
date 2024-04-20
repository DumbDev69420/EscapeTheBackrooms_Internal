#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass BP_Item.BP_Item_C
class ABP_Item_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  BaseMesh;                                          // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsConsumable;                                      // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    FOVMaterial;                                       // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_C* GetDefaultObj();

	void SetMaterial(bool EnabledFOV, bool CallFunc_Not_PreBool_ReturnValue);
	void UseItem();
	void UnHide();
	void OnFinishConsume(class AFancyCharacter* Player);
	void ReceiveBeginPlay();
	void OnEventLoaded(enum class EEventType EventType);
	void ToggleEvent(bool Enable);
	void ExecuteUbergraph_BP_Item(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class AFancyCharacter* K2Node_CustomEvent_Player, bool CallFunc_Less_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class EEventType K2Node_CustomEvent_EventType, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_Enable, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
};

}


