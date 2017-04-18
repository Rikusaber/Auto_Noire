#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
class UTexture2D;
class UImage;
class UButton;
#include "InventorySlot__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/InventorySlot.InventorySlot_C", OverrideNativeName="InventorySlot_C"))
class UInventorySlot_C__pf1863595755 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ButtonWasClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonWasClicked__pf__InventorySlot_C__pf__MulticastDelegate , int32 , bpp__SlotClicked__pf);
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_0", Category="InventorySlot", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_0", Category="InventorySlot", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Image", Category="Default", OverrideNativeName="InventoryImage"))
	UTexture2D* bpv__InventoryImage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Inentory Slot", Category="Default", OverrideNativeName="InentorySlot"))
	int32 bpv__InentorySlot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="Button Was Clicked", Category="Default", OverrideNativeName="ButtonWasClicked"))
	FButtonWasClicked__pf__InventorySlot_C__pf__MulticastDelegate bpv__ButtonWasClicked__pf;
	UInventorySlot_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InventorySlot__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetBrush_0"))
	virtual FSlateBrush  bpf__GetBrush_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetbIsEnabled_0"))
	virtual bool  bpf__GetbIsEnabled_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
