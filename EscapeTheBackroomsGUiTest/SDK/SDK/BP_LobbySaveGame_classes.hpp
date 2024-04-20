#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x58 - 0x28)
// BlueprintGeneratedClass BP_LobbySaveGame.BP_LobbySaveGame_C
class UBP_LobbySaveGame_C : public USaveGame
{
public:
	TArray<struct FS_LevelStats>                 EasyStats;                                         // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_LevelStats>                 NormalStats;                                       // 0x38(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_LevelStats>                 HardStats;                                         // 0x48(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UBP_LobbySaveGame_C* GetDefaultObj();

};

}


