#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_SkinStealer.AIC_SkinStealer_C
// (Actor)

class UClass* AAIC_SkinStealer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_SkinStealer_C");

	return Clss;
}


// AIC_SkinStealer_C AIC_SkinStealer.Default__AIC_SkinStealer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_SkinStealer_C* AAIC_SkinStealer_C::GetDefaultObj()
{
	static class AAIC_SkinStealer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_SkinStealer_C*>(AAIC_SkinStealer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_SkinStealer.AIC_SkinStealer_C.Setup AI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBehaviorTree*               Behavior_Tree                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExtraHearing                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_SkinStealer_C::Setup_AI(class UBehaviorTree* Behavior_Tree, bool ExtraHearing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "Setup AI");

	Params::AAIC_SkinStealer_C_Setup_AI_Params Parms{};

	Parms.Behavior_Tree = Behavior_Tree;
	Parms.ExtraHearing = ExtraHearing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SkinStealer_C::BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::AAIC_SkinStealer_C_BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.BndEvt__AIC_SkinStealer_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class APawn*                       Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SkinStealer_C::BndEvt__AIC_SkinStealer_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "BndEvt__AIC_SkinStealer_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature");

	Params::AAIC_SkinStealer_C_BndEvt__AIC_SkinStealer_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Location = Location;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.OnSeePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SkinStealer_C::OnSeePlayer(class ABPCharacter_Demo_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "OnSeePlayer");

	Params::AAIC_SkinStealer_C_OnSeePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.OnStopSeePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAIC_SkinStealer_C::OnStopSeePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "OnStopSeePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.StartChase
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*         Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SkinStealer_C::StartChase(class ABPCharacter_Demo_C* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "StartChase");

	Params::AAIC_SkinStealer_C_StartChase_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_SkinStealer.AIC_SkinStealer_C.ExecuteUbergraph_AIC_SkinStealer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkinStealer_C*           K2Node_DynamicCast_AsBP_Skin_Stealer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_ComponentBoundEvent_Instigator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_Location                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_ComponentBoundEvent_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBehaviorTree*               K2Node_CustomEvent_Behavior_Tree                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ExtraHearing                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkinStealer_C*           K2Node_DynamicCast_AsBP_Skin_Stealer_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_SkinStealer_C::ExecuteUbergraph_AIC_SkinStealer(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_SkinStealer_C* K2Node_DynamicCast_AsBP_Skin_Stealer, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBehaviorTree* K2Node_CustomEvent_Behavior_Tree, bool K2Node_CustomEvent_ExtraHearing, class ABPCharacter_Demo_C* K2Node_CustomEvent_Player, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_SkinStealer_C* K2Node_DynamicCast_AsBP_Skin_Stealer_1, bool K2Node_DynamicCast_bSuccess_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Abs_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_SkinStealer_C", "ExecuteUbergraph_AIC_SkinStealer");

	Params::AAIC_SkinStealer_C_ExecuteUbergraph_AIC_SkinStealer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Skin_Stealer = K2Node_DynamicCast_AsBP_Skin_Stealer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Instigator = K2Node_ComponentBoundEvent_Instigator;
	Parms.K2Node_ComponentBoundEvent_Location = K2Node_ComponentBoundEvent_Location;
	Parms.K2Node_ComponentBoundEvent_Volume = K2Node_ComponentBoundEvent_Volume;
	Parms.K2Node_ComponentBoundEvent_Pawn = K2Node_ComponentBoundEvent_Pawn;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Behavior_Tree = K2Node_CustomEvent_Behavior_Tree;
	Parms.K2Node_CustomEvent_ExtraHearing = K2Node_CustomEvent_ExtraHearing;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Skin_Stealer_1 = K2Node_DynamicCast_AsBP_Skin_Stealer_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_3 = CallFunc_GetBlackboard_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


