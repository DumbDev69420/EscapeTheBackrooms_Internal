#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destructible.BP_Destructible_C
// (None)

class UClass* IBP_Destructible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destructible_C");

	return Clss;
}


// BP_Destructible_C BP_Destructible.Default__BP_Destructible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_Destructible_C* IBP_Destructible_C::GetDefaultObj()
{
	static class IBP_Destructible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_Destructible_C*>(IBP_Destructible_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Destructible.BP_Destructible_C.Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_Destructible_C::Damage(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Destructible_C", "Damage");

	Params::IBP_Destructible_C_Damage_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


