#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BoatEQS_Query.BoatEQS_Query_C
// (None)

class UClass* UBoatEQS_Query_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoatEQS_Query_C");

	return Clss;
}


// BoatEQS_Query_C BoatEQS_Query.Default__BoatEQS_Query_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBoatEQS_Query_C* UBoatEQS_Query_C::GetDefaultObj()
{
	static class UBoatEQS_Query_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoatEQS_Query_C*>(UBoatEQS_Query_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BoatEQS_Query.BoatEQS_Query_C.ProvideActorsSet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm)
// TArray<class ABP_RowBoat_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)

void UBoatEQS_Query_C::ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class ABP_RowBoat_C*>& CallFunc_GetAllActorsOfClass_OutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatEQS_Query_C", "ProvideActorsSet");

	Params::UBoatEQS_Query_C_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActorsSet != nullptr)
		*ResultingActorsSet = std::move(Parms.ResultingActorsSet);

}

}


