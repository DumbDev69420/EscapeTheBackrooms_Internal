#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// UserDefinedStruct ST_Item.ST_Item
struct FST_Item
{
public:
	class FText                                  Name_2_AFA08E144E21126E6AFABF8C1F716C7B;           // 0x0(0x18)(Edit, BlueprintVisible)
	enum class EN_ItemRarity                     Rarity_25_7F70A23146B25115F8D09A92C2E84F54;        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_28_C92B5B924860D7DACD3C95A67C4CD25D;   // 0x20(0x18)(Edit, BlueprintVisible)
	class UClass*                                ItemClass_7_1B9F45D646C17BE3D165859B1B9115D2;      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DroppedItemClass_22_43676C884E4B662FB11608B1C97180DE; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         AnimIdle_12_F27B905245B6FC396BF05BA7E922F113;      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          AnimEquip_13_238D80954CE54FB3C2996187A418F592;     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11F5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ExamineTransformCorrection_16_27116312450E712C7B4B43B61A5C9A6D; // 0x60(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class UTexture2D*                            Icon_19_B54985B84E6B233A90C19AB47128F8F6;          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


