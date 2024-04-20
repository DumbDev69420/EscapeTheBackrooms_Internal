#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bacteria_AIC_2.Bacteria_AIC_2_C
// (Actor)

class UClass* ABacteria_AIC_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bacteria_AIC_2_C");

	return Clss;
}


// Bacteria_AIC_2_C Bacteria_AIC_2.Default__Bacteria_AIC_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABacteria_AIC_2_C* ABacteria_AIC_2_C::GetDefaultObj()
{
	static class ABacteria_AIC_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABacteria_AIC_2_C*>(ABacteria_AIC_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABacteria_AIC_2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABacteria_AIC_2_C::BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::ABacteria_AIC_2_C_BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.SetCanTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABacteria_AIC_2_C::SetCanTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "SetCanTeleport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bacteria_AIC_2.Bacteria_AIC_2_C.ExecuteUbergraph_Bacteria_AIC_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABacteria_Roaming_BP_C*      K2Node_DynamicCast_AsBacteria_Roaming_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_ComponentBoundEvent_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_New_SaveGame_C*          CallFunc_Load_Game_SaveGame                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABacteria_Roaming_BP_C*      K2Node_DynamicCast_AsBacteria_Roaming_BP_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABacteria_AIC_2_C::ExecuteUbergraph_Bacteria_AIC_2(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, class UBP_New_SaveGame_C* CallFunc_Load_Game_SaveGame, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bacteria_AIC_2_C", "ExecuteUbergraph_Bacteria_AIC_2");

	Params::ABacteria_AIC_2_C_ExecuteUbergraph_Bacteria_AIC_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBacteria_Roaming_BP = K2Node_DynamicCast_AsBacteria_Roaming_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Pawn = K2Node_ComponentBoundEvent_Pawn;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_GetBlackboard_ReturnValue_3 = CallFunc_GetBlackboard_ReturnValue_3;
	Parms.CallFunc_GetBlackboard_ReturnValue_4 = CallFunc_GetBlackboard_ReturnValue_4;
	Parms.CallFunc_Load_Game_SaveGame = CallFunc_Load_Game_SaveGame;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBacteria_Roaming_BP_1 = K2Node_DynamicCast_AsBacteria_Roaming_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_5 = CallFunc_GetBlackboard_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


