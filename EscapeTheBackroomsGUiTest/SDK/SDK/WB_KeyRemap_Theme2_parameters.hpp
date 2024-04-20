#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
struct UWB_KeyRemap_Theme2_C_BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params
{
public:
	struct FInputChord                           SelectedKey;                                       // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.PreConstruct
struct UWB_KeyRemap_Theme2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB0 (0xB0 - 0x0)
// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.ExecuteUbergraph_WB_KeyRemap_Theme2
struct UWB_KeyRemap_Theme2_C_ExecuteUbergraph_WB_KeyRemap_Theme2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputChord                           K2Node_ComponentBoundEvent_SelectedKey;            // 0x10(0x20)(HasGetValueTypeHash)
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue_1;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings;       // 0x38(0x10)(ReferenceParm)
	struct FInputActionKeyMapping                K2Node_MakeStruct_InputActionKeyMapping;           // 0x48(0x28)(None)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputActionKeyMapping>        CallFunc_GetActionMappingByName_OutMappings_1;     // 0x78(0x10)(ReferenceParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputChord                           K2Node_MakeStruct_InputChord;                      // 0x90(0x20)(HasGetValueTypeHash)
};

}
}


