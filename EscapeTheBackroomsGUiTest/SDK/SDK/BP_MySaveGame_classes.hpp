#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xA8 - 0x28)
// BlueprintGeneratedClass BP_MySaveGame.BP_MySaveGame_C
class UBP_MySaveGame_C : public USaveGame
{
public:
	TArray<struct FS_LevelStats>                 LevelStats;                                        // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         HasSeenCutscene;                                   // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasSeenEndscene;                                   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2205[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SingleplayerSaves;                                 // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        EasySaves;                                         // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        NormalSaves;                                       // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        HardSaves;                                         // 0x70(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                        NightmareSaves;                                    // 0x80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HubUnlocked;                                       // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2206[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentGameBuild;                                  // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        DocumentsFound;                                    // 0x98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_MySaveGame_C* GetDefaultObj();

};

}


