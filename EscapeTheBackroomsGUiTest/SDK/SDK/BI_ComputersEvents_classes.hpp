#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BI_ComputersEvents.BI_ComputersEvents_C
class IBI_ComputersEvents_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBI_ComputersEvents_C* GetDefaultObj();

	void OnClose();
	void LaunchShortcut(int32 Program_ID, class UTexture2D* Texture2D__if_applicatable_, class FText Text__if_applicatable_, class USoundBase* Sounnd__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& Level_Name__if_applicatable_);
};

}


