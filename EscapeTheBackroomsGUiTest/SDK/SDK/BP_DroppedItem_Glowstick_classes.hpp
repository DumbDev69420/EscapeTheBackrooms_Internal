#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x2B5 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_Glowstick.BP_DroppedItem_Glowstick_C
class ABP_DroppedItem_Glowstick_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_11A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 GlowstickID;                                       // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldGlow;                                        // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_11AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_Glowstick_Component_C*             GlowstickComponent;                                // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SpotlightRotation;                                 // 0x2A8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsSpawned;                                         // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_Glowstick_C* GetDefaultObj();

	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DroppedItem_Glowstick(int32 EntryPoint, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FTransform& Temp_struct_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UBP_Glowstick_Component_C* CallFunc_AddComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FGuid& CallFunc_NewGuid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FS_Glowstick_Data& K2Node_MakeStruct_S_Glowstick_Data, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, bool CallFunc_Not_PreBool_ReturnValue);
};

}


