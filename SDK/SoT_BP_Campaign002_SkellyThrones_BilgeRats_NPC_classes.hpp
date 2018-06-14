#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign002_SkellyThrones_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign002_SkellyThrones_BilgeRats_NPC.BP_Campaign002_SkellyThrones_BilgeRats_NPC_C
// 0x0010 (0x0550 - 0x0540)
class ABP_Campaign002_SkellyThrones_BilgeRats_NPC_C : public AShopkeeper
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Campaign002_SkellyThrones_BilgeRats_NPC.BP_Campaign002_SkellyThrones_BilgeRats_NPC_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
