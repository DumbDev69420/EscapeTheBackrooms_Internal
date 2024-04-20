#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Lobby_PlayerList.Lobby_PlayerList_C
// (None)

class UClass* ULobby_PlayerList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_PlayerList_C");

	return Clss;
}


// Lobby_PlayerList_C Lobby_PlayerList.Default__Lobby_PlayerList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobby_PlayerList_C* ULobby_PlayerList_C::GetDefaultObj()
{
	static class ULobby_PlayerList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobby_PlayerList_C*>(ULobby_PlayerList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_PlayerList.Lobby_PlayerList_C.Update_PlayerCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
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
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void ULobby_PlayerList_C::Update_PlayerCount(int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_C", "Update_PlayerCount");

	Params::ULobby_PlayerList_C_Update_PlayerCount_Params Parms{};

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
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList.Lobby_PlayerList_C.Update_PlayerList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULobby_PlayerList_Item_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ConnectedPlayer          CallFunc_Array_Get_Item                                          (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_PlayerList_C::Update_PlayerList(int32 Temp_int_Array_Index_Variable, class ULobby_PlayerList_Item_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FS_ConnectedPlayer& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_C", "Update_PlayerList");

	Params::ULobby_PlayerList_C_Update_PlayerList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList.Lobby_PlayerList_C.CanClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULobby_PlayerList_C::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_C", "CanClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_PlayerList.Lobby_PlayerList_C.Update_Widget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS_ConnectedPlayer>  ConnectedPlayers                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ULobby_PlayerList_C::Update_Widget(TArray<struct FS_ConnectedPlayer>& ConnectedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_C", "Update_Widget");

	Params::ULobby_PlayerList_C_Update_Widget_Params Parms{};

	Parms.ConnectedPlayers = ConnectedPlayers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lobby_PlayerList.Lobby_PlayerList_C.ExecuteUbergraph_Lobby_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_ConnectedPlayer>  K2Node_CustomEvent_ConnectedPlayers                              (ConstParm, ReferenceParm, ContainsInstancedReference)

void ULobby_PlayerList_C::ExecuteUbergraph_Lobby_PlayerList(int32 EntryPoint, TArray<struct FS_ConnectedPlayer>& K2Node_CustomEvent_ConnectedPlayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_PlayerList_C", "ExecuteUbergraph_Lobby_PlayerList");

	Params::ULobby_PlayerList_C_ExecuteUbergraph_Lobby_PlayerList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ConnectedPlayers = K2Node_CustomEvent_ConnectedPlayers;

	UObject::ProcessEvent(Func, &Parms);

}

}


