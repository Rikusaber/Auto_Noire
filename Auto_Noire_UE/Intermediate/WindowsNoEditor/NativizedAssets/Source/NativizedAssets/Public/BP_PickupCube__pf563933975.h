﻿#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "PickupActorInterface__pf563933975.h"
class USceneComponent;
class UPaperSprite;
#include "BP_PickupCube__pf563933975.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/VirtualRealityBP/Blueprints/BP_PickupCube.BP_PickupCube_C", OverrideNativeName="BP_PickupCube_C"))
class ABP_PickupCube_C__pf563933975 : public AStaticMeshActor, public IPickupActorInterface_C
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sprite", Category="Default", OverrideNativeName="sprite"))
	UPaperSprite* bpv__sprite__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	ABP_PickupCube_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_PickupCube__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PickupCube__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
