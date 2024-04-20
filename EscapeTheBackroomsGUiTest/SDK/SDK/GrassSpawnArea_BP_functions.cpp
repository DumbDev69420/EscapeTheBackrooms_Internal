#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrassSpawnArea_BP.GrassSpawnArea_BP_C
// (Actor)

class UClass* AGrassSpawnArea_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrassSpawnArea_BP_C");

	return Clss;
}


// GrassSpawnArea_BP_C GrassSpawnArea_BP.Default__GrassSpawnArea_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrassSpawnArea_BP_C* AGrassSpawnArea_BP_C::GetDefaultObj()
{
	static class AGrassSpawnArea_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrassSpawnArea_BP_C*>(AGrassSpawnArea_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GrassSpawnArea_BP.GrassSpawnArea_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FProcMeshTangent>    Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// TArray<struct FLinearColor>        Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_4                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_5                                           (ConstParm, ReferenceParm)
// TArray<struct FVector>             Temp_struct_Variable_6                                           (ConstParm, ReferenceParm)
// TArray<struct FProcMeshTangent>    Temp_struct_Variable_7                                           (ConstParm, ReferenceParm)
// TArray<struct FLinearColor>        Temp_struct_Variable_8                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_9                                           (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_10                                          (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_11                                          (ConstParm, ReferenceParm)
// TArray<struct FVector2D>           Temp_struct_Variable_12                                          (ConstParm, ReferenceParm)
// TArray<struct FVector>             Temp_struct_Variable_13                                          (ConstParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGrassSpawnArea_BP_C::UserConstructionScript(TArray<struct FProcMeshTangent>& Temp_struct_Variable, TArray<struct FLinearColor>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector2D>& Temp_struct_Variable_3, TArray<struct FVector2D>& Temp_struct_Variable_4, TArray<struct FVector2D>& Temp_struct_Variable_5, TArray<struct FVector>& Temp_struct_Variable_6, TArray<struct FProcMeshTangent>& Temp_struct_Variable_7, TArray<struct FLinearColor>& Temp_struct_Variable_8, TArray<struct FVector2D>& Temp_struct_Variable_9, TArray<struct FVector2D>& Temp_struct_Variable_10, TArray<struct FVector2D>& Temp_struct_Variable_11, TArray<struct FVector2D>& Temp_struct_Variable_12, TArray<struct FVector>& Temp_struct_Variable_13, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_AddInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GrassSpawnArea_BP_C", "UserConstructionScript");

	Params::AGrassSpawnArea_BP_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_AddInstance_ReturnValue = CallFunc_AddInstance_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


