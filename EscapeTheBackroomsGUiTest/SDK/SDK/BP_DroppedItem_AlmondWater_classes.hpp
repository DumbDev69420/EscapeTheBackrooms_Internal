#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x278 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_AlmondWater.BP_DroppedItem_AlmondWater_C
class ABP_DroppedItem_AlmondWater_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_2061[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_AlmondWater_C* GetDefaultObj();

	void ToggleEvent(bool Enable);
	void OnEventLoaded(enum class EEventType EventType);
	void ExecuteUbergraph_BP_DroppedItem_AlmondWater(int32 EntryPoint, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType);
};

}


