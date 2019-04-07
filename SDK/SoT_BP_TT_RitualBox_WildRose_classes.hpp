#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualBox_WildRose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C
// 0x0028 (0x04D8 - 0x04B0)
class ABP_TT_RitualBox_WildRose_C : public ABP_TT_RitualBox_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TAssetPtr<class ABP_shop_oos_01_a_C>               Actor_Parent_to_Hide;                                     // 0x04B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C"));
		return ptr;
	}


	void Set_Replaced_Madame_Olive_Box_Hidden(bool Is_Hidden);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_TT_RitualBox_WildRose(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif