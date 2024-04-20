#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BasePlayerController.BP_BasePlayerController_C
// (Actor, PlayerController)

class UClass* ABP_BasePlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BasePlayerController_C");

	return Clss;
}


// BP_BasePlayerController_C BP_BasePlayerController.Default__BP_BasePlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BasePlayerController_C* ABP_BasePlayerController_C::GetDefaultObj()
{
	static class ABP_BasePlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BasePlayerController_C*>(ABP_BasePlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BasePlayerController.BP_BasePlayerController_C.UnlockAchievement
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AchievementName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BasePlayerController_C::UnlockAchievement(class FName AchievementName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasePlayerController_C", "UnlockAchievement");

	Params::ABP_BasePlayerController_C_UnlockAchievement_Params Parms{};

	Parms.AchievementName = AchievementName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BasePlayerController.BP_BasePlayerController_C.ExecuteUbergraph_BP_BasePlayerController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AchievementName                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MyGameInstance_C*        K2Node_DynamicCast_AsBP_My_Game_Instance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BasePlayerController_C::ExecuteUbergraph_BP_BasePlayerController(int32 EntryPoint, class FName K2Node_CustomEvent_AchievementName, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BasePlayerController_C", "ExecuteUbergraph_BP_BasePlayerController");

	Params::ABP_BasePlayerController_C_ExecuteUbergraph_BP_BasePlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AchievementName = K2Node_CustomEvent_AchievementName;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_My_Game_Instance = K2Node_DynamicCast_AsBP_My_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


