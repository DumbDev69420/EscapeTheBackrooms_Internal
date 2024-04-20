#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_Credits.W_Credits_C
// (None)

class UClass* UW_Credits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_Credits_C");

	return Clss;
}


// W_Credits_C W_Credits.Default__W_Credits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_Credits_C* UW_Credits_C::GetDefaultObj()
{
	static class UW_Credits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_Credits_C*>(UW_Credits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_Credits.W_Credits_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Credits_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "OnKeyUp");

	Params::UW_Credits_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Credits.W_Credits_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_Credits_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "OnMouseButtonDown");

	Params::UW_Credits_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_Credits.W_Credits_C.CloseCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Credits_C::CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Credits.W_Credits_C.OnFailure_218EDE1942D56A9FA8AEBCA97849717D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Credits_C::OnFailure_218EDE1942D56A9FA8AEBCA97849717D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "OnFailure_218EDE1942D56A9FA8AEBCA97849717D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Credits.W_Credits_C.OnSuccess_218EDE1942D56A9FA8AEBCA97849717D
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Credits_C::OnSuccess_218EDE1942D56A9FA8AEBCA97849717D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "OnSuccess_218EDE1942D56A9FA8AEBCA97849717D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Credits.W_Credits_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Credits_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "PreConstruct");

	Params::UW_Credits_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Credits.W_Credits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_Credits_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Credits.W_Credits_C.OnBackgroundClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_Credits_C::OnBackgroundClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "OnBackgroundClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_Credits.W_Credits_C.UpdateCanJoin
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanJoin                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Credits_C::UpdateCanJoin(bool CanJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "UpdateCanJoin");

	Params::UW_Credits_C_UpdateCanJoin_Params Parms{};

	Parms.CanJoin = CanJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_Credits.W_Credits_C.ExecuteUbergraph_W_Credits
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform_1                              (NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform_2                              (NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ServerTravel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CanJoin                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_NumConnections                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings                        (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_GetSessionSettings_NumConnections_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSessionSettings_NumPrivateConnections_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionSettings_bIsLAN_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsDedicated_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowInvites_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bAllowJoinInProgress_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSessionSettings_bIsAnticheatEnabled_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSessionSettings_BuildUniqueID_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetSessionSettings_ExtraSettings_1                      (ReferenceParm)
// enum class EBlueprintResultSwitch  CallFunc_GetSessionSettings_Result_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray          (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpdateSessionCallbackProxyAdvanced*CallFunc_UpdateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESessionSettingSearchResultCallFunc_GetSessionPropertyBool_SearchResult                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSessionPropertyBool_SettingValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_Credits_C::ExecuteUbergraph_W_Credits(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool K2Node_Select_Default_1, bool K2Node_Event_IsDesignTime, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ServerTravel_ReturnValue, bool K2Node_CustomEvent_CanJoin, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array, int32 CallFunc_GetSessionSettings_NumConnections_1, int32 CallFunc_GetSessionSettings_NumPrivateConnections_1, bool CallFunc_GetSessionSettings_bIsLAN_1, bool CallFunc_GetSessionSettings_bIsDedicated_1, bool CallFunc_GetSessionSettings_bAllowInvites_1, bool CallFunc_GetSessionSettings_bAllowJoinInProgress_1, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled_1, int32 CallFunc_GetSessionSettings_BuildUniqueID_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings_1, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray, bool K2Node_SwitchEnum_CmpSuccess_1, class UUpdateSessionCallbackProxyAdvanced* CallFunc_UpdateSession_ReturnValue, enum class ESessionSettingSearchResult CallFunc_GetSessionPropertyBool_SearchResult, bool CallFunc_GetSessionPropertyBool_SettingValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_Credits_C", "ExecuteUbergraph_W_Credits");

	Params::UW_Credits_C_ExecuteUbergraph_W_Credits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.K2Node_MakeStruct_WidgetTransform_1 = K2Node_MakeStruct_WidgetTransform_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_MakeStruct_WidgetTransform_2 = K2Node_MakeStruct_WidgetTransform_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_ServerTravel_ReturnValue = CallFunc_ServerTravel_ReturnValue;
	Parms.K2Node_CustomEvent_CanJoin = K2Node_CustomEvent_CanJoin;
	Parms.CallFunc_GetSessionSettings_NumConnections = CallFunc_GetSessionSettings_NumConnections;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections = CallFunc_GetSessionSettings_NumPrivateConnections;
	Parms.CallFunc_GetSessionSettings_bIsLAN = CallFunc_GetSessionSettings_bIsLAN;
	Parms.CallFunc_GetSessionSettings_bIsDedicated = CallFunc_GetSessionSettings_bIsDedicated;
	Parms.CallFunc_GetSessionSettings_bAllowInvites = CallFunc_GetSessionSettings_bAllowInvites;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress = CallFunc_GetSessionSettings_bAllowJoinInProgress;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled = CallFunc_GetSessionSettings_bIsAnticheatEnabled;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID = CallFunc_GetSessionSettings_BuildUniqueID;
	Parms.CallFunc_GetSessionSettings_ExtraSettings = CallFunc_GetSessionSettings_ExtraSettings;
	Parms.CallFunc_GetSessionSettings_Result = CallFunc_GetSessionSettings_Result;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetSessionSettings_NumConnections_1 = CallFunc_GetSessionSettings_NumConnections_1;
	Parms.CallFunc_GetSessionSettings_NumPrivateConnections_1 = CallFunc_GetSessionSettings_NumPrivateConnections_1;
	Parms.CallFunc_GetSessionSettings_bIsLAN_1 = CallFunc_GetSessionSettings_bIsLAN_1;
	Parms.CallFunc_GetSessionSettings_bIsDedicated_1 = CallFunc_GetSessionSettings_bIsDedicated_1;
	Parms.CallFunc_GetSessionSettings_bAllowInvites_1 = CallFunc_GetSessionSettings_bAllowInvites_1;
	Parms.CallFunc_GetSessionSettings_bAllowJoinInProgress_1 = CallFunc_GetSessionSettings_bAllowJoinInProgress_1;
	Parms.CallFunc_GetSessionSettings_bIsAnticheatEnabled_1 = CallFunc_GetSessionSettings_bIsAnticheatEnabled_1;
	Parms.CallFunc_GetSessionSettings_BuildUniqueID_1 = CallFunc_GetSessionSettings_BuildUniqueID_1;
	Parms.CallFunc_GetSessionSettings_ExtraSettings_1 = CallFunc_GetSessionSettings_ExtraSettings_1;
	Parms.CallFunc_GetSessionSettings_Result_1 = CallFunc_GetSessionSettings_Result_1;
	Parms.CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray = CallFunc_AddOrModifyExtraSettings_ModifiedSettingsArray;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_UpdateSession_ReturnValue = CallFunc_UpdateSession_ReturnValue;
	Parms.CallFunc_GetSessionPropertyBool_SearchResult = CallFunc_GetSessionPropertyBool_SearchResult;
	Parms.CallFunc_GetSessionPropertyBool_SettingValue = CallFunc_GetSessionPropertyBool_SettingValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


