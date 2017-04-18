#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf563933975.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class USceneComponent;
class UStaticMeshComponent;
class UPointLightComponent;
class UTimelineComponent;
class APointLight;
#include "LightSwitch__pf2958942102.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Furniture/LightSwitch.LightSwitch_C,/Game/BPs/LightSwitch.LightSwitch_C", OverrideNativeName="LightSwitch_C"))
class ALightSwitch_C__pf2958942102 : public AActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh1"))
	UStaticMeshComponent* bpv__StaticMesh1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Cylinder"))
	UStaticMeshComponent* bpv__Cylinder__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PointLight"))
	UPointLightComponent* bpv__PointLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_Switch_Movement_F842A6FC434519D43221329A94523C60"))
	float bpv__Timeline_1_Switch_Movement_F842A6FC434519D43221329A94523C60__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_F842A6FC434519D43221329A94523C60"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_F842A6FC434519D43221329A94523C60__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="LightSwitch", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_Switch_Movement_92623C7D4ADC220780827FB2491EB3B4"))
	float bpv__Timeline_0_Switch_Movement_92623C7D4ADC220780827FB2491EB3B4__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_92623C7D4ADC220780827FB2491EB3B4"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_92623C7D4ADC220780827FB2491EB3B4__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="LightSwitch", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Attached Lights", Category="Default", OverrideNativeName="attached_lights"))
	TArray<APointLight*> bpv__attached_lights__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Switch State", Category="Default", OverrideNativeName="switch_state"))
	bool bpv__switch_state__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult3"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult4"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult4__pf;
	ALightSwitch_C__pf2958942102(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LightSwitch__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LightSwitch__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LightSwitch__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LightSwitch__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LightSwitch__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_LightSwitch__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
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
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="toggle_lights"))
	virtual void bpf__toggle_lights__pf();
public:
};
