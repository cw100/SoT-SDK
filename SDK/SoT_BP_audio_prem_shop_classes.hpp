#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_prem_shop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_audio_prem_shop.BP_audio_prem_shop_C
// 0x0028 (0x04C8 - 0x04A0)
class ABP_audio_prem_shop_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      WwiseEmitter1;                                            // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_audio_prem_shop.BP_audio_prem_shop_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_audio_prem_shop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
