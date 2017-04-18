#include "NativizedAssets.h"
#include "apartmentDoor_blueprint__pf2958942102.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
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
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "apartmentDoor_blueprint__pf2958942102.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "BP_MotionController__pf563933975.h"
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
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "RightHand_AnimBP__pf558596347.h"
#include "MotionControllerPawn__pf563933975.h"
#include "Inventory_Item__pf563933975.h"
#include "InGame_Item__pf563933975.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AapartmentDoor_blueprint_C__pf2958942102::AapartmentDoor_blueprint_C__pf2958942102(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AapartmentDoor_blueprint_C__pf2958942102::StaticClass() == GetClass()))
	{
		AapartmentDoor_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__door__pf = CreateDefaultSubobject<USceneComponent>(TEXT("door"));
	bpv__StaticMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__knob2__pf = CreateDefaultSubobject<USphereComponent>(TEXT("knob2"));
	bpv__knob1__pf = CreateDefaultSubobject<USphereComponent>(TEXT("knob1"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Scene__pf->RelativeRotation = FRotator(0.000000, -90.000214, 0.000000);
	bpv__Scene__pf->RelativeScale3D = FVector(0.905098, 0.881969, 0.950650);
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AapartmentDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AapartmentDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeLocation = FVector(0.000000, 0.000000, -11.393794);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(1.000000, 1.000000, 1.000000);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__door__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__door__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__door__pf->RelativeLocation = FVector(-51.598412, -0.000194, -12.981853);
	bpv__door__pf->RelativeScale3D = FVector(1.034277, 1.000000, 1.004897);
	bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh1__pf->AttachToComponent(bpv__door__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AapartmentDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__StaticMesh1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh1__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AapartmentDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed));
	bpv__StaticMesh1__pf->RelativeLocation = FVector(49.888390, 0.000006, 0.000000);
	bpv__StaticMesh1__pf->RelativeScale3D = FVector(1.000000, 1.000000, 1.000000);
	if(!bpv__StaticMesh1__pf->IsTemplate())
	{
		bpv__StaticMesh1__pf->BodyInstance.FixupData(bpv__StaticMesh1__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__door__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__Box__pf->RelativeLocation = FVector(48.754562, 0.000000, 115.146408);
	bpv__Box__pf->RelativeScale3D = FVector(1.538493, 0.346969, 3.188861);
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__knob2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__knob2__pf->AttachToComponent(bpv__door__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__knob2__pf->RelativeLocation = FVector(91.549690, -20.408514, 108.176079);
	bpv__knob2__pf->RelativeRotation = FRotator(0.000000, 90.000214, 0.000000);
	bpv__knob2__pf->RelativeScale3D = FVector(0.281264, 0.751890, 1.046786);
	if(!bpv__knob2__pf->IsTemplate())
	{
		bpv__knob2__pf->BodyInstance.FixupData(bpv__knob2__pf);
	}
	bpv__knob1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__knob1__pf->AttachToComponent(bpv__door__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__knob1__pf->RelativeLocation = FVector(91.549545, 20.409241, 108.176079);
	bpv__knob1__pf->RelativeRotation = FRotator(0.000000, 90.000214, 0.000000);
	bpv__knob1__pf->RelativeScale3D = FVector(0.281264, 0.751890, 1.046786);
	if(!bpv__knob1__pf->IsTemplate())
	{
		bpv__knob1__pf->BodyInstance.FixupData(bpv__knob1__pf);
	}
	bpv__Timeline_3_Door_Movement_C658EDAA433E33C91B7A1A88D32E26B1__pf = 0.000000f;
	bpv__Timeline_3__Direction_C658EDAA433E33C91B7A1A88D32E26B1__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_3__pf = nullptr;
	bpv__Timeline_2_Door_Movement_3D2F30224892EAD619FC41A3F9684682__pf = 0.000000f;
	bpv__Timeline_2__Direction_3D2F30224892EAD619FC41A3F9684682__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_2__pf = nullptr;
	bpv__Timeline_1_Door_Movement_DC44184D4F775DB912D4A0A601D01A50__pf = 0.000000f;
	bpv__Timeline_1__Direction_DC44184D4F775DB912D4A0A601D01A50__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_0_Door_Movement_A375758E40B76D25EF16DBB1819312AF__pf = 0.000000f;
	bpv__Timeline_0__Direction_A375758E40B76D25EF16DBB1819312AF__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__door_open__pf = false;
	bpv__locked__pf = false;
	bpv__valid_to_open1__pf = false;
	bpv__valid_to_open2__pf = false;
}
void AapartmentDoor_blueprint_C__pf2958942102::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__DefaultSceneRoot__pf)
	{
		bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__door__pf)
	{
		bpv__door__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh1__pf)
	{
		bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__knob2__pf)
	{
		bpv__knob2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__knob1__pf)
	{
		bpv__knob1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AapartmentDoor_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_AMotionControllerPawn_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AMotionControllerPawn_C__pf563933975());
	extern UClass* Z_Construct_UClass_AInventory_Item_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInventory_Item_C__pf563933975());
	extern UClass* Z_Construct_UClass_AInGame_Item_C__pf563933975();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInGame_Item_C__pf563933975());
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"));
	InDynamicClass->Timelines.Add(__Local__0);
	auto __Local__1 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"));
	InDynamicClass->Timelines.Add(__Local__1);
	auto __Local__2 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_2_Template"));
	InDynamicClass->Timelines.Add(__Local__2);
	auto __Local__3 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_3_Template"));
	InDynamicClass->Timelines.Add(__Local__3);
	auto __Local__4 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__4);
	__Local__0->TimelineLength = 1.000000f;
	__Local__0->bValidatedAsWired = true;
	__Local__0->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__0->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__0->FloatTracks.GetData(), 1);
	auto& __Local__5 = __Local__0->FloatTracks[0];
	auto __Local__6 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__6);
	__Local__6->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__6->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__6->FloatCurve.Keys.GetData(), 2);
	auto& __Local__7 = __Local__6->FloatCurve.Keys[0];
	__Local__7.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__7.Value = 120.000000f;
	auto& __Local__8 = __Local__6->FloatCurve.Keys[1];
	__Local__8.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__8.Time = 1.000000f;
	__Local__5.CurveFloat = __Local__6;
	__Local__5.TrackName = FName(TEXT("Door Movement"));
	__Local__0->TimelineGuid = FGuid(0xA375758E, 0x40B76D25, 0xEF16DBB1, 0x819312AF);
	__Local__1->TimelineLength = 1.000000f;
	__Local__1->bValidatedAsWired = true;
	__Local__1->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__1->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__1->FloatTracks.GetData(), 1);
	auto& __Local__9 = __Local__1->FloatTracks[0];
	auto __Local__10 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__10);
	__Local__10->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__10->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__10->FloatCurve.Keys.GetData(), 2);
	auto& __Local__11 = __Local__10->FloatCurve.Keys[0];
	__Local__11.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__11.Value = 120.000000f;
	auto& __Local__12 = __Local__10->FloatCurve.Keys[1];
	__Local__12.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__12.Time = 1.000000f;
	__Local__9.CurveFloat = __Local__10;
	__Local__9.TrackName = FName(TEXT("Door Movement"));
	__Local__1->TimelineGuid = FGuid(0xDC44184D, 0x4F775DB9, 0x12D4A0A6, 0x01D01A50);
	__Local__2->TimelineLength = 1.000000f;
	__Local__2->bValidatedAsWired = true;
	__Local__2->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__2->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__2->FloatTracks.GetData(), 1);
	auto& __Local__13 = __Local__2->FloatTracks[0];
	auto __Local__14 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_2"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__14);
	__Local__14->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__14->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__14->FloatCurve.Keys.GetData(), 2);
	auto& __Local__15 = __Local__14->FloatCurve.Keys[0];
	__Local__15.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__16 = __Local__14->FloatCurve.Keys[1];
	__Local__16.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__16.Time = 1.000000f;
	__Local__16.Value = 120.000000f;
	__Local__13.CurveFloat = __Local__14;
	__Local__13.TrackName = FName(TEXT("Door Movement"));
	__Local__2->TimelineGuid = FGuid(0x3D2F3022, 0x4892EAD6, 0x19FC41A3, 0xF9684682);
	__Local__3->TimelineLength = 1.000000f;
	__Local__3->bValidatedAsWired = true;
	__Local__3->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__3->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__3->FloatTracks.GetData(), 1);
	auto& __Local__17 = __Local__3->FloatTracks[0];
	auto __Local__18 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_2_3"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__18);
	__Local__18->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__18->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__18->FloatCurve.Keys.GetData(), 2);
	auto& __Local__19 = __Local__18->FloatCurve.Keys[0];
	__Local__19.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__20 = __Local__18->FloatCurve.Keys[1];
	__Local__20.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__20.Time = 1.000000f;
	__Local__20.Value = 120.000000f;
	__Local__17.CurveFloat = __Local__18;
	__Local__17.TrackName = FName(TEXT("Door Movement"));
	__Local__3->TimelineGuid = FGuid(0xC658EDAA, 0x433E33C9, 0x1B7A1A88, 0xD32E26B1);
	__Local__4->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__4->ComponentDelegateBindings.AddUninitialized(4);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__4->ComponentDelegateBindings.GetData(), 4);
	auto& __Local__21 = __Local__4->ComponentDelegateBindings[0];
	__Local__21.ComponentPropertyName = FName(TEXT("knob2"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__knob2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__22 = __Local__4->ComponentDelegateBindings[1];
	__Local__22.ComponentPropertyName = FName(TEXT("knob2"));
	__Local__22.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__22.FunctionNameToBind = FName(TEXT("BndEvt__knob2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__23 = __Local__4->ComponentDelegateBindings[2];
	__Local__23.ComponentPropertyName = FName(TEXT("knob1"));
	__Local__23.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__23.FunctionNameToBind = FName(TEXT("BndEvt__knob1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__24 = __Local__4->ComponentDelegateBindings[3];
	__Local__24.ComponentPropertyName = FName(TEXT("knob1"));
	__Local__24.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__24.FunctionNameToBind = FName(TEXT("BndEvt__knob1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				if(IsValid(bpv__Box__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AapartmentDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
			}
		case 6:
			{
				if (!bpv__door_open__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 7:
			{
				FRotator  __Local__25 = FRotator(0.000000,0.000000,0.000000);
				UKismetMathLibrary::BreakRotator(((IsValid(bpv__door__pf)) ? (bpv__door__pf->RelativeRotation) : (__Local__25)), /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__CallFunc_BreakRotator_Yaw__pf, 0.000000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if (!bpv__valid_to_open1__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				if(IsValid(bpv__Timeline_2__pf))
				{
					bpv__Timeline_2__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				if(IsValid(bpv__Timeline_3__pf))
				{
					bpv__Timeline_3__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				__CurrentState = 27;
				break;
			}
		case 27:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__locked__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__valid_to_open1__pf, bpv__valid_to_open2__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpfv__CallFunc_BooleanOR_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue4__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue4__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__Timeline_3_Door_Movement_C658EDAA433E33C91B7A1A88D32E26B1__pf);
	if(IsValid(bpv__door__pf))
	{
		bpv__door__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue4__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult4__pf, false);
	}
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = true;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue2__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue3__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_IntFloat(-1, bpv__Timeline_2_Door_Movement_3D2F30224892EAD619FC41A3F9684682__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue3__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_IntFloat_ReturnValue2__pf);
	if(IsValid(bpv__door__pf))
	{
		bpv__door__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue3__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult3__pf, false);
	}
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 17);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = true;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_5(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(-1, bpv__Timeline_1_Door_Movement_DC44184D4F775DB912D4A0A601D01A50__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf);
	if(IsValid(bpv__door__pf))
	{
		bpv__door__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf, false);
	}
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = false;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 1);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = false;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_8(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpv__Timeline_0_Door_Movement_A375758E40B76D25EF16DBB1819312AF__pf);
	if(IsValid(bpv__door__pf))
	{
		bpv__door__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
	}
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_9(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 37);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller4__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller4__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__valid_to_open2__pf = false;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 34);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller3__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__valid_to_open2__pf = true;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 31);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor3__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__valid_to_open1__pf = false;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 28);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor4__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__valid_to_open1__pf = true;
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 25);
	return; // KCST_GotoReturn
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__BndEvt__knob2_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_9(37);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__BndEvt__knob2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__26;
	T__Local__26& bpp__SweepResult__pf = *const_cast<T__Local__26 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_10(34);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__BndEvt__knob1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor3__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp3__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_11(31);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__BndEvt__knob1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__27;
	T__Local__27& bpp__SweepResult__pf = *const_cast<T__Local__27 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor4__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp4__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_12(28);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_0(26);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_13(25);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_3__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_1(23);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_3__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_2(21);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_2__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_3(19);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_2__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_4(17);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_5(15);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_6(13);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_8(3);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_apartmentDoor_blueprint__pf_7(1);
}
void AapartmentDoor_blueprint_C__pf2958942102::bpf__UserConstructionScript__pf()
{
}
void AapartmentDoor_blueprint_C__pf2958942102::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/door_frame_pCube2.door_frame_pCube2 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/lambert1.lambert1 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/door_pSphere3.door_pSphere3 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/items/lambert1.lambert1 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/door_sound.door_sound 
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
void AapartmentDoor_blueprint_C__pf2958942102::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
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
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/Inventory_Item.Inventory_Item_C 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/InGame_Item.InGame_Item_C 
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
struct FRegisterHelper__AapartmentDoor_blueprint_C__pf2958942102
{
	FRegisterHelper__AapartmentDoor_blueprint_C__pf2958942102()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Furniture/apartmentDoor_blueprint"), &AapartmentDoor_blueprint_C__pf2958942102::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AapartmentDoor_blueprint_C__pf2958942102 Instance;
};
FRegisterHelper__AapartmentDoor_blueprint_C__pf2958942102 FRegisterHelper__AapartmentDoor_blueprint_C__pf2958942102::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
