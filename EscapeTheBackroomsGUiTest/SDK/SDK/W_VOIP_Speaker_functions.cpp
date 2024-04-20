#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIP_Speaker.W_VOIP_Speaker_C
// (None)

class UClass* UW_VOIP_Speaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIP_Speaker_C");

	return Clss;
}


// W_VOIP_Speaker_C W_VOIP_Speaker.Default__W_VOIP_Speaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIP_Speaker_C* UW_VOIP_Speaker_C::GetDefaultObj()
{
	static class UW_VOIP_Speaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIP_Speaker_C*>(UW_VOIP_Speaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIP_Speaker.W_VOIP_Speaker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIP_Speaker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIP_Speaker_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIP_Speaker.W_VOIP_Speaker_C.ExecuteUbergraph_W_VOIP_Speaker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIP_Speaker_C::ExecuteUbergraph_W_VOIP_Speaker(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIP_Speaker_C", "ExecuteUbergraph_W_VOIP_Speaker");

	Params::UW_VOIP_Speaker_C_ExecuteUbergraph_W_VOIP_Speaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


