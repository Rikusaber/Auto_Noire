#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf563933975.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class AActor;
class UPrimitiveComponent;
class ABP_MotionController_C__pf563933975;
class USceneComponent;
class USphereComponent;
class UBoxComponent;
class UStaticMeshComponent;
class UTimelineComponent;
#include "apartmentDoor_blueprint__pf2958942102.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Furniture/apartmentDoor_blueprint.apartmentDoor_blueprint_C", OverrideNativeName="apartmentDoor_blueprint_C"))
class AapartmentDoor_blueprint_C__pf2958942102 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="knob1"))
	USphereComponent* bpv__knob1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="knob2"))
	USphereComponent* bpv__knob2__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Box"))
	UBoxComponent* bpv__Box__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh1"))
	UStaticMeshComponent* bpv__StaticMesh1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="door"))
	USceneComponent* bpv__door__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_3_Door_Movement_C658EDAA433E33C91B7A1A88D32E26B1"))
	float bpv__Timeline_3_Door_Movement_C658EDAA433E33C91B7A1A88D32E26B1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_3__Direction_C658EDAA433E33C91B7A1A88D32E26B1"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_3__Direction_C658EDAA433E33C91B7A1A88D32E26B1__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="apartmentDoor_blueprint", OverrideNativeName="Timeline_3"))
	UTimelineComponent* bpv__Timeline_3__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_2_Door_Movement_3D2F30224892EAD619FC41A3F9684682"))
	float bpv__Timeline_2_Door_Movement_3D2F30224892EAD619FC41A3F9684682__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_2__Direction_3D2F30224892EAD619FC41A3F9684682"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_2__Direction_3D2F30224892EAD619FC41A3F9684682__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="apartmentDoor_blueprint", OverrideNativeName="Timeline_2"))
	UTimelineComponent* bpv__Timeline_2__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_Door_Movement_DC44184D4F775DB912D4A0A601D01A50"))
	float bpv__Timeline_1_Door_Movement_DC44184D4F775DB912D4A0A601D01A50__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_DC44184D4F775DB912D4A0A601D01A50"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_DC44184D4F775DB912D4A0A601D01A50__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="apartmentDoor_blueprint", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Door_Movement_A375758E40B76D25EF16DBB1819312AF"))
	float bpv__Timeline_0_Door_Movement_A375758E40B76D25EF16DBB1819312AF__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_A375758E40B76D25EF16DBB1819312AF"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_A375758E40B76D25EF16DBB1819312AF__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="apartmentDoor_blueprint", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Door Open", Category="Default", OverrideNativeName="door_open"))
	bool bpv__door_open__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Locked", Category="Default", OverrideNativeName="locked"))
	bool bpv__locked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Valid To Open 1", Category="Default", OverrideNativeName="valid_to_open1"))
	bool bpv__valid_to_open1__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Valid To Open 2", Category="Default", OverrideNativeName="valid_to_open2"))
	bool bpv__valid_to_open2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor4"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp4"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex4"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller2"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller3"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller4"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult3"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult4"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult4__pf;
	AapartmentDoor_blueprint_C__pf2958942102(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__knob2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__knob2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__knob2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__knob2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__knob1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__knob1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__knob1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__knob1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_3__UpdateFunc"))
	virtual void bpf__Timeline_3__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_3__FinishedFunc"))
	virtual void bpf__Timeline_3__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__UpdateFunc"))
	virtual void bpf__Timeline_2__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__FinishedFunc"))
	virtual void bpf__Timeline_2__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
