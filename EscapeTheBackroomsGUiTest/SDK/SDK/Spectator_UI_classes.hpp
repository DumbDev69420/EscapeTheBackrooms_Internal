#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass Spectator_UI.Spectator_UI_C
class USpectator_UI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            SpectatingName;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USpectator_UI_C* GetDefaultObj();

	void SetPlayerName(const class FString& Name, class FText CallFunc_Conv_StringToText_ReturnValue);
	void CanClose();
	void ExecuteUbergraph_Spectator_UI(int32 EntryPoint);
};

}


