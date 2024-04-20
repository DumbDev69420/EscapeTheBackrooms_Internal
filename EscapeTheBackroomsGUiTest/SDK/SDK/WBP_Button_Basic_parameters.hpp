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

// 0x40 (0x40 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.ChangeTextToSymbols
struct UWBP_Button_Basic_C_ChangeTextToSymbols_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x28(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.SetButtonText
struct UWBP_Button_Basic_C_SetButtonText_Params
{
public:
	class FText                                  TextToUse;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x40 (0x40 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.ChangeTextCasing
struct UWBP_Button_Basic_C_ChangeTextCasing_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x28(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.PreConstruct
struct UWBP_Button_Basic_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.SetComponentReference
struct UWBP_Button_Basic_C_SetComponentReference_Params
{
public:
	class UWidgetInteractionComponent*           WidgetInteractionComponent;                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.ExecuteUbergraph_WBP_Button_Basic
struct UWBP_Button_Basic_C_ExecuteUbergraph_WBP_Button_Basic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetInteractionComponent*           K2Node_Event_WidgetInteractionComponent;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_Button_Basic.WBP_Button_Basic_C.ButtonPressed__DelegateSignature
struct UWBP_Button_Basic_C_ButtonPressed__DelegateSignature_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EModifierKeys                     Modifier;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


