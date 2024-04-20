#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Invemtory_DropItem.UI_Invemtory_DropItem_C
// (None)

class UClass* UUI_Invemtory_DropItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Invemtory_DropItem_C");

	return Clss;
}


// UI_Invemtory_DropItem_C UI_Invemtory_DropItem.Default__UI_Invemtory_DropItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Invemtory_DropItem_C* UUI_Invemtory_DropItem_C::GetDefaultObj()
{
	static class UUI_Invemtory_DropItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Invemtory_DropItem_C*>(UUI_Invemtory_DropItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUI_Invemtory_DropItem_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "OnMouseButtonDown_0");

	Params::UUI_Invemtory_DropItem_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Invemtory_DropItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Invemtory_DropItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Invemtory_DropItem_C::BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "BndEvt__UI_Invemtory_DropItem_Btn_DropItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Invemtory_DropItem_C::BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "BndEvt__UI_Invemtory_DropItem_Btn_Cancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Invemtory_DropItem.UI_Invemtory_DropItem_C.ExecuteUbergraph_UI_Invemtory_DropItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetMousePositionOnViewport_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Invemtory_DropItem_C::ExecuteUbergraph_UI_Invemtory_DropItem(int32 EntryPoint, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Invemtory_DropItem_C", "ExecuteUbergraph_UI_Invemtory_DropItem");

	Params::UUI_Invemtory_DropItem_C_ExecuteUbergraph_UI_Invemtory_DropItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMousePositionOnViewport_ReturnValue = CallFunc_GetMousePositionOnViewport_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


