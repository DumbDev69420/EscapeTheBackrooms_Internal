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

// 0x130 (0x130 - 0x0)
// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Get_SlateBrush
struct UWB_Button_Confirmation_Theme2_C_Get_SlateBrush_Params
{
public:
	class UTexture2D*                            Image;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           SlateBrush;                                        // 0x8(0x88)(Parm, OutParm)
	int32                                        CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Blueprint_GetSizeY_ReturnValue;           // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xA8(0x88)(None)
};

// 0x10 (0x10 - 0x0)
// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonSize
struct UWB_Button_Confirmation_Theme2_C_Set_ButtonSize_Params
{
public:
	float                                        CallFunc_BreakVector2D_X;                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x460 (0x460 - 0x0)
// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonStyle
struct UWB_Button_Confirmation_Theme2_C_Set_ButtonStyle_Params
{
public:
	class UTexture2D*                            Normal_Image;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Hovered_Image;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Pressed_Image;                                     // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FontColor;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x28(0x28)(None)
	struct FSlateBrush                           CallFunc_Get_SlateBrush_SlateBrush;                // 0x50(0x88)(None)
	struct FSlateBrush                           CallFunc_Get_SlateBrush_SlateBrush_1;              // 0xD8(0x88)(None)
	struct FSlateBrush                           CallFunc_Get_SlateBrush_SlateBrush_2;              // 0x160(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x1E8(0x278)(None)
};

// 0x1 (0x1 - 0x0)
// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.PreConstruct
struct UWB_Button_Confirmation_Theme2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.ExecuteUbergraph_WB_Button_Confirmation_Theme2
struct UWB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


