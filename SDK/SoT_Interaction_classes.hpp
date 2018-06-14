#pragma once

// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interaction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Interaction.InteractableComponent
// 0x0038 (0x0108 - 0x00D0)
class UInteractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FName                                       FeatureFlag;                                              // 0x00D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxOrigin;                                                // 0x00EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MayBeGrouped : 1;                                         // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	class UInteractableArea*                           InteractableArea;                                         // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableComponent");
		return ptr;
	}


	void SetBoxOrigin(const struct FVector& IntBoxOrigin);
	void SetBoxExtent(const struct FVector& InBoxExtent);
	class UInteractableArea* GetInteractableArea();
	struct FVector GetBoxWorldOrigin();
	float GetBoxSphereRadius();
	struct FVector GetBoxOrigin();
	struct FVector GetBoxExtent();
};


// Class Interaction.CharacterInteractionComponent
// 0x0090 (0x06F0 - 0x0660)
class UCharacterInteractionComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0660(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.CharacterInteractionComponent");
		return ptr;
	}


	bool IsInteractionValid(class AActor* InInteractable);
	void InvalidateOptimalObject();
	class UInteractableArea* GetOptimalFocusObject();
	void ClearAllPolicies();
};


// Class Interaction.GroupedInteractableAreaComponent
// 0x0000 (0x00D0 - 0x00D0)
class UGroupedInteractableAreaComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.GroupedInteractableAreaComponent");
		return ptr;
	}

};


// Class Interaction.InteractableArea
// 0x0040 (0x0068 - 0x0028)
class UInteractableArea : public UObject
{
public:
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0028(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class AActor*                                      Interactable;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Parent;                                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableArea");
		return ptr;
	}


	void SetParent(class AActor* InParent);
	void SetInteractable(class AActor* InInteractable);
	void SetAreaName(const struct FName& InName);
	void SetAreaBounds(const struct FBoxSphereBounds& InBounds);
	class AActor* GetParent();
	class AActor* GetInteractable();
	struct FName GetAreaName();
	struct FBoxSphereBounds GetAreaBounds();
};


// Class Interaction.InteractableInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableInterface");
		return ptr;
	}


	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void SetInteractionsDisabled(bool Disabled);
	bool InteractionsCanBeDisabled();
	void Interact(class AActor* InInteractor, class UClass* NotificationInputId);
	bool GetInteractionsDisabled();
	struct FVector GetFrontFacingVector();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore);
	class UActionRulesComponent* GetActionRulesComponent();
	bool DoesRequireNotBeingAirborne();
	bool DoesRequireFacingFront();
	bool CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId);
	bool CanInteract(class AActor* InInteractor);
};


// Class Interaction.InteractableServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractableServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableServiceInterface");
		return ptr;
	}

};


// Class Interaction.InteractableService
// 0x0020 (0x0048 - 0x0028)
class UInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractableService");
		return ptr;
	}

};


// Class Interaction.InteractorInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.InteractorInterface");
		return ptr;
	}

};


// Class Interaction.MockActorWithCharacterInteractionComponent
// 0x00B0 (0x0528 - 0x0478)
class AMockActorWithCharacterInteractionComponent : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class UCharacterInteractionComponent*              CharacterInteractionComponent;                            // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0488(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockActorWithCharacterInteractionComponent");
		return ptr;
	}

};


// Class Interaction.MockInteractableService
// 0x0018 (0x0040 - 0x0028)
class UMockInteractableService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockInteractableService");
		return ptr;
	}

};


// Class Interaction.MockInteractorActor
// 0x0028 (0x04A0 - 0x0478)
class AMockInteractorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	class AActor*                                      FocusedInteractable;                                      // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InteractedActor;                                          // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.MockInteractorActor");
		return ptr;
	}

};


// Class Interaction.TestActorWithInteractableComponent
// 0x0010 (0x0488 - 0x0478)
class ATestActorWithInteractableComponent : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                       // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInteractableComponent*                      InteractableComponent;                                    // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Interaction.TestActorWithInteractableComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
