#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass PlayerEQSQuery.PlayerEQSQuery_C
class UPlayerEQSQuery_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UPlayerEQSQuery_C* GetDefaultObj();

	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class ABPCharacter_Demo_C*>& CallFunc_GetAllActorsOfClass_OutActors);
};

}


