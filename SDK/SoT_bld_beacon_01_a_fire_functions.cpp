// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bld_beacon_01_a_fire_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abld_beacon_01_a_fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abld_beacon_01_a_fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ExecuteUbergraph_bld_beacon_01_a_fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abld_beacon_01_a_fire_C::ExecuteUbergraph_bld_beacon_01_a_fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bld_beacon_01_a_fire.bld_beacon_01_a_fire_C.ExecuteUbergraph_bld_beacon_01_a_fire");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif