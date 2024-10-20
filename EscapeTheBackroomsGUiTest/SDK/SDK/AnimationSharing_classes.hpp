#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E0 - 0x2B8)
// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                         AnimationToPlay;                                   // 0x2B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PermutationTimeOffset;                             // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x2C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F16[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSharingInstance*                  Instance;                                          // 0x2D0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F17[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimSharingStateInstance* GetDefaultObj();

	void GetInstancedActors(TArray<class AActor*>* Actors);
};

// 0x18 (0x2D0 - 0x2B8)
// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> FromComponent;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent> ToComponent;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlendBool;                                        // 0x2CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F18[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimSharingTransitionInstance* GetDefaultObj();

};

// 0x18 (0x2D0 - 0x2B8)
// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>          AdditiveAnimation;                                 // 0x2C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Alpha;                                             // 0x2C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x2CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F19[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimSharingAdditiveInstance* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                        RegisteredActors;                                  // 0x28(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1A[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationSharingStateProcessor*       StateProcessor;                                    // 0x88(0x8)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1B[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 UsedAnimationSequences;                            // 0xC8(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 StateEnum;                                         // 0xE8(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SharingActor;                                      // 0xF0(0x8)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimSharingInstance* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                     Skeletons;                                         // 0x28(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>          PerSkeletonData;                                   // 0x38(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F21[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimationSharingManager* GetDefaultObj();

	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
	class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);
	bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
	bool AnimationSharingEnabled();
};

// 0x20 (0x48 - 0x28)
// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability          ScalabilitySettings;                               // 0x38(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimationSharingSetup* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                  AnimationStateEnum;                                // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimationSharingStateProcessor* GetDefaultObj();

	void ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

}


