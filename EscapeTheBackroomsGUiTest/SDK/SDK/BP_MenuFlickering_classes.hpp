#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x250 - 0x238)
// BlueprintGeneratedClass BP_MenuFlickering.BP_MenuFlickering_C
class ABP_MenuFlickering_C : public ARectLight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Flicker_intensity_7470E4D144FA0CFB3FCB89A1420556C7; // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Flicker__Direction_7470E4D144FA0CFB3FCB89A1420556C7; // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Flicker;                                           // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MenuFlickering_C* GetDefaultObj();

	void Flicker__FinishedFunc();
	void Flicker__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MenuFlickering(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


