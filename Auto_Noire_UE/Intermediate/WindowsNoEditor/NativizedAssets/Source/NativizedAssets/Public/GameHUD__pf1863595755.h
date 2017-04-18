#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "ActionInterface__pf2135330250.h"
#include "InventoryStruct__pf2135330250.h"
class UGameHUD_C__pf1863595755;
class AFirstPersonCharacter_C__pf205484891;
class UInventorySlot_C__pf1863595755;
class UVerticalBox;
class UButton;
class AActor;
#include "GameHUD__pf1863595755.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UMG/GameHUD.GameHUD_C", OverrideNativeName="GameHUD_C"))
class UGameHUD_C__pf1863595755 : public UUserWidget, public IActionInterface_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="ButtonWasClicked__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FButtonWasClicked__pf__InventorySlot_C__pf__SinglecastDelegate , int32 , bpp__SlotClicked__pf);
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Action Button", Category="GameHUD", OverrideNativeName="ActionButton"))
	UButton* bpv__ActionButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ActionMenu", Category="GameHUD", OverrideNativeName="ActionMenu"))
	UVerticalBox* bpv__ActionMenu__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Cancel Button", Category="GameHUD", OverrideNativeName="CancelButton"))
	UButton* bpv__CancelButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Discard Item", Category="GameHUD", OverrideNativeName="DiscardItem"))
	UButton* bpv__DiscardItem__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Drop Button", Category="GameHUD", OverrideNativeName="DropButton"))
	UButton* bpv__DropButton__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventoryMenu", Category="GameHUD", OverrideNativeName="InventoryMenu"))
	UVerticalBox* bpv__InventoryMenu__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_0", Category="GameHUD", OverrideNativeName="InventorySlot_C_0"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_0__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_1", Category="GameHUD", OverrideNativeName="InventorySlot_C_1"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_1__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_2", Category="GameHUD", OverrideNativeName="InventorySlot_C_2"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_2__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_3", Category="GameHUD", OverrideNativeName="InventorySlot_C_3"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_3__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_4", Category="GameHUD", OverrideNativeName="InventorySlot_C_4"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_4__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InventorySlot_C_5", Category="GameHUD", OverrideNativeName="InventorySlot_C_5"))
	UInventorySlot_C__pf1863595755* bpv__InventorySlot_C_5__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Active", Category="Default", OverrideNativeName="inventoryActive"))
	bool bpv__inventoryActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Action Text", Category="Default", OverrideNativeName="actionText"))
	FText bpv__actionText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory", Category="Default", OverrideNativeName="inventory"))
	TArray<FInventoryStruct__pf2135330250> bpv__inventory__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory Slot", Category="Default", OverrideNativeName="inventorySlot"))
	int32 bpv__inventorySlot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="My Character", Category="Default", OverrideNativeName="myCharacter"))
	AFirstPersonCharacter_C__pf205484891* bpv__myCharacter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	UGameHUD_C__pf1863595755* bpv__NewVar_0__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FButtonWasClicked__pf__InventorySlot_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InActor"))
	AActor* b0l__K2Node_Event_InActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UInventorySlot_C__pf1863595755*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UInventorySlot_C__pf1863595755* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	UInventorySlot_C__pf1863595755* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	FInventoryStruct__pf2135330250 b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SlotClicked"))
	int32 b0l__K2Node_CustomEvent_SlotClicked__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	FInventoryStruct__pf2135330250 b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsFirst_Person_Character"))
	AFirstPersonCharacter_C__pf205484891* b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	FInventoryStruct__pf2135330250 b0l__CallFunc_Array_Get_Item5__pf;
	UGameHUD_C__pf1863595755(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_GameHUD__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_GameHUD__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__DiscardItem_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__DiscardItem_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ActionButton_K2Node_ComponentBoundEvent_239_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__ActionButton_K2Node_ComponentBoundEvent_239_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__DropButton_K2Node_ComponentBoundEvent_168_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__DropButton_K2Node_ComponentBoundEvent_168_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Action Complete"))
	virtual void bpf__ActionxComplete__pfT();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__CancelButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__CancelButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ButtonWasClicked_Event"))
	virtual void bpf__ButtonWasClicked_Event__pf(int32 bpp__SlotClicked__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="RefreshInventory"))
	virtual void bpf__RefreshInventory__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UseAction"))
	void bpf__UseAction__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DropAction"))
	void bpf__DropAction__pf(AActor* bpp__InActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ExamineAction"))
	void bpf__ExamineAction__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_ActionMenu_Visibility_0"))
	virtual void bpf__Get_ActionMenu_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
