#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function PlayerEQSQuery.PlayerEQSQuery_C.ProvideActorsSet
struct UPlayerEQSQuery_C_ProvideActorsSet_Params
{
public:
	class UObject*                               QuerierObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                QuerierActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ResultingActorsSet;                                // 0x10(0x10)(Parm, OutParm)
	TArray<class ABPCharacter_Demo_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ReferenceParm)
};

}
}


