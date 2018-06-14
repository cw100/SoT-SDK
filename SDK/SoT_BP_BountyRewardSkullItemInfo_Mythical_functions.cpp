// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Mythical_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Mythical_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.UserConstructionScript");

	ABP_BountyRewardSkullItemInfo_Mythical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BountyRewardSkullItemInfo_Mythical_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ReceiveBeginPlay");

	ABP_BountyRewardSkullItemInfo_Mythical_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BountyRewardSkullItemInfo_Mythical_C::ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BountyRewardSkullItemInfo_Mythical.BP_BountyRewardSkullItemInfo_Mythical_C.ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical");

	ABP_BountyRewardSkullItemInfo_Mythical_C_ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Mythical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
