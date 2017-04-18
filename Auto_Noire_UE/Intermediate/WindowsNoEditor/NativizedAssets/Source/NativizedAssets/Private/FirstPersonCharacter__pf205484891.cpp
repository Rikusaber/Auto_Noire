#include "NativizedAssets.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "GameHUD__pf1863595755.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "InventoryStruct__pf2135330250.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "InventorySlot__pf1863595755.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
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
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "FirstPersonHUD__pf205484891.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AFirstPersonCharacter_C__pf205484891::AFirstPersonCharacter_C__pf205484891(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AFirstPersonCharacter_C__pf205484891::StaticClass() == GetClass()))
	{
		AFirstPersonCharacter_C__pf205484891::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	auto& __Local__1 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleHalfHeight() )));
	__Local__1 = 96.000000f;
	auto& __Local__2 = (*(AccessPrivateProperty<float >((__Local__0), UCapsuleComponent::__PPO__CapsuleRadius() )));
	__Local__2 = 42.000000f;
	auto __Local__3 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	__Local__3->NavAgentProps.AgentRadius = 48.000000f;
	__Local__3->NavAgentProps.AgentHeight = 192.000000f;
	static TWeakObjectPtr<UProperty> __Local__5{};
	const UProperty* __Local__4 = __Local__5.Get();
	if (nullptr == __Local__4)
	{
		__Local__4 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
		check(__Local__4);
		__Local__5 = __Local__4;
	}
	(((UBoolProperty*)__Local__4)->SetPropertyValue_InContainer((__Local__3), false, 0));
	auto __Local__6 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	auto& __Local__7 = (*(AccessPrivateProperty<float >(&(__Local__6->BodyInstance), FBodyInstance::__PPO__MassInKgOverride() )));
	__Local__7 = 0.000000f;
	__Local__6->RelativeLocation = FVector(0.000000, -1.412910, -40.578861);
	__Local__6->RelativeRotation = FRotator(0.000000, 359.999146, -0.000000);
	bpv__FirstPersonCamera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	bpv__DropLocation__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("DropLocation"));
	bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__FirstPersonCamera__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__FirstPersonCamera__pf->bUsePawnControlRotation = true;
	bpv__FirstPersonCamera__pf->PostProcessSettings.bOverride_AutoExposureMinBrightness = true;
	bpv__FirstPersonCamera__pf->PostProcessSettings.bOverride_AutoExposureMaxBrightness = true;
	bpv__FirstPersonCamera__pf->PostProcessSettings.AutoExposureMinBrightness = 1.000000f;
	bpv__FirstPersonCamera__pf->PostProcessSettings.AutoExposureMaxBrightness = 1.000000f;
	bpv__FirstPersonCamera__pf->RelativeLocation = FVector(0.000000, 0.000000, 64.000000);
	bpv__DropLocation__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__DropLocation__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__DropLocation__pf->RelativeLocation = FVector(70.000000, 0.000000, 45.000000);
	if(!bpv__DropLocation__pf->IsTemplate())
	{
		bpv__DropLocation__pf->BodyInstance.FixupData(bpv__DropLocation__pf);
	}
	bpv__GunOffset__pf = FVector(100.000000, 33.000000, 10.000000);
	bpv__BaseTurnRate__pf = 45.000000f;
	bpv__BaseLookUpRate__pf = 45.000000f;
	bpv__WeaponRange__pf = 5000.000000f;
	bpv__WeaponDamage__pf = 500000.000000f;
	bpv__StartTrace__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__EndTrace__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__ShootDir__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__MenuOpen__pf = false;
	bpv__GameHUD_Widget__pf = nullptr;
}
void AFirstPersonCharacter_C__pf205484891::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__FirstPersonCamera__pf)
	{
		bpv__FirstPersonCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__DropLocation__pf)
	{
		bpv__DropLocation__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AFirstPersonCharacter_C__pf205484891::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UGameHUD_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UGameHUD_C__pf1863595755());
	extern UClass* Z_Construct_UClass_UInventorySlot_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInventorySlot_C__pf1863595755());
	extern UClass* Z_Construct_UClass_UActionInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UActionInterface_C());
	extern UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__8 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("SceneComponent_0"));
	InDynamicClass->ComponentTemplates.Add(__Local__8);
	auto __Local__9 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__9);
	auto __Local__10 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__10);
	auto __Local__11 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__11);
	__Local__9->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__9->InputActionDelegateBindings.AddUninitialized(2);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__9->InputActionDelegateBindings.GetData(), 2);
	auto& __Local__12 = __Local__9->InputActionDelegateBindings[0];
	__Local__12.InputActionName = FName(TEXT("Jump"));
	__Local__12.InputKeyEvent = EInputEvent::IE_Released;
	__Local__12.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_3"));
	__Local__12.bOverrideParentBinding = false;
	auto& __Local__13 = __Local__9->InputActionDelegateBindings[1];
	__Local__13.InputActionName = FName(TEXT("Jump"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpActEvt_Jump_K2Node_InputActionEvent_2"));
	__Local__13.bOverrideParentBinding = false;
	__Local__10->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__10->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__10->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__14 = __Local__10->InputAxisDelegateBindings[0];
	__Local__14.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62"));
	auto& __Local__15 = __Local__10->InputAxisDelegateBindings[1];
	__Local__15.InputAxisName = FName(TEXT("TurnRate"));
	__Local__15.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34"));
	auto& __Local__16 = __Local__10->InputAxisDelegateBindings[2];
	__Local__16.InputAxisName = FName(TEXT("Turn"));
	__Local__16.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_157"));
	__Local__16.bOverrideParentBinding = false;
	auto& __Local__17 = __Local__10->InputAxisDelegateBindings[3];
	__Local__17.InputAxisName = FName(TEXT("MoveRight"));
	__Local__17.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192"));
	__Local__17.bOverrideParentBinding = false;
	auto& __Local__18 = __Local__10->InputAxisDelegateBindings[4];
	__Local__18.InputAxisName = FName(TEXT("MoveForward"));
	__Local__18.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181"));
	__Local__18.bOverrideParentBinding = false;
	auto& __Local__19 = __Local__10->InputAxisDelegateBindings[5];
	__Local__19.InputAxisName = FName(TEXT("LookUp"));
	__Local__19.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_172"));
	__Local__19.bOverrideParentBinding = false;
	__Local__11->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__11->InputKeyDelegateBindings.AddUninitialized(2);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__11->InputKeyDelegateBindings.GetData(), 2);
	auto& __Local__20 = __Local__11->InputKeyDelegateBindings[0];
	__Local__20.InputChord.Key = FKey(TEXT("I"));
	__Local__20.FunctionNameToBind = FName(TEXT("InpActEvt_I_K2Node_InputKeyEvent_3"));
	auto& __Local__21 = __Local__11->InputKeyDelegateBindings[1];
	__Local__21.InputChord.Key = FKey(TEXT("E"));
	__Local__21.FunctionNameToBind = FName(TEXT("InpActEvt_E_K2Node_InputKeyEvent_2"));
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 40);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key2__pf;
	// optimized KCST_UnconditionalGoto
	StopJumping();
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	TArray<FInventoryStruct__pf2135330250>  __Local__22 = TArray<FInventoryStruct__pf2135330250> {};
	bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(((IsValid(bpv__GameHUD_Widget__pf)) ? (bpv__GameHUD_Widget__pf->bpv__inventory__pf) : (__Local__22)));
	bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__CallFunc_Array_Length_ReturnValue__pf, 5);
	if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__PickupItem__pf.Broadcast();
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(int32 bpp__EntryPoint__pf)
{
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_Event_InActor__pf))
	{
		b0l__K2Node_Event_InActor__pf->SetActorHiddenInGame(false);
	}
	if(IsValid(b0l__K2Node_Event_InActor__pf))
	{
		b0l__K2Node_Event_InActor__pf->AActor::SetActorEnableCollision(true);
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__DropLocation__pf))
	{
		bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = bpv__DropLocation__pf->USceneComponent::K2_GetComponentToWorld();
	}
	bpfv__CallFunc_K2_SetActorTransform_ReturnValue__pf = AActor::K2_SetActorTransform(bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetActorTransform_SweepHitResult__pf, false);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 36);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__CurrentState = 12;
				break;
			}
		case 12:
			{
				bool  __Local__23 = false;
				if (!((IsValid(bpv__GameHUD_Widget__pf)) ? (bpv__GameHUD_Widget__pf->bpv__inventoryActive__pf) : (__Local__23)))
				{
					__CurrentState = -1;
					break;
				}
			}
		case 13:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(b0l__Temp_bool_Variable__pf);
				b0l__Temp_bool_Variable__pf = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
			}
		case 14:
			{
				if (!b0l__Temp_bool_Variable__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 15:
			{
				if(IsValid(bpv__GameHUD_Widget__pf) && IsValid(bpv__GameHUD_Widget__pf->bpv__InventoryMenu__pf))
				{
					bpv__GameHUD_Widget__pf->bpv__InventoryMenu__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 16:
			{
				bpv__MenuOpen__pf = true;
			}
		case 17:
			{
				bpf__EnableMouseCursor__pf();
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				if(IsValid(bpv__GameHUD_Widget__pf) && IsValid(bpv__GameHUD_Widget__pf->bpv__InventoryMenu__pf))
				{
					bpv__GameHUD_Widget__pf->bpv__InventoryMenu__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 19:
			{
				bpv__MenuOpen__pf = false;
			}
		case 20:
			{
				bpf__DisableMouseCursor__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable__pf = b0l__K2Node_InputActionEvent_Key__pf;
	// optimized KCST_UnconditionalGoto
	Jump();
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(int32 bpp__EntryPoint__pf)
{
	UGameHUD_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 33);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UGameHUD_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UGameHUD_C__pf1863595755::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
	bpv__GameHUD_Widget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	if(IsValid(bpv__GameHUD_Widget__pf))
	{
		bpv__GameHUD_Widget__pf->UUserWidget::AddToViewport(0);
	}
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 32);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorRightVector_ReturnValue__pf = AActor::GetActorRightVector();
	AddMovementInput(bpfv__CallFunc_GetActorRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue4__pf, false);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf = AActor::GetActorForwardVector();
	AddMovementInput(bpfv__CallFunc_GetActorForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue5__pf, false);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, bpv__BaseLookUpRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf);
	AddControllerPitchInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue2__pf, bpv__BaseTurnRate__pf);
	bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	AddControllerYawInput(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue3__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExecuteUbergraph_FirstPersonCharacter__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue6__pf);
	return; // KCST_GotoReturn
}
void AFirstPersonCharacter_C__pf205484891::bpf__DropAction__pf(AActor* bpp__InActor__pf)
{
	b0l__K2Node_Event_InActor__pf = bpp__InActor__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_2(37);
}
void AFirstPersonCharacter_C__pf205484891::bpf__ExamineAction__pf()
{
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_3(36);
}
void AFirstPersonCharacter_C__pf205484891::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_6(33);
}
void AFirstPersonCharacter_C__pf205484891::bpf__UseAction__pf()
{
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_7(32);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_10(28);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_11(26);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_157__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_12(24);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_8(9);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_9(7);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_172__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue6__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_13(4);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_E_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_1(1);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_I_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_4(11);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_5(34);
}
void AFirstPersonCharacter_C__pf205484891::bpf__InpActEvt_Jump_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_FirstPersonCharacter__pf_0(40);
}
void AFirstPersonCharacter_C__pf205484891::bpf__UserConstructionScript__pf()
{
}
void AFirstPersonCharacter_C__pf205484891::bpf__GetPlayerViewPoint__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf)
{
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FRotator bpfv__CallFunc_GetCameraRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetCameraLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue2__pf{};
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	APlayerController* bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	APlayerController* bpfv__MyPlayerController__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf = Cast<APlayerController>(bpfv__CallFunc_GetController_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpfv__MyPlayerController__pf = bpfv__K2Node_DynamicCast_AsPlayer_Controller__pf;
			}
		case 3:
			{
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__MyPlayerController__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 4:
			{
				APlayerCameraManager*  __Local__24 = ((APlayerCameraManager*)nullptr);
				bpfv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(((IsValid(bpfv__MyPlayerController__pf)) ? (bpfv__MyPlayerController__pf->PlayerCameraManager) : (__Local__24)));
				if (!bpfv__CallFunc_IsValid_ReturnValue2__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpfv__MyPlayerController__pf) && IsValid(bpfv__MyPlayerController__pf->PlayerCameraManager))
				{
					bpfv__CallFunc_GetCameraRotation_ReturnValue__pf = bpfv__MyPlayerController__pf->PlayerCameraManager->APlayerCameraManager::GetCameraRotation();
				}
				if(IsValid(bpfv__MyPlayerController__pf) && IsValid(bpfv__MyPlayerController__pf->PlayerCameraManager))
				{
					bpfv__CallFunc_GetCameraLocation_ReturnValue__pf = bpfv__MyPlayerController__pf->PlayerCameraManager->APlayerCameraManager::GetCameraLocation();
				}
				bpp__Location__pf = bpfv__CallFunc_GetCameraLocation_ReturnValue__pf;
				bpp__Rotation__pf = bpfv__CallFunc_GetCameraRotation_ReturnValue__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFirstPersonCharacter_C__pf205484891::bpf__EnableMouseCursor__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	AHUD* bpfv__CallFunc_GetHUD_ReturnValue__pf{};
	AFirstPersonHUD_C__pf205484891* bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = true;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHUD_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHUD();
				}
				bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf = Cast<AFirstPersonHUD_C__pf205484891>(bpfv__CallFunc_GetHUD_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf))
				{
					bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf->bpv__showCrosshairs__pf = false;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFirstPersonCharacter_C__pf205484891::bpf__DisableMouseCursor__pf()
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	AHUD* bpfv__CallFunc_GetHUD_ReturnValue__pf{};
	AFirstPersonHUD_C__pf205484891* bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->bShowMouseCursor = false;
				}
			}
		case 2:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetHUD_ReturnValue__pf = bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::GetHUD();
				}
				bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf = Cast<AFirstPersonHUD_C__pf205484891>(bpfv__CallFunc_GetHUD_ReturnValue__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf))
				{
					bpfv__K2Node_DynamicCast_AsFirst_Person_HUD__pf->bpv__showCrosshairs__pf = true;
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AFirstPersonCharacter_C__pf205484891::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BPs/ActionInterface.ActionInterface_C 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/GameHUD.GameHUD_C 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/InventorySlot.InventorySlot_C 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C 
		{99, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/BPs/InventoryStruct.InventoryStruct 
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
struct FRegisterHelper__AFirstPersonCharacter_C__pf205484891
{
	FRegisterHelper__AFirstPersonCharacter_C__pf205484891()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/FirstPersonBP/Blueprints/FirstPersonCharacter"), &AFirstPersonCharacter_C__pf205484891::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AFirstPersonCharacter_C__pf205484891 Instance;
};
FRegisterHelper__AFirstPersonCharacter_C__pf205484891 FRegisterHelper__AFirstPersonCharacter_C__pf205484891::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
