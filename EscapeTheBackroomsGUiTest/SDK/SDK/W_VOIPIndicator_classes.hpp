#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass W_VOIPIndicator.W_VOIPIndicator_C
class UW_VOIPIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_Username;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_VOIP_Speaker_C*                     W_VOIP_Speaker;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBPUniqueNetId                        UniqueId;                                          // 0x278(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UW_VOIPIndicator_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_W_VOIPIndicator(int32 EntryPoint, bool CallFunc_RequestSteamFriendInfo_ReturnValue, const class FString& CallFunc_GetSteamPersonaName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


