#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C
// (None)

class UClass* UWB_Button_Confirmation_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Button_Confirmation_Theme2_C");

	return Clss;
}


// WB_Button_Confirmation_Theme2_C WB_Button_Confirmation_Theme2.Default__WB_Button_Confirmation_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Button_Confirmation_Theme2_C* UWB_Button_Confirmation_Theme2_C::GetDefaultObj()
{
	static class UWB_Button_Confirmation_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Button_Confirmation_Theme2_C*>(UWB_Button_Confirmation_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Get_SlateBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 SlateBrush                                                       (Parm, OutParm)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWB_Button_Confirmation_Theme2_C::Get_SlateBrush(class UTexture2D* Image, struct FSlateBrush* SlateBrush, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "Get_SlateBrush");

	Params::UWB_Button_Confirmation_Theme2_C_Get_SlateBrush_Params Parms{};

	Parms.Image = Image;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateBrush != nullptr)
		*SlateBrush = std::move(Parms.SlateBrush);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Button_Confirmation_Theme2_C::Set_ButtonSize(float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "Set_ButtonSize");

	Params::UWB_Button_Confirmation_Theme2_C_Set_ButtonSize_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Set_ButtonStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Normal_Image                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Hovered_Image                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Pressed_Image                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                FontColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateBrush                 CallFunc_Get_SlateBrush_SlateBrush                               (None)
// struct FSlateBrush                 CallFunc_Get_SlateBrush_SlateBrush_1                             (None)
// struct FSlateBrush                 CallFunc_Get_SlateBrush_SlateBrush_2                             (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UWB_Button_Confirmation_Theme2_C::Set_ButtonStyle(class UTexture2D* Normal_Image, class UTexture2D* Hovered_Image, class UTexture2D* Pressed_Image, const struct FLinearColor& FontColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateBrush& CallFunc_Get_SlateBrush_SlateBrush, const struct FSlateBrush& CallFunc_Get_SlateBrush_SlateBrush_1, const struct FSlateBrush& CallFunc_Get_SlateBrush_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "Set_ButtonStyle");

	Params::UWB_Button_Confirmation_Theme2_C_Set_ButtonStyle_Params Parms{};

	Parms.Normal_Image = Normal_Image;
	Parms.Hovered_Image = Hovered_Image;
	Parms.Pressed_Image = Pressed_Image;
	Parms.FontColor = FontColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Get_SlateBrush_SlateBrush = CallFunc_Get_SlateBrush_SlateBrush;
	Parms.CallFunc_Get_SlateBrush_SlateBrush_1 = CallFunc_Get_SlateBrush_SlateBrush_1;
	Parms.CallFunc_Get_SlateBrush_SlateBrush_2 = CallFunc_Get_SlateBrush_SlateBrush_2;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Confirmation_Theme2_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "Setup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Confirmation_Theme2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "PreConstruct");

	Params::UWB_Button_Confirmation_Theme2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Button_Confirmation_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.BndEvt__WB_Button_Confirmation_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Button_Confirmation_Theme2_C::BndEvt__WB_Button_Confirmation_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "BndEvt__WB_Button_Confirmation_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.ExecuteUbergraph_WB_Button_Confirmation_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Button_Confirmation_Theme2_C::ExecuteUbergraph_WB_Button_Confirmation_Theme2(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "ExecuteUbergraph_WB_Button_Confirmation_Theme2");

	Params::UWB_Button_Confirmation_Theme2_C_ExecuteUbergraph_WB_Button_Confirmation_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Button_Confirmation_Theme2.WB_Button_Confirmation_Theme2_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Button_Confirmation_Theme2_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Button_Confirmation_Theme2_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


