#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass BP_Ragdoll.BP_Ragdoll_C
class ABP_Ragdoll_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Mesh;                                              // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Ragdoll_C* GetDefaultObj();

	void OnNotifyEnd_7CA886504E74A26B7124BE88FF3FEBF5(class FName NotifyName);
	void OnNotifyBegin_7CA886504E74A26B7124BE88FF3FEBF5(class FName NotifyName);
	void OnInterrupted_7CA886504E74A26B7124BE88FF3FEBF5(class FName NotifyName);
	void OnBlendOut_7CA886504E74A26B7124BE88FF3FEBF5(class FName NotifyName);
	void OnCompleted_7CA886504E74A26B7124BE88FF3FEBF5(class FName NotifyName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Ragdoll(int32 EntryPoint, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable);
};

}


