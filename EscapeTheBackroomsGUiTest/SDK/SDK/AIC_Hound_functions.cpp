#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Hound.AIC_Hound_C
// (Actor)

class UClass* AAIC_Hound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Hound_C");

	return Clss;
}


// AIC_Hound_C AIC_Hound.Default__AIC_Hound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Hound_C* AAIC_Hound_C::GetDefaultObj()
{
	static class AAIC_Hound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Hound_C*>(AAIC_Hound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Hound.AIC_Hound_C.Setup AI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBehaviorTree*               BTAsset                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Hound_C::Setup_AI(class UBehaviorTree* BTAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "Setup AI");

	Params::AAIC_Hound_C_Setup_AI_Params Parms{};

	Parms.BTAsset = BTAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Hound.AIC_Hound_C.BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Hound_C::BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::AAIC_Hound_C_BndEvt__Bacteria_AIC_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Hound.AIC_Hound_C.Retreat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAIC_Hound_C::Retreat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "Retreat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_Hound.AIC_Hound_C.TriggerAggressive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*         Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Hound_C::TriggerAggressive(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "TriggerAggressive");

	Params::AAIC_Hound_C_TriggerAggressive_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Hound.AIC_Hound_C.BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class APawn*                       Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Hound_C::BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature");

	Params::AAIC_Hound_C_BndEvt__AIC_Hound_PawnSensing_K2Node_ComponentBoundEvent_1_HearNoiseDelegate__DelegateSignature_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Location = Location;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Hound.AIC_Hound_C.WarnPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABPCharacter_Demo_C*         Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Hound_C::WarnPlayer(class ABPCharacter_Demo_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "WarnPlayer");

	Params::AAIC_Hound_C_WarnPlayer_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Hound.AIC_Hound_C.ResetAggressive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAIC_Hound_C::ResetAggressive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "ResetAggressive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_Hound.AIC_Hound_C.ResetFlashlightCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAIC_Hound_C::ResetFlashlightCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "ResetFlashlightCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_Hound.AIC_Hound_C.ExecuteUbergraph_AIC_Hound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBehaviorTree*               K2Node_CustomEvent_BTAsset                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_ComponentBoundEvent_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Item_Flashlight_C*       K2Node_DynamicCast_AsBP_Item_Flashlight                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_CustomEvent_Target_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_ComponentBoundEvent_Instigator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_Location                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetValueAsBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Vector_Distance2D_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_Hound_C::ExecuteUbergraph_AIC_Hound(int32 EntryPoint, class UBehaviorTree* K2Node_CustomEvent_BTAsset, class APawn* K2Node_ComponentBoundEvent_Pawn, bool CallFunc_RunBehaviorTree_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound, bool K2Node_DynamicCast_bSuccess_2, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_GetValueAsBool_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetValueAsBool_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class ABPCharacter_Demo_C* K2Node_CustomEvent_Target, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_1, bool K2Node_DynamicCast_bSuccess_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_HasAuthority_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_3, bool K2Node_DynamicCast_bSuccess_6, float CallFunc_Vector_Distance2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_6, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_4, bool K2Node_DynamicCast_bSuccess_7, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound_5, bool K2Node_DynamicCast_bSuccess_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Hound_C", "ExecuteUbergraph_AIC_Hound");

	Params::AAIC_Hound_C_ExecuteUbergraph_AIC_Hound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_BTAsset = K2Node_CustomEvent_BTAsset;
	Parms.K2Node_ComponentBoundEvent_Pawn = K2Node_ComponentBoundEvent_Pawn;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Item_Flashlight = K2Node_DynamicCast_AsBP_Item_Flashlight;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Hound = K2Node_DynamicCast_AsBP_Hound;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Target_1 = K2Node_CustomEvent_Target_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Instigator = K2Node_ComponentBoundEvent_Instigator;
	Parms.K2Node_ComponentBoundEvent_Location = K2Node_ComponentBoundEvent_Location;
	Parms.K2Node_ComponentBoundEvent_Volume = K2Node_ComponentBoundEvent_Volume;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetValueAsBool_ReturnValue_1 = CallFunc_GetValueAsBool_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Hound_1 = K2Node_DynamicCast_AsBP_Hound_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Hound_2 = K2Node_DynamicCast_AsBP_Hound_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue_4 = CallFunc_K2_GetPawn_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Hound_3 = K2Node_DynamicCast_AsBP_Hound_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Vector_Distance2D_ReturnValue = CallFunc_Vector_Distance2D_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_5 = CallFunc_K2_GetPawn_ReturnValue_5;
	Parms.CallFunc_K2_GetPawn_ReturnValue_6 = CallFunc_K2_GetPawn_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Hound_4 = K2Node_DynamicCast_AsBP_Hound_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_DynamicCast_AsBP_Hound_5 = K2Node_DynamicCast_AsBP_Hound_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;

	UObject::ProcessEvent(Func, &Parms);

}

}


