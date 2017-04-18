#include "NativizedAssets.h"
#include "VasePickup__pf2135330250.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
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
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "VasePickup__pf2135330250.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "PickupText__pf1863595755.h"
#include "GameHUD__pf1863595755.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
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
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
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
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "InventorySlot__pf1863595755.h"
#include "FirstPersonHUD__pf205484891.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AVasePickup_C__pf2135330250::AVasePickup_C__pf2135330250(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AVasePickup_C__pf2135330250::StaticClass() == GetClass()))
	{
		AVasePickup_C__pf2135330250::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__Trigger__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Trigger"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__StaticMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	bpv__StaticMesh2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
	bpv__TextRender__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Trigger__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Trigger__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	bpv__Trigger__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__Trigger__pf->RelativeScale3D = FVector(3.038137, 3.038137, 4.128789);
	if(!bpv__Trigger__pf->IsTemplate())
	{
		bpv__Trigger__pf->BodyInstance.FixupData(bpv__Trigger__pf);
	}
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AVasePickup_C__pf2135330250::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->RelativeLocation = FVector(-39.000000, 0.000000, -18.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.423507, 0.423507, 0.423507);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh1__pf->AttachToComponent(bpv__StaticMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AVasePickup_C__pf2135330250::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMesh1__pf->RelativeLocation = FVector(-70.837105, 51.947212, 0.000000);
	if(!bpv__StaticMesh1__pf->IsTemplate())
	{
		bpv__StaticMesh1__pf->BodyInstance.FixupData(bpv__StaticMesh1__pf);
	}
	bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AVasePickup_C__pf2135330250::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__StaticMesh2__pf->RelativeLocation = FVector(-65.000000, 0.000000, -18.000000);
	bpv__StaticMesh2__pf->RelativeScale3D = FVector(0.423507, 0.423507, 0.423507);
	if(!bpv__StaticMesh2__pf->IsTemplate())
	{
		bpv__StaticMesh2__pf->BodyInstance.FixupData(bpv__StaticMesh2__pf);
	}
	bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TextRender__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TextRender__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Broken Vase"), /* Literal Text */
	TEXT("[9D5407B54901034190BB998D9627E0DF]"), /* Namespace */
	TEXT("897E3F924E8EC7688D6E5486D84156E1") /* Key */
	);
	bpv__TextRender__pf->RelativeLocation = FVector(-65.982147, 11.634229, 33.000000);
	bpv__TextRender__pf->RelativeRotation = FRotator(0.000000, 80.000145, 0.000000);
	if(!bpv__TextRender__pf->IsTemplate())
	{
		bpv__TextRender__pf->BodyInstance.FixupData(bpv__TextRender__pf);
	}
	bpv__inRange__pf = false;
	bpv__itemInfo__pf.bpv__ItemImage_8_54304FE24CB654420C227187E6651149__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(AVasePickup_C__pf2135330250::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__itemInfo__pf.bpv__PickupText_11_8C0DB3114267A07CEA857CB11656D70A__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Vase"), /* Literal Text */
	TEXT("[9D5407B54901034190BB998D9627E0DF]"), /* Namespace */
	TEXT("55DFCC714E09F15B6DCDC7A029BEB3ED") /* Key */
	);
	bpv__itemInfo__pf.bpv__ActionText_12_DD2D11C64D93A02D0DA92EB88694731E__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Raise Kappas"), /* Literal Text */
	TEXT("[9D5407B54901034190BB998D9627E0DF]"), /* Namespace */
	TEXT("D9D6E9ED439A2C1C5F1060A2E1DCA1DF") /* Key */
	);
	bpv__PickupText_Widget__pf = nullptr;
	bpv__MyCharacter__pf = nullptr;
}
void AVasePickup_C__pf2135330250::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Trigger__pf)
	{
		bpv__Trigger__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh1__pf)
	{
		bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh2__pf)
	{
		bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TextRender__pf)
	{
		bpv__TextRender__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AVasePickup_C__pf2135330250::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonCharacter_C__pf205484891());
	extern UClass* Z_Construct_UClass_UGameHUD_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UGameHUD_C__pf1863595755());
	extern UClass* Z_Construct_UClass_UInventorySlot_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInventorySlot_C__pf1863595755());
	extern UClass* Z_Construct_UClass_UActionInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UActionInterface_C());
	extern UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891());
	extern UClass* Z_Construct_UClass_UPickupText_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupText_C__pf1863595755());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__0);
	auto __Local__1 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	__Local__1->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__1->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__2 = __Local__1->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__Trigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__3 = __Local__1->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Trigger"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_0(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	UPickupText_C__pf1863595755* bpfv__CallFunc_Create_ReturnValue__pf{};
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 25);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
	bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UPickupText_C__pf1863595755>(UWidgetBlueprintLibrary::Create(this, UPickupText_C__pf1863595755::StaticClass(), bpfv__CallFunc_GetPlayerController_ReturnValue__pf), ECastCheckedType::NullAllowed);
	bpv__PickupText_Widget__pf = bpfv__CallFunc_Create_ReturnValue__pf;
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__PickupActor__pf = bpv__itemInfo__pf.bpv__Item_6_7DA1A42B4C8F74D342BFE69CACCFE7BD__pf;
	}
	if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
	{
		bpfv__CallFunc_Create_ReturnValue__pf->bpv__PickupText__pf = bpv__itemInfo__pf.bpv__PickupText_11_8C0DB3114267A07CEA857CB11656D70A__pf;
	}
	bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
	b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf = Cast<AFirstPersonCharacter_C__pf205484891>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__MyCharacter__pf = b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
	b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("PickupItem_Event")));
	if(IsValid(b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf))
	{
		b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf->bpv__PickupItem__pf.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
	}
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	K2_DestroyActor();
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsFirst_Person_Character3__pf = Cast<AFirstPersonCharacter_C__pf205484891>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsFirst_Person_Character3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__PickupText_Widget__pf))
	{
		bpv__PickupText_Widget__pf->RemoveFromParent();
	}
	bpv__inRange__pf = false;
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsFirst_Person_Character2__pf = Cast<AFirstPersonCharacter_C__pf205484891>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsFirst_Person_Character2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__PickupText_Widget__pf))
	{
		bpv__PickupText_Widget__pf->UUserWidget::AddToViewport(0);
	}
	bpv__inRange__pf = true;
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 16);
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_GetActorEnableCollision_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetActorEnableCollision_ReturnValue__pf = AActor::GetActorEnableCollision();
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_GetActorEnableCollision_ReturnValue__pf, bpv__inRange__pf);
	if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	TArray<FInventoryStruct__pf2135330250>  __Local__4 = TArray<FInventoryStruct__pf2135330250> {};
	bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(((IsValid(bpv__MyCharacter__pf) && IsValid(bpv__MyCharacter__pf->bpv__GameHUD_Widget__pf)) ? (bpv__MyCharacter__pf->bpv__GameHUD_Widget__pf->bpv__inventory__pf) : (__Local__4)), bpv__itemInfo__pf);
	if(IsValid(bpv__PickupText_Widget__pf))
	{
		bpv__PickupText_Widget__pf->RemoveFromParent();
	}
	SetActorHiddenInGame(true);
	AActor::SetActorEnableCollision(false);
	if(IsValid(bpv__MyCharacter__pf) && IsValid(bpv__MyCharacter__pf->bpv__GameHUD_Widget__pf))
	{
		bpv__MyCharacter__pf->bpv__GameHUD_Widget__pf->bpf__RefreshInventory__pf();
	}
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__ExecuteUbergraph_VasePickup__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	return; // KCST_GotoReturn
}
void AVasePickup_C__pf2135330250::bpf__UseAction__pf()
{
	bpf__ExecuteUbergraph_VasePickup__pf_1(26);
}
void AVasePickup_C__pf2135330250::bpf__BndEvt__Trigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_VasePickup__pf_2(21);
}
void AVasePickup_C__pf2135330250::bpf__BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__5;
	T__Local__5& bpp__SweepResult__pf = *const_cast<T__Local__5 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_VasePickup__pf_3(17);
}
void AVasePickup_C__pf2135330250::bpf__ExamineAction__pf()
{
	bpf__ExecuteUbergraph_VasePickup__pf_4(16);
}
void AVasePickup_C__pf2135330250::bpf__DropAction__pf(AActor* bpp__InActor__pf)
{
	b0l__K2Node_Event_InActor__pf = bpp__InActor__pf;
	bpf__ExecuteUbergraph_VasePickup__pf_6(15);
}
void AVasePickup_C__pf2135330250::bpf__PickupItem_Event__pf()
{
	bpf__ExecuteUbergraph_VasePickup__pf_5(8);
}
void AVasePickup_C__pf2135330250::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_VasePickup__pf_0(25);
}
void AVasePickup_C__pf2135330250::bpf__UserConstructionScript__pf()
{
}
void AVasePickup_C__pf2135330250::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{146, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/items/broken_vase_pCylinder1.broken_vase_pCylinder1 
		{147, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/items/broken_vase_pCylinder2.broken_vase_pCylinder2 
		{148, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/items/broken_vase_pCylinder3.broken_vase_pCylinder3 
		{149, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/Sprites/Sprite_Images/kappa_texture.kappa_texture 
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
void AVasePickup_C__pf2135330250::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BPs/ActionInterface.ActionInterface_C 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C 
		{96, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/GameHUD.GameHUD_C 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/InventorySlot.InventorySlot_C 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C 
		{150, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/PickupText.PickupText_C 
		{99, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/BPs/InventoryStruct.InventoryStruct 
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
struct FRegisterHelper__AVasePickup_C__pf2135330250
{
	FRegisterHelper__AVasePickup_C__pf2135330250()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/BPs/VasePickup"), &AVasePickup_C__pf2135330250::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AVasePickup_C__pf2135330250 Instance;
};
FRegisterHelper__AVasePickup_C__pf2135330250 FRegisterHelper__AVasePickup_C__pf2135330250::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
