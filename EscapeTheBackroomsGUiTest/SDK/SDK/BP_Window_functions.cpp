#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window.BP_Window_C
// (Actor)

class UClass* ABP_Window_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_C");

	return Clss;
}


// BP_Window_C BP_Window.Default__BP_Window_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_C* ABP_Window_C::GetDefaultObj()
{
	static class ABP_Window_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_C*>(ABP_Window_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Window.BP_Window_C.OnUsedNotify
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Window_C::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_C", "OnUsedNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Window.BP_Window_C.ExecuteUbergraph_BP_Window
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Window_C::ExecuteUbergraph_BP_Window(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Window_C", "ExecuteUbergraph_BP_Window");

	Params::ABP_Window_C_ExecuteUbergraph_BP_Window_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


