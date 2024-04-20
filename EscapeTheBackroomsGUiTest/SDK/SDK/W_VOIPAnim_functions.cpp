#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPAnim.W_VOIPAnim_C
// (None)

class UClass* UW_VOIPAnim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPAnim_C");

	return Clss;
}


// W_VOIPAnim_C W_VOIPAnim.Default__W_VOIPAnim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPAnim_C* UW_VOIPAnim_C::GetDefaultObj()
{
	static class UW_VOIPAnim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPAnim_C*>(UW_VOIPAnim_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPAnim.W_VOIPAnim_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIPAnim_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPAnim_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPAnim.W_VOIPAnim_C.ExecuteUbergraph_W_VOIPAnim
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPAnim_C::ExecuteUbergraph_W_VOIPAnim(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPAnim_C", "ExecuteUbergraph_W_VOIPAnim");

	Params::UW_VOIPAnim_C_ExecuteUbergraph_W_VOIPAnim_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


