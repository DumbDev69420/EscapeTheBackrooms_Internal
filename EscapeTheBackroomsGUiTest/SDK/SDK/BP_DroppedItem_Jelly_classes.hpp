#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x278 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_Jelly.BP_DroppedItem_Jelly_C
class ABP_DroppedItem_Jelly_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_1206[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_Jelly_C* GetDefaultObj();

	void ToggleEvent(bool Enable);
	void OnEventLoaded(enum class EEventType EventType);
	void ExecuteUbergraph_BP_DroppedItem_Jelly(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_SetStaticMesh_ReturnValue, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


