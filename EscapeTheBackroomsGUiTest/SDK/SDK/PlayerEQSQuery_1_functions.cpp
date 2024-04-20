#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerEQSQuery.PlayerEQSQuery_C
// (None)

class UClass* UPlayerEQSQuery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerEQSQuery_C");

	return Clss;
}


// PlayerEQSQuery_C PlayerEQSQuery.Default__PlayerEQSQuery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerEQSQuery_C* UPlayerEQSQuery_C::GetDefaultObj()
{
	static class UPlayerEQSQuery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerEQSQuery_C*>(UPlayerEQSQuery_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerEQSQuery.PlayerEQSQuery_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm)
// TArray<class ABPCharacter_Demo_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)

void UPlayerEQSQuery_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerEQSQuery_C", "ProvideActorsSet");

	Params::UPlayerEQSQuery_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


