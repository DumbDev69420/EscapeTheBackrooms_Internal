#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ChatMessage.WB_ChatMessage_C
// (None)

class UClass* UWB_ChatMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ChatMessage_C");

	return Clss;
}


// WB_ChatMessage_C WB_ChatMessage.Default__WB_ChatMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ChatMessage_C* UWB_ChatMessage_C::GetDefaultObj()
{
	static class UWB_ChatMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ChatMessage_C*>(UWB_ChatMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ChatMessage.WB_ChatMessage_C.CheckFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentCulture_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ChatMessage_C::CheckFont(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const class FString& CallFunc_GetCurrentCulture_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "CheckFont");

	Params::UWB_ChatMessage_C_CheckFont_Params Parms{};

	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetCurrentCulture_ReturnValue = CallFunc_GetCurrentCulture_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ChatMessage.WB_ChatMessage_C.IsFiltering
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsFiltering                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatComponent_C*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChatMessage_C::IsFiltering(bool* IsFiltering, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UChatComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "IsFiltering");

	Params::UWB_ChatMessage_C_IsFiltering_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFiltering != nullptr)
		*IsFiltering = Parms.IsFiltering;

}


// Function WB_ChatMessage.WB_ChatMessage_C.Set_Username_Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                SpecifiedColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWB_ChatMessage_C::Set_Username_Color(const struct FLinearColor& SpecifiedColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Set_Username_Color");

	Params::UWB_ChatMessage_C_Set_Username_Color_Params Parms{};

	Parms.SpecifiedColor = SpecifiedColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Set_Username_Global
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Chat_sender                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWB_ChatMessage_C::Set_Username_Global(const class FString& Chat_sender, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Set_Username_Global");

	Params::UWB_ChatMessage_C_Set_Username_Global_Params Parms{};

	Parms.Chat_sender = Chat_sender;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Set_ChatMessage_Color
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Specified_Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWB_ChatMessage_C::Set_ChatMessage_Color(const struct FLinearColor& Specified_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Set_ChatMessage_Color");

	Params::UWB_ChatMessage_C_Set_ChatMessage_Color_Params Parms{};

	Parms.Specified_Color = Specified_Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Set_Username
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_ChatMessage_C::Set_Username()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Set_Username");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Construct_ChatMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_ChatMessage_C::Construct_ChatMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Construct_ChatMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Set_ChatMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsFiltering_IsFiltering                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FilterText_FilteredText                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FilterText_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWB_ChatMessage_C::Set_ChatMessage(bool CallFunc_IsFiltering_IsFiltering, const class FString& CallFunc_FilterText_FilteredText, bool CallFunc_FilterText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Set_ChatMessage");

	Params::UWB_ChatMessage_C_Set_ChatMessage_Params Parms{};

	Parms.CallFunc_IsFiltering_IsFiltering = CallFunc_IsFiltering_IsFiltering;
	Parms.CallFunc_FilterText_FilteredText = CallFunc_FilterText_FilteredText;
	Parms.CallFunc_FilterText_ReturnValue = CallFunc_FilterText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_ChatMessage.WB_ChatMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ChatMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ChatMessage.WB_ChatMessage_C.ExecuteUbergraph_WB_ChatMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ChatMessage_C::ExecuteUbergraph_WB_ChatMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ChatMessage_C", "ExecuteUbergraph_WB_ChatMessage");

	Params::UWB_ChatMessage_C_ExecuteUbergraph_WB_ChatMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


