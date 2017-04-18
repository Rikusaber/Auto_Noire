#include "NativizedAssets.h"
#include "bookshelfDoor_blueprint__pf2958942102.h"
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
#include "bookshelfDoor_blueprint__pf2958942102.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
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
AbookshelfDoor_blueprint_C__pf2958942102::AbookshelfDoor_blueprint_C__pf2958942102(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AbookshelfDoor_blueprint_C__pf2958942102::StaticClass() == GetClass()))
	{
		AbookshelfDoor_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__StaticMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	bpv__StaticMesh2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
	bpv__StaticMesh3__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh3"));
	bpv__Box__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	bpv__book01__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book01"));
	bpv__book03__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book03"));
	bpv__book04__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book04"));
	bpv__book05__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book05"));
	bpv__book06__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book06"));
	bpv__book07__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book07"));
	bpv__book08__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book08"));
	bpv__book09__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book09"));
	bpv__book02__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("book02"));
	bpv__SecretTunnel__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("SecretTunnel"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Scene__pf->RelativeLocation = FVector(-53.000000, 0.000000, 0.000000);
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeLocation = FVector(53.000000, 0.000000, -21.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.799159, 0.799159, 0.799159);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh1__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh1__pf->RelativeLocation = FVector(53.000000, 0.000000, 25.000000);
	bpv__StaticMesh1__pf->RelativeScale3D = FVector(0.799159, 0.799159, 0.799159);
	if(!bpv__StaticMesh1__pf->IsTemplate())
	{
		bpv__StaticMesh1__pf->BodyInstance.FixupData(bpv__StaticMesh1__pf);
	}
	bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh2__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__StaticMesh2__pf->RelativeLocation = FVector(53.000000, 0.000000, 71.000000);
	bpv__StaticMesh2__pf->RelativeScale3D = FVector(-0.799159, 0.799159, 0.799159);
	if(!bpv__StaticMesh2__pf->IsTemplate())
	{
		bpv__StaticMesh2__pf->BodyInstance.FixupData(bpv__StaticMesh2__pf);
	}
	bpv__StaticMesh3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh3__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh3__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh3__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh3__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh3__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh3__pf->RelativeLocation = FVector(53.000000, 0.000000, 117.000000);
	bpv__StaticMesh3__pf->RelativeScale3D = FVector(-0.799159, 0.799159, 0.799159);
	if(!bpv__StaticMesh3__pf->IsTemplate())
	{
		bpv__StaticMesh3__pf->BodyInstance.FixupData(bpv__StaticMesh3__pf);
	}
	bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Box__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Box__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAll")));
	bpv__Box__pf->RelativeLocation = FVector(53.000000, 0.000000, 91.000000);
	bpv__Box__pf->RelativeScale3D = FVector(1.731629, 0.640530, 2.993735);
	if(!bpv__Box__pf->IsTemplate())
	{
		bpv__Box__pf->BodyInstance.FixupData(bpv__Box__pf);
	}
	bpv__book01__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book01__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book01__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__book01__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book01__pf->OverrideMaterials.Reserve(1);
	bpv__book01__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__book01__pf->RelativeLocation = FVector(54.999916, 0.000154, 111.305679);
	bpv__book01__pf->RelativeRotation = FRotator(0.000171, -90.000160, 89.999901);
	bpv__book01__pf->RelativeScale3D = FVector(0.471956, 0.471956, 0.471956);
	if(!bpv__book01__pf->IsTemplate())
	{
		bpv__book01__pf->BodyInstance.FixupData(bpv__book01__pf);
	}
	bpv__book03__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book03__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book03__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book03__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book03__pf->OverrideMaterials.Reserve(1);
	bpv__book03__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__book03__pf->RelativeLocation = FVector(43.999912, 0.000328, 113.305679);
	bpv__book03__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999886);
	bpv__book03__pf->RelativeScale3D = FVector(0.471956, 0.550454, 0.471956);
	if(!bpv__book03__pf->IsTemplate())
	{
		bpv__book03__pf->BodyInstance.FixupData(bpv__book03__pf);
	}
	bpv__book04__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book04__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book04__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book04__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book04__pf->OverrideMaterials.Reserve(1);
	bpv__book04__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed));
	bpv__book04__pf->RelativeLocation = FVector(37.999916, 0.000334, 110.305679);
	bpv__book04__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999886);
	bpv__book04__pf->RelativeScale3D = FVector(0.471956, 0.469197, 0.471956);
	if(!bpv__book04__pf->IsTemplate())
	{
		bpv__book04__pf->BodyInstance.FixupData(bpv__book04__pf);
	}
	bpv__book05__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book05__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book05__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book05__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book05__pf->OverrideMaterials.Reserve(1);
	bpv__book05__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__book05__pf->RelativeLocation = FVector(15.999916, 0.000389, 109.305679);
	bpv__book05__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999886);
	bpv__book05__pf->RelativeScale3D = FVector(0.471956, 0.426570, 0.533774);
	if(!bpv__book05__pf->IsTemplate())
	{
		bpv__book05__pf->BodyInstance.FixupData(bpv__book05__pf);
	}
	bpv__book06__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book06__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book06__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book06__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book06__pf->OverrideMaterials.Reserve(1);
	bpv__book06__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed));
	bpv__book06__pf->RelativeLocation = FVector(12.999916, 0.000403, 111.305679);
	bpv__book06__pf->RelativeRotation = FRotator(0.000171, -90.000153, 89.999886);
	bpv__book06__pf->RelativeScale3D = FVector(0.471956, 0.479183, 0.320237);
	if(!bpv__book06__pf->IsTemplate())
	{
		bpv__book06__pf->BodyInstance.FixupData(bpv__book06__pf);
	}
	bpv__book07__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book07__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book07__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book07__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book07__pf->OverrideMaterials.Reserve(1);
	bpv__book07__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed));
	bpv__book07__pf->RelativeLocation = FVector(84.999916, 0.000220, 113.305725);
	bpv__book07__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999886);
	bpv__book07__pf->RelativeScale3D = FVector(0.471956, 0.545102, 0.343573);
	if(!bpv__book07__pf->IsTemplate())
	{
		bpv__book07__pf->BodyInstance.FixupData(bpv__book07__pf);
	}
	bpv__book08__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book08__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book08__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book08__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book08__pf->OverrideMaterials.Reserve(1);
	bpv__book08__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed));
	bpv__book08__pf->RelativeLocation = FVector(75.913559, 0.000234, 110.144638);
	bpv__book08__pf->RelativeRotation = FRotator(0.000178, -90.000092, 109.999901);
	bpv__book08__pf->RelativeScale3D = FVector(0.471956, 0.449237, 0.343573);
	if(!bpv__book08__pf->IsTemplate())
	{
		bpv__book08__pf->BodyInstance.FixupData(bpv__book08__pf);
	}
	bpv__book09__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book09__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book09__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book09__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book09__pf->OverrideMaterials.Reserve(1);
	bpv__book09__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	bpv__book09__pf->RelativeLocation = FVector(29.267506, 0.000322, 108.106262);
	bpv__book09__pf->RelativeRotation = FRotator(0.000184, -90.000061, 69.999794);
	bpv__book09__pf->RelativeScale3D = FVector(0.471956, 0.449237, 0.343573);
	if(!bpv__book09__pf->IsTemplate())
	{
		bpv__book09__pf->BodyInstance.FixupData(bpv__book09__pf);
	}
	bpv__book02__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__book02__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__book02__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__book02__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__book02__pf->OverrideMaterials.Reserve(1);
	bpv__book02__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed));
	bpv__book02__pf->RelativeLocation = FVector(90.999916, 0.000199, 111.305679);
	bpv__book02__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999886);
	bpv__book02__pf->RelativeScale3D = FVector(0.471956, 0.471956, 0.471956);
	if(!bpv__book02__pf->IsTemplate())
	{
		bpv__book02__pf->BodyInstance.FixupData(bpv__book02__pf);
	}
	bpv__SecretTunnel__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SecretTunnel__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SecretTunnel__pf->RelativeLocation = FVector(59.999916, 0.000277, 111.305679);
	bpv__SecretTunnel__pf->RelativeRotation = FRotator(0.000171, -90.000145, 89.999878);
	bpv__SecretTunnel__pf->RelativeScale3D = FVector(0.312359, 0.494612, 0.102283);
	if(!bpv__SecretTunnel__pf->IsTemplate())
	{
		bpv__SecretTunnel__pf->BodyInstance.FixupData(bpv__SecretTunnel__pf);
	}
	bpv__Timeline_1_Door_Movement_F7723A244CA5B7E212E2438F85ED9A32__pf = 0.000000f;
	bpv__Timeline_1__Direction_F7723A244CA5B7E212E2438F85ED9A32__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_0_Door_Movement_94B329B84AFBD2FB6535BCA48C277F9C__pf = 0.000000f;
	bpv__Timeline_0__Direction_94B329B84AFBD2FB6535BCA48C277F9C__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__valid_to_open__pf = false;
	bpv__door_open__pf = false;
	bpv__first_open__pf = true;
	bpv__open_wave__pf = CastChecked<USoundWave>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
}
void AbookshelfDoor_blueprint_C__pf2958942102::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__StaticMesh1__pf)
	{
		bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh2__pf)
	{
		bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh3__pf)
	{
		bpv__StaticMesh3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Box__pf)
	{
		bpv__Box__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book01__pf)
	{
		bpv__book01__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book03__pf)
	{
		bpv__book03__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book04__pf)
	{
		bpv__book04__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book05__pf)
	{
		bpv__book05__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book06__pf)
	{
		bpv__book06__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book07__pf)
	{
		bpv__book07__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book08__pf)
	{
		bpv__book08__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book09__pf)
	{
		bpv__book09__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__book02__pf)
	{
		bpv__book02__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SecretTunnel__pf)
	{
		bpv__SecretTunnel__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AbookshelfDoor_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__2 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__2);
	__Local__0->TimelineLength = 3.000000f;
	__Local__0->bValidatedAsWired = true;
	__Local__0->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__0->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__0->FloatTracks.GetData(), 1);
	auto& __Local__3 = __Local__0->FloatTracks[0];
	auto __Local__4 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	__Local__4->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__4->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__4->FloatCurve.Keys.GetData(), 2);
	auto& __Local__5 = __Local__4->FloatCurve.Keys[0];
	__Local__5.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__5.Value = 53.000000f;
	auto& __Local__6 = __Local__4->FloatCurve.Keys[1];
	__Local__6.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__6.Time = 3.000000f;
	__Local__6.Value = -53.000000f;
	__Local__3.CurveFloat = __Local__4;
	__Local__3.TrackName = FName(TEXT("Door Movement"));
	__Local__0->TimelineGuid = FGuid(0x94B329B8, 0x4AFBD2FB, 0x6535BCA4, 0x8C277F9C);
	__Local__1->TimelineLength = 3.000000f;
	__Local__1->bValidatedAsWired = true;
	__Local__1->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__1->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__1->FloatTracks.GetData(), 1);
	auto& __Local__7 = __Local__1->FloatTracks[0];
	auto __Local__8 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__8);
	__Local__8->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__8->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__8->FloatCurve.Keys.GetData(), 2);
	auto& __Local__9 = __Local__8->FloatCurve.Keys[0];
	__Local__9.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__9.Value = 53.000000f;
	auto& __Local__10 = __Local__8->FloatCurve.Keys[1];
	__Local__10.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__10.Time = 3.000000f;
	__Local__10.Value = -53.000000f;
	__Local__7.CurveFloat = __Local__8;
	__Local__7.TrackName = FName(TEXT("Door Movement"));
	__Local__1->TimelineGuid = FGuid(0xF7723A24, 0x4CA5B7E2, 0x12E2438F, 0x85ED9A32);
	__Local__2->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__2->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__2->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__11 = __Local__2->ComponentDelegateBindings[0];
	__Local__11.ComponentPropertyName = FName(TEXT("SecretTunnel"));
	__Local__11.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__11.FunctionNameToBind = FName(TEXT("BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__12 = __Local__2->ComponentDelegateBindings[1];
	__Local__12.ComponentPropertyName = FName(TEXT("SecretTunnel"));
	__Local__12.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__12.FunctionNameToBind = FName(TEXT("BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_IntFloat(-1, bpv__Timeline_0_Door_Movement_94B329B84AFBD2FB6535BCA48C277F9C__pf);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Multiply_IntFloat_ReturnValue__pf, 0.000000, 0.000000);
	if(IsValid(bpv__Scene__pf))
	{
		bpv__Scene__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	if (!bpv__first_open__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(IsValid(bpv__Box__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__Box__pf->USceneComponent::K2_GetComponentLocation();
	}
	UGameplayStatics::PlaySoundAtLocation(this, bpv__open_wave__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
	// optimized KCST_UnconditionalGoto
	bpv__first_open__pf = false;
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 10:
			{
				if(IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				if(IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				__CurrentState = 18;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__door_open__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_Not_PreBool_ReturnValue__pf, bpv__valid_to_open__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 20;
					break;
				}
			}
		case 19:
			{
				if(IsValid(bpv__Box__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
				__CurrentState = 10;
				break;
			}
		case 20:
			{
				if(IsValid(bpv__Box__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__Box__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AbookshelfDoor_blueprint_C__pf2958942102::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
				__CurrentState = 13;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__valid_to_open__pf = false;
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__valid_to_open__pf = true;
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = false;
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_5(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpv__Timeline_1_Door_Movement_F7723A244CA5B7E212E2438F85ED9A32__pf, 0.000000, 0.000000);
	if(IsValid(bpv__Scene__pf))
	{
		bpv__Scene__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult2__pf, false);
	}
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	// optimized KCST_UnconditionalGoto
	bpv__door_open__pf = true;
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_7(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 14);
	return; // KCST_GotoReturn
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_2(23);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__13;
	T__Local__13& bpp__SweepResult__pf = *const_cast<T__Local__13 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_3(21);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_1(17);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_7(14);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_5(11);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_4(8);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_0(4);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_bookshelfDoor_blueprint__pf_6(2);
}
void AbookshelfDoor_blueprint_C__pf2958942102::bpf__UserConstructionScript__pf()
{
}
void AbookshelfDoor_blueprint_C__pf2958942102::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{60, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/bookshelf_node__empty_.bookshelf_node__empty_ 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/items/lambert1.lambert1 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/lambert1.lambert1 
		{61, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/book_updatedUVs_.book_updatedUVs_ 
		{62, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_special.book_special 
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/props/book__texturable_.book__texturable_ 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_11.book_11 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_01.book_01 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_10.book_10 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_09.book_09 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_03.book_03 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_04.book_04 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_02.book_02 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Furniture/Textures/book_08.book_08 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/VoiceOver/voiceover_secret_room_discovery.voiceover_secret_room_discovery 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/bookcase_sliding_sound.bookcase_sliding_sound 
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
void AbookshelfDoor_blueprint_C__pf2958942102::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__AbookshelfDoor_blueprint_C__pf2958942102
{
	FRegisterHelper__AbookshelfDoor_blueprint_C__pf2958942102()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Furniture/bookshelfDoor_blueprint"), &AbookshelfDoor_blueprint_C__pf2958942102::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AbookshelfDoor_blueprint_C__pf2958942102 Instance;
};
FRegisterHelper__AbookshelfDoor_blueprint_C__pf2958942102 FRegisterHelper__AbookshelfDoor_blueprint_C__pf2958942102::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
