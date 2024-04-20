#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x2A0 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C
class ABP_DroppedItem_LiquidPain_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_231E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Flicker_Intensity_3E1E3A82480AD561393A36ACF538BD22; // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Flicker__Direction_3E1E3A82480AD561393A36ACF538BD22; // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_231F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Flicker;                                           // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APointLight*                           Bulb;                                              // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_LiquidPain_C* GetDefaultObj();

	void Flicker__FinishedFunc();
	void Flicker__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DroppedItem_LiquidPain(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


