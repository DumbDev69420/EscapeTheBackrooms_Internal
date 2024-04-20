#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Animation.AIC_Animation_C
// (Actor)

class UClass* AAIC_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Animation_C");

	return Clss;
}


// AIC_Animation_C AIC_Animation.Default__AIC_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Animation_C* AAIC_Animation_C::GetDefaultObj()
{
	static class AAIC_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Animation_C*>(AAIC_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_Animation.AIC_Animation_C.BndEvt__PartyGoer_BP_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_Animation_C::BndEvt__PartyGoer_BP_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Animation_C", "BndEvt__PartyGoer_BP_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::AAIC_Animation_C_BndEvt__PartyGoer_BP_PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_Animation.AIC_Animation_C.ExecuteUbergraph_AIC_Animation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_ComponentBoundEvent_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAIC_Animation_C::ExecuteUbergraph_AIC_Animation(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_Animation_C", "ExecuteUbergraph_AIC_Animation");

	Params::AAIC_Animation_C_ExecuteUbergraph_AIC_Animation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Pawn = K2Node_ComponentBoundEvent_Pawn;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


