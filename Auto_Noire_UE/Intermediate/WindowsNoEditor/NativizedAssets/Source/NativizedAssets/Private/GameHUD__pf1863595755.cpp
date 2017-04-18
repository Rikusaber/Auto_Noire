#include "NativizedAssets.h"
#include "GameHUD__pf1863595755.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/UniformGridPanel.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "InventorySlot__pf1863595755.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "GameHUD__pf1863595755.h"
#include "FirstPersonCharacter__pf205484891.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
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
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
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
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "FirstPersonHUD__pf205484891.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UGameHUD_C__pf1863595755::UGameHUD_C__pf1863595755(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UGameHUD_C__pf1863595755::StaticClass() == GetClass()))
	{
		UGameHUD_C__pf1863595755::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__inventoryActive__pf = true;
	bpv__actionText__pf = FText::GetEmpty();
	bpv__inventory__pf = TArray<FInventoryStruct__pf2135330250> ();
	bpv__inventorySlot__pf = 0;
	bpv__myCharacter__pf = nullptr;
	bpv__NewVar_0__pf = nullptr;
}
void UGameHUD_C__pf1863595755::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UGameHUD_C__pf1863595755::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_AFirstPersonHUD_C__pf205484891();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AFirstPersonHUD_C__pf205484891());
	extern UClass* Z_Construct_UClass_UActionInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UActionInterface_C());
	extern UClass* Z_Construct_UClass_UInventorySlot_C__pf1863595755();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInventorySlot_C__pf1863595755());
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FInventoryStruct__pf2135330250());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("DiscardItem"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__DiscardItem_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("ActionButton"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__ActionButton_K2Node_ComponentBoundEvent_239_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("DropButton"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__DropButton_K2Node_ComponentBoundEvent_168_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("CancelButton"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__CancelButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__6 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__6), UPanelWidget::__PPO__Slots() )));
	__Local__7 = TArray<UPanelSlot*> ();
	__Local__7.Reserve(2);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__8->LayoutData.Offsets.Left = 88.000000f;
	__Local__8->LayoutData.Offsets.Top = -243.011002f;
	__Local__8->LayoutData.Offsets.Right = 678.578613f;
	__Local__8->LayoutData.Offsets.Bottom = 146.678116f;
	__Local__8->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__8->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__8->Parent = __Local__6;
	auto __Local__9 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("InventoryMenu"));
	auto& __Local__10 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__9), UPanelWidget::__PPO__Slots() )));
	__Local__10 = TArray<UPanelSlot*> ();
	__Local__10.Reserve(3);
	auto __Local__11 = NewObject<UVerticalBoxSlot>(__Local__9, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_2"));
	__Local__11->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__11->Parent = __Local__9;
	auto __Local__12 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__12->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Inventory"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("C02B7E604ED40A7181E2A294A188D0C7") /* Key */
	);
	__Local__12->Slot = __Local__11;
	__Local__11->Content = __Local__12;
	__Local__10.Add(__Local__11);
	auto __Local__13 = NewObject<UVerticalBoxSlot>(__Local__9, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_6"));
	__Local__13->Parent = __Local__9;
	auto __Local__14 = NewObject<USpacer>(__Local__1, USpacer::StaticClass(), TEXT("Spacer_0"));
	__Local__14->Size = FVector2D(1.000000, 3.000000);
	__Local__14->Slot = __Local__13;
	__Local__13->Content = __Local__14;
	__Local__10.Add(__Local__13);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__9, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_3"));
	__Local__15->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__15->Parent = __Local__9;
	auto __Local__16 = NewObject<UUniformGridPanel>(__Local__1, UUniformGridPanel::StaticClass(), TEXT("UniformGridPanel_0"));
	auto& __Local__17 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__16), UPanelWidget::__PPO__Slots() )));
	__Local__17 = TArray<UPanelSlot*> ();
	__Local__17.Reserve(6);
	auto __Local__18 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_2"));
	__Local__18->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__18->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__18->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__19 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_0"));
	__Local__19->Slot = __Local__18;
	__Local__18->Content = __Local__19;
	__Local__17.Add(__Local__18);
	auto __Local__20 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_3"));
	__Local__20->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__20->Column = 1;
	__Local__20->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__21 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_1"));
	__Local__21->bpv__InentorySlot__pf = 1;
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__17.Add(__Local__20);
	auto __Local__22 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_4"));
	__Local__22->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__22->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__22->Column = 2;
	__Local__22->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__23 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_2"));
	__Local__23->bpv__InentorySlot__pf = 2;
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__17.Add(__Local__22);
	auto __Local__24 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_5"));
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__24->Column = 3;
	__Local__24->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__25 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_3"));
	__Local__25->bpv__InentorySlot__pf = 3;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__17.Add(__Local__24);
	auto __Local__26 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_8"));
	__Local__26->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__26->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__26->Column = 4;
	__Local__26->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__27 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_4"));
	__Local__27->bpv__InentorySlot__pf = 4;
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__17.Add(__Local__26);
	auto __Local__28 = NewObject<UUniformGridSlot>(__Local__16, UUniformGridSlot::StaticClass(), TEXT("UniformGridSlot_7"));
	__Local__28->HorizontalAlignment = EHorizontalAlignment::HAlign_Fill;
	__Local__28->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__28->Column = 5;
	__Local__28->Parent = __Local__16;
	UInventorySlot_C__pf1863595755::StaticClass()->GetDefaultObject();
	auto __Local__29 = NewObject<UInventorySlot_C__pf1863595755>(__Local__1, UInventorySlot_C__pf1863595755::StaticClass(), TEXT("InventorySlot_C_5"));
	__Local__29->bpv__InentorySlot__pf = 5;
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__17.Add(__Local__28);
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__10.Add(__Local__15);
	__Local__9->bIsVariable = true;
	__Local__9->Slot = __Local__8;
	__Local__9->bIsEnabled = false;
	__Local__9->Visibility = ESlateVisibility::Hidden;
	__Local__8->Content = __Local__9;
	__Local__7.Add(__Local__8);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__6, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__30->LayoutData.Offsets.Left = 800.000000f;
	__Local__30->LayoutData.Offsets.Top = -233.081055f;
	__Local__30->LayoutData.Offsets.Right = 192.092102f;
	__Local__30->LayoutData.Offsets.Bottom = 135.248093f;
	__Local__30->LayoutData.Anchors.Minimum = FVector2D(0.000000, 1.000000);
	__Local__30->LayoutData.Anchors.Maximum = FVector2D(0.000000, 1.000000);
	__Local__30->ZOrder = 1;
	__Local__30->Parent = __Local__6;
	auto __Local__31 = NewObject<UVerticalBox>(__Local__1, UVerticalBox::StaticClass(), TEXT("ActionMenu"));
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(5);
	auto __Local__33 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_8"));
	__Local__33->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__33->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__33->Parent = __Local__31;
	auto __Local__34 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_1"));
	__Local__34->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Action Menu"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("674E68C14330A86BD76F56912F819F90") /* Key */
	);
	__Local__34->Font.Size = 18;
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	auto __Local__35 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_9"));
	__Local__35->Parent = __Local__31;
	auto __Local__36 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("ActionButton"));
	auto& __Local__37 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__36->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__37 = FLinearColor(0.246285, 0.174649, 0.300000, 1.000000);
	auto& __Local__38 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__36), UPanelWidget::__PPO__Slots() )));
	__Local__38 = TArray<UPanelSlot*> ();
	__Local__38.Reserve(1);
	auto __Local__39 = NewObject<UButtonSlot>(__Local__36, UButtonSlot::StaticClass(), TEXT("ButtonSlot_1"));
	__Local__39->Padding.Left = 0.000000f;
	__Local__39->Padding.Top = 0.000000f;
	__Local__39->Padding.Right = 0.000000f;
	__Local__39->Padding.Bottom = 0.000000f;
	__Local__39->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__39->Parent = __Local__36;
	auto __Local__40 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("Textactiontext"));
	__Local__40->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("[variable]"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("172AE0BA49534EBB199E08950A3417A3") /* Key */
	);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__40->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__40->Font.Size = 14;
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__38.Add(__Local__39);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__32.Add(__Local__35);
	auto __Local__42 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_10"));
	__Local__42->Parent = __Local__31;
	auto __Local__43 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("DropButton"));
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.246285, 0.174649, 0.300000, 1.000000);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__43), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(1);
	auto __Local__46 = NewObject<UButtonSlot>(__Local__43, UButtonSlot::StaticClass(), TEXT("ButtonSlot_2"));
	__Local__46->Padding.Left = 0.000000f;
	__Local__46->Padding.Top = 0.000000f;
	__Local__46->Padding.Right = 0.000000f;
	__Local__46->Padding.Bottom = 0.000000f;
	__Local__46->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__46->Parent = __Local__43;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextDropItem"));
	__Local__47->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Drop Item"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("62602426469B7EBC5D31EAB99303CC54") /* Key */
	);
	auto& __Local__48 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__47->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__48 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__47->Font.Size = 14;
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	__Local__43->Slot = __Local__42;
	__Local__42->Content = __Local__43;
	__Local__32.Add(__Local__42);
	auto __Local__49 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_13"));
	__Local__49->Parent = __Local__31;
	auto __Local__50 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("DiscardItem"));
	auto& __Local__51 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__50->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__51 = FLinearColor(0.246285, 0.174649, 0.300000, 1.000000);
	auto& __Local__52 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__50), UPanelWidget::__PPO__Slots() )));
	__Local__52 = TArray<UPanelSlot*> ();
	__Local__52.Reserve(1);
	auto __Local__53 = NewObject<UButtonSlot>(__Local__50, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__53->Padding.Left = 0.000000f;
	__Local__53->Padding.Top = 0.000000f;
	__Local__53->Padding.Right = 0.000000f;
	__Local__53->Padding.Bottom = 0.000000f;
	__Local__53->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__53->Parent = __Local__50;
	auto __Local__54 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextDiscardItem"));
	__Local__54->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Discard Item"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("5BA950A849BC6AA00B13EB8804F09221") /* Key */
	);
	auto& __Local__55 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__55 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__54->Font.Size = 14;
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__52.Add(__Local__53);
	__Local__50->Slot = __Local__49;
	__Local__49->Content = __Local__50;
	__Local__32.Add(__Local__49);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__31, UVerticalBoxSlot::StaticClass(), TEXT("VerticalBoxSlot_11"));
	__Local__56->Parent = __Local__31;
	auto __Local__57 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("CancelButton"));
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->WidgetStyle.Hovered.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.246285, 0.174649, 0.300000, 1.000000);
	auto& __Local__59 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__59 = TArray<UPanelSlot*> ();
	__Local__59.Reserve(1);
	auto __Local__60 = NewObject<UButtonSlot>(__Local__57, UButtonSlot::StaticClass(), TEXT("ButtonSlot_3"));
	__Local__60->Padding.Left = 0.000000f;
	__Local__60->Padding.Top = 0.000000f;
	__Local__60->Padding.Right = 0.000000f;
	__Local__60->Padding.Bottom = 0.000000f;
	__Local__60->VerticalAlignment = EVerticalAlignment::VAlign_Top;
	__Local__60->Parent = __Local__57;
	auto __Local__61 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextCancel"));
	__Local__61->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Cancel"), /* Literal Text */
	TEXT("[159B0E9D430BAD0AB468B78EFB6033C5]"), /* Namespace */
	TEXT("9ACAFE26489C1FEA92B0C183E4D9B28A") /* Key */
	);
	auto& __Local__62 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__61->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__62 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__61->Font.Size = 14;
	__Local__61->Slot = __Local__60;
	__Local__60->Content = __Local__61;
	__Local__59.Add(__Local__60);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__32.Add(__Local__56);
	__Local__31->bIsVariable = true;
	__Local__31->Slot = __Local__30;
	__Local__31->Visibility = ESlateVisibility::Hidden;
	__Local__30->Content = __Local__31;
	__Local__7.Add(__Local__30);
	__Local__6->Visibility = ESlateVisibility::Visible;
	__Local__1->RootWidget = __Local__6;
}
void UGameHUD_C__pf1863595755::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__63;
	SlotNames.Append(__Local__63);
}
void UGameHUD_C__pf1863595755::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__64;
	TArray<FDelegateRuntimeBinding>  __Local__65;
	__Local__65.AddUninitialized(1);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__65.GetData(), 1);
	auto& __Local__66 = __Local__65[0];
	__Local__66.ObjectName = FString(TEXT("Textactiontext"));
	__Local__66.PropertyName = FName(TEXT("Text"));
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__66.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__67 = TArray<FPropertyPathSegment> ();
	__Local__67.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__67.GetData(), 1);
	auto& __Local__68 = __Local__67[0];
	__Local__68.Name = FName(TEXT("actionText"));
	__Local__66.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UGameHUD_C__pf1863595755::StaticClass())->MiscConvertedSubobjects[0]), __Local__64, __Local__65);
}
void UGameHUD_C__pf1863595755::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__UseAction__pf();
				__CurrentState = -1;
				break;
			}
		case 47:
			{
				__CurrentState = 1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 45:
			{
				__CurrentState = 46;
				break;
			}
		case 46:
			{
				bpf__ExamineAction__pf();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 37:
			{
				__CurrentState = 38;
				break;
			}
		case 38:
			{
				FCustomThunkTemplates::Array_Get(bpv__inventory__pf, bpv__inventorySlot__pf, /*out*/ b0l__CallFunc_Array_Get_Item5__pf);
				bpf__DropAction__pf(b0l__CallFunc_Array_Get_Item5__pf.bpv__Item_6_7DA1A42B4C8F74D342BFE69CACCFE7BD__pf);
			}
		case 39:
			{
				FCustomThunkTemplates::Array_Remove(bpv__inventory__pf, bpv__inventorySlot__pf);
			}
		case 40:
			{
				bpf__RefreshInventory__pf();
			}
		case 41:
			{
				bpf__ActionxComplete__pfT();
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_3(int32 bpp__EntryPoint__pf)
{
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 3;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 4:
			{
				b0l__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 5:
			{
				b0l__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 6:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(6, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__InventorySlot_C_0__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__InventorySlot_C_1__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__InventorySlot_C_2__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__InventorySlot_C_3__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__InventorySlot_C_4__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__InventorySlot_C_5__pf;
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 7:
			{
				b0l__Temp_int_Array_Index_Variable__pf = b0l__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 8:
			{
				__StateStack.Push(10);
			}
		case 9:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("ButtonWasClicked_Event")));
				b0l__K2Node_MakeArray_Array__pf.SetNum(6, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__InventorySlot_C_0__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__InventorySlot_C_1__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__InventorySlot_C_2__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__InventorySlot_C_3__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__InventorySlot_C_4__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__InventorySlot_C_5__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l__Temp_int_Array_Index_Variable__pf, /*out*/ b0l__CallFunc_Array_Get_Item__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item__pf))
				{
					b0l__CallFunc_Array_Get_Item__pf->bpv__ButtonWasClicked__pf.AddUnique(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable2__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 6;
				break;
			}
		case 11:
			{
				b0l__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 12:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 13:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(6, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__InventorySlot_C_0__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__InventorySlot_C_1__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__InventorySlot_C_2__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__InventorySlot_C_3__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__InventorySlot_C_4__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__InventorySlot_C_5__pf;
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(b0l__K2Node_MakeArray_Array__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 14:
			{
				b0l__Temp_int_Array_Index_Variable2__pf = b0l__Temp_int_Loop_Counter_Variable__pf;
			}
		case 15:
			{
				__StateStack.Push(19);
			}
		case 16:
			{
				b0l__K2Node_MakeArray_Array__pf.SetNum(6, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__InventorySlot_C_0__pf;
				b0l__K2Node_MakeArray_Array__pf[1] = bpv__InventorySlot_C_1__pf;
				b0l__K2Node_MakeArray_Array__pf[2] = bpv__InventorySlot_C_2__pf;
				b0l__K2Node_MakeArray_Array__pf[3] = bpv__InventorySlot_C_3__pf;
				b0l__K2Node_MakeArray_Array__pf[4] = bpv__InventorySlot_C_4__pf;
				b0l__K2Node_MakeArray_Array__pf[5] = bpv__InventorySlot_C_5__pf;
				FCustomThunkTemplates::Array_Get(b0l__K2Node_MakeArray_Array__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item2__pf);
				FCustomThunkTemplates::Array_Get(bpv__inventory__pf, b0l__Temp_int_Array_Index_Variable2__pf, /*out*/ b0l__CallFunc_Array_Get_Item3__pf);
				if(IsValid(b0l__CallFunc_Array_Get_Item2__pf))
				{
					b0l__CallFunc_Array_Get_Item2__pf->bpv__InventoryImage__pf = b0l__CallFunc_Array_Get_Item3__pf.bpv__ItemImage_8_54304FE24CB654420C227187E6651149__pf;
				}
			}
		case 17:
			{
				__StateStack.Push(2);
			}
		case 18:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 20;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(b0l__Temp_int_Loop_Counter_Variable__pf, 1);
				b0l__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 13;
				break;
			}
		case 20:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 21:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpv__inventoryActive__pf = true;
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_4(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 42:
			{
				__CurrentState = 43;
				break;
			}
		case 43:
			{
				bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf = Cast<AFirstPersonCharacter_C__pf205484891>(bpfv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 44:
			{
				bpv__myCharacter__pf = b0l__K2Node_DynamicCast_AsFirst_Person_Character__pf;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_5(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 33:
			{
				__CurrentState = 34;
				break;
			}
		case 34:
			{
				bpv__inventoryActive__pf = true;
			}
		case 35:
			{
				if(IsValid(bpv__ActionMenu__pf))
				{
					bpv__ActionMenu__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				__CurrentState = -1;
				break;
			}
		case 36:
			{
				__CurrentState = 34;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 28:
			{
				__CurrentState = 29;
				break;
			}
		case 29:
			{
				bpv__inventorySlot__pf = b0l__K2Node_CustomEvent_SlotClicked__pf;
			}
		case 30:
			{
				bpv__inventoryActive__pf = false;
			}
		case 31:
			{
				FCustomThunkTemplates::Array_Get(bpv__inventory__pf, b0l__K2Node_CustomEvent_SlotClicked__pf, /*out*/ b0l__CallFunc_Array_Get_Item4__pf);
				bpv__actionText__pf = b0l__CallFunc_Array_Get_Item4__pf.bpv__ActionText_12_DD2D11C64D93A02D0DA92EB88694731E__pf;
			}
		case 32:
			{
				if(IsValid(bpv__ActionMenu__pf))
				{
					bpv__ActionMenu__pf->SetVisibility(ESlateVisibility::Visible);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 25:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 24:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__ExecuteUbergraph_GameHUD__pf_9(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 23:
			{
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void UGameHUD_C__pf1863595755::bpf__BndEvt__DiscardItem_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_0(47);
}
void UGameHUD_C__pf1863595755::bpf__BndEvt__ActionButton_K2Node_ComponentBoundEvent_239_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_1(45);
}
void UGameHUD_C__pf1863595755::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_4(42);
}
void UGameHUD_C__pf1863595755::bpf__BndEvt__DropButton_K2Node_ComponentBoundEvent_168_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_2(37);
}
void UGameHUD_C__pf1863595755::bpf__ActionxComplete__pfT()
{
	bpf__ExecuteUbergraph_GameHUD__pf_5(36);
}
void UGameHUD_C__pf1863595755::bpf__BndEvt__CancelButton_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_5(33);
}
void UGameHUD_C__pf1863595755::bpf__ButtonWasClicked_Event__pf(int32 bpp__SlotClicked__pf)
{
	b0l__K2Node_CustomEvent_SlotClicked__pf = bpp__SlotClicked__pf;
	bpf__ExecuteUbergraph_GameHUD__pf_6(28);
}
void UGameHUD_C__pf1863595755::bpf__RefreshInventory__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_3(26);
}
void UGameHUD_C__pf1863595755::bpf__UseAction__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_7(25);
}
void UGameHUD_C__pf1863595755::bpf__DropAction__pf(AActor* bpp__InActor__pf)
{
	b0l__K2Node_Event_InActor__pf = bpp__InActor__pf;
	bpf__ExecuteUbergraph_GameHUD__pf_8(24);
}
void UGameHUD_C__pf1863595755::bpf__ExamineAction__pf()
{
	bpf__ExecuteUbergraph_GameHUD__pf_9(23);
}
void UGameHUD_C__pf1863595755::bpf__Get_ActionMenu_Visibility_0__pf()
{
}
void UGameHUD_C__pf1863595755::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
void UGameHUD_C__pf1863595755::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{95, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/BPs/ActionInterface.ActionInterface_C 
		{13, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{100, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C 
		{98, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/FirstPersonHUD.FirstPersonHUD_C 
		{97, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  WidgetBlueprintGeneratedClass /Game/UMG/InventorySlot.InventorySlot_C 
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
struct FRegisterHelper__UGameHUD_C__pf1863595755
{
	FRegisterHelper__UGameHUD_C__pf1863595755()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/UMG/GameHUD"), &UGameHUD_C__pf1863595755::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UGameHUD_C__pf1863595755 Instance;
};
FRegisterHelper__UGameHUD_C__pf1863595755 FRegisterHelper__UGameHUD_C__pf1863595755::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
