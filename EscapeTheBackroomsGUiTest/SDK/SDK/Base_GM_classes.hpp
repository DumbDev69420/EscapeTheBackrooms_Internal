#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x328 - 0x308)
// BlueprintGeneratedClass Base_GM.Base_GM_C
class ABase_GM_C : public AGameMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ALobby_PlayerController_C*>     PlayerControllers;                                 // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABase_GM_C* GetDefaultObj();

	void KickPlayer(int32 PlayerId, class ALobby_PlayerController_C* CallFunc_Array_Get_Item, bool CallFunc_KickPlayer_ReturnValue);
	void Handle_PlayerDisconnection(class UObject* Player, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue);
	void Handle_PlayerConnection(class APlayerController* NewPlayer, class ALobby_PlayerController_C* K2Node_DynamicCast_AsLobby_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void ServerTravel_ToGameplayMap(class FName Map, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void K2_PostLogin(class APlayerController* NewPlayer);
	void K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC);
	void K2_OnLogout(class AController* ExitingController);
	void ExecuteUbergraph_Base_GM(int32 EntryPoint, class AController* K2Node_Event_ExitingController, class APlayerController* K2Node_Event_NewPlayer, class APlayerController* K2Node_Event_OldPC, class APlayerController* K2Node_Event_NewPC);
};

}


