#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UAnimMontage;
class USoundBase;
#include "Struct_BasicBehavior__pf1755700395.generated.h"
USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mannequin/Blueprints/Structs/Struct_BasicBehavior.Struct_BasicBehavior", OverrideNativeName="Struct_BasicBehavior"))
struct FStruct_BasicBehavior__pf1755700395
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BehaviorType", Tooltip, OverrideNativeName="BehaviorType_2_D699B7194817EACFC527B8949BCD5FEC"))
	uint8 bpv__BehaviorType_2_D699B7194817EACFC527B8949BCD5FEC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MovementSpeed", Tooltip, OverrideNativeName="MovementSpeed_34_B716D9754BC12E288BC6EF99E151DD9F"))
	float bpv__MovementSpeed_34_B716D9754BC12E288BC6EF99E151DD9F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="OnSightTriggers", Tooltip, OverrideNativeName="OnSightTriggers_50_3224A6F24F55E7CC58F2998B590297CB"))
	TArray<FFallbackStruct> bpv__OnSightTriggers_50_3224A6F24F55E7CC58F2998B590297CB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LoseSightTriggers", Tooltip, OverrideNativeName="LoseSightTriggers_49_A18A98624FCC4ECF2C770A9ABFEE1E90"))
	TArray<FFallbackStruct> bpv__LoseSightTriggers_49_A18A98624FCC4ECF2C770A9ABFEE1E90__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MessageTriggers", Tooltip, OverrideNativeName="MessageTriggers_55_4BA7591A4081E99E8729D79955A65776"))
	TArray<FFallbackStruct> bpv__MessageTriggers_55_4BA7591A4081E99E8729D79955A65776__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="DelayTrigger", Tooltip, OverrideNativeName="DelayTrigger_38_5C8C6C6149AAC5846DD7578B341E44F1"))
	FFallbackStruct bpv__DelayTrigger_38_5C8C6C6149AAC5846DD7578B341E44F1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="WithinDistanceTriggers", Tooltip, OverrideNativeName="WithinDistanceTriggers_44_12A33C1E4F2159016C210985F0BCD8D2"))
	TArray<FFallbackStruct> bpv__WithinDistanceTriggers_44_12A33C1E4F2159016C210985F0BCD8D2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BeyondDistanceTriggers", Tooltip, OverrideNativeName="BeyondDistanceTriggers_45_B80166C2426C3DB58AA1B1B46D24A079"))
	TArray<FFallbackStruct> bpv__BeyondDistanceTriggers_45_B80166C2426C3DB58AA1B1B46D24A079__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HealthTriggers", Tooltip, OverrideNativeName="HealthTriggers_63_A5C73CF34962E294FD5009BE1F5E2154"))
	TArray<FFallbackStruct> bpv__HealthTriggers_63_A5C73CF34962E294FD5009BE1F5E2154__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animations", Tooltip, OverrideNativeName="Animations_12_238A696D49F94C7AACEF9D9D093E5803"))
	TArray<UAnimMontage*> bpv__Animations_12_238A696D49F94C7AACEF9D9D093E5803__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Audio", Tooltip, OverrideNativeName="Audio_64_82C07DD940FCA8760AF124A6DD3382C4"))
	TArray<USoundBase*> bpv__Audio_64_82C07DD940FCA8760AF124A6DD3382C4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TargetTags", Tooltip, OverrideNativeName="TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A"))
	TArray<FName> bpv__TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RandomAnim", Tooltip, OverrideNativeName="RandomAnim_57_32B894544143D1037551E982DEBE9461"))
	bool bpv__RandomAnim_57_32B894544143D1037551E982DEBE9461__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="AscendingOrderAnim", Tooltip, OverrideNativeName="AscendingOrderAnim_59_6C2027964B8F9F8F327106A47FEC81E4"))
	bool bpv__AscendingOrderAnim_59_6C2027964B8F9F8F327106A47FEC81E4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PrioritizeList", Tooltip, OverrideNativeName="PrioritizeList_66_A06242444024145CA7747196CD1AFED3"))
	bool bpv__PrioritizeList_66_A06242444024145CA7747196CD1AFED3__pf;
	static FStruct_BasicBehavior__pf1755700395 GetDefaultValue()
	{
		FStructOnScope StructOnScope(FStruct_BasicBehavior__pf1755700395::StaticStruct());
		FStruct_BasicBehavior__pf1755700395& DefaultData__ = *((FStruct_BasicBehavior__pf1755700395*)StructOnScope.GetStructMemory());
		DefaultData__.bpv__MovementSpeed_34_B716D9754BC12E288BC6EF99E151DD9F__pf = 600.000000f;
		DefaultData__.bpv__TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A__pf = TArray<FName> ();
		DefaultData__.bpv__TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A__pf.Reserve(1);
		DefaultData__.bpv__TargetTags_54_03DAC2AD452002D87E6949B6124BAC3A__pf.Add(FName(TEXT("Player")));
		DefaultData__.bpv__RandomAnim_57_32B894544143D1037551E982DEBE9461__pf = true;
		return DefaultData__;
	}
	bool operator== (const FStruct_BasicBehavior__pf1755700395& __Other) const
	{
		return FStruct_BasicBehavior__pf1755700395::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
