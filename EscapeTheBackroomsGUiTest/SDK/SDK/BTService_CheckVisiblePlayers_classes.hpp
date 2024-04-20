#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass BTService_CheckVisiblePlayers.BTService_CheckVisiblePlayers_C
class UBTService_CheckVisiblePlayers_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTService_CheckVisiblePlayers_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTService_CheckVisiblePlayers(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class FName CallFunc_MakeLiteralName_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, TArray<class AActor*>& CallFunc_GetQueryResultsAsActors_ResultActors, bool CallFunc_GetQueryResultsAsActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2);
};

}


