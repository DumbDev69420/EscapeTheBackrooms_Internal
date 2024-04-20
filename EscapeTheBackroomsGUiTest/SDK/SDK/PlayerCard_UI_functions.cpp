#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerCard_UI.PlayerCard_UI_C
// (None)

class UClass* UPlayerCard_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCard_UI_C");

	return Clss;
}


// PlayerCard_UI_C PlayerCard_UI.Default__PlayerCard_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerCard_UI_C* UPlayerCard_UI_C::GetDefaultObj()
{
	static class UPlayerCard_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerCard_UI_C*>(UPlayerCard_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerCard_UI.PlayerCard_UI_C.GetLevelColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerCard_UI_C::GetLevelColor(struct FLinearColor* Color, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor_2, const struct FLinearColor& K2Node_MakeStruct_LinearColor_3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCard_UI_C", "GetLevelColor");

	Params::UPlayerCard_UI_C_GetLevelColor_Params Parms{};

	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_MakeStruct_LinearColor_2 = K2Node_MakeStruct_LinearColor_2;
	Parms.K2Node_MakeStruct_LinearColor_3 = K2Node_MakeStruct_LinearColor_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function PlayerCard_UI.PlayerCard_UI_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerCard_UI_C::SetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCard_UI_C", "SetName");

	Params::UPlayerCard_UI_C_SetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerCard_UI.PlayerCard_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerCard_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCard_UI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerCard_UI.PlayerCard_UI_C.ExecuteUbergraph_PlayerCard_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLevelColor_Color                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_PlayerName                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UPlayerCard_UI_C::ExecuteUbergraph_PlayerCard_UI(int32 EntryPoint, const struct FLinearColor& CallFunc_GetLevelColor_Color, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetPlayerName_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCard_UI_C", "ExecuteUbergraph_PlayerCard_UI");

	Params::UPlayerCard_UI_C_ExecuteUbergraph_PlayerCard_UI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLevelColor_Color = CallFunc_GetLevelColor_Color;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerName_PlayerName = CallFunc_GetPlayerName_PlayerName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


