#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VRCharacter_Demo_Client.VRCharacter_Demo_Client_C
// (Actor, Pawn)

class UClass* AVRCharacter_Demo_Client_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VRCharacter_Demo_Client_C");

	return Clss;
}


// VRCharacter_Demo_Client_C VRCharacter_Demo_Client.Default__VRCharacter_Demo_Client_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVRCharacter_Demo_Client_C* AVRCharacter_Demo_Client_C::GetDefaultObj()
{
	static class AVRCharacter_Demo_Client_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVRCharacter_Demo_Client_C*>(AVRCharacter_Demo_Client_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.RemoveVHS
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)

void AVRCharacter_Demo_Client_C::RemoveVHS(TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "RemoveVHS");

	Params::AVRCharacter_Demo_Client_C_RemoveVHS_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.CheckFlashlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Item_Flashlight_C*       K2Node_DynamicCast_AsBP_Item_Flashlight                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Item_Flashlight_C*       K2Node_DynamicCast_AsBP_Item_Flashlight_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInConeInRadians_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class ABP_Item_Flashlight_C*       K2Node_DynamicCast_AsBP_Item_Flashlight_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Moth_C*                  K2Node_DynamicCast_AsBP_Moth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::CheckFlashlight(class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight, bool K2Node_DynamicCast_bSuccess, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInRadians_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight_2, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth, bool K2Node_DynamicCast_bSuccess_3, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "CheckFlashlight");

	Params::AVRCharacter_Demo_Client_C_CheckFlashlight_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Item_Flashlight = K2Node_DynamicCast_AsBP_Item_Flashlight;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Item_Flashlight_1 = K2Node_DynamicCast_AsBP_Item_Flashlight_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_RandomUnitVectorInConeInRadians_ReturnValue = CallFunc_RandomUnitVectorInConeInRadians_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsBP_Item_Flashlight_2 = K2Node_DynamicCast_AsBP_Item_Flashlight_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsBP_Moth = K2Node_DynamicCast_AsBP_Moth;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Hound = K2Node_DynamicCast_AsBP_Hound;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ToggleCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::ToggleCrosshair(bool IsVisible, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ToggleCrosshair");

	Params::AVRCharacter_Demo_Client_C_ToggleCrosshair_Params Parms{};

	Parms.IsVisible = IsVisible;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ToggleVHS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::ToggleVHS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ToggleVHS");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Headshake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepActionsEnum    FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit_1                              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAtLocation_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::Headshake(enum class EFootstepActionsEnum FootstepType, bool K2Node_SwitchEnum_CmpSuccess, TArray<class AActor*>& Temp_object_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class USoundBase* Temp_object_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, enum class EPhysicalSurface Temp_byte_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, class USoundBase* Temp_object_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_3, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_IsMovingOnGround_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, enum class EPhysicalSurface Temp_byte_Variable_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Headshake");

	Params::AVRCharacter_Demo_Client_C_Headshake_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_3 = CallFunc_GetPlayerPawn_ReturnValue_3;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_4 = CallFunc_GetPlayerPawn_ReturnValue_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_5 = CallFunc_GetPlayerPawn_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit_1 = CallFunc_SphereTraceSingle_OutHit_1;
	Parms.CallFunc_SphereTraceSingle_ReturnValue_1 = CallFunc_SphereTraceSingle_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue_1 = CallFunc_SpawnSoundAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.TickGesture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_DetectCurrentGesture_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DetectCurrentGesture_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActionPose_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetActionPose_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::TickGesture(class FName CallFunc_DetectCurrentGesture_ReturnValue, class FName CallFunc_DetectCurrentGesture_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_GetActionPose_ReturnValue, bool CallFunc_GetActionPose_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "TickGesture");

	Params::AVRCharacter_Demo_Client_C_TickGesture_Params Parms{};

	Parms.CallFunc_DetectCurrentGesture_ReturnValue = CallFunc_DetectCurrentGesture_ReturnValue;
	Parms.CallFunc_DetectCurrentGesture_ReturnValue_1 = CallFunc_DetectCurrentGesture_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetActionPose_ReturnValue = CallFunc_GetActionPose_ReturnValue;
	Parms.CallFunc_GetActionPose_ReturnValue_1 = CallFunc_GetActionPose_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Update Beam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_GetLastHitResult_ReturnValue                            (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverHitTestVisibleWidget_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_GetLastHitResult_ReturnValue_1                          (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::Update_Beam(bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FHitResult& CallFunc_GetLastHitResult_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Update Beam");

	Params::AVRCharacter_Demo_Client_C_Update_Beam_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetLastHitResult_ReturnValue = CallFunc_GetLastHitResult_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_IsOverHitTestVisibleWidget_ReturnValue = CallFunc_IsOverHitTestVisibleWidget_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLastHitResult_ReturnValue_1 = CallFunc_GetLastHitResult_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1 = CallFunc_IsOverHitTestVisibleWidget_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Toggle Post Processing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activated                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::Toggle_Post_Processing(bool Activated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Toggle Post Processing");

	Params::AVRCharacter_Demo_Client_C_Toggle_Post_Processing_Params Parms{};

	Parms.Activated = Activated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.SetPostProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Chromatic_Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Tracking_Noise_Level                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Signal_Distortion_Intensity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Color_Tornado_Intensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Warp_Belt_Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Screen_Hop_Frequency                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Random_Horizontal_Offset_Frequency                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Screen_Hop_Intensity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Random_Horizontal_Offset_Strength                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::SetPostProcessing(float Chromatic_Distance, float Tracking_Noise_Level, float Signal_Distortion_Intensity, float Color_Tornado_Intensity, float Warp_Belt_Intensity, float Screen_Hop_Frequency, float Random_Horizontal_Offset_Frequency, float Screen_Hop_Intensity, float Random_Horizontal_Offset_Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "SetPostProcessing");

	Params::AVRCharacter_Demo_Client_C_SetPostProcessing_Params Parms{};

	Parms.Chromatic_Distance = Chromatic_Distance;
	Parms.Tracking_Noise_Level = Tracking_Noise_Level;
	Parms.Signal_Distortion_Intensity = Signal_Distortion_Intensity;
	Parms.Color_Tornado_Intensity = Color_Tornado_Intensity;
	Parms.Warp_Belt_Intensity = Warp_Belt_Intensity;
	Parms.Screen_Hop_Frequency = Screen_Hop_Frequency;
	Parms.Random_Horizontal_Offset_Frequency = Random_Horizontal_Offset_Frequency;
	Parms.Screen_Hop_Intensity = Screen_Hop_Intensity;
	Parms.Random_Horizontal_Offset_Strength = Random_Horizontal_Offset_Strength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.UpdatePlayerCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::UpdatePlayerCamera(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "UpdatePlayerCamera");

	Params::AVRCharacter_Demo_Client_C_UpdatePlayerCamera_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ToggleWidgetInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::ToggleWidgetInteraction(bool Enable, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ToggleWidgetInteraction");

	Params::AVRCharacter_Demo_Client_C_ToggleWidgetInteraction_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.SetupWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DesiredSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::SetupWidget(bool DesiredSize, float Scale, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "SetupWidget");

	Params::AVRCharacter_Demo_Client_C_SetupWidget_Params Parms{};

	Parms.DesiredSize = DesiredSize;
	Parms.Scale = Scale;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.TickHeadsetLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    CallFunc_GetOrientationAndPosition_DeviceRotation                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetOrientationAndPosition_DevicePosition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetOrientationAndPosition_DeviceRotation_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetOrientationAndPosition_DevicePosition_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::TickHeadsetLocation(const struct FRotator& CallFunc_GetOrientationAndPosition_DeviceRotation, const struct FVector& CallFunc_GetOrientationAndPosition_DevicePosition, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FRotator& CallFunc_GetOrientationAndPosition_DeviceRotation_1, const struct FVector& CallFunc_GetOrientationAndPosition_DevicePosition_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "TickHeadsetLocation");

	Params::AVRCharacter_Demo_Client_C_TickHeadsetLocation_Params Parms{};

	Parms.CallFunc_GetOrientationAndPosition_DeviceRotation = CallFunc_GetOrientationAndPosition_DeviceRotation;
	Parms.CallFunc_GetOrientationAndPosition_DevicePosition = CallFunc_GetOrientationAndPosition_DevicePosition;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_GetOrientationAndPosition_DeviceRotation_1 = CallFunc_GetOrientationAndPosition_DeviceRotation_1;
	Parms.CallFunc_GetOrientationAndPosition_DevicePosition_1 = CallFunc_GetOrientationAndPosition_DevicePosition_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.CheckStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSprint_CanSprint                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFancyMovementComponent*     K2Node_DynamicCast_AsFancy_Movement_Component                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::CheckStamina(float CallFunc_GetInputAxisValue_ReturnValue, bool CallFunc_CanSprint_CanSprint, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFancyMovementComponent* K2Node_DynamicCast_AsFancy_Movement_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "CheckStamina");

	Params::AVRCharacter_Demo_Client_C_CheckStamina_Params Parms{};

	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_CanSprint_CanSprint = CallFunc_CanSprint_CanSprint;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFancy_Movement_Component = K2Node_DynamicCast_AsFancy_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "UserConstructionScript");

	Params::AVRCharacter_Demo_Client_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Timeline_3_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::Timeline_3_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Timeline_3_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Timeline_3_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::Timeline_3_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Timeline_3_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Use_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Use_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Use_K2Node_InputActionEvent_9");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Use_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Use_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Use_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Use_K2Node_InputActionEvent_8");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Use_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Interact_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Interact_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Interact_K2Node_InputActionEvent_7");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Interact_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Interact_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Interact_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Interact_K2Node_InputActionEvent_6");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Interact_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Inventory_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Inventory_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Inventory_K2Node_InputActionEvent_5");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Inventory_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Sprint_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Sprint_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Sprint_K2Node_InputActionEvent_4");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Sprint_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Sprint_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Sprint_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Sprint_K2Node_InputActionEvent_3");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Sprint_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_ResetVR_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_ResetVR_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_ResetVR_K2Node_InputActionEvent_2");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_ResetVR_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Secondary_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Secondary_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Secondary_K2Node_InputActionEvent_1");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Secondary_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpActEvt_Secondary_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpActEvt_Secondary_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpActEvt_Secondary_K2Node_InputActionEvent_0");

	Params::AVRCharacter_Demo_Client_C_InpActEvt_Secondary_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ShowLeftArm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::ShowLeftArm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ShowLeftArm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ShowRightArm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::ShowRightArm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ShowRightArm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_4(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_4");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_4_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.StartInteracting
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::StartInteracting(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "StartInteracting");

	Params::AVRCharacter_Demo_Client_C_StartInteracting_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Alter Finger Curl State
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left_hand__                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::Alter_Finger_Curl_State(bool Left_hand__, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Alter Finger Curl State");

	Params::AVRCharacter_Demo_Client_C_Alter_Finger_Curl_State_Params Parms{};

	Parms.Left_hand__ = Left_hand__;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Alter Finger Curl State MC
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Left_hand__                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::Alter_Finger_Curl_State_MC(bool Left_hand__, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Alter Finger Curl State MC");

	Params::AVRCharacter_Demo_Client_C_Alter_Finger_Curl_State_MC_Params Parms{};

	Parms.Left_hand__ = Left_hand__;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_1");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_0
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_0(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_0");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_0_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.UpdateGesture
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRightHand                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Gesture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::UpdateGesture(bool IsRightHand, class FName Gesture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "UpdateGesture");

	Params::AVRCharacter_Demo_Client_C_UpdateGesture_Params Parms{};

	Parms.IsRightHand = IsRightHand;
	Parms.Gesture = Gesture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_172
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_LookUp_K2Node_InputAxisEvent_172");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_172_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_157
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "InpAxisEvt_Turn_K2Node_InputAxisEvent_157");

	Params::AVRCharacter_Demo_Client_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_157_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.OpenSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::OpenSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "OpenSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.CreateLegs
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::CreateLegs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "CreateLegs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ChangeCrosshairVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::ChangeCrosshairVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ChangeCrosshairVisibility");

	Params::AVRCharacter_Demo_Client_C_ChangeCrosshairVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ShowInteractText
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVRCharacter_Demo_Client_C::ShowInteractText(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ShowInteractText");

	Params::AVRCharacter_Demo_Client_C_ShowInteractText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.StartBalance
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               First                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::StartBalance(bool Direction, bool First)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "StartBalance");

	Params::AVRCharacter_Demo_Client_C_StartBalance_Params Parms{};

	Parms.Direction = Direction;
	Parms.First = First;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.StopBalance
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::StopBalance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "StopBalance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.OnBalance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::OnBalance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "OnBalance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.TryPickup
// (Event, Public, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::TryPickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "TryPickup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.HideRightArm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::HideRightArm(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "HideRightArm");

	Params::AVRCharacter_Demo_Client_C_HideRightArm_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.HideLeftArm
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hide                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::HideLeftArm(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "HideLeftArm");

	Params::AVRCharacter_Demo_Client_C_HideLeftArm_Params Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.SpawnEquipItem_SERVER
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::SpawnEquipItem_SERVER(class UClass* ItemClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "SpawnEquipItem_SERVER");

	Params::AVRCharacter_Demo_Client_C_SpawnEquipItem_SERVER_Params Parms{};

	Parms.ItemClass = ItemClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.UpdateFOV
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::UpdateFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "UpdateFOV");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.KillClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::KillClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "KillClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.Fear
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHE_Fear                    Fear                                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::Fear(const struct FHE_Fear& Fear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "Fear");

	Params::AVRCharacter_Demo_Client_C_Fear_Params Parms{};

	Parms.Fear = Fear;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.StopFear
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::StopFear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "StopFear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ReceiveTick");

	Params::AVRCharacter_Demo_Client_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "K2_OnStartCrouch");

	Params::AVRCharacter_Demo_Client_C_K2_OnStartCrouch_Params Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              HalfHeightAdjust                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaledHalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVRCharacter_Demo_Client_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "K2_OnEndCrouch");

	Params::AVRCharacter_Demo_Client_C_K2_OnEndCrouch_Params Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.AddHeat
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::AddHeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "AddHeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.UpdateGrips
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::UpdateGrips()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "UpdateGrips");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.OnPossess
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVRCharacter_Demo_Client_C::OnPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "OnPossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VRCharacter_Demo_Client.VRCharacter_Demo_Client_C.ExecuteUbergraph_VRCharacter_Demo_Client
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHE_Subtitle                K2Node_MakeStruct_HE_Subtitle                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FHE_Subtitle>        K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FHE_SubtitleSeq             K2Node_MakeStruct_HE_SubtitleSeq                                 (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// bool                               CallFunc_CanAction_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanAction_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetOrientationAndPosition_DeviceRotation                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetOrientationAndPosition_DevicePosition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_left_hand___1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_value_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_left_hand__                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVRArms_AnimBP_C*            K2Node_DynamicCast_AsVRArms_Anim_BP                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Inventory_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_SettingsPanel_Theme2_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsRightHand                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_Gesture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVRPlayer_AnimBP_C*          K2Node_DynamicCast_AsVRPlayer_Anim_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsVisible                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Text                                                (ConstParm)
// bool                               K2Node_Event_Direction                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_First                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Hide_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Hide                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Event_ItemClass                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Item_C*                  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHE_Fear                    K2Node_Event_Fear                                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfHeightAdjust                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaledHalfHeightAdjust                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EnableHMD_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AMP_PlayerController_C*      K2Node_DynamicCast_AsMP_Player_Controller                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVRCharacter_Demo_Client_C::ExecuteUbergraph_VRCharacter_Demo_Client(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& Temp_struct_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FHE_Subtitle& K2Node_MakeStruct_HE_Subtitle, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<struct FHE_Subtitle>& K2Node_MakeArray_Array, const struct FHE_SubtitleSeq& K2Node_MakeStruct_HE_SubtitleSeq, const struct FKey& K2Node_InputActionEvent_Key_6, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key_7, bool CallFunc_CanAction_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanAction_Variable_1, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult_1, const struct FRotator& CallFunc_GetOrientationAndPosition_DeviceRotation, const struct FVector& CallFunc_GetOrientationAndPosition_DevicePosition, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FKey& Temp_struct_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_8, const struct FKey& K2Node_InputActionEvent_Key_9, float K2Node_InputAxisEvent_AxisValue_6, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_5, bool K2Node_CustomEvent_Enable, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UClass* CallFunc_GetObjectClass_ReturnValue, bool K2Node_CustomEvent_left_hand___1, bool K2Node_CustomEvent_value_1, bool K2Node_CustomEvent_left_hand__, bool K2Node_CustomEvent_value, float K2Node_InputAxisEvent_AxisValue_4, float K2Node_InputAxisEvent_AxisValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_InputAxisEvent_AxisValue_2, class UVRArms_AnimBP_C* K2Node_DynamicCast_AsVRArms_Anim_BP, bool K2Node_DynamicCast_bSuccess, class UUI_Inventory_C* CallFunc_Create_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, class UWB_SettingsPanel_Theme2_C* CallFunc_Create_ReturnValue_1, const struct FKey& Temp_struct_Variable_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool K2Node_CustomEvent_IsRightHand, class FName K2Node_CustomEvent_Gesture, float K2Node_InputAxisEvent_AxisValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputActionEvent_Key_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UVRPlayer_AnimBP_C* K2Node_DynamicCast_AsVRPlayer_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsVisible, class FText K2Node_Event_Text, bool K2Node_Event_Direction, bool K2Node_Event_First, bool K2Node_Event_Hide_1, bool K2Node_Event_Hide, class UClass* K2Node_Event_ItemClass, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class ABP_Item_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHE_Fear& K2Node_Event_Fear, float K2Node_Event_DeltaSeconds, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust, const struct FKey& K2Node_InputActionEvent_Key_4, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputActionEvent_Key_5, const struct FKey& Temp_struct_Variable_3, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue_3, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_3, bool CallFunc_EnableHMD_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VRCharacter_Demo_Client_C", "ExecuteUbergraph_VRCharacter_Demo_Client");

	Params::AVRCharacter_Demo_Client_C_ExecuteUbergraph_VRCharacter_Demo_Client_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.K2Node_MakeStruct_HE_Subtitle = K2Node_MakeStruct_HE_Subtitle;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_HE_SubtitleSeq = K2Node_MakeStruct_HE_SubtitleSeq;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.CallFunc_CanAction_Variable = CallFunc_CanAction_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanAction_Variable_1 = CallFunc_CanAction_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult = CallFunc_K2_AddRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeLocation_SweepHitResult_1 = CallFunc_K2_AddRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_GetOrientationAndPosition_DeviceRotation = CallFunc_GetOrientationAndPosition_DeviceRotation;
	Parms.CallFunc_GetOrientationAndPosition_DevicePosition = CallFunc_GetOrientationAndPosition_DevicePosition;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.K2Node_InputAxisEvent_AxisValue_6 = K2Node_InputAxisEvent_AxisValue_6;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue_5 = K2Node_InputAxisEvent_AxisValue_5;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_CustomEvent_left_hand___1 = K2Node_CustomEvent_left_hand___1;
	Parms.K2Node_CustomEvent_value_1 = K2Node_CustomEvent_value_1;
	Parms.K2Node_CustomEvent_left_hand__ = K2Node_CustomEvent_left_hand__;
	Parms.K2Node_CustomEvent_value = K2Node_CustomEvent_value;
	Parms.K2Node_InputAxisEvent_AxisValue_4 = K2Node_InputAxisEvent_AxisValue_4;
	Parms.K2Node_InputAxisEvent_AxisValue_3 = K2Node_InputAxisEvent_AxisValue_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_InputAxisEvent_AxisValue_2 = K2Node_InputAxisEvent_AxisValue_2;
	Parms.K2Node_DynamicCast_AsVRArms_Anim_BP = K2Node_DynamicCast_AsVRArms_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.K2Node_CustomEvent_IsRightHand = K2Node_CustomEvent_IsRightHand;
	Parms.K2Node_CustomEvent_Gesture = K2Node_CustomEvent_Gesture;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVRPlayer_Anim_BP = K2Node_DynamicCast_AsVRPlayer_Anim_BP;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_IsVisible = K2Node_Event_IsVisible;
	Parms.K2Node_Event_Text = K2Node_Event_Text;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_First = K2Node_Event_First;
	Parms.K2Node_Event_Hide_1 = K2Node_Event_Hide_1;
	Parms.K2Node_Event_Hide = K2Node_Event_Hide;
	Parms.K2Node_Event_ItemClass = K2Node_Event_ItemClass;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Event_Fear = K2Node_Event_Fear;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_Event_HalfHeightAdjust_1 = K2Node_Event_HalfHeightAdjust_1;
	Parms.K2Node_Event_ScaledHalfHeightAdjust_1 = K2Node_Event_ScaledHalfHeightAdjust_1;
	Parms.K2Node_Event_HalfHeightAdjust = K2Node_Event_HalfHeightAdjust;
	Parms.K2Node_Event_ScaledHalfHeightAdjust = K2Node_Event_ScaledHalfHeightAdjust;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_3 = CallFunc_IsLocallyControlled_ReturnValue_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocation_SweepHitResult_3;
	Parms.CallFunc_EnableHMD_ReturnValue = CallFunc_EnableHMD_ReturnValue;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult_1 = CallFunc_K2_AddRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_GetControlRotation_ReturnValue_2 = CallFunc_GetControlRotation_ReturnValue_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_GetControlRotation_ReturnValue_3 = CallFunc_GetControlRotation_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.K2Node_DynamicCast_AsMP_Player_Controller = K2Node_DynamicCast_AsMP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


