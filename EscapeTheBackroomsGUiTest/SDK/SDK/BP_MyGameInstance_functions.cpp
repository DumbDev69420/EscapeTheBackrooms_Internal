#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MyGameInstance.BP_MyGameInstance_C
// (None)

class UClass* UBP_MyGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MyGameInstance_C");

	return Clss;
}


// BP_MyGameInstance_C BP_MyGameInstance.Default__BP_MyGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MyGameInstance_C* UBP_MyGameInstance_C::GetDefaultObj()
{
	static class UBP_MyGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MyGameInstance_C*>(UBP_MyGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MyGameInstance.BP_MyGameInstance_C.CheckShouldDisplayEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SG_GameSettings_C*       CallFunc_LoadSettings_SaveGame                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::CheckShouldDisplayEvent(class UBP_SG_GameSettings_C* CallFunc_LoadSettings_SaveGame, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "CheckShouldDisplayEvent");

	Params::UBP_MyGameInstance_C_CheckShouldDisplayEvent_Params Parms{};

	Parms.CallFunc_LoadSettings_SaveGame = CallFunc_LoadSettings_SaveGame;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ResetInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::ResetInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ResetInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.CheckCodeUnique
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSessionsSearchSetting      Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MyGameInstance_C::CheckCodeUnique(const struct FSessionsSearchSetting& Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "CheckCodeUnique");

	Params::UBP_MyGameInstance_C_CheckCodeUnique_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.GenerateCode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              CharacterSet                                                     (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::GenerateCode(const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "GenerateCode");

	Params::UBP_MyGameInstance_C_GenerateCode_Params Parms{};

	Parms.CharacterSet = CharacterSet;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_B065C47F48B157C121B06CAFCED8C6AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_B065C47F48B157C121B06CAFCED8C6AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_B065C47F48B157C121B06CAFCED8C6AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_B065C47F48B157C121B06CAFCED8C6AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_B065C47F48B157C121B06CAFCED8C6AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_B065C47F48B157C121B06CAFCED8C6AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_D7E8A28A46B4BD5B7318A6A66AFD14E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_D7E8A28A46B4BD5B7318A6A66AFD14E2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_D7E8A28A46B4BD5B7318A6A66AFD14E2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_D7E8A28A46B4BD5B7318A6A66AFD14E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_D7E8A28A46B4BD5B7318A6A66AFD14E2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_D7E8A28A46B4BD5B7318A6A66AFD14E2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_3A8DCEEA406564302B3F52A5D035B982
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_3A8DCEEA406564302B3F52A5D035B982()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_3A8DCEEA406564302B3F52A5D035B982");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_3A8DCEEA406564302B3F52A5D035B982
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_3A8DCEEA406564302B3F52A5D035B982()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_3A8DCEEA406564302B3F52A5D035B982");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_CAE6F30D4DC345FC9711EAB8167D6CDE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_CAE6F30D4DC345FC9711EAB8167D6CDE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_CAE6F30D4DC345FC9711EAB8167D6CDE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_CAE6F30D4DC345FC9711EAB8167D6CDE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_CAE6F30D4DC345FC9711EAB8167D6CDE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_CAE6F30D4DC345FC9711EAB8167D6CDE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_F6A1C64C4BF407E4C67D4F8266759C0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::OnFailure_F6A1C64C4BF407E4C67D4F8266759C0F(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_F6A1C64C4BF407E4C67D4F8266759C0F");

	Params::UBP_MyGameInstance_C_OnFailure_F6A1C64C4BF407E4C67D4F8266759C0F_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_F6A1C64C4BF407E4C67D4F8266759C0F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::OnSuccess_F6A1C64C4BF407E4C67D4F8266759C0F(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_F6A1C64C4BF407E4C67D4F8266759C0F");

	Params::UBP_MyGameInstance_C_OnSuccess_F6A1C64C4BF407E4C67D4F8266759C0F_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_4A8E1BF4489B644EBB46CCB5CE87A8FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_4A8E1BF4489B644EBB46CCB5CE87A8FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_4A8E1BF4489B644EBB46CCB5CE87A8FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_4A8E1BF4489B644EBB46CCB5CE87A8FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_4A8E1BF4489B644EBB46CCB5CE87A8FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_4A8E1BF4489B644EBB46CCB5CE87A8FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_CE0E125D465CF87986EDACB437749973
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_CE0E125D465CF87986EDACB437749973()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_CE0E125D465CF87986EDACB437749973");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_CE0E125D465CF87986EDACB437749973
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_CE0E125D465CF87986EDACB437749973()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_CE0E125D465CF87986EDACB437749973");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MyGameInstance_C::ShowLoadingScreen(class APlayerController* PlayerController, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ShowLoadingScreen");

	Params::UBP_MyGameInstance_C_ShowLoadingScreen_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.CreateServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     WidgetRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPrivate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MyGameInstance_C::CreateServer(class APlayerController* PlayerController, class UWidget* WidgetRef, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool IsPrivate, class FText ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "CreateServer");

	Params::UBP_MyGameInstance_C_CreateServer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.WidgetRef = WidgetRef;
	Parms.ParentRef = ParentRef;
	Parms.LevelName = LevelName;
	Parms.MaxPlayer = MaxPlayer;
	Parms.IsPrivate = IsPrivate;
	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.JoinServerSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowLoadingScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef, bool ShowLoadingScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "JoinServerSession");

	Params::UBP_MyGameInstance_C_JoinServerSession_Params Parms{};

	Parms.Session = Session;
	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;
	Parms.ShowLoadingScreen = ShowLoadingScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.Initialize_AudioSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::Initialize_AudioSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "Initialize_AudioSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              PersonInvited                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MyGameInstance_C::OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSessionInviteAccepted");

	Params::UBP_MyGameInstance_C_OnSessionInviteAccepted_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInvited = PersonInvited;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnPlayerTalkingStateChanged");

	Params::UBP_MyGameInstance_C_OnPlayerTalkingStateChanged_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.UnlockAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AchievementName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::UnlockAchievement(class FName AchievementName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "UnlockAchievement");

	Params::UBP_MyGameInstance_C_UnlockAchievement_Params Parms{};

	Parms.AchievementName = AchievementName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ResetAfterErrorFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ResetAfterErrorFocus");

	Params::UBP_MyGameInstance_C_ResetAfterErrorFocus_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSteamOverlayIsActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsOverlayActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::OnSteamOverlayIsActive(bool IsOverlayActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSteamOverlayIsActive");

	Params::UBP_MyGameInstance_C_OnSteamOverlayIsActive_Params Parms{};

	Parms.IsOverlayActive = IsOverlayActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::ReceiveShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ReceiveShutdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.HandleNetworkError
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ENetworkFailure         FailureType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsServer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::HandleNetworkError(enum class ENetworkFailure FailureType, bool bIsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "HandleNetworkError");

	Params::UBP_MyGameInstance_C_HandleNetworkError_Params Parms{};

	Parms.FailureType = FailureType;
	Parms.bIsServer = bIsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ExecuteUbergraph_BP_MyGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_WrittenAchievementName_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_WrittenAchievementName                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_WidgetRef                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPlayer                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPrivate                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ServerName                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FBlueprintSessionResult     K2Node_CustomEvent_Session                                       (None)
// class APlayerController*           K2Node_CustomEvent_PlayerController_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowLoadingScreen                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_LocalPlayerNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              K2Node_Event_PersonInvited                                       (None)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin                                       (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// struct FBPUniqueNetId              K2Node_Event_PlayerId                                            (None)
// bool                               K2Node_Event_bIsTalking                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_AchievementName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementWriteCallbackProxy*CallFunc_WriteAchievementProgress_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAchievementQueryCallbackProxy*CallFunc_CacheAchievements_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_C*               K2Node_DynamicCast_AsW_Main_Menu                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_isOverlayActive                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeCPPElements_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsTearingDown_isTearingDown                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetworkFailure         K2Node_Event_FailureType                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsServer                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UW_MainMenu_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UW_MainMenu_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSessionPropertyKeyPair>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreateSessionCallbackProxyAdvanced*CallFunc_CreateAdvancedSession_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::ExecuteUbergraph_BP_MyGameInstance(int32 EntryPoint, class FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, float Temp_float_Variable, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_3, class FText K2Node_CustomEvent_Message, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_2, class UWidget* K2Node_CustomEvent_WidgetRef, class UWidget* K2Node_CustomEvent_ParentRef_1, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_IsPrivate, class FText K2Node_CustomEvent_ServerName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, bool K2Node_CustomEvent_ShowLoadingScreen, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_2, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FBPUniqueNetId& K2Node_Event_PlayerId, bool K2Node_Event_bIsTalking, class FName K2Node_CustomEvent_AchievementName, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, class UAchievementQueryCallbackProxy* CallFunc_CacheAchievements_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool K2Node_Event_isOverlayActive, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_InitializeCPPElements_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_K2_IsTearingDown_isTearingDown, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue_1, enum class ENetworkFailure K2Node_Event_FailureType, bool K2Node_Event_bIsServer, bool CallFunc_IsValid_ReturnValue_8, TArray<class UW_MainMenu_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UW_MainMenu_C* CallFunc_Array_Get_Item, TArray<struct FSessionPropertyKeyPair>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_9, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ExecuteUbergraph_BP_MyGameInstance");

	Params::UBP_MyGameInstance_C_ExecuteUbergraph_BP_MyGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_WrittenAchievementName_1 = K2Node_CustomEvent_WrittenAchievementName_1;
	Parms.K2Node_CustomEvent_WrittenProgress_1 = K2Node_CustomEvent_WrittenProgress_1;
	Parms.K2Node_CustomEvent_WrittenUserTag_1 = K2Node_CustomEvent_WrittenUserTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_WrittenAchievementName = K2Node_CustomEvent_WrittenAchievementName;
	Parms.K2Node_CustomEvent_WrittenProgress = K2Node_CustomEvent_WrittenProgress;
	Parms.K2Node_CustomEvent_WrittenUserTag = K2Node_CustomEvent_WrittenUserTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerController_3 = K2Node_CustomEvent_PlayerController_3;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerController_2 = K2Node_CustomEvent_PlayerController_2;
	Parms.K2Node_CustomEvent_WidgetRef = K2Node_CustomEvent_WidgetRef;
	Parms.K2Node_CustomEvent_ParentRef_1 = K2Node_CustomEvent_ParentRef_1;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.K2Node_CustomEvent_MaxPlayer = K2Node_CustomEvent_MaxPlayer;
	Parms.K2Node_CustomEvent_IsPrivate = K2Node_CustomEvent_IsPrivate;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.K2Node_CustomEvent_PlayerController_1 = K2Node_CustomEvent_PlayerController_1;
	Parms.K2Node_CustomEvent_ParentRef = K2Node_CustomEvent_ParentRef;
	Parms.K2Node_CustomEvent_ShowLoadingScreen = K2Node_CustomEvent_ShowLoadingScreen;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_Event_LocalPlayerNum = K2Node_Event_LocalPlayerNum;
	Parms.K2Node_Event_PersonInvited = K2Node_Event_PersonInvited;
	Parms.K2Node_Event_SessionToJoin = K2Node_Event_SessionToJoin;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_JoinSession_ReturnValue_1 = CallFunc_JoinSession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_Event_PlayerId = K2Node_Event_PlayerId;
	Parms.K2Node_Event_bIsTalking = K2Node_Event_bIsTalking;
	Parms.K2Node_CustomEvent_AchievementName = K2Node_CustomEvent_AchievementName;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_WriteAchievementProgress_ReturnValue = CallFunc_WriteAchievementProgress_ReturnValue;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_CacheAchievements_ReturnValue = CallFunc_CacheAchievements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_DynamicCast_AsW_Main_Menu = K2Node_DynamicCast_AsW_Main_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_Event_isOverlayActive = K2Node_Event_isOverlayActive;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_InitializeCPPElements_ReturnValue = CallFunc_InitializeCPPElements_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_IsTearingDown_isTearingDown = CallFunc_K2_IsTearingDown_isTearingDown;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1 = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2 = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_DestroySession_ReturnValue_1 = CallFunc_DestroySession_ReturnValue_1;
	Parms.K2Node_Event_FailureType = K2Node_Event_FailureType;
	Parms.K2Node_Event_bIsServer = K2Node_Event_bIsServer;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_CreateAdvancedSession_ReturnValue = CallFunc_CreateAdvancedSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


