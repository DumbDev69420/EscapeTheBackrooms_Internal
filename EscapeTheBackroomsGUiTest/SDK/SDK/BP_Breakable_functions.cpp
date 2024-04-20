#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Breakable.BP_Breakable_C
// (None)

class UClass* IBP_Breakable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Breakable_C");

	return Clss;
}


// BP_Breakable_C BP_Breakable.Default__BP_Breakable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_Breakable_C* IBP_Breakable_C::GetDefaultObj()
{
	static class IBP_Breakable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_Breakable_C*>(IBP_Breakable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Breakable.BP_Breakable_C.Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_Breakable_C::Damage(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Breakable_C", "Damage");

	Params::IBP_Breakable_C_Damage_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


