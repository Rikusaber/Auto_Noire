#include "NativizedAssets.h"
#include "lamp_blueprint__pf2958942102.h"
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
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "lamp_blueprint__pf2958942102.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "BP_MotionController__pf563933975.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
Alamp_blueprint_C__pf2958942102::Alamp_blueprint_C__pf2958942102(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (Alamp_blueprint_C__pf2958942102::StaticClass() == GetClass()))
	{
		Alamp_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__DefaultSceneRoot__pf = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__StaticMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	bpv__StaticMesh2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
	bpv__Capsule__pf = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	bpv__PointLight__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	bpv__PointLight1__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight1"));
	bpv__PointLight2__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight2"));
	bpv__PointLight3__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight3"));
	RootComponent = bpv__DefaultSceneRoot__pf;
	bpv__DefaultSceneRoot__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Scene__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Scene__pf->RelativeScale3D = FVector(0.563038, 0.563038, 0.563038);
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeLocation = FVector(0.000000, 0.000000, -86.000000);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.705227, 0.705227, 0.705227);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__StaticMesh1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh1__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh1__pf->CastShadow = false;
	bpv__StaticMesh1__pf->RelativeLocation = FVector(0.000000, 0.000000, -86.000000);
	bpv__StaticMesh1__pf->RelativeScale3D = FVector(0.705227, 0.705227, 0.705227);
	if(!bpv__StaticMesh1__pf->IsTemplate())
	{
		bpv__StaticMesh1__pf->BodyInstance.FixupData(bpv__StaticMesh1__pf);
	}
	bpv__StaticMesh2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh2__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMesh2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh2__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh2__pf->RelativeLocation = FVector(0.000000, 0.000000, -80.000000);
	bpv__StaticMesh2__pf->RelativeScale3D = FVector(0.705227, 0.705227, 0.705227);
	if(!bpv__StaticMesh2__pf->IsTemplate())
	{
		bpv__StaticMesh2__pf->BodyInstance.FixupData(bpv__StaticMesh2__pf);
	}
	bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Capsule__pf->AttachToComponent(bpv__StaticMesh2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Capsule__pf->RelativeLocation = FVector(13.481865, 2.846782, 179.595337);
	bpv__Capsule__pf->RelativeScale3D = FVector(0.218896, 0.218896, 0.602848);
	if(!bpv__Capsule__pf->IsTemplate())
	{
		bpv__Capsule__pf->BodyInstance.FixupData(bpv__Capsule__pf);
	}
	bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight__pf->LightGuid = FGuid(0x48AA4A8A, 0x4908C312, 0x764FA0A6, 0xED2766BB);
	bpv__PointLight__pf->Intensity = 100.000000f;
	bpv__PointLight__pf->LightColor = FColor(255, 240, 188, 255);
	bpv__PointLight__pf->bVisible = false;
	bpv__PointLight__pf->RelativeLocation = FVector(-26.000000, 0.000000, 43.000000);
	bpv__PointLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight1__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight1__pf->LightGuid = FGuid(0x6F69F77C, 0x43B8D70D, 0x645E1BB0, 0x203C301D);
	bpv__PointLight1__pf->Intensity = 100.000000f;
	bpv__PointLight1__pf->LightColor = FColor(255, 240, 188, 255);
	bpv__PointLight1__pf->bVisible = false;
	bpv__PointLight1__pf->RelativeLocation = FVector(26.000000, 0.000000, 43.000000);
	bpv__PointLight2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight2__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight2__pf->LightGuid = FGuid(0x08D5338C, 0x43428570, 0x72831B93, 0x1A9B25C5);
	bpv__PointLight2__pf->Intensity = 100.000000f;
	bpv__PointLight2__pf->LightColor = FColor(255, 240, 188, 255);
	bpv__PointLight2__pf->bVisible = false;
	bpv__PointLight2__pf->RelativeLocation = FVector(0.000000, 26.000000, 43.000000);
	bpv__PointLight3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight3__pf->AttachToComponent(bpv__DefaultSceneRoot__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight3__pf->LightGuid = FGuid(0xC1D2E71A, 0x48F0909B, 0xB65981B8, 0xDC16FC92);
	bpv__PointLight3__pf->Intensity = 100.000000f;
	bpv__PointLight3__pf->LightColor = FColor(255, 240, 188, 255);
	bpv__PointLight3__pf->bVisible = false;
	bpv__PointLight3__pf->RelativeLocation = FVector(0.000000, -26.000000, 43.000000);
	bpv__Timeline_0_Cord_Movement_47BB487C4600D780C4E9D2B74333122C__pf = 0.000000f;
	bpv__Timeline_0__Direction_47BB487C4600D780C4E9D2B74333122C__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__switch_state__pf = false;
	bpv__valid_to_toggle__pf = false;
}
void Alamp_blueprint_C__pf2958942102::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
	if(bpv__Capsule__pf)
	{
		bpv__Capsule__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight__pf)
	{
		bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight1__pf)
	{
		bpv__PointLight1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight2__pf)
	{
		bpv__PointLight2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight3__pf)
	{
		bpv__PointLight3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void Alamp_blueprint_C__pf2958942102::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__1);
	__Local__0->TimelineLength = 0.300000f;
	__Local__0->bValidatedAsWired = true;
	__Local__0->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__0->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__0->FloatTracks.GetData(), 1);
	auto& __Local__2 = __Local__0->FloatTracks[0];
	auto __Local__3 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__3);
	__Local__3->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__3->FloatCurve.Keys.AddUninitialized(3);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__3->FloatCurve.Keys.GetData(), 3);
	auto& __Local__4 = __Local__3->FloatCurve.Keys[0];
	__Local__4.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__4.Value = -80.000000f;
	auto& __Local__5 = __Local__3->FloatCurve.Keys[1];
	__Local__5.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__5.Time = 0.150000f;
	__Local__5.Value = -86.000000f;
	auto& __Local__6 = __Local__3->FloatCurve.Keys[2];
	__Local__6.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__6.Time = 0.300000f;
	__Local__6.Value = -80.000000f;
	__Local__2.CurveFloat = __Local__3;
	__Local__2.TrackName = FName(TEXT("Cord Movement"));
	__Local__0->TimelineGuid = FGuid(0x47BB487C, 0x4600D780, 0xC4E9D2B7, 0x4333122C);
	__Local__1->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__1->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__1->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__7 = __Local__1->ComponentDelegateBindings[0];
	__Local__7.ComponentPropertyName = FName(TEXT("Capsule"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__8 = __Local__1->ComponentDelegateBindings[1];
	__Local__8.ComponentPropertyName = FName(TEXT("Capsule"));
	__Local__8.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__8.FunctionNameToBind = FName(TEXT("BndEvt__Capsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature"));
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 24);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
	b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller2__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpv__valid_to_toggle__pf = false;
	return; // KCST_GotoReturn
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf = Cast<ABP_MotionController_C__pf563933975>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpv__valid_to_toggle__pf = true;
	return; // KCST_GotoReturn
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_2(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 6:
			{
				if (!bpv__switch_state__pf)
				{
					__CurrentState = 12;
					break;
				}
			}
		case 7:
			{
				if(IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->SetVisibility(false, false);
				}
			}
		case 8:
			{
				if(IsValid(bpv__PointLight1__pf))
				{
					bpv__PointLight1__pf->SetVisibility(false, false);
				}
			}
		case 9:
			{
				if(IsValid(bpv__PointLight2__pf))
				{
					bpv__PointLight2__pf->SetVisibility(false, false);
				}
			}
		case 10:
			{
				if(IsValid(bpv__PointLight3__pf))
				{
					bpv__PointLight3__pf->SetVisibility(false, false);
				}
			}
		case 11:
			{
				bpv__switch_state__pf = false;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__PointLight__pf))
				{
					bpv__PointLight__pf->SetVisibility(true, false);
				}
			}
		case 13:
			{
				if(IsValid(bpv__PointLight1__pf))
				{
					bpv__PointLight1__pf->SetVisibility(true, false);
				}
			}
		case 14:
			{
				if(IsValid(bpv__PointLight2__pf))
				{
					bpv__PointLight2__pf->SetVisibility(true, false);
				}
			}
		case 15:
			{
				if(IsValid(bpv__PointLight3__pf))
				{
					bpv__PointLight3__pf->SetVisibility(true, false);
				}
			}
		case 16:
			{
				bpv__switch_state__pf = true;
				__CurrentState = -1;
				break;
			}
		case 20:
			{
				__CurrentState = 6;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_3(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, bpv__Timeline_0_Cord_Movement_47BB487C4600D780C4E9D2B74333122C__pf);
	if(IsValid(bpv__StaticMesh2__pf))
	{
		bpv__StaticMesh2__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_MakeVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
	}
	return; // KCST_GotoReturn
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	if (!bpv__valid_to_toggle__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__StaticMesh2__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__StaticMesh2__pf->USceneComponent::K2_GetComponentLocation();
	}
	UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(Alamp_blueprint_C__pf2958942102::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Timeline_0__pf))
	{
		bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
	}
	return; // KCST_GotoReturn
}
void Alamp_blueprint_C__pf2958942102::bpf__ExecuteUbergraph_lamp_blueprint__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	return; // KCST_GotoReturn
}
void Alamp_blueprint_C__pf2958942102::bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_lamp_blueprint__pf_0(24);
}
void Alamp_blueprint_C__pf2958942102::bpf__BndEvt__Capsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__9;
	T__Local__9& bpp__SweepResult__pf = *const_cast<T__Local__9 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_lamp_blueprint__pf_1(21);
}
void Alamp_blueprint_C__pf2958942102::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_lamp_blueprint__pf_4(4);
}
void Alamp_blueprint_C__pf2958942102::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_lamp_blueprint__pf_5(3);
}
void Alamp_blueprint_C__pf2958942102::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_lamp_blueprint__pf_3(19);
}
void Alamp_blueprint_C__pf2958942102::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_lamp_blueprint__pf_2(20);
}
void Alamp_blueprint_C__pf2958942102::bpf__UserConstructionScript__pf()
{
}
void Alamp_blueprint_C__pf2958942102::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/table_lamp_pCylinder1.table_lamp_pCylinder1 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/items/lambert1.lambert1 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/table_lamp_pCylinder2.table_lamp_pCylinder2 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/table_lamp_pCylinder3.table_lamp_pCylinder3 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/lamp_switch_sound.lamp_switch_sound 
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
void Alamp_blueprint_C__pf2958942102::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
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
struct FRegisterHelper__Alamp_blueprint_C__pf2958942102
{
	FRegisterHelper__Alamp_blueprint_C__pf2958942102()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Furniture/lamp_blueprint"), &Alamp_blueprint_C__pf2958942102::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Alamp_blueprint_C__pf2958942102 Instance;
};
FRegisterHelper__Alamp_blueprint_C__pf2958942102 FRegisterHelper__Alamp_blueprint_C__pf2958942102::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
