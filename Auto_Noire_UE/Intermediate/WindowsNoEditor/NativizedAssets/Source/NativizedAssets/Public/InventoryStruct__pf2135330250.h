#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class AActor;
class UTexture2D;
#include "InventoryStruct__pf2135330250.generated.h"
USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/BPs/InventoryStruct.InventoryStruct", OverrideNativeName="InventoryStruct"))
struct FInventoryStruct__pf2135330250
{
public:
	GENERATED_BODY()
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Item", Tooltip, OverrideNativeName="Item_6_7DA1A42B4C8F74D342BFE69CACCFE7BD"))
	AActor* bpv__Item_6_7DA1A42B4C8F74D342BFE69CACCFE7BD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ItemImage", Tooltip, OverrideNativeName="ItemImage_8_54304FE24CB654420C227187E6651149"))
	UTexture2D* bpv__ItemImage_8_54304FE24CB654420C227187E6651149__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PickupText", Tooltip, OverrideNativeName="PickupText_11_8C0DB3114267A07CEA857CB11656D70A"))
	FText bpv__PickupText_11_8C0DB3114267A07CEA857CB11656D70A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ActionText", Tooltip, OverrideNativeName="ActionText_12_DD2D11C64D93A02D0DA92EB88694731E"))
	FText bpv__ActionText_12_DD2D11C64D93A02D0DA92EB88694731E__pf;
	static FInventoryStruct__pf2135330250 GetDefaultValue()
	{
		FStructOnScope StructOnScope(FInventoryStruct__pf2135330250::StaticStruct());
		FInventoryStruct__pf2135330250& DefaultData__ = *((FInventoryStruct__pf2135330250*)StructOnScope.GetStructMemory());
		return DefaultData__;
	}
	bool operator== (const FInventoryStruct__pf2135330250& __Other) const
	{
		return FInventoryStruct__pf2135330250::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
