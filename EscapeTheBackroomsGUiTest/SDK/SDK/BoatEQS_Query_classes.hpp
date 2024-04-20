#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BoatEQS_Query.BoatEQS_Query_C
class UBoatEQS_Query_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UBoatEQS_Query_C* GetDefaultObj();

	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class ABP_RowBoat_C*>& CallFunc_GetAllActorsOfClass_OutActors);
};

}


