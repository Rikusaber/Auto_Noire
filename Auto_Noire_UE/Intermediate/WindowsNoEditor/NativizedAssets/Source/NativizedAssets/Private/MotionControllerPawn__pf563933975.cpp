#include "NativizedAssets.h"
#include "MotionControllerPawn__pf563933975.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "MotionControllerPawn__pf563933975.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "BP_MotionController__pf563933975.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Inventory_Item__pf563933975.h"
#include "GripEnum__pf563933975.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "RightHand_AnimBP__pf558596347.h"
#include "InGame_Item__pf563933975.h"
#include "PickupActorInterface__pf563933975.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AMotionControllerPawn_C__pf563933975::AMotionControllerPawn_C__pf563933975(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AMotionControllerPawn_C__pf563933975::StaticClass() == GetClass()))
	{
		AMotionControllerPawn_C__pf563933975::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__VROrigin__pf = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__VROrigin__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__VROrigin__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Camera__pf->PostProcessSettings.bOverride_AutoExposureMinBrightness = true;
	bpv__Camera__pf->PostProcessSettings.bOverride_AutoExposureMaxBrightness = true;
	bpv__Camera__pf->PostProcessSettings.AutoExposureMinBrightness = 1.000000f;
	bpv__Camera__pf->PostProcessSettings.AutoExposureMaxBrightness = 1.000000f;
	bpv__bShowChaperone__pf = false;
	bpv__LeftController__pf = nullptr;
	bpv__RightController__pf = nullptr;
	bpv__FadeOutDuration__pf = 0.100000f;
	bpv__FadeInDuration__pf = 0.200000f;
	bpv__IsTeleporting__pf = false;
	bpv__TeleportFadeColor__pf = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	bpv__ThumbDeadzone__pf = 0.700000f;
	bpv__RightStickDown__pf = false;
	bpv__LeftStickDown__pf = false;
	bpv__DefaultPlayerHeight__pf = 180.000000f;
	bpv__UseControllerRollToRotate__pf = false;
	bpv__played_waves__pf = TArray<USoundWave*> ();
}
void AMotionControllerPawn_C__pf563933975::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__VROrigin__pf)
	{
		bpv__VROrigin__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AMotionControllerPawn_C__pf563933975::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted enums
	InDynamicClass->ReferencedConvertedFields.Add(LoadObject<UEnum>(nullptr, TEXT("/Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum")));
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ABP_MotionController_C__pf563933975());
	extern UClass* Z_Construct_UClass_URightHand_AnimBP_C__pf558596347();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URightHand_AnimBP_C__pf558596347());
	extern UClass* Z_Construct_UClass_AInventory_Item_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInventory_Item_C__pf563933975());
	extern UClass* Z_Construct_UClass_AInGame_Item_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInGame_Item_C__pf563933975());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	__Local__0->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__0->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->InputAxisDelegateBindings[0];
	__Local__2.InputAxisName = FName(TEXT("MotionControllerThumbRight_X"));
	__Local__2.bOverrideParentBinding = false;
	auto& __Local__3 = __Local__0->InputAxisDelegateBindings[1];
	__Local__3.InputAxisName = FName(TEXT("MotionControllerThumbRight_Y"));
	__Local__3.bOverrideParentBinding = false;
	auto& __Local__4 = __Local__0->InputAxisDelegateBindings[2];
	__Local__4.InputAxisName = FName(TEXT("MotionControllerThumbLeft_Y"));
	__Local__4.bOverrideParentBinding = false;
	auto& __Local__5 = __Local__0->InputAxisDelegateBindings[3];
	__Local__5.InputAxisName = FName(TEXT("MotionControllerThumbLeft_X"));
	__Local__5.bOverrideParentBinding = false;
	__Local__1->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__1->InputActionDelegateBindings.AddUninitialized(10);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->InputActionDelegateBindings.GetData(), 10);
	auto& __Local__6 = __Local__1->InputActionDelegateBindings[0];
	__Local__6.InputActionName = FName(TEXT("GrabRight"));
	__Local__6.InputKeyEvent = EInputEvent::IE_Released;
	__Local__6.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_17"));
	auto& __Local__7 = __Local__1->InputActionDelegateBindings[1];
	__Local__7.InputActionName = FName(TEXT("GrabRight"));
	__Local__7.FunctionNameToBind = FName(TEXT("InpActEvt_GrabRight_K2Node_InputActionEvent_16"));
	auto& __Local__8 = __Local__1->InputActionDelegateBindings[2];
	__Local__8.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__8.InputKeyEvent = EInputEvent::IE_Released;
	__Local__8.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_15"));
	auto& __Local__9 = __Local__1->InputActionDelegateBindings[3];
	__Local__9.InputActionName = FName(TEXT("TeleportLeft"));
	__Local__9.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportLeft_K2Node_InputActionEvent_14"));
	auto& __Local__10 = __Local__1->InputActionDelegateBindings[4];
	__Local__10.InputActionName = FName(TEXT("GrabLeft"));
	__Local__10.InputKeyEvent = EInputEvent::IE_Released;
	__Local__10.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_19"));
	auto& __Local__11 = __Local__1->InputActionDelegateBindings[5];
	__Local__11.InputActionName = FName(TEXT("GrabLeft"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpActEvt_GrabLeft_K2Node_InputActionEvent_18"));
	auto& __Local__12 = __Local__1->InputActionDelegateBindings[6];
	__Local__12.InputActionName = FName(TEXT("Lighter"));
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_Lighter_K2Node_InputActionEvent_10"));
	auto& __Local__13 = __Local__1->InputActionDelegateBindings[7];
	__Local__13.InputActionName = FName(TEXT("Inventory"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_Inventory_K2Node_InputActionEvent_11"));
	auto& __Local__14 = __Local__1->InputActionDelegateBindings[8];
	__Local__14.InputActionName = FName(TEXT("TeleportRight"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_12"));
	auto& __Local__15 = __Local__1->InputActionDelegateBindings[9];
	__Local__15.InputActionName = FName(TEXT("TeleportRight"));
	__Local__15.InputKeyEvent = EInputEvent::IE_Released;
	__Local__15.FunctionNameToBind = FName(TEXT("InpActEvt_TeleportRight_K2Node_InputActionEvent_13"));
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	ABP_MotionController_C__pf563933975* bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FName bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 18:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 19:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 20:
			{
				bpv__LeftController__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 21:
			{
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
			}
		case 22:
			{
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf->bpv__motion_controller_pawn__pf = this;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, ABP_MotionController_C__pf563933975::StaticClass(), bpfv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, this);
			}
		case 24:
			{
				UKismetSystemLibrary::SetBytePropertyByName(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, FName(TEXT("Hand")), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
			}
		case 25:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<ABP_MotionController_C__pf563933975>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, bpfv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 26:
			{
				bpv__RightController__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf;
			}
		case 27:
			{
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf->AActor::K2_AttachToComponent(bpv__VROrigin__pf, FName(TEXT("None")), EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
				}
			}
		case 28:
			{
				if(IsValid(bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf))
				{
					bpfv__CallFunc_FinishSpawningActor_ReturnValue2__pf->bpv__motion_controller_pawn__pf = this;
				}
			}
		case 29:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__otherHand__pf = bpv__RightController__pf;
				}
			}
		case 30:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__otherHand__pf = bpv__LeftController__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 34:
			{
				__StateStack.Push(23);
				__CurrentState = 18;
				break;
			}
		case 38:
			{
				__StateStack.Push(34);
			}
		case 39:
			{
				bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf = UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("OculusRift")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("SteamVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 40;
					break;
				}
				b0l__K2Node_SwitchName_CmpSuccess__pf = UKismetMathLibrary::NotEqual_NameName(bpfv__CallFunc_GetHMDDeviceName_ReturnValue__pf, FName(TEXT("PSVR")));
				if (!b0l__K2Node_SwitchName_CmpSuccess__pf)
				{
					__CurrentState = 41;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 40:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Floor);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);
			}
		case 42:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__DefaultPlayerHeight__pf);
				if(IsValid(bpv__VROrigin__pf))
				{
					bpv__VROrigin__pf->USceneComponent::K2_AddLocalOffset(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_AddLocalOffset_SweepHitResult__pf, false);
				}
			}
		case 43:
			{
				bpv__UseControllerRollToRotate__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 71:
			{
				__CurrentState = 38;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 16:
			{
				__CurrentState = 17;
				break;
			}
		case 17:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__ToggleTorch__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__ToggleInventory__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue3__pf{};
	float bpfv__CallFunc_GetInputAxisValue_ReturnValue4__pf{};
	FRotator bpfv__CallFunc_GetRotationFromInput_ReturnValue2__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 64:
			{
				__CurrentState = 65;
				break;
			}
		case 65:
			{
				__StateStack.Push(68);
			}
		case 66:
			{
				bool  __Local__16 = false;
				if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__16)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 67:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_X")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbLeft_Y")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue2__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue__pf, bpv__LeftController__pf);
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				bool  __Local__17 = false;
				if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__17)))
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 69:
			{
				bpfv__CallFunc_GetInputAxisValue_ReturnValue3__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_Y")));
				bpfv__CallFunc_GetInputAxisValue_ReturnValue4__pf = AActor::GetInputAxisValue(FName(TEXT("MotionControllerThumbRight_X")));
				bpfv__CallFunc_GetRotationFromInput_ReturnValue2__pf = bpf__GetRotationFromInput__pf(bpfv__CallFunc_GetInputAxisValue_ReturnValue3__pf, bpfv__CallFunc_GetInputAxisValue_ReturnValue4__pf, bpv__RightController__pf);
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpv__TeleportRotation__pf = bpfv__CallFunc_GetRotationFromInput_ReturnValue2__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(int32 bpp__EntryPoint__pf)
{
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf{};
	APlayerCameraManager* bpfv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf{};
	bool bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
			}
		case 3:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__GetTeleportDestination__pf(/*out*/ b0l__CallFunc_GetTeleportDestination_Location__pf, /*out*/ b0l__CallFunc_GetTeleportDestination_Rotation__pf);
				}
				bpfv__CallFunc_K2_TeleportTo_ReturnValue__pf = AActor::K2_TeleportTo(b0l__CallFunc_GetTeleportDestination_Location__pf, b0l__CallFunc_GetTeleportDestination_Rotation__pf);
			}
		case 4:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue2__pf->StartCameraFade(1.000000, 0.000000, bpv__FadeInDuration__pf, bpv__TeleportFadeColor__pf, false, false);
				}
			}
		case 5:
			{
				bpv__IsTeleporting__pf = false;
				__CurrentState = -1;
				break;
			}
		case 54:
			{
				UKismetSystemLibrary::Delay(this, bpv__FadeOutDuration__pf, FLatentActionInfo(1, 614746158, TEXT("ExecuteUbergraph_MotionControllerPawn_4"), this));
				__CurrentState = -1;
				break;
			}
		case 57:
			{
				if (!bpv__IsTeleporting__pf)
				{
					__CurrentState = 58;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 58:
			{
				bool  __Local__19 = false;
				if (!((IsValid(b0l__K2Node_CustomEvent_MotionController__pf)) ? (b0l__K2Node_CustomEvent_MotionController__pf->bpv__IsValidTeleportDestination__pf) : (__Local__19)))
				{
					__CurrentState = 61;
					break;
				}
			}
		case 59:
			{
				bpv__IsTeleporting__pf = true;
			}
		case 60:
			{
				bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf = UGameplayStatics::GetPlayerCameraManager(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerCameraManager_ReturnValue__pf->StartCameraFade(0.000000, 1.000000, bpv__FadeOutDuration__pf, bpv__TeleportFadeColor__pf, false, true);
				}
				__CurrentState = 54;
				break;
			}
		case 61:
			{
				if(IsValid(b0l__K2Node_CustomEvent_MotionController__pf))
				{
					b0l__K2Node_CustomEvent_MotionController__pf->bpf__DisableTeleporter__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 70:
			{
				__CurrentState = 57;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 36:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__ReleaseActor__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 62:
			{
				__CurrentState = 63;
				break;
			}
		case 63:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key8__pf;
				__CurrentState = 36;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 37:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__GrabActor__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 55:
			{
				__CurrentState = 56;
				break;
			}
		case 56:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key7__pf;
				__CurrentState = 37;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 46:
			{
				bpf__ExecuteTeleportation__pf(bpv__LeftController__pf);
				__CurrentState = -1;
				break;
			}
		case 49:
			{
				bool  __Local__20 = false;
				if (!((IsValid(bpv__LeftController__pf)) ? (bpv__LeftController__pf->bpv__IsTeleporterActive__pf) : (__Local__20)))
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 46;
				break;
			}
		case 52:
			{
				__CurrentState = 53;
				break;
			}
		case 53:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key6__pf;
				__CurrentState = 49;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				__CurrentState = 7;
				break;
			}
		case 7:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key4__pf;
			}
		case 8:
			{
				bool  __Local__21 = false;
				if (!((IsValid(bpv__RightController__pf)) ? (bpv__RightController__pf->bpv__IsTeleporterActive__pf) : (__Local__21)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 9:
			{
				bpf__ExecuteTeleportation__pf(bpv__RightController__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				__CurrentState = 11;
				break;
			}
		case 11:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputActionEvent_Key3__pf;
			}
		case 12:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__ActivateTeleporter__pf();
				}
			}
		case 13:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__DisableTeleporter__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 47:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__ActivateTeleporter__pf();
				}
			}
		case 48:
			{
				if(IsValid(bpv__RightController__pf))
				{
					bpv__RightController__pf->bpf__DisableTeleporter__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 50:
			{
				__CurrentState = 51;
				break;
			}
		case 51:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key5__pf;
				__CurrentState = 47;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 35:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__ReleaseActor__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 44:
			{
				__CurrentState = 45;
				break;
			}
		case 45:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputActionEvent_Key10__pf;
				__CurrentState = 35;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 31:
			{
				__CurrentState = 32;
				break;
			}
		case 32:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputActionEvent_Key9__pf;
			}
		case 33:
			{
				if(IsValid(bpv__LeftController__pf))
				{
					bpv__LeftController__pf->bpf__GrabActor__pf();
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_0(71);
}
void AMotionControllerPawn_C__pf563933975::bpf__ExecuteTeleportation__pf(ABP_MotionController_C__pf563933975* bpp__MotionController__pf)
{
	b0l__K2Node_CustomEvent_MotionController__pf = bpp__MotionController__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_4(70);
}
void AMotionControllerPawn_C__pf563933975::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_3(64);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Lighter_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_1(16);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_Inventory_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_2(14);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_9(10);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportRight_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_8(6);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_10(50);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_TeleportLeft_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_7(52);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_16__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_6(55);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabRight_K2Node_InputActionEvent_17__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_5(62);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_18__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_12(31);
}
void AMotionControllerPawn_C__pf563933975::bpf__InpActEvt_GrabLeft_K2Node_InputActionEvent_19__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key10__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MotionControllerPawn__pf_11(44);
}
void AMotionControllerPawn_C__pf563933975::bpf__UserConstructionScript__pf()
{
}
FRotator  AMotionControllerPawn_C__pf563933975::bpf__GetRotationFromInput__pf(float bpp__UpAxis__pf, float bpp__RightAxis__pf, ABP_MotionController_C__pf563933975* bpp__Controller__pf)
{
	FRotator bpp__ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	float bpfv__CallFunc_Abs_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf{};
	FVector bpfv__CallFunc_Normal_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Location__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_BreakTransform_Rotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakTransform_Scale__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Abs_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakRotator_Roll2__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch2__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw2__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_BreakRotator_Roll3__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch3__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw3__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_K2_GetActorRotation_ReturnValue3__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_SelectRotator_ReturnValue2__pf(EForceInit::ForceInit);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	FRotator  __Local__22 = FRotator(0.000000,0.000000,0.000000);
	bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), ((IsValid(bpp__Controller__pf)) ? (bpp__Controller__pf->bpv__InitialControllerRotation__pf) : (__Local__22)), FVector(1.000000,1.000000,1.000000));
	bpfv__CallFunc_Abs_ReturnValue__pf = UKismetMathLibrary::Abs(bpp__RightAxis__pf);
	if(IsValid(bpp__Controller__pf) && IsValid(bpp__Controller__pf->bpv__MotionController__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpp__Controller__pf->bpv__MotionController__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpp__UpAxis__pf, bpp__RightAxis__pf, 0.000000);
	bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf = UKismetMathLibrary::ConvertTransformToRelative(bpfv__CallFunc_MakeTransform_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf);
	bpfv__CallFunc_Normal_ReturnValue__pf = UKismetMathLibrary::Normal(bpfv__CallFunc_MakeVector_ReturnValue__pf);
	UKismetMathLibrary::BreakTransform(bpfv__CallFunc_ConvertTransformToRelative_ReturnValue__pf, /*out*/ bpfv__CallFunc_BreakTransform_Location__pf, /*out*/ bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakTransform_Scale__pf);
	bpfv__CallFunc_Abs_ReturnValue2__pf = UKismetMathLibrary::Abs(bpp__UpAxis__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_BreakTransform_Rotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw2__pf);
	bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Abs_ReturnValue2__pf, bpfv__CallFunc_Abs_ReturnValue__pf);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_BreakRotator_Roll2__pf, 3.000000);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_BreakRotator_Yaw__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_K2_GetActorRotation_ReturnValue2__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll3__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch3__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw3__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw3__pf);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_Normal_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue2__pf);
	bpfv__CallFunc_K2_GetActorRotation_ReturnValue3__pf = AActor::K2_GetActorRotation();
	bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_FloatFloat(bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf, bpv__ThumbDeadzone__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpfv__CallFunc_K2_GetActorRotation_ReturnValue3__pf, bpfv__CallFunc_GreaterEqual_FloatFloat_ReturnValue__pf);
	bpfv__CallFunc_SelectRotator_ReturnValue2__pf = UKismetMathLibrary::SelectRotator(bpfv__CallFunc_MakeRotator_ReturnValue__pf, bpfv__CallFunc_SelectRotator_ReturnValue__pf, bpv__UseControllerRollToRotate__pf);
	bpp__ReturnValue__pf = bpfv__CallFunc_SelectRotator_ReturnValue2__pf;
	return bpp__ReturnValue__pf;
}
void AMotionControllerPawn_C__pf563933975::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/inventory_slot.inventory_slot 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryEmpty.M_InventoryEmpty 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Sprites/Sprites/kappa_sprite.kappa_sprite 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Materials/Black.Black 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/lamp_switch_sound.lamp_switch_sound 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Sprites/Sprites/empty_sprite.empty_sprite 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryHighlight.M_InventoryHighlight 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryPartial.M_InventoryPartial 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/Inventory_Item.Inventory_Item_C 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/InGame_Item.InGame_Item_C 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
		));
	} 
}
struct FRegisterHelper__AMotionControllerPawn_C__pf563933975
{
	FRegisterHelper__AMotionControllerPawn_C__pf563933975()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/VirtualRealityBP/Blueprints/MotionControllerPawn"), &AMotionControllerPawn_C__pf563933975::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMotionControllerPawn_C__pf563933975 Instance;
};
FRegisterHelper__AMotionControllerPawn_C__pf563933975 FRegisterHelper__AMotionControllerPawn_C__pf563933975::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
