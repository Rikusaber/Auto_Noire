#include "NativizedAssets.h"
#include "W_Terminal__pf2135330250.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
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
#include "W_Terminal__pf2135330250.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UW_Terminal_C__pf2135330250::UW_Terminal_C__pf2135330250(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UW_Terminal_C__pf2135330250::StaticClass() == GetClass()))
	{
		UW_Terminal_C__pf2135330250::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
}
void UW_Terminal_C__pf2135330250::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UW_Terminal_C__pf2135330250::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UVerticalBox>(__Local__0, UVerticalBox::StaticClass(), TEXT("VerticalBox_104"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(6);
	auto __Local__3 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_1"));
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_0"));
	auto& __Local__5 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__5 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__6 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__4->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__6 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__4), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(1);
	auto __Local__8 = NewObject<UButtonSlot>(__Local__4, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__8->Padding.Left = 0.000000f;
	__Local__8->Padding.Top = 20.000000f;
	__Local__8->Padding.Right = 0.000000f;
	__Local__8->Padding.Bottom = 20.000000f;
	__Local__8->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__8->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__8->Parent = __Local__4;
	auto __Local__9 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__9->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("NotTheVirus.pdf"), /* Literal Text */
	TEXT("[BEEA3AAB4D16BAE51FC99ABEA1FBBB3F]"), /* Namespace */
	TEXT("A4EF6BAE4CD119C2D782B2AC2205E798") /* Key */
	);
	auto& __Local__10 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__9->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__10 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__11 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__11->Parent = __Local__1;
	auto __Local__12 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_5"));
	auto& __Local__13 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__12->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__13 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__14 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__12->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__14 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__15 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__12), UPanelWidget::__PPO__Slots() )));
	__Local__15 = TArray<UPanelSlot*> ();
	__Local__15.Reserve(1);
	auto __Local__16 = NewObject<UButtonSlot>(__Local__12, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__16->Padding.Left = 0.000000f;
	__Local__16->Padding.Top = 20.000000f;
	__Local__16->Padding.Right = 0.000000f;
	__Local__16->Padding.Bottom = 20.000000f;
	__Local__16->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__16->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__16->Parent = __Local__12;
	auto __Local__17 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_5"));
	__Local__17->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("NotTheVirus.pdf"), /* Literal Text */
	TEXT("[BEEA3AAB4D16BAE51FC99ABEA1FBBB3F]"), /* Namespace */
	TEXT("4F39363B4024A7FF765ED0850CF54725") /* Key */
	);
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__17->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__17->Slot = __Local__16;
	__Local__16->Content = __Local__17;
	__Local__15.Add(__Local__16);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__2.Add(__Local__11);
	auto __Local__19 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_7"));
	__Local__19->Parent = __Local__1;
	auto __Local__20 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_6"));
	auto& __Local__21 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__20->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__21 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__22 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__20->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__22 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__20), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UButtonSlot>(__Local__20, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__24->Padding.Left = 0.000000f;
	__Local__24->Padding.Top = 20.000000f;
	__Local__24->Padding.Right = 0.000000f;
	__Local__24->Padding.Bottom = 20.000000f;
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__24->Parent = __Local__20;
	auto __Local__25 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_6"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("DefinitelyNotTheVirus.vr"), /* Literal Text */
	TEXT("[BEEA3AAB4D16BAE51FC99ABEA1FBBB3F]"), /* Namespace */
	TEXT("EA52F2F4445D170AC8B690A06059D248") /* Key */
	);
	auto& __Local__26 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__25->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__26 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	__Local__20->Slot = __Local__19;
	__Local__19->Content = __Local__20;
	__Local__2.Add(__Local__19);
	auto __Local__27 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__27->Parent = __Local__1;
	auto __Local__28 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_9"));
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__30 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__31 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__31 = TArray<UPanelSlot*> ();
	__Local__31.Reserve(1);
	auto __Local__32 = NewObject<UButtonSlot>(__Local__28, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__32->Padding.Left = 0.000000f;
	__Local__32->Padding.Top = 20.000000f;
	__Local__32->Padding.Right = 0.000000f;
	__Local__32->Padding.Bottom = 20.000000f;
	__Local__32->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__32->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__32->Parent = __Local__28;
	auto __Local__33 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_9"));
	__Local__33->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("NotTheVirus.pdf"), /* Literal Text */
	TEXT("[BEEA3AAB4D16BAE51FC99ABEA1FBBB3F]"), /* Namespace */
	TEXT("4DFE907640CEEA2AEC98CBA1460ABB9C") /* Key */
	);
	auto& __Local__34 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__33->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__34 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__33->Slot = __Local__32;
	__Local__32->Content = __Local__33;
	__Local__31.Add(__Local__32);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__2.Add(__Local__27);
	auto __Local__35 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_12"));
	__Local__35->Parent = __Local__1;
	auto __Local__36 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_11"));
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__39 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__39 = TArray<UPanelSlot*> ();
	__Local__39.Reserve(1);
	auto __Local__40 = NewObject<UButtonSlot>(__Local__36, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__40->Padding.Left = 0.000000f;
	__Local__40->Padding.Top = 20.000000f;
	__Local__40->Padding.Right = 0.000000f;
	__Local__40->Padding.Bottom = 20.000000f;
	__Local__40->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__40->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__40->Parent = __Local__36;
	auto __Local__41 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_11"));
	auto& __Local__42 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__41->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__42 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__41->Slot = __Local__40;
	__Local__40->Content = __Local__41;
	__Local__39.Add(__Local__40);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__2.Add(__Local__35);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__1, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__43->Parent = __Local__1;
	auto __Local__44 = NewObject<UButton>(__Local__0, UButton::StaticClass(), TEXT("Button_12"));
	auto& __Local__45 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__45 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	auto& __Local__46 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__44->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__46 = FLinearColor(0.026765, 0.205000, 0.000000, 1.000000);
	auto& __Local__47 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__47 = TArray<UPanelSlot*> ();
	__Local__47.Reserve(1);
	auto __Local__48 = NewObject<UButtonSlot>(__Local__44, UButtonSlot::StaticClass(), TEXT("ButtonSlot_0"));
	__Local__48->Padding.Left = 0.000000f;
	__Local__48->Padding.Top = 20.000000f;
	__Local__48->Padding.Right = 0.000000f;
	__Local__48->Padding.Bottom = 20.000000f;
	__Local__48->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__48->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__48->Parent = __Local__44;
	auto __Local__49 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_12"));
	auto& __Local__50 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__49->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__50 = FLinearColor(0.087953, 1.000000, 0.000000, 1.000000);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__47.Add(__Local__48);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__2.Add(__Local__43);
	__Local__0->RootWidget = __Local__1;
}
void UW_Terminal_C__pf2135330250::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__51;
	SlotNames.Append(__Local__51);
}
void UW_Terminal_C__pf2135330250::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__52;
	TArray<FDelegateRuntimeBinding>  __Local__53;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UW_Terminal_C__pf2135330250::StaticClass())->MiscConvertedSubobjects[0]), __Local__52, __Local__53);
}
void UW_Terminal_C__pf2135330250::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UW_Terminal_C__pf2135330250::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UW_Terminal_C__pf2135330250::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
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
struct FRegisterHelper__UW_Terminal_C__pf2135330250
{
	FRegisterHelper__UW_Terminal_C__pf2135330250()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/BPs/W_Terminal"), &UW_Terminal_C__pf2135330250::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UW_Terminal_C__pf2135330250 Instance;
};
FRegisterHelper__UW_Terminal_C__pf2135330250 FRegisterHelper__UW_Terminal_C__pf2135330250::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
