#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
#include "W_Terminal__pf2135330250.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/BPs/W_Terminal.W_Terminal_C", OverrideNativeName="W_Terminal_C"))
class UW_Terminal_C__pf2135330250 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_0", Category="W_Terminal", OverrideNativeName="Button_0"))
	UButton* bpv__Button_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_5", Category="W_Terminal", OverrideNativeName="Button_5"))
	UButton* bpv__Button_5__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_6", Category="W_Terminal", OverrideNativeName="Button_6"))
	UButton* bpv__Button_6__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_9", Category="W_Terminal", OverrideNativeName="Button_9"))
	UButton* bpv__Button_9__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_11", Category="W_Terminal", OverrideNativeName="Button_11"))
	UButton* bpv__Button_11__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Button_12", Category="W_Terminal", OverrideNativeName="Button_12"))
	UButton* bpv__Button_12__pf;
	UW_Terminal_C__pf2135330250(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
