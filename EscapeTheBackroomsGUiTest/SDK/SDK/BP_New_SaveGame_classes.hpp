#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A0 (0x2C8 - 0x28)
// BlueprintGeneratedClass BP_New_SaveGame.BP_New_SaveGame_C
class UBP_New_SaveGame_C : public USaveGame
{
public:
	TArray<struct FS_LevelStats>                 LevelsCompleted;                                   // 0x28(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TMap<class FString, bool>                    SurvivorsList;                                     // 0x38(0x50)(Edit, BlueprintVisible)
	int32                                        LaddersFound;                                      // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Difficulty                      Difficulty;                                        // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FS_PlayerData>    PlayerData;                                        // 0x90(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         FoundFirstKey;                                     // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasUnlockedVendingMachine;                         // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMEGUnlocked;                                     // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMEGPowerOn;                                      // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMEGSecurityUnlocked;                             // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        KeysFound;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasOpenedHeavyDoor;                                // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasUnlockedBottom;                                 // 0xED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasOpenedEastSubstation;                           // 0xEE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasUnlockedWestSubstation;                         // 0xEF(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasUnlockedGenerator;                              // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasPoweredAllGenerators;                           // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentLevel;                                      // 0xF4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUnlockedHotelLobby;                             // 0xFC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17BD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HotelKeysFound;                                    // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, enum class E_Mailbox>      NotesPlaced;                                       // 0x108(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasPoweredGarage;                                  // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level94Checkpoint;                                 // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasOpenedTeeth;                                    // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasUnlockedBoilerDoor;                             // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FoundCheckpoint;                                   // 0x162(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoilerroomCheckpoint;                              // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnlockedFun;                                       // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasSeenFirstHound;                                 // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CansPlaced;                                        // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCollectedMEGCard;                               // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level7Checkpoint;                                  // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnlockedSafe;                                      // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Level05Checkpoint;                                 // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        DoorList;                                          // 0x180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_UploadStatus>               Activated;                                         // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasUnlockedMEGGate;                                // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCheckpoint;                                      // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TurbinesActivated;                                 // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSpawned;                                        // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ManillaUnlocked;                                   // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasVentBroken;                                     // 0x1AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ReachedLevel9Checkpoint;                           // 0x1AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        CaveCheckpoint;                                    // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasFinishedVideo;                                  // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SpawnInElevator;                                   // 0x1B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasMembriSpawned;                                  // 0x1B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasFoundCassette;                                  // 0x1B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasCompleteBalloonPuzzle;                          // 0x1B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasZone1Key;                                       // 0x1B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasZone2Key;                                       // 0x1B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasZone3Key;                                       // 0x1B7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasZone4Key;                                       // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_TV_Data>                    TVsPlaced;                                         // 0x1C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGuid, struct FS_Glowstick_Data> DroppedGlowsticks;                                 // 0x1D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PoolsActivated;                                    // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 KeysPlaced;                                        // 0x228(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ActivatedAllPower;                                 // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UnlockedElevator;                                  // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlacedAllTVs;                                      // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ActivatedRoom1;                                    // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ActivatedRoom2;                                    // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ActivatedRoom3;                                    // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ActivatedRoom4;                                    // 0x23E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ActivatedRoom5;                                    // 0x23F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<bool>                                 FirstValvesTurned;                                 // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 SecondValvesTurned;                                // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 ThirdValvesTurned;                                 // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         DidFinishElevator;                                 // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        UnlockedDoors;                                     // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UnlockedSnackrooms;                                // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17CA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LevelDashCheckpoint;                               // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExitIndex;                                         // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FloorIndex;                                        // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PicturesTaken;                                     // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidResetPictures;                                  // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        EyesDisarmed;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasWatchedVideo;                                   // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PoppedBalloons;                                    // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_New_SaveGame_C* GetDefaultObj();

};

}


