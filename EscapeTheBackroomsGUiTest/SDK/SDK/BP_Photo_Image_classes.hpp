#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x260 - 0x248)
// BlueprintGeneratedClass BP_Photo_Image.BP_Photo_Image_C
class ABP_Photo_Image_C : public AClientInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        PictureIndex;                                      // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Photo_Image_C* GetDefaultObj();

	void UserConstructionScript(int32 Temp_int_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, int32 Temp_int_Variable_1, class UMaterialInterface* Temp_object_Variable_6, class UMaterialInterface* Temp_object_Variable_7, class UMaterialInterface* Temp_object_Variable_8, class UMaterialInterface* Temp_object_Variable_9, class UMaterialInterface* Temp_object_Variable_10, class UMaterialInterface* Temp_object_Variable_11, class UTexture* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void OnActorUsed(class ACharacter* Character);
	void MC_UpdateImage(int32 Players);
	void ExecuteUbergraph_BP_Photo_Image(int32 EntryPoint, class ACharacter* K2Node_Event_Character, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 K2Node_CustomEvent_Players, bool K2Node_SwitchInteger_CmpSuccess);
};

}


