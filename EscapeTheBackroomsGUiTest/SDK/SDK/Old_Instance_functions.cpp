#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Old_Instance.Old_Instance_C
// (None)

class UClass* UOld_Instance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Old_Instance_C");

	return Clss;
}


// Old_Instance_C Old_Instance.Default__Old_Instance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOld_Instance_C* UOld_Instance_C::GetDefaultObj()
{
	static class UOld_Instance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOld_Instance_C*>(UOld_Instance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Old_Instance.Old_Instance_C.ToggleVoiceIngame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActivated                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOld_Instance_C::ToggleVoiceIngame(bool IsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "ToggleVoiceIngame");

	Params::UOld_Instance_C_ToggleVoiceIngame_Params Parms{};

	Parms.IsActivated = IsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.CheckCodeUnique
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSessionsSearchSetting      Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UOld_Instance_C::CheckCodeUnique(const struct FSessionsSearchSetting& Code)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "CheckCodeUnique");

	Params::UOld_Instance_C_CheckCodeUnique_Params Parms{};

	Parms.Code = Code;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.GenerateCode
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

void UOld_Instance_C::GenerateCode(const TArray<class FString>& CharacterSet, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "GenerateCode");

	Params::UOld_Instance_C_GenerateCode_Params Parms{};

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


// Function Old_Instance.Old_Instance_C.OnFailure_A80D36E848E6AE6183E259BE7692C339
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnFailure_A80D36E848E6AE6183E259BE7692C339()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_A80D36E848E6AE6183E259BE7692C339");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_A80D36E848E6AE6183E259BE7692C339
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnSuccess_A80D36E848E6AE6183E259BE7692C339()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_A80D36E848E6AE6183E259BE7692C339");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnFailure_3D35B0DB407C07D551689385E984433B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnFailure_3D35B0DB407C07D551689385E984433B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_3D35B0DB407C07D551689385E984433B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_3D35B0DB407C07D551689385E984433B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnSuccess_3D35B0DB407C07D551689385E984433B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_3D35B0DB407C07D551689385E984433B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOld_Instance_C::OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D");

	Params::UOld_Instance_C_OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOld_Instance_C::OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D");

	Params::UOld_Instance_C_OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnFailure_887915044268FE8E01B793860BA0535C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOld_Instance_C::OnFailure_887915044268FE8E01B793860BA0535C(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_887915044268FE8E01B793860BA0535C");

	Params::UOld_Instance_C_OnFailure_887915044268FE8E01B793860BA0535C_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_887915044268FE8E01B793860BA0535C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult>Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOld_Instance_C::OnSuccess_887915044268FE8E01B793860BA0535C(TArray<struct FBlueprintSessionResult>& Results)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_887915044268FE8E01B793860BA0535C");

	Params::UOld_Instance_C_OnSuccess_887915044268FE8E01B793860BA0535C_Params Parms{};

	Parms.Results = Results;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnFailure_E86CBC904E3BC46F964D8587210AFCCB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnFailure_E86CBC904E3BC46F964D8587210AFCCB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_E86CBC904E3BC46F964D8587210AFCCB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_E86CBC904E3BC46F964D8587210AFCCB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnSuccess_E86CBC904E3BC46F964D8587210AFCCB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_E86CBC904E3BC46F964D8587210AFCCB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnFailure_B97CE1CD4661BC21FA87C5971EBFAE4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnFailure_B97CE1CD4661BC21FA87C5971EBFAE4B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_B97CE1CD4661BC21FA87C5971EBFAE4B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_B97CE1CD4661BC21FA87C5971EBFAE4B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::OnSuccess_B97CE1CD4661BC21FA87C5971EBFAE4B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_B97CE1CD4661BC21FA87C5971EBFAE4B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnFailure_ED213154495FF5E71DED67A697B987EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOld_Instance_C::OnFailure_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnFailure_ED213154495FF5E71DED67A697B987EA");

	Params::UOld_Instance_C_OnFailure_ED213154495FF5E71DED67A697B987EA_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnSuccess_ED213154495FF5E71DED67A697B987EA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WrittenAchievementName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WrittenProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WrittenUserTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOld_Instance_C::OnSuccess_ED213154495FF5E71DED67A697B987EA(class FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSuccess_ED213154495FF5E71DED67A697B987EA");

	Params::UOld_Instance_C_OnSuccess_ED213154495FF5E71DED67A697B987EA_Params Parms{};

	Parms.WrittenAchievementName = WrittenAchievementName;
	Parms.WrittenProgress = WrittenProgress;
	Parms.WrittenUserTag = WrittenUserTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.CreateServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     WidgetRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPrivate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ServerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UOld_Instance_C::CreateServer(class APlayerController* PlayerController, class UWidget* WidgetRef, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool IsPrivate, class FText ServerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "CreateServer");

	Params::UOld_Instance_C_CreateServer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.WidgetRef = WidgetRef;
	Parms.ParentRef = ParentRef;
	Parms.LevelName = LevelName;
	Parms.MaxPlayer = MaxPlayer;
	Parms.IsPrivate = IsPrivate;
	Parms.ServerName = ServerName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.JoinServerCode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Code                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOld_Instance_C::JoinServerCode(const class FString& Code, class APlayerController* PlayerController, class UWidget* ParentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "JoinServerCode");

	Params::UOld_Instance_C_JoinServerCode_Params Parms{};

	Parms.Code = Code;
	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UOld_Instance_C::ShowLoadingScreen(class APlayerController* PlayerController, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "ShowLoadingScreen");

	Params::UOld_Instance_C_ShowLoadingScreen_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.JoinServerSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowLoadingScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOld_Instance_C::JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef, bool ShowLoadingScreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "JoinServerSession");

	Params::UOld_Instance_C_JoinServerSession_Params Parms{};

	Parms.Session = Session;
	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;
	Parms.ShowLoadingScreen = ShowLoadingScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.ResetAfterErrorFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOld_Instance_C::ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "ResetAfterErrorFocus");

	Params::UOld_Instance_C_ResetAfterErrorFocus_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.Initialize_AudioSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOld_Instance_C::Initialize_AudioSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "Initialize_AudioSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UOld_Instance_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Old_Instance.Old_Instance_C.OnSessionInviteAccepted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              LocalPlayerNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              PersonInvited                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FBlueprintSessionResult     SessionToJoin                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOld_Instance_C::OnSessionInviteAccepted(int32 LocalPlayerNum, const struct FBPUniqueNetId& PersonInvited, struct FBlueprintSessionResult& SessionToJoin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnSessionInviteAccepted");

	Params::UOld_Instance_C_OnSessionInviteAccepted_Params Parms{};

	Parms.LocalPlayerNum = LocalPlayerNum;
	Parms.PersonInvited = PersonInvited;
	Parms.SessionToJoin = SessionToJoin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.OnPlayerTalkingStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBPUniqueNetId              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOld_Instance_C::OnPlayerTalkingStateChanged(const struct FBPUniqueNetId& PlayerId, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "OnPlayerTalkingStateChanged");

	Params::UOld_Instance_C_OnPlayerTalkingStateChanged_Params Parms{};

	Parms.PlayerId = PlayerId;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.UnlockAchievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AchievementName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOld_Instance_C::UnlockAchievement(class FName AchievementName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "UnlockAchievement");

	Params::UOld_Instance_C_UnlockAchievement_Params Parms{};

	Parms.AchievementName = AchievementName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Old_Instance.Old_Instance_C.ExecuteUbergraph_Old_Instance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              CallFunc_GetUniqueNetID_UniqueNetId                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_WrittenAchievementName_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_WrittenAchievementName                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WrittenProgress                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_WrittenUserTag                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_WidgetRef                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPlayer                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPrivate                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_ServerName                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue              (None)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue            (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Code                                          (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1          (None)
// struct FSessionsSearchSetting      CallFunc_MakeLiteralSessionSearchProperty_ReturnValue            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable                                             (ReferenceParm)
// struct FBlueprintSessionResult     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBlueprintSessionResult     K2Node_CustomEvent_Session                                       (None)
// class APlayerController*           K2Node_CustomEvent_PlayerController_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowLoadingScreen                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results                                       (ConstParm, ReferenceParm)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_1                                     (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_C*               K2Node_DynamicCast_AsW_Main_Menu                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// TArray<struct FBlueprintSessionResult>Temp_struct_Variable_1                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_2                                     (ConstParm, ReferenceParm)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2          (None)
// struct FSessionsSearchSetting      CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1          (None)
// TArray<struct FSessionsSearchSetting>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UFindSessionsCallbackProxyAdvanced*CallFunc_FindSessionsAdvanced_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FBlueprintSessionResult>K2Node_CustomEvent_Results_3                                     (ConstParm, ReferenceParm)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1            (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// class UCreateSessionCallbackProxyAdvanced*CallFunc_CreateAdvancedSession_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSessionPropertyKeyPair     CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2            (None)
// struct FSessionsSearchSetting      CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2          (None)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionsSearchSetting>K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)
// class UFindSessionsCallbackProxyAdvanced*CallFunc_FindSessionsAdvanced_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_LocalPlayerNum                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPUniqueNetId              K2Node_Event_PersonInvited                                       (None)
// struct FBlueprintSessionResult     K2Node_Event_SessionToJoin                                       (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestroySessionCallbackProxy*CallFunc_DestroySession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBPUniqueNetId              K2Node_Event_PlayerId                                            (None)
// bool                               K2Node_Event_bIsTalking                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_UNetIDUnetID_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_AchievementName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAchievementWriteCallbackProxy*CallFunc_WriteAchievementProgress_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALobby_PlayerController_C*   K2Node_DynamicCast_AsLobby_Player_Controller                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOld_Instance_C::ExecuteUbergraph_Old_Instance(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FBPUniqueNetId& CallFunc_GetUniqueNetID_UniqueNetId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_WrittenAchievementName_1, float K2Node_CustomEvent_WrittenProgress_1, int32 K2Node_CustomEvent_WrittenUserTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_WrittenAchievementName, float K2Node_CustomEvent_WrittenProgress, int32 K2Node_CustomEvent_WrittenUserTag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable, float Temp_float_Variable, class FName Temp_name_Variable, class APlayerController* K2Node_CustomEvent_PlayerController_4, class UWidget* K2Node_CustomEvent_WidgetRef, class UWidget* K2Node_CustomEvent_ParentRef_2, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_IsPrivate, class FText K2Node_CustomEvent_ServerName, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& K2Node_CustomEvent_Code, class APlayerController* K2Node_CustomEvent_PlayerController_3, class UWidget* K2Node_CustomEvent_ParentRef_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* K2Node_CustomEvent_PlayerController_2, class FText K2Node_CustomEvent_Message, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable, const struct FBlueprintSessionResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, bool K2Node_CustomEvent_ShowLoadingScreen, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, TArray<struct FBlueprintSessionResult>& Temp_struct_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_2, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1, TArray<struct FSessionsSearchSetting>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_5, TArray<struct FBlueprintSessionResult>& K2Node_CustomEvent_Results_3, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, TArray<struct FSessionPropertyKeyPair>& K2Node_MakeArray_Array_1, class UCreateSessionCallbackProxyAdvanced* CallFunc_CreateAdvancedSession_ReturnValue, const struct FSessionPropertyKeyPair& CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2, const struct FSessionsSearchSetting& CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, TArray<struct FSessionsSearchSetting>& K2Node_MakeArray_Array_2, class UFindSessionsCallbackProxyAdvanced* CallFunc_FindSessionsAdvanced_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, int32 K2Node_Event_LocalPlayerNum, const struct FBPUniqueNetId& K2Node_Event_PersonInvited, const struct FBlueprintSessionResult& K2Node_Event_SessionToJoin, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UDestroySessionCallbackProxy* CallFunc_DestroySession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_8, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, const struct FBPUniqueNetId& K2Node_Event_PlayerId, bool K2Node_Event_bIsTalking, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_EqualEqual_UNetIDUnetID_ReturnValue, class FName K2Node_CustomEvent_AchievementName, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UAchievementWriteCallbackProxy* CallFunc_WriteAchievementProgress_ReturnValue, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_10, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Old_Instance_C", "ExecuteUbergraph_Old_Instance");

	Params::UOld_Instance_C_ExecuteUbergraph_Old_Instance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetUniqueNetID_UniqueNetId = CallFunc_GetUniqueNetID_UniqueNetId;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_WrittenAchievementName_1 = K2Node_CustomEvent_WrittenAchievementName_1;
	Parms.K2Node_CustomEvent_WrittenProgress_1 = K2Node_CustomEvent_WrittenProgress_1;
	Parms.K2Node_CustomEvent_WrittenUserTag_1 = K2Node_CustomEvent_WrittenUserTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_WrittenAchievementName = K2Node_CustomEvent_WrittenAchievementName;
	Parms.K2Node_CustomEvent_WrittenProgress = K2Node_CustomEvent_WrittenProgress;
	Parms.K2Node_CustomEvent_WrittenUserTag = K2Node_CustomEvent_WrittenUserTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CustomEvent_PlayerController_4 = K2Node_CustomEvent_PlayerController_4;
	Parms.K2Node_CustomEvent_WidgetRef = K2Node_CustomEvent_WidgetRef;
	Parms.K2Node_CustomEvent_ParentRef_2 = K2Node_CustomEvent_ParentRef_2;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.K2Node_CustomEvent_MaxPlayer = K2Node_CustomEvent_MaxPlayer;
	Parms.K2Node_CustomEvent_IsPrivate = K2Node_CustomEvent_IsPrivate;
	Parms.K2Node_CustomEvent_ServerName = K2Node_CustomEvent_ServerName;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue = CallFunc_MakeLiteralSessionPropertyString_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_Code = K2Node_CustomEvent_Code;
	Parms.K2Node_CustomEvent_PlayerController_3 = K2Node_CustomEvent_PlayerController_3;
	Parms.K2Node_CustomEvent_ParentRef_1 = K2Node_CustomEvent_ParentRef_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralSessionSearchProperty_ReturnValue = CallFunc_MakeLiteralSessionSearchProperty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_PlayerController_2 = K2Node_CustomEvent_PlayerController_2;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.K2Node_CustomEvent_PlayerController_1 = K2Node_CustomEvent_PlayerController_1;
	Parms.K2Node_CustomEvent_ParentRef = K2Node_CustomEvent_ParentRef;
	Parms.K2Node_CustomEvent_ShowLoadingScreen = K2Node_CustomEvent_ShowLoadingScreen;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Results = K2Node_CustomEvent_Results;
	Parms.K2Node_CustomEvent_Results_1 = K2Node_CustomEvent_Results_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_DynamicCast_AsW_Main_Menu = K2Node_DynamicCast_AsW_Main_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Results_2 = K2Node_CustomEvent_Results_2;
	Parms.CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2 = CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2;
	Parms.CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1 = CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_FindSessionsAdvanced_ReturnValue = CallFunc_FindSessionsAdvanced_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CustomEvent_Results_3 = K2Node_CustomEvent_Results_3;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1 = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CreateAdvancedSession_ReturnValue = CallFunc_CreateAdvancedSession_ReturnValue;
	Parms.CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2 = CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2;
	Parms.CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2 = CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_FindSessionsAdvanced_ReturnValue_1 = CallFunc_FindSessionsAdvanced_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_Event_LocalPlayerNum = K2Node_Event_LocalPlayerNum;
	Parms.K2Node_Event_PersonInvited = K2Node_Event_PersonInvited;
	Parms.K2Node_Event_SessionToJoin = K2Node_Event_SessionToJoin;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_DestroySession_ReturnValue = CallFunc_DestroySession_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_JoinSession_ReturnValue_1 = CallFunc_JoinSession_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Event_PlayerId = K2Node_Event_PlayerId;
	Parms.K2Node_Event_bIsTalking = K2Node_Event_bIsTalking;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_EqualEqual_UNetIDUnetID_ReturnValue = CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;
	Parms.K2Node_CustomEvent_AchievementName = K2Node_CustomEvent_AchievementName;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_WriteAchievementProgress_ReturnValue = CallFunc_WriteAchievementProgress_ReturnValue;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller = K2Node_DynamicCast_AsMP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsLobby_Player_Controller = K2Node_DynamicCast_AsLobby_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}

}


