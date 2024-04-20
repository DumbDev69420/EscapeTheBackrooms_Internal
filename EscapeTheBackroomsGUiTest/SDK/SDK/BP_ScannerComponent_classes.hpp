#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x171 - 0x160)
// BlueprintGeneratedClass BP_ScannerComponent.BP_ScannerComponent_C
class UBP_ScannerComponent_C : public UMotionScannerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x160(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              DMI_Scanner;                                       // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaveScannerEnabled;                               // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ScannerComponent_C* GetDefaultObj();

	void SetWavePosition(bool CallFunc_IsValid_ReturnValue);
	void EndWaveEvent();
	void StartWaveEvent();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateMaterial(bool UseFOV);
	void ExecuteUbergraph_BP_ScannerComponent(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_CustomEvent_UseFOV, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
};

}


