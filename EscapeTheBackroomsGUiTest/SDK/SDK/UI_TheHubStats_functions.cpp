#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TheHubStats.UI_TheHubStats_C
// (None)

class UClass* UUI_TheHubStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TheHubStats_C");

	return Clss;
}


// UI_TheHubStats_C UI_TheHubStats.Default__UI_TheHubStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TheHubStats_C* UUI_TheHubStats_C::GetDefaultObj()
{
	static class UUI_TheHubStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TheHubStats_C*>(UUI_TheHubStats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TheHubStats.UI_TheHubStats_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUI_TheHubStats_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "OnMouseButtonUp");

	Params::UUI_TheHubStats_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TheHubStats.UI_TheHubStats_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UUI_TheHubStats_C::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "OnMouseMove");

	Params::UUI_TheHubStats_C_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TheHubStats.UI_TheHubStats_C.Is Locked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsLocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TheHubStats_C::Is_Locked(const class FString& LevelName, bool* IsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "Is Locked");

	Params::UUI_TheHubStats_C_Is_Locked_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;

}


// Function UI_TheHubStats.UI_TheHubStats_C.GetLevelName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        LevelName                                                        (Parm, OutParm)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Locked_IsLocked                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// class FString                      CallFunc_Generate_Encrypted_Name_Name                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_TheHubStats_C::GetLevelName(const class FString& Level, class FText* LevelName, class UTexture2D** Icon, bool* IsLocked, bool CallFunc_Is_Locked_IsLocked, class FName CallFunc_Conv_StringToName_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, const class FString& CallFunc_Generate_Encrypted_Name_Name, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "GetLevelName");

	Params::UUI_TheHubStats_C_GetLevelName_Params Parms{};

	Parms.Level = Level;
	Parms.CallFunc_Is_Locked_IsLocked = CallFunc_Is_Locked_IsLocked;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.CallFunc_Generate_Encrypted_Name_Name = CallFunc_Generate_Encrypted_Name_Name;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LevelName != nullptr)
		*LevelName = Parms.LevelName;

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (IsLocked != nullptr)
		*IsLocked = Parms.IsLocked;

}


// Function UI_TheHubStats.UI_TheHubStats_C.Generate Encrypted Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      Name                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EncryptedName                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CharacterSet                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_TheHubStats_C::Generate_Encrypted_Name(class FText Level, class FString* Name, const class FString& EncryptedName, const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "Generate Encrypted Name");

	Params::UUI_TheHubStats_C_Generate_Encrypted_Name_Params Parms{};

	Parms.Level = Level;
	Parms.EncryptedName = EncryptedName;
	Parms.CharacterSet = CharacterSet;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

}


// Function UI_TheHubStats.UI_TheHubStats_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dragged_C*               K2Node_DynamicCast_AsUI_Dragged                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Drag_C*                  K2Node_DynamicCast_AsUI_Drag                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_TheHubStats_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Dragged_C* K2Node_DynamicCast_AsUI_Dragged, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class UUI_Drag_C* K2Node_DynamicCast_AsUI_Drag, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "OnDrop");

	Params::UUI_TheHubStats_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Dragged = K2Node_DynamicCast_AsUI_Dragged;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Drag = K2Node_DynamicCast_AsUI_Drag;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TheHubStats.UI_TheHubStats_C.onClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TheHubStats_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "onClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TheHubStats.UI_TheHubStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_TheHubStats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TheHubStats.UI_TheHubStats_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TheHubStats_C::UpdateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "UpdateTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TheHubStats.UI_TheHubStats_C.LaunchProgram
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InMinDesiredWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InMinDesiredHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ProgramContent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   InPosition                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_TheHubStats_C::LaunchProgram(float InMinDesiredWidth, float InMinDesiredHeight, class UWidget* ProgramContent, const struct FVector2D& InPosition, class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "LaunchProgram");

	Params::UUI_TheHubStats_C_LaunchProgram_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;
	Parms.InMinDesiredHeight = InMinDesiredHeight;
	Parms.ProgramContent = ProgramContent;
	Parms.InPosition = InPosition;
	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_TheHubStats_C::BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "BndEvt__ButtonOff_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TheHubStats.UI_TheHubStats_C.Add shortcut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Program_ID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                  Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Image_If_Applicatable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text__if_applicatable_                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundBase*                  Sound__if_applicatable_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*            Media__if_applicatable_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LevelName__if_applicable_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsLocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TheHubStats_C::Add_shortcut(int32 Program_ID, class FText Name, class UTexture2D* Icon, class UTexture2D* Image_If_Applicatable, class FText Text__if_applicatable_, class USoundBase* Sound__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& LevelName__if_applicable_, bool IsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "Add shortcut");

	Params::UUI_TheHubStats_C_Add_shortcut_Params Parms{};

	Parms.Program_ID = Program_ID;
	Parms.Name = Name;
	Parms.Icon = Icon;
	Parms.Image_If_Applicatable = Image_If_Applicatable;
	Parms.Text__if_applicatable_ = Text__if_applicatable_;
	Parms.Sound__if_applicatable_ = Sound__if_applicatable_;
	Parms.Media__if_applicatable_ = Media__if_applicatable_;
	Parms.LevelName__if_applicable_ = LevelName__if_applicable_;
	Parms.IsLocked = IsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.LaunchShortcut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Program_ID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture2D__if_applicatable_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text__if_applicatable_                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundBase*                  Sounnd__if_applicatable_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*            Media__if_applicatable_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name__if_applicatable_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_TheHubStats_C::LaunchShortcut(int32 Program_ID, class UTexture2D* Texture2D__if_applicatable_, class FText Text__if_applicatable_, class USoundBase* Sounnd__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& Level_Name__if_applicatable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "LaunchShortcut");

	Params::UUI_TheHubStats_C_LaunchShortcut_Params Parms{};

	Parms.Program_ID = Program_ID;
	Parms.Texture2D__if_applicatable_ = Texture2D__if_applicatable_;
	Parms.Text__if_applicatable_ = Text__if_applicatable_;
	Parms.Sounnd__if_applicatable_ = Sounnd__if_applicatable_;
	Parms.Media__if_applicatable_ = Media__if_applicatable_;
	Parms.Level_Name__if_applicatable_ = Level_Name__if_applicatable_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.RunClock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_TheHubStats_C::RunClock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "RunClock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_TheHubStats.UI_TheHubStats_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrabbed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Drag_C*                  Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TheHubStats_C::OnDrag(bool IsGrabbed, class UUI_Drag_C* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "OnDrag");

	Params::UUI_TheHubStats_C_OnDrag_Params Parms{};

	Parms.IsGrabbed = IsGrabbed;
	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TheHubStats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "Tick");

	Params::UUI_TheHubStats_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.AddWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Drag_C*                  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_TheHubStats_C::AddWidget(class UUI_Drag_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "AddWidget");

	Params::UUI_TheHubStats_C_AddWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TheHubStats.UI_TheHubStats_C.ExecuteUbergraph_UI_TheHubStats
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Menu_Computer_C*         CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Program_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Name                                          (None)
// class UTexture2D*                  K2Node_CustomEvent_Icon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Image_If_Applicatable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text__if_applicatable_                        (None)
// class USoundBase*                  K2Node_CustomEvent_Sound__if_applicatable_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*            K2Node_CustomEvent_Media__if_applicatable_                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_LevelName__if_applicable_                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsLocked                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InMinDesiredWidth                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InMinDesiredHeight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ProgramContent                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_InPosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_InText                                        (None)
// int32                              K2Node_Event_Program_ID                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_Texture2D__if_applicatable_                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Text__if_applicatable_                              (None)
// class USoundBase*                  K2Node_Event_Sounnd__if_applicatable_                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*            K2Node_Event_Media__if_applicatable_                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Level_Name__if_applicatable_                        (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class UUI_EvidenceShortcut_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class UUI_EvidenceShortcut_C*      CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UWrapBoxSlot*                CallFunc_AddChildToWrapBox_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Drag_C*                  CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_GetLevelName_LevelName                                  (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_1                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_2                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_3                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_9                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_4                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_10                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_11                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_5                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_5                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_12                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_13                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_6                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_6                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_14                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_15                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_7                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_7                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_16                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_17                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// class FText                        CallFunc_GetLevelName_LevelName_8                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_8                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_18                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_19                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// class FText                        CallFunc_GetLevelName_LevelName_9                                (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_9                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_20                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_21                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_11                          (None)
// class FText                        CallFunc_GetLevelName_LevelName_10                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_10                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_22                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_23                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelName_LevelName_11                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_11                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsGrabbed                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Drag_C*                  K2Node_CustomEvent_Window                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Drag_C*                  K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_12                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_13                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_24                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_25                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_26                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_27                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelName_LevelName_12                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_12                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLevelName_LevelName_13                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_13                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_14                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_15                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_28                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_29                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_30                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_31                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelName_LevelName_14                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_14                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetLevelName_LevelName_15                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_15                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_16                          (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_32                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_33                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLevelName_LevelName_16                               (None)
// class UTexture2D*                  CallFunc_GetLevelName_Icon_16                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLevelName_IsLocked_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TheHubStats_C::ExecuteUbergraph_UI_TheHubStats(int32 EntryPoint, class ABP_Menu_Computer_C* CallFunc_GetActorOfClass_ReturnValue, int32 Temp_int_Variable, int32 K2Node_CustomEvent_Program_ID, class FText K2Node_CustomEvent_Name, class UTexture2D* K2Node_CustomEvent_Icon, class UTexture2D* K2Node_CustomEvent_Image_If_Applicatable, class FText K2Node_CustomEvent_Text__if_applicatable_, class USoundBase* K2Node_CustomEvent_Sound__if_applicatable_, class UFileMediaSource* K2Node_CustomEvent_Media__if_applicatable_, const class FString& K2Node_CustomEvent_LevelName__if_applicable_, bool K2Node_CustomEvent_IsLocked, float K2Node_CustomEvent_InMinDesiredWidth, float K2Node_CustomEvent_InMinDesiredHeight, class UWidget* K2Node_CustomEvent_ProgramContent, const struct FVector2D& K2Node_CustomEvent_InPosition, class FText K2Node_CustomEvent_InText, int32 K2Node_Event_Program_ID, class UTexture2D* K2Node_Event_Texture2D__if_applicatable_, class FText K2Node_Event_Text__if_applicatable_, class USoundBase* K2Node_Event_Sounnd__if_applicatable_, class UFileMediaSource* K2Node_Event_Media__if_applicatable_, const class FString& K2Node_Event_Level_Name__if_applicatable_, const struct FDateTime& CallFunc_Now_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class UUI_EvidenceShortcut_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class UUI_EvidenceShortcut_C* CallFunc_Create_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UUI_Drag_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_GetLevelName_LevelName, class UTexture2D* CallFunc_GetLevelName_Icon, bool CallFunc_GetLevelName_IsLocked, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_GetLevelName_LevelName_1, class UTexture2D* CallFunc_GetLevelName_Icon_1, bool CallFunc_GetLevelName_IsLocked_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_GetLevelName_LevelName_2, class UTexture2D* CallFunc_GetLevelName_Icon_2, bool CallFunc_GetLevelName_IsLocked_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_GetLevelName_LevelName_3, class UTexture2D* CallFunc_GetLevelName_Icon_3, bool CallFunc_GetLevelName_IsLocked_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_GetLevelName_LevelName_4, class UTexture2D* CallFunc_GetLevelName_Icon_4, bool CallFunc_GetLevelName_IsLocked_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_GetLevelName_LevelName_5, class UTexture2D* CallFunc_GetLevelName_Icon_5, bool CallFunc_GetLevelName_IsLocked_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_12, const class FString& CallFunc_Conv_TextToString_ReturnValue_13, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText CallFunc_GetLevelName_LevelName_6, class UTexture2D* CallFunc_GetLevelName_Icon_6, bool CallFunc_GetLevelName_IsLocked_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_14, const class FString& CallFunc_Conv_TextToString_ReturnValue_15, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_GetLevelName_LevelName_7, class UTexture2D* CallFunc_GetLevelName_Icon_7, bool CallFunc_GetLevelName_IsLocked_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_16, const class FString& CallFunc_Conv_TextToString_ReturnValue_17, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_GetLevelName_LevelName_8, class UTexture2D* CallFunc_GetLevelName_Icon_8, bool CallFunc_GetLevelName_IsLocked_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_18, const class FString& CallFunc_Conv_TextToString_ReturnValue_19, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_GetLevelName_LevelName_9, class UTexture2D* CallFunc_GetLevelName_Icon_9, bool CallFunc_GetLevelName_IsLocked_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_20, const class FString& CallFunc_Conv_TextToString_ReturnValue_21, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_GetLevelName_LevelName_10, class UTexture2D* CallFunc_GetLevelName_Icon_10, bool CallFunc_GetLevelName_IsLocked_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_22, const class FString& CallFunc_Conv_TextToString_ReturnValue_23, class FText CallFunc_GetLevelName_LevelName_11, class UTexture2D* CallFunc_GetLevelName_Icon_11, bool CallFunc_GetLevelName_IsLocked_11, bool K2Node_CustomEvent_IsGrabbed, class UUI_Drag_C* K2Node_CustomEvent_Window, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UUI_Drag_C* K2Node_CustomEvent_Widget, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_13, const class FString& CallFunc_Conv_TextToString_ReturnValue_24, const class FString& CallFunc_Conv_TextToString_ReturnValue_25, const class FString& CallFunc_Conv_TextToString_ReturnValue_26, const class FString& CallFunc_Conv_TextToString_ReturnValue_27, class FText CallFunc_GetLevelName_LevelName_12, class UTexture2D* CallFunc_GetLevelName_Icon_12, bool CallFunc_GetLevelName_IsLocked_12, class FText CallFunc_GetLevelName_LevelName_13, class UTexture2D* CallFunc_GetLevelName_Icon_13, bool CallFunc_GetLevelName_IsLocked_13, class FText CallFunc_MakeLiteralText_ReturnValue_14, class FText CallFunc_MakeLiteralText_ReturnValue_15, const class FString& CallFunc_Conv_TextToString_ReturnValue_28, const class FString& CallFunc_Conv_TextToString_ReturnValue_29, const class FString& CallFunc_Conv_TextToString_ReturnValue_30, const class FString& CallFunc_Conv_TextToString_ReturnValue_31, class FText CallFunc_GetLevelName_LevelName_14, class UTexture2D* CallFunc_GetLevelName_Icon_14, bool CallFunc_GetLevelName_IsLocked_14, class FText CallFunc_GetLevelName_LevelName_15, class UTexture2D* CallFunc_GetLevelName_Icon_15, bool CallFunc_GetLevelName_IsLocked_15, class FText CallFunc_MakeLiteralText_ReturnValue_16, const class FString& CallFunc_Conv_TextToString_ReturnValue_32, const class FString& CallFunc_Conv_TextToString_ReturnValue_33, class FText CallFunc_GetLevelName_LevelName_16, class UTexture2D* CallFunc_GetLevelName_Icon_16, bool CallFunc_GetLevelName_IsLocked_16)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TheHubStats_C", "ExecuteUbergraph_UI_TheHubStats");

	Params::UUI_TheHubStats_C_ExecuteUbergraph_UI_TheHubStats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CustomEvent_Program_ID = K2Node_CustomEvent_Program_ID;
	Parms.K2Node_CustomEvent_Name = K2Node_CustomEvent_Name;
	Parms.K2Node_CustomEvent_Icon = K2Node_CustomEvent_Icon;
	Parms.K2Node_CustomEvent_Image_If_Applicatable = K2Node_CustomEvent_Image_If_Applicatable;
	Parms.K2Node_CustomEvent_Text__if_applicatable_ = K2Node_CustomEvent_Text__if_applicatable_;
	Parms.K2Node_CustomEvent_Sound__if_applicatable_ = K2Node_CustomEvent_Sound__if_applicatable_;
	Parms.K2Node_CustomEvent_Media__if_applicatable_ = K2Node_CustomEvent_Media__if_applicatable_;
	Parms.K2Node_CustomEvent_LevelName__if_applicable_ = K2Node_CustomEvent_LevelName__if_applicable_;
	Parms.K2Node_CustomEvent_IsLocked = K2Node_CustomEvent_IsLocked;
	Parms.K2Node_CustomEvent_InMinDesiredWidth = K2Node_CustomEvent_InMinDesiredWidth;
	Parms.K2Node_CustomEvent_InMinDesiredHeight = K2Node_CustomEvent_InMinDesiredHeight;
	Parms.K2Node_CustomEvent_ProgramContent = K2Node_CustomEvent_ProgramContent;
	Parms.K2Node_CustomEvent_InPosition = K2Node_CustomEvent_InPosition;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.K2Node_Event_Program_ID = K2Node_Event_Program_ID;
	Parms.K2Node_Event_Texture2D__if_applicatable_ = K2Node_Event_Texture2D__if_applicatable_;
	Parms.K2Node_Event_Text__if_applicatable_ = K2Node_Event_Text__if_applicatable_;
	Parms.K2Node_Event_Sounnd__if_applicatable_ = K2Node_Event_Sounnd__if_applicatable_;
	Parms.K2Node_Event_Media__if_applicatable_ = K2Node_Event_Media__if_applicatable_;
	Parms.K2Node_Event_Level_Name__if_applicatable_ = K2Node_Event_Level_Name__if_applicatable_;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_AddChildToWrapBox_ReturnValue = CallFunc_AddChildToWrapBox_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetLevelName_LevelName = CallFunc_GetLevelName_LevelName;
	Parms.CallFunc_GetLevelName_Icon = CallFunc_GetLevelName_Icon;
	Parms.CallFunc_GetLevelName_IsLocked = CallFunc_GetLevelName_IsLocked;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_GetLevelName_LevelName_1 = CallFunc_GetLevelName_LevelName_1;
	Parms.CallFunc_GetLevelName_Icon_1 = CallFunc_GetLevelName_Icon_1;
	Parms.CallFunc_GetLevelName_IsLocked_1 = CallFunc_GetLevelName_IsLocked_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_GetLevelName_LevelName_2 = CallFunc_GetLevelName_LevelName_2;
	Parms.CallFunc_GetLevelName_Icon_2 = CallFunc_GetLevelName_Icon_2;
	Parms.CallFunc_GetLevelName_IsLocked_2 = CallFunc_GetLevelName_IsLocked_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.CallFunc_GetLevelName_LevelName_3 = CallFunc_GetLevelName_LevelName_3;
	Parms.CallFunc_GetLevelName_Icon_3 = CallFunc_GetLevelName_Icon_3;
	Parms.CallFunc_GetLevelName_IsLocked_3 = CallFunc_GetLevelName_IsLocked_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_Conv_TextToString_ReturnValue_9 = CallFunc_Conv_TextToString_ReturnValue_9;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_GetLevelName_LevelName_4 = CallFunc_GetLevelName_LevelName_4;
	Parms.CallFunc_GetLevelName_Icon_4 = CallFunc_GetLevelName_Icon_4;
	Parms.CallFunc_GetLevelName_IsLocked_4 = CallFunc_GetLevelName_IsLocked_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_10 = CallFunc_Conv_TextToString_ReturnValue_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_11 = CallFunc_Conv_TextToString_ReturnValue_11;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_GetLevelName_LevelName_5 = CallFunc_GetLevelName_LevelName_5;
	Parms.CallFunc_GetLevelName_Icon_5 = CallFunc_GetLevelName_Icon_5;
	Parms.CallFunc_GetLevelName_IsLocked_5 = CallFunc_GetLevelName_IsLocked_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_12 = CallFunc_Conv_TextToString_ReturnValue_12;
	Parms.CallFunc_Conv_TextToString_ReturnValue_13 = CallFunc_Conv_TextToString_ReturnValue_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.CallFunc_GetLevelName_LevelName_6 = CallFunc_GetLevelName_LevelName_6;
	Parms.CallFunc_GetLevelName_Icon_6 = CallFunc_GetLevelName_Icon_6;
	Parms.CallFunc_GetLevelName_IsLocked_6 = CallFunc_GetLevelName_IsLocked_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_14 = CallFunc_Conv_TextToString_ReturnValue_14;
	Parms.CallFunc_Conv_TextToString_ReturnValue_15 = CallFunc_Conv_TextToString_ReturnValue_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_GetLevelName_LevelName_7 = CallFunc_GetLevelName_LevelName_7;
	Parms.CallFunc_GetLevelName_Icon_7 = CallFunc_GetLevelName_Icon_7;
	Parms.CallFunc_GetLevelName_IsLocked_7 = CallFunc_GetLevelName_IsLocked_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_16 = CallFunc_Conv_TextToString_ReturnValue_16;
	Parms.CallFunc_Conv_TextToString_ReturnValue_17 = CallFunc_Conv_TextToString_ReturnValue_17;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.CallFunc_GetLevelName_LevelName_8 = CallFunc_GetLevelName_LevelName_8;
	Parms.CallFunc_GetLevelName_Icon_8 = CallFunc_GetLevelName_Icon_8;
	Parms.CallFunc_GetLevelName_IsLocked_8 = CallFunc_GetLevelName_IsLocked_8;
	Parms.CallFunc_Conv_TextToString_ReturnValue_18 = CallFunc_Conv_TextToString_ReturnValue_18;
	Parms.CallFunc_Conv_TextToString_ReturnValue_19 = CallFunc_Conv_TextToString_ReturnValue_19;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.CallFunc_GetLevelName_LevelName_9 = CallFunc_GetLevelName_LevelName_9;
	Parms.CallFunc_GetLevelName_Icon_9 = CallFunc_GetLevelName_Icon_9;
	Parms.CallFunc_GetLevelName_IsLocked_9 = CallFunc_GetLevelName_IsLocked_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue_20 = CallFunc_Conv_TextToString_ReturnValue_20;
	Parms.CallFunc_Conv_TextToString_ReturnValue_21 = CallFunc_Conv_TextToString_ReturnValue_21;
	Parms.CallFunc_MakeLiteralText_ReturnValue_11 = CallFunc_MakeLiteralText_ReturnValue_11;
	Parms.CallFunc_GetLevelName_LevelName_10 = CallFunc_GetLevelName_LevelName_10;
	Parms.CallFunc_GetLevelName_Icon_10 = CallFunc_GetLevelName_Icon_10;
	Parms.CallFunc_GetLevelName_IsLocked_10 = CallFunc_GetLevelName_IsLocked_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_22 = CallFunc_Conv_TextToString_ReturnValue_22;
	Parms.CallFunc_Conv_TextToString_ReturnValue_23 = CallFunc_Conv_TextToString_ReturnValue_23;
	Parms.CallFunc_GetLevelName_LevelName_11 = CallFunc_GetLevelName_LevelName_11;
	Parms.CallFunc_GetLevelName_Icon_11 = CallFunc_GetLevelName_Icon_11;
	Parms.CallFunc_GetLevelName_IsLocked_11 = CallFunc_GetLevelName_IsLocked_11;
	Parms.K2Node_CustomEvent_IsGrabbed = K2Node_CustomEvent_IsGrabbed;
	Parms.K2Node_CustomEvent_Window = K2Node_CustomEvent_Window;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_12 = CallFunc_MakeLiteralText_ReturnValue_12;
	Parms.CallFunc_MakeLiteralText_ReturnValue_13 = CallFunc_MakeLiteralText_ReturnValue_13;
	Parms.CallFunc_Conv_TextToString_ReturnValue_24 = CallFunc_Conv_TextToString_ReturnValue_24;
	Parms.CallFunc_Conv_TextToString_ReturnValue_25 = CallFunc_Conv_TextToString_ReturnValue_25;
	Parms.CallFunc_Conv_TextToString_ReturnValue_26 = CallFunc_Conv_TextToString_ReturnValue_26;
	Parms.CallFunc_Conv_TextToString_ReturnValue_27 = CallFunc_Conv_TextToString_ReturnValue_27;
	Parms.CallFunc_GetLevelName_LevelName_12 = CallFunc_GetLevelName_LevelName_12;
	Parms.CallFunc_GetLevelName_Icon_12 = CallFunc_GetLevelName_Icon_12;
	Parms.CallFunc_GetLevelName_IsLocked_12 = CallFunc_GetLevelName_IsLocked_12;
	Parms.CallFunc_GetLevelName_LevelName_13 = CallFunc_GetLevelName_LevelName_13;
	Parms.CallFunc_GetLevelName_Icon_13 = CallFunc_GetLevelName_Icon_13;
	Parms.CallFunc_GetLevelName_IsLocked_13 = CallFunc_GetLevelName_IsLocked_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_14 = CallFunc_MakeLiteralText_ReturnValue_14;
	Parms.CallFunc_MakeLiteralText_ReturnValue_15 = CallFunc_MakeLiteralText_ReturnValue_15;
	Parms.CallFunc_Conv_TextToString_ReturnValue_28 = CallFunc_Conv_TextToString_ReturnValue_28;
	Parms.CallFunc_Conv_TextToString_ReturnValue_29 = CallFunc_Conv_TextToString_ReturnValue_29;
	Parms.CallFunc_Conv_TextToString_ReturnValue_30 = CallFunc_Conv_TextToString_ReturnValue_30;
	Parms.CallFunc_Conv_TextToString_ReturnValue_31 = CallFunc_Conv_TextToString_ReturnValue_31;
	Parms.CallFunc_GetLevelName_LevelName_14 = CallFunc_GetLevelName_LevelName_14;
	Parms.CallFunc_GetLevelName_Icon_14 = CallFunc_GetLevelName_Icon_14;
	Parms.CallFunc_GetLevelName_IsLocked_14 = CallFunc_GetLevelName_IsLocked_14;
	Parms.CallFunc_GetLevelName_LevelName_15 = CallFunc_GetLevelName_LevelName_15;
	Parms.CallFunc_GetLevelName_Icon_15 = CallFunc_GetLevelName_Icon_15;
	Parms.CallFunc_GetLevelName_IsLocked_15 = CallFunc_GetLevelName_IsLocked_15;
	Parms.CallFunc_MakeLiteralText_ReturnValue_16 = CallFunc_MakeLiteralText_ReturnValue_16;
	Parms.CallFunc_Conv_TextToString_ReturnValue_32 = CallFunc_Conv_TextToString_ReturnValue_32;
	Parms.CallFunc_Conv_TextToString_ReturnValue_33 = CallFunc_Conv_TextToString_ReturnValue_33;
	Parms.CallFunc_GetLevelName_LevelName_16 = CallFunc_GetLevelName_LevelName_16;
	Parms.CallFunc_GetLevelName_Icon_16 = CallFunc_GetLevelName_Icon_16;
	Parms.CallFunc_GetLevelName_IsLocked_16 = CallFunc_GetLevelName_IsLocked_16;

	UObject::ProcessEvent(Func, &Parms);

}

}


