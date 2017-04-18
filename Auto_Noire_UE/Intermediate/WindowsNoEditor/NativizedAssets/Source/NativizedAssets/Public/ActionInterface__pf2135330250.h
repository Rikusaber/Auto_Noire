#pragma once
#include "Blueprint/BlueprintSupport.h"
class AActor;
#include "ActionInterface__pf2135330250.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/BPs/ActionInterface.ActionInterface_C", OverrideNativeName="ActionInterface_C"))
class UActionInterface_C : public UInterface
{
	GENERATED_BODY()
};
class IActionInterface_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="ExamineAction"))
	void bpf__ExamineAction__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="DropAction"))
	void bpf__DropAction__pf(AActor* bpp__InActor__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category, OverrideNativeName="UseAction"))
	void bpf__UseAction__pf();
public:
};
