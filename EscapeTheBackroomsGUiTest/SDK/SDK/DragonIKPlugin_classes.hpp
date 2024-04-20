#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DragonIKPlugin.DragonIK_Library
class UDragonIK_Library : public UObject
{
public:
	uint8                                        Pad_3C0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIK_Library* GetDefaultObj();

	struct FTransform QuatLookXatLocation(struct FTransform& LookAtFromTransform, struct FVector& LookAtTarget);
	struct FRotator LookAtVector_V2(const struct FVector& Source_Location, const struct FVector& LookAt, const struct FVector& UpDirection);
	struct FRotator LookAtRotation_V3(const struct FVector& Source, const struct FVector& Target, const struct FVector& UpVector);
	struct FRotator CustomLookRotation(const struct FVector& LookAt, const struct FVector& UpDirection);
};

// 0x100 (0x1B0 - 0xB0)
// Class DragonIKPlugin.DragonIKFootStepsComponent
class UDragonIKFootStepsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnCharacterFootStep;                               // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8[0xD0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Read_this;                                         // 0x190(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Foot_socket;                                       // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Foot_enter_height;                                 // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_exit_height;                                  // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDragonIKFootStepsComponent* GetDefaultObj();

	void CallFootSteps(class FName bone_name, const struct FTransform& Foot_transform, float Height_difference, const struct FHitResult& Hit_info);
};

// 0x2B0 (0x360 - 0xB0)
// Class DragonIKPlugin.DragonIKPhysicsComponent
class UDragonIKPhysicsComponent : public UActorComponent
{
public:
	uint8                                        Pad_3D0[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Physanim_tag_index;                                // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Custom_Root_Bone;                                  // 0xD4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Individual_bone_selection;                         // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Influence_Stopping_Bones;                          // 0x110(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_PhysicsHandleMultiplier> Override_Handle_Strength_Multiplier;               // 0x120(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Linear_Strength;                                   // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Strength;                                  // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Linear_Damp;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Angular_Damp;                                      // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Interpolation_Speed;                               // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Parent_child_ragdoll_state;                        // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               Parent_Child_Connection_Array;                     // 0x178(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Use_auto_blending_logic;                           // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Modify_physics_states;                             // 0x1CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D6[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Hit_Enable_Speed;                                  // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hit_Disable_Speed;                                 // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hit_delay_time;                                    // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Physanim_Enter_Curve;                              // 0x1E0(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8[0xF8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDragonIKPhysicsComponent* GetDefaultObj();

	void UpdatePhysanimData(int32 LinearStrength, int32 AngularStrength, int32 LinearDamp, int32 AngularDamp);
	void SetInterpolation(int32 Inter_value);
	void ReleaseAllHandles(bool Go_ragdoll);
	void ReGrabAllHandles(bool Exit_ragdoll);
	void OnHitCallback(struct FHitResult& Hit, class FName Optional_Override_Hit_Bone_Name, struct FVector* Hit_location, struct FVector* Hit_impulse_direction, class FName* Hit_bone_name);
	void Modify_Reset_Bone_Info(const TArray<class FName>& bone_list);
	void FirstTimeInitialization(class USkeletalMeshComponent* Skeleton_input);
	void Control_Bone_Handle(class FName bone_name, const struct FTransform& Override_transform, bool Enable);
	void CacheSimulationStates();
};

// 0x18 (0x238 - 0x220)
// Class DragonIKPlugin.DragonIKPhysicsHolder
class ADragonIKPhysicsHolder : public AActor
{
public:
	uint8                                        Pad_3DA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Connected_actor;                                   // 0x230(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADragonIKPhysicsHolder* GetDefaultObj();

};

}


