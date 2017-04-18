#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "GripEnum__pf563933975.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class URightHand_AnimBP_C__pf558596347;
class AActor;
class UStaticMeshComponent;
class UPrimitiveComponent;
class USphereComponent;
class UAIPerceptionStimuliSourceComponent;
class UPaperSpriteComponent;
class UTextRenderComponent;
class USpotLightComponent;
class UPointLightComponent;
class USplineComponent;
class UArrowComponent;
class USkeletalMeshComponent;
class USteamVRChaperoneComponent;
class UMotionControllerComponent;
class USceneComponent;
class USplineMeshComponent;
class AInventory_Item_C__pf563933975;
class ABP_MotionController_C__pf563933975;
class AMotionControllerPawn_C__pf563933975;
class UPhysicalMaterial;
#include "BP_MotionController__pf563933975.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C", OverrideNativeName="BP_MotionController_C"))
class ABP_MotionController_C__pf563933975 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_4Collision"))
	USphereComponent* bpv__slot_4Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_3Collision"))
	USphereComponent* bpv__slot_3Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_2Collision"))
	USphereComponent* bpv__slot_2Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_1Collision"))
	USphereComponent* bpv__slot_1Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_0Collision"))
	USphereComponent* bpv__slot_0Collision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerceptionStimuliSource"))
	UAIPerceptionStimuliSourceComponent* bpv__AIPerceptionStimuliSource__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_4Sprite"))
	UPaperSpriteComponent* bpv__slot_4Sprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_3Sprite"))
	UPaperSpriteComponent* bpv__slot_3Sprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot2_Sprite"))
	UPaperSpriteComponent* bpv__slot2_Sprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_0Sprite"))
	UPaperSpriteComponent* bpv__slot_0Sprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot1_Sprite"))
	UPaperSpriteComponent* bpv__slot1_Sprite__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_4Amount"))
	UTextRenderComponent* bpv__slot_4Amount__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_3Amount"))
	UTextRenderComponent* bpv__slot_3Amount__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_2Amount"))
	UTextRenderComponent* bpv__slot_2Amount__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_1Amount"))
	UTextRenderComponent* bpv__slot_1Amount__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="inventory_core"))
	UStaticMeshComponent* bpv__inventory_core__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_0Amount"))
	UTextRenderComponent* bpv__slot_0Amount__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="hand_torch"))
	USpotLightComponent* bpv__hand_torch__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="hand_light"))
	UPointLightComponent* bpv__hand_light__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_4"))
	UStaticMeshComponent* bpv__slot_4__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_3"))
	UStaticMeshComponent* bpv__slot_3__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_2"))
	UStaticMeshComponent* bpv__slot_2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_1"))
	UStaticMeshComponent* bpv__slot_1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="slot_0"))
	UStaticMeshComponent* bpv__slot_0__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RoomScaleMesh"))
	UStaticMeshComponent* bpv__RoomScaleMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow"))
	UStaticMeshComponent* bpv__Arrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabSphere"))
	USphereComponent* bpv__GrabSphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ArcSpline"))
	USplineComponent* bpv__ArcSpline__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ArcDirection"))
	UArrowComponent* bpv__ArcDirection__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HandMesh"))
	USkeletalMeshComponent* bpv__HandMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Ring"))
	UStaticMeshComponent* bpv__Ring__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SteamVRChaperone"))
	USteamVRChaperoneComponent* bpv__SteamVRChaperone__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TeleportCylinder"))
	UStaticMeshComponent* bpv__TeleportCylinder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ArcEndPoint"))
	UStaticMeshComponent* bpv__ArcEndPoint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MotionController"))
	UMotionControllerComponent* bpv__MotionController__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hand", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Hand"))
	EControllerHand bpv__Hand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attached Actor", Category="Default", OverrideNativeName="AttachedActor"))
	AActor* bpv__AttachedActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Teleporter Active", Category="Default", OverrideNativeName="IsTeleporterActive"))
	bool bpv__IsTeleporterActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spline Meshes", Category="Default", OverrideNativeName="SplineMeshes"))
	TArray<USplineMeshComponent*> bpv__SplineMeshes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Frame Valid Destination", Category="Default", OverrideNativeName="bLastFrameValidDestination"))
	bool bpv__bLastFrameValidDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Room Scale", Category="Default", OverrideNativeName="IsRoomScale"))
	bool bpv__IsRoomScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Destination", Category="Default", OverrideNativeName="TeleportDestination"))
	FVector bpv__TeleportDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Valid Teleport Destination", Category="Default", OverrideNativeName="IsValidTeleportDestination"))
	bool bpv__IsValidTeleportDestination__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grip State", Category="Default", OverrideNativeName="GripState"))
	E__GripEnum__pf bpv__GripState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wants to Grip", Category="Default", OverrideNativeName="bWantsToGrip"))
	bool bpv__bWantsToGrip__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Rotation", Category="Default", OverrideNativeName="TeleportRotation"))
	FRotator bpv__TeleportRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Teleport Launch Velocity", Category="Default", OverrideNativeName="TeleportLaunchVelocity"))
	float bpv__TeleportLaunchVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Initial Controller Rotation", Category="Default", tooltip="Rotation of Motion Controller at the start of the Teleport press.", OverrideNativeName="InitialControllerRotation"))
	FRotator bpv__InitialControllerRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Open", Category="Default", OverrideNativeName="inventoryOpen"))
	bool bpv__inventoryOpen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Torch Active", Category="Default", OverrideNativeName="torchActive"))
	bool bpv__torchActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 0 Amount", Category="Default", OverrideNativeName="slot0_amount"))
	int32 bpv__slot0_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 0 Item", Category="Default", OverrideNativeName="slot0_item"))
	AInventory_Item_C__pf563933975* bpv__slot0_item__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 1 Amount", Category="Default", OverrideNativeName="slot1_amount"))
	int32 bpv__slot1_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 1 Item", Category="Default", OverrideNativeName="slot1_item"))
	AInventory_Item_C__pf563933975* bpv__slot1_item__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 2 Amount", Category="Default", OverrideNativeName="slot2_amount"))
	int32 bpv__slot2_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 2 Item", Category="Default", OverrideNativeName="slot2_item"))
	AInventory_Item_C__pf563933975* bpv__slot2_item__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 3 Amount", Category="Default", OverrideNativeName="slot3_amount"))
	int32 bpv__slot3_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 3 Item", Category="Default", OverrideNativeName="slot3_item"))
	AInventory_Item_C__pf563933975* bpv__slot3_item__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 4 Amount", Category="Default", OverrideNativeName="slot4_amount"))
	int32 bpv__slot4_amount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slot 4 Item", Category="Default", OverrideNativeName="slot4_item"))
	AInventory_Item_C__pf563933975* bpv__slot4_item__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Slot", Category="Default", OverrideNativeName="current_slot"))
	int32 bpv__current_slot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Other Hand", Category="Default", OverrideNativeName="otherHand"))
	ABP_MotionController_C__pf563933975* bpv__otherHand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Motion Controller Pawn", Category="Default", OverrideNativeName="motion_controller_pawn"))
	AMotionControllerPawn_C__pf563933975* bpv__motion_controller_pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable2"))
	bool b0l__Temp_bool_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable3"))
	bool b0l__Temp_bool_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable4"))
	bool b0l__Temp_bool_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable5"))
	bool b0l__Temp_bool_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable6"))
	bool b0l__Temp_bool_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable7"))
	bool b0l__Temp_bool_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable8"))
	bool b0l__Temp_bool_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable9"))
	bool b0l__Temp_bool_Variable9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable10"))
	bool b0l__Temp_bool_Variable10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable11"))
	bool b0l__Temp_bool_Variable11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable12"))
	bool b0l__Temp_bool_Variable12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Intensity"))
	float b0l__K2Node_CustomEvent_Intensity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TraceTeleportDestination_Success"))
	bool b0l__CallFunc_TraceTeleportDestination_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TraceTeleportDestination_TracePoints"))
	TArray<FVector> b0l__CallFunc_TraceTeleportDestination_TracePoints__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TraceTeleportDestination_NavMeshLocation"))
	FVector b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TraceTeleportDestination_TraceLocation"))
	FVector b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable13"))
	bool b0l__Temp_bool_Variable13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable14"))
	bool b0l__Temp_bool_Variable14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent11"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor12"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp12"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex11"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep6"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult6"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsStatic_Mesh_Component"))
	UStaticMeshComponent* b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetActorNearHand_NearestMesh"))
	AActor* b0l__CallFunc_GetActorNearHand_NearestMesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsRight_Hand_Anim_BP"))
	URightHand_AnimBP_C__pf558596347* b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum2_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X2"))
	float b0l__CallFunc_BreakVector_X2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y2"))
	float b0l__CallFunc_BreakVector_Y2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z2"))
	float b0l__CallFunc_BreakVector_Z2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent10"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor11"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp11"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex10"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep5"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult5"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent9"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor10"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp10"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex9"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent8"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor9"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp9"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex8"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep4"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult4"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor8"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp8"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex7"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor7"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp7"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex6"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep3"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult3"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor6"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp6"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex5"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor5"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp5"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex4"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	EControllerHand b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	bool b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable2"))
	TEnumAsByte<EDynamicForceFeedbackAction::Type> b0l__Temp_byte_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_HitComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_NormalImpulse"))
	FVector b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Hit"))
	FHitResult b0l__K2Node_ComponentBoundEvent_Hit__pf;
	ABP_MotionController_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_MotionController_7"))
	void bpf__ExecuteUbergraph_BP_MotionController__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_MotionController__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"))
	virtual void bpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_21_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_21_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RumbleController"))
	virtual void bpf__RumbleController__pf(float bpp__Intensity__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="GetActorNearHand"))
	virtual void bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="ReleaseActor"))
	virtual void bpf__ReleaseActor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Grabbing", OverrideNativeName="GrabActor"))
	virtual void bpf__GrabActor__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="ActivateTeleporter"))
	virtual void bpf__ActivateTeleporter__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="DisableTeleporter"))
	virtual void bpf__DisableTeleporter__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="TraceTeleportDestination"))
	virtual void bpf__TraceTeleportDestination__pf(/*out*/ bool& bpp__Success__pf, /*out*/ TArray<FVector>& bpp__TracePoints__pf, /*out*/ FVector& bpp__NavMeshLocation__pf, /*out*/ FVector& bpp__TraceLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="ClearArc"))
	virtual void bpf__ClearArc__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="UpdateArcSpline"))
	virtual void bpf__UpdateArcSpline__pf(bool bpp__FoundValidLocation__pf, /*out*/ TArray<FVector>& bpp__SplinePoints__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Teleportation", OverrideNativeName="UpdateArcEndpoint"))
	virtual void bpf__UpdateArcEndpoint__pf(FVector bpp__NewLocation__pf, bool bpp__ValidLocationFound__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Room-scale", OverrideNativeName="SetupRoomScaleOutline"))
	virtual void bpf__SetupRoomScaleOutline__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Room-scale", OverrideNativeName="UpdateRoomScaleOutline"))
	virtual void bpf__UpdateRoomScaleOutline__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Teleportation", OverrideNativeName="GetTeleportDestination"))
	virtual void bpf__GetTeleportDestination__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ToggleInventory"))
	virtual void bpf__ToggleInventory__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ToggleTorch"))
	virtual void bpf__ToggleTorch__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Default", OverrideNativeName="UpdateInventory"))
	virtual void bpf__UpdateInventory__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CurrentSlotIsEmpty"))
	virtual void bpf__CurrentSlotIsEmpty__pf(int32 bpp__current_slot__pf, /*out*/ bool& bpp__is_empty__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InventoryPush"))
	virtual void bpf__InventoryPush__pf(int32 bpp__current_slot__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="InventoryPull"))
	virtual void bpf__InventoryPull__pf(int32 bpp__current_slot__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="IsValidInventoryItem"))
	virtual void bpf__IsValidInventoryItem__pf(AActor* bpp__attached_actor__pf, /*out*/ bool& bpp__is_valid__pf);
public:
};
