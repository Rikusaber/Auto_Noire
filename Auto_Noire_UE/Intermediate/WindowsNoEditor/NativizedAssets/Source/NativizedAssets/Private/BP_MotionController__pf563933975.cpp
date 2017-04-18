#include "NativizedAssets.h"
#include "BP_MotionController__pf563933975.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
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
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "Runtime/HeadMountedDisplay/Public/IMotionController.h"
#include "RightHand_AnimBP__pf558596347.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "SteamVRChaperoneComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h"
#include "BP_MotionController__pf563933975.h"
#include "MotionControllerPawn__pf563933975.h"
#include "Inventory_Item__pf563933975.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "PickupActorInterface__pf563933975.h"
#include "InGame_Item__pf563933975.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ABP_MotionController_C__pf563933975::ABP_MotionController_C__pf563933975(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ABP_MotionController_C__pf563933975::StaticClass() == GetClass()))
	{
		ABP_MotionController_C__pf563933975::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__MotionController__pf = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionController"));
	bpv__HandMesh__pf = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMesh"));
	bpv__ArcDirection__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("ArcDirection"));
	bpv__ArcSpline__pf = CreateDefaultSubobject<USplineComponent>(TEXT("ArcSpline"));
	bpv__GrabSphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("GrabSphere"));
	bpv__inventory_core__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("inventory_core"));
	bpv__slot_0__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("slot_0"));
	bpv__slot_0Amount__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("slot_0Amount"));
	bpv__slot_0Sprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("slot_0Sprite"));
	bpv__slot_0Collision__pf = CreateDefaultSubobject<USphereComponent>(TEXT("slot_0Collision"));
	bpv__slot_1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("slot_1"));
	bpv__slot_1Amount__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("slot_1Amount"));
	bpv__slot1_Sprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("slot1_Sprite"));
	bpv__slot_1Collision__pf = CreateDefaultSubobject<USphereComponent>(TEXT("slot_1Collision"));
	bpv__slot_2__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("slot_2"));
	bpv__slot_2Amount__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("slot_2Amount"));
	bpv__slot2_Sprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("slot2_Sprite"));
	bpv__slot_2Collision__pf = CreateDefaultSubobject<USphereComponent>(TEXT("slot_2Collision"));
	bpv__slot_3__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("slot_3"));
	bpv__slot_3Amount__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("slot_3Amount"));
	bpv__slot_3Sprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("slot_3Sprite"));
	bpv__slot_3Collision__pf = CreateDefaultSubobject<USphereComponent>(TEXT("slot_3Collision"));
	bpv__slot_4__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("slot_4"));
	bpv__slot_4Amount__pf = CreateDefaultSubobject<UTextRenderComponent>(TEXT("slot_4Amount"));
	bpv__slot_4Sprite__pf = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("slot_4Sprite"));
	bpv__slot_4Collision__pf = CreateDefaultSubobject<USphereComponent>(TEXT("slot_4Collision"));
	bpv__hand_light__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("hand_light"));
	bpv__hand_torch__pf = CreateDefaultSubobject<USpotLightComponent>(TEXT("hand_torch"));
	bpv__ArcEndPoint__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArcEndPoint"));
	bpv__TeleportCylinder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportCylinder"));
	bpv__Ring__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));
	bpv__Arrow__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	bpv__RoomScaleMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RoomScaleMesh"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = bpv__Scene__pf;
	bpv__SteamVRChaperone__pf = CreateDefaultSubobject<USteamVRChaperoneComponent>(TEXT("SteamVRChaperone"));
	bpv__AIPerceptionStimuliSource__pf = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSource"));
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MotionController__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	if(!bpv__MotionController__pf->IsTemplate())
	{
		bpv__MotionController__pf->BodyInstance.FixupData(bpv__MotionController__pf);
	}
	bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HandMesh__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__HandMesh__pf->AnimClass = URightHand_AnimBP_C__pf558596347::StaticClass();
	bpv__HandMesh__pf->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__HandMesh__pf->CastShadow = false;
	bpv__HandMesh__pf->RelativeLocation = FVector(-12.785664, -0.028015, -1.789026);
	bpv__HandMesh__pf->RelativeRotation = FRotator(0.000000, 0.000000, -0.000281);
	if(!bpv__HandMesh__pf->IsTemplate())
	{
		bpv__HandMesh__pf->BodyInstance.FixupData(bpv__HandMesh__pf);
	}
	bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcDirection__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcDirection__pf->ArrowSize = 0.200000f;
	bpv__ArcDirection__pf->RelativeLocation = FVector(23.175764, 0.859525, -4.318897);
	if(!bpv__ArcDirection__pf->IsTemplate())
	{
		bpv__ArcDirection__pf->BodyInstance.FixupData(bpv__ArcDirection__pf);
	}
	bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcSpline__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcSpline__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__ArcSpline__pf->RelativeLocation = FVector(12.532683, -1.756977, 2.553327);
	if(!bpv__ArcSpline__pf->IsTemplate())
	{
		bpv__ArcSpline__pf->BodyInstance.FixupData(bpv__ArcSpline__pf);
	}
	bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GrabSphere__pf->AttachToComponent(bpv__HandMesh__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__0 = (*(AccessPrivateProperty<float >((bpv__GrabSphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__0 = 10.000000f;
	bpv__GrabSphere__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__GrabSphere__pf->RelativeLocation = FVector(14.286342, 0.224237, -3.515068);
	bpv__GrabSphere__pf->RelativeScale3D = FVector(0.715743, 0.715743, 0.715743);
	bpv__GrabSphere__pf->ComponentTags = TArray<FName> ();
	bpv__GrabSphere__pf->ComponentTags.Reserve(1);
	bpv__GrabSphere__pf->ComponentTags.Add(FName(TEXT("GrabSphere")));
	if(!bpv__GrabSphere__pf->IsTemplate())
	{
		bpv__GrabSphere__pf->BodyInstance.FixupData(bpv__GrabSphere__pf);
	}
	bpv__inventory_core__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__inventory_core__pf->AttachToComponent(bpv__MotionController__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__inventory_core__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__inventory_core__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__inventory_core__pf->OverrideMaterials.Reserve(1);
	bpv__inventory_core__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed));
	bpv__inventory_core__pf->CastShadow = false;
	bpv__inventory_core__pf->bVisible = false;
	bpv__inventory_core__pf->RelativeLocation = FVector(-11.000000, -0.817050, 0.238985);
	bpv__inventory_core__pf->RelativeRotation = FRotator(0.000000, 0.000000, -90.000267);
	bpv__inventory_core__pf->RelativeScale3D = FVector(0.039311, 0.039311, 0.039311);
	if(!bpv__inventory_core__pf->IsTemplate())
	{
		bpv__inventory_core__pf->BodyInstance.FixupData(bpv__inventory_core__pf);
	}
	bpv__slot_0__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_0__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_0__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAllDynamic")));
	bpv__slot_0__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__slot_0__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__slot_0__pf->OverrideMaterials.Reserve(1);
	bpv__slot_0__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__slot_0__pf->CastShadow = false;
	bpv__slot_0__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__slot_0__pf->RelativeLocation = FVector(442.175629, -621.308533, -227.117645);
	bpv__slot_0__pf->RelativeRotation = FRotator(56.000000, 0.000000, 89.999962);
	bpv__slot_0__pf->RelativeScale3D = FVector(299.027863, 299.027863, 299.027863);
	if(!bpv__slot_0__pf->IsTemplate())
	{
		bpv__slot_0__pf->BodyInstance.FixupData(bpv__slot_0__pf);
	}
	bpv__slot_0Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_0Amount__pf->AttachToComponent(bpv__slot_0__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_0Amount__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT("[39BF4E0D452D372C223273AF0697EE18]"), /* Namespace */
	TEXT("654ACF9541A057582EE04A9C8467A962") /* Key */
	);
	bpv__slot_0Amount__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__slot_0Amount__pf->TextRenderColor = FColor(34, 34, 34, 255);
	bpv__slot_0Amount__pf->WorldSize = 4.000000f;
	bpv__slot_0Amount__pf->RelativeLocation = FVector(0.499485, -1.924141, 3.232640);
	bpv__slot_0Amount__pf->RelativeRotation = FRotator(90.000000, 0.000000, -114.997757);
	bpv__slot_0Amount__pf->RelativeScale3D = FVector(0.052126, 0.052126, 0.052126);
	if(!bpv__slot_0Amount__pf->IsTemplate())
	{
		bpv__slot_0Amount__pf->BodyInstance.FixupData(bpv__slot_0Amount__pf);
	}
	bpv__slot_0Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_0Sprite__pf->AttachToComponent(bpv__slot_0Amount__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__1 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__slot_0Sprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__1 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__slot_0Sprite__pf->RelativeLocation = FVector(-0.182540, -0.536671, 11.632459);
	bpv__slot_0Sprite__pf->RelativeRotation = FRotator(0.000000, 90.000206, 0.000000);
	bpv__slot_0Sprite__pf->RelativeScale3D = FVector(0.029011, 0.029011, 0.029011);
	if(!bpv__slot_0Sprite__pf->IsTemplate())
	{
		bpv__slot_0Sprite__pf->BodyInstance.FixupData(bpv__slot_0Sprite__pf);
	}
	bpv__slot_0Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_0Collision__pf->AttachToComponent(bpv__slot_0__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_0Collision__pf->RelativeLocation = FVector(0.778429, -2.513928, 3.418549);
	bpv__slot_0Collision__pf->RelativeRotation = FRotator(-0.000031, 55.999981, 0.000299);
	bpv__slot_0Collision__pf->RelativeScale3D = FVector(0.009094, 0.009094, 1.632135);
	if(!bpv__slot_0Collision__pf->IsTemplate())
	{
		bpv__slot_0Collision__pf->BodyInstance.FixupData(bpv__slot_0Collision__pf);
	}
	bpv__slot_1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_1__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_1__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAllDynamic")));
	bpv__slot_1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__slot_1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__slot_1__pf->OverrideMaterials.Reserve(1);
	bpv__slot_1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__slot_1__pf->CastShadow = false;
	bpv__slot_1__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__slot_1__pf->RelativeLocation = FVector(120.956314, -621.308533, -341.597443);
	bpv__slot_1__pf->RelativeRotation = FRotator(-3.999991, 0.000000, 89.999962);
	bpv__slot_1__pf->RelativeScale3D = FVector(299.027863, 299.027863, 299.027863);
	if(!bpv__slot_1__pf->IsTemplate())
	{
		bpv__slot_1__pf->BodyInstance.FixupData(bpv__slot_1__pf);
	}
	bpv__slot_1Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_1Amount__pf->AttachToComponent(bpv__slot_1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_1Amount__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("1"), /* Literal Text */
	TEXT("[39BF4E0D452D372C223273AF0697EE18]"), /* Namespace */
	TEXT("7C5254F04CFCD23F44ADC08C1E50EC4E") /* Key */
	);
	bpv__slot_1Amount__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__slot_1Amount__pf->TextRenderColor = FColor(34, 34, 34, 255);
	bpv__slot_1Amount__pf->WorldSize = 4.000000f;
	bpv__slot_1Amount__pf->RelativeLocation = FVector(0.503513, -1.915391, 3.232640);
	bpv__slot_1Amount__pf->RelativeRotation = FRotator(90.000000, -26.565033, -141.563721);
	bpv__slot_1Amount__pf->RelativeScale3D = FVector(0.052126, 0.052126, 0.052126);
	if(!bpv__slot_1Amount__pf->IsTemplate())
	{
		bpv__slot_1Amount__pf->BodyInstance.FixupData(bpv__slot_1Amount__pf);
	}
	bpv__slot1_Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot1_Sprite__pf->AttachToComponent(bpv__slot_1Amount__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__2 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__slot1_Sprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__2 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__slot1_Sprite__pf->RelativeLocation = FVector(-0.182530, -0.424023, 13.383615);
	bpv__slot1_Sprite__pf->RelativeRotation = FRotator(0.000000, 90.000206, 0.000000);
	bpv__slot1_Sprite__pf->RelativeScale3D = FVector(0.029007, 0.029007, 0.029007);
	if(!bpv__slot1_Sprite__pf->IsTemplate())
	{
		bpv__slot1_Sprite__pf->BodyInstance.FixupData(bpv__slot1_Sprite__pf);
	}
	bpv__slot_1Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_1Collision__pf->AttachToComponent(bpv__slot_1__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_1Collision__pf->RelativeLocation = FVector(0.778429, -2.513928, 3.418549);
	bpv__slot_1Collision__pf->RelativeRotation = FRotator(-0.000031, 55.999981, 0.000299);
	bpv__slot_1Collision__pf->RelativeScale3D = FVector(0.009094, 0.009094, 0.128319);
	if(!bpv__slot_1Collision__pf->IsTemplate())
	{
		bpv__slot_1Collision__pf->BodyInstance.FixupData(bpv__slot_1Collision__pf);
	}
	bpv__slot_2__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_2__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_2__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAllDynamic")));
	bpv__slot_2__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__slot_2__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__slot_2__pf->OverrideMaterials.Reserve(1);
	bpv__slot_2__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__slot_2__pf->CastShadow = false;
	bpv__slot_2__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__slot_2__pf->RelativeLocation = FVector(-146.046387, -621.308594, -118.788643);
	bpv__slot_2__pf->RelativeRotation = FRotator(-63.999977, 0.000008, 89.999939);
	bpv__slot_2__pf->RelativeScale3D = FVector(299.027863, 299.027863, 299.027863);
	if(!bpv__slot_2__pf->IsTemplate())
	{
		bpv__slot_2__pf->BodyInstance.FixupData(bpv__slot_2__pf);
	}
	bpv__slot_2Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_2Amount__pf->AttachToComponent(bpv__slot_2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_2Amount__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("2"), /* Literal Text */
	TEXT("[39BF4E0D452D372C223273AF0697EE18]"), /* Namespace */
	TEXT("28713ED740534B6D095187870DEB9FDA") /* Key */
	);
	bpv__slot_2Amount__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__slot_2Amount__pf->TextRenderColor = FColor(34, 34, 34, 255);
	bpv__slot_2Amount__pf->WorldSize = 4.000000f;
	bpv__slot_2Amount__pf->RelativeLocation = FVector(0.509833, -1.916551, 3.232640);
	bpv__slot_2Amount__pf->RelativeRotation = FRotator(90.000000, -90.000000, 155.001480);
	bpv__slot_2Amount__pf->RelativeScale3D = FVector(0.052126, 0.052126, 0.052126);
	if(!bpv__slot_2Amount__pf->IsTemplate())
	{
		bpv__slot_2Amount__pf->BodyInstance.FixupData(bpv__slot_2Amount__pf);
	}
	bpv__slot2_Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot2_Sprite__pf->AttachToComponent(bpv__slot_2Amount__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__3 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__slot2_Sprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__3 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__slot2_Sprite__pf->RelativeLocation = FVector(-0.182530, -0.424023, 13.383615);
	bpv__slot2_Sprite__pf->RelativeRotation = FRotator(0.000000, 90.000206, 0.000000);
	bpv__slot2_Sprite__pf->RelativeScale3D = FVector(0.029007, 0.029007, 0.029007);
	if(!bpv__slot2_Sprite__pf->IsTemplate())
	{
		bpv__slot2_Sprite__pf->BodyInstance.FixupData(bpv__slot2_Sprite__pf);
	}
	bpv__slot_2Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_2Collision__pf->AttachToComponent(bpv__slot_2__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_2Collision__pf->RelativeLocation = FVector(0.778429, -2.513928, 3.418549);
	bpv__slot_2Collision__pf->RelativeRotation = FRotator(-0.000031, 55.999981, 0.000299);
	bpv__slot_2Collision__pf->RelativeScale3D = FVector(0.009094, 0.009094, 0.128319);
	if(!bpv__slot_2Collision__pf->IsTemplate())
	{
		bpv__slot_2Collision__pf->BodyInstance.FixupData(bpv__slot_2Collision__pf);
	}
	bpv__slot_3__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_3__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_3__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAllDynamic")));
	bpv__slot_3__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__slot_3__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__slot_3__pf->OverrideMaterials.Reserve(1);
	bpv__slot_3__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__slot_3__pf->CastShadow = false;
	bpv__slot_3__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__slot_3__pf->RelativeLocation = FVector(-87.312904, -621.308594, 230.347778);
	bpv__slot_3__pf->RelativeRotation = FRotator(-55.999912, -179.999969, -89.999886);
	bpv__slot_3__pf->RelativeScale3D = FVector(299.027863, 299.027863, 299.027863);
	if(!bpv__slot_3__pf->IsTemplate())
	{
		bpv__slot_3__pf->BodyInstance.FixupData(bpv__slot_3__pf);
	}
	bpv__slot_3Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_3Amount__pf->AttachToComponent(bpv__slot_3__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_3Amount__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("3"), /* Literal Text */
	TEXT("[39BF4E0D452D372C223273AF0697EE18]"), /* Namespace */
	TEXT("10C937114E066A32683008A1B7041774") /* Key */
	);
	bpv__slot_3Amount__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__slot_3Amount__pf->TextRenderColor = FColor(34, 34, 34, 255);
	bpv__slot_3Amount__pf->WorldSize = 4.000000f;
	bpv__slot_3Amount__pf->RelativeLocation = FVector(0.501762, -1.915577, 3.232640);
	bpv__slot_3Amount__pf->RelativeRotation = FRotator(90.000000, 0.000000, -114.997986);
	bpv__slot_3Amount__pf->RelativeScale3D = FVector(0.052126, 0.052126, 0.052126);
	if(!bpv__slot_3Amount__pf->IsTemplate())
	{
		bpv__slot_3Amount__pf->BodyInstance.FixupData(bpv__slot_3Amount__pf);
	}
	bpv__slot_3Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_3Sprite__pf->AttachToComponent(bpv__slot_3Amount__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__4 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__slot_3Sprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__4 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__slot_3Sprite__pf->RelativeLocation = FVector(-0.182530, -0.424023, 13.383615);
	bpv__slot_3Sprite__pf->RelativeRotation = FRotator(0.000000, 90.000206, 0.000000);
	bpv__slot_3Sprite__pf->RelativeScale3D = FVector(0.029007, 0.029007, 0.029007);
	if(!bpv__slot_3Sprite__pf->IsTemplate())
	{
		bpv__slot_3Sprite__pf->BodyInstance.FixupData(bpv__slot_3Sprite__pf);
	}
	bpv__slot_3Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_3Collision__pf->AttachToComponent(bpv__slot_3__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_3Collision__pf->RelativeLocation = FVector(0.778429, -2.513928, 3.418549);
	bpv__slot_3Collision__pf->RelativeRotation = FRotator(-0.000396, -68.000130, 0.000375);
	bpv__slot_3Collision__pf->RelativeScale3D = FVector(0.009094, 0.009094, 0.128319);
	if(!bpv__slot_3Collision__pf->IsTemplate())
	{
		bpv__slot_3Collision__pf->BodyInstance.FixupData(bpv__slot_3Collision__pf);
	}
	bpv__slot_4__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_4__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_4__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("OverlapAllDynamic")));
	bpv__slot_4__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__slot_4__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__slot_4__pf->OverrideMaterials.Reserve(1);
	bpv__slot_4__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
	bpv__slot_4__pf->CastShadow = false;
	bpv__slot_4__pf->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	bpv__slot_4__pf->RelativeLocation = FVector(239.870667, -621.308594, 352.312042);
	bpv__slot_4__pf->RelativeRotation = FRotator(3.999984, -179.999954, -89.999939);
	bpv__slot_4__pf->RelativeScale3D = FVector(299.027863, 299.027863, 299.027863);
	if(!bpv__slot_4__pf->IsTemplate())
	{
		bpv__slot_4__pf->BodyInstance.FixupData(bpv__slot_4__pf);
	}
	bpv__slot_4Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_4Amount__pf->AttachToComponent(bpv__slot_4__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_4Amount__pf->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("4"), /* Literal Text */
	TEXT("[39BF4E0D452D372C223273AF0697EE18]"), /* Namespace */
	TEXT("5A0BDBA84275C7A5688A2897345225C9") /* Key */
	);
	bpv__slot_4Amount__pf->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	bpv__slot_4Amount__pf->TextRenderColor = FColor(34, 34, 34, 255);
	bpv__slot_4Amount__pf->WorldSize = 4.000000f;
	bpv__slot_4Amount__pf->RelativeLocation = FVector(0.501602, -1.914693, 3.232640);
	bpv__slot_4Amount__pf->RelativeRotation = FRotator(90.000000, -26.565033, -141.563416);
	bpv__slot_4Amount__pf->RelativeScale3D = FVector(0.052126, 0.052126, 0.052126);
	if(!bpv__slot_4Amount__pf->IsTemplate())
	{
		bpv__slot_4Amount__pf->BodyInstance.FixupData(bpv__slot_4Amount__pf);
	}
	bpv__slot_4Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_4Sprite__pf->AttachToComponent(bpv__slot_4Amount__pf, FAttachmentTransformRules::KeepRelativeTransform );
	auto& __Local__5 = (*(AccessPrivateProperty<UPaperSprite* >((bpv__slot_4Sprite__pf), UPaperSpriteComponent::__PPO__SourceSprite() )));
	__Local__5 = CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__slot_4Sprite__pf->RelativeLocation = FVector(-0.182530, -0.424023, 13.383615);
	bpv__slot_4Sprite__pf->RelativeRotation = FRotator(0.000000, 90.000206, 0.000000);
	bpv__slot_4Sprite__pf->RelativeScale3D = FVector(0.029007, 0.029007, 0.029007);
	if(!bpv__slot_4Sprite__pf->IsTemplate())
	{
		bpv__slot_4Sprite__pf->BodyInstance.FixupData(bpv__slot_4Sprite__pf);
	}
	bpv__slot_4Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__slot_4Collision__pf->AttachToComponent(bpv__slot_4__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__slot_4Collision__pf->RelativeLocation = FVector(0.778429, -2.513928, 3.418549);
	bpv__slot_4Collision__pf->RelativeRotation = FRotator(-0.000102, 107.999878, 0.000535);
	bpv__slot_4Collision__pf->RelativeScale3D = FVector(0.009094, 0.009094, 0.128319);
	if(!bpv__slot_4Collision__pf->IsTemplate())
	{
		bpv__slot_4Collision__pf->BodyInstance.FixupData(bpv__slot_4Collision__pf);
	}
	bpv__hand_light__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__hand_light__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__hand_light__pf->AttenuationRadius = 20.000000f;
	bpv__hand_light__pf->LightGuid = FGuid(0x8E44D106, 0x45F1DDF0, 0x5B4FFBAA, 0x9D73F302);
	bpv__hand_light__pf->Intensity = 20.000000f;
	bpv__hand_light__pf->LightColor = FColor(17, 217, 255, 255);
	bpv__hand_light__pf->CastShadows = false;
	bpv__hand_light__pf->RelativeLocation = FVector(107.204918, 202.792496, -45.509422);
	bpv__hand_light__pf->RelativeRotation = FRotator(0.000000, 0.000000, 89.999992);
	bpv__hand_light__pf->RelativeScale3D = FVector(25.438148, 25.438148, 25.438148);
	bpv__hand_torch__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__hand_torch__pf->AttachToComponent(bpv__inventory_core__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__hand_torch__pf->OuterConeAngle = 35.000000f;
	bpv__hand_torch__pf->AttenuationRadius = 20000.000000f;
	bpv__hand_torch__pf->LightGuid = FGuid(0x2CF8F9CC, 0x4F9CB9D6, 0x722A24AE, 0xFE2D289A);
	bpv__hand_torch__pf->Intensity = 14000.000000f;
	bpv__hand_torch__pf->bVisible = false;
	bpv__hand_torch__pf->RelativeLocation = FVector(190.803406, 138.813858, -51.213650);
	bpv__hand_torch__pf->RelativeRotation = FRotator(0.000000, 0.000000, 89.999992);
	bpv__hand_torch__pf->RelativeScale3D = FVector(25.438148, 25.438148, 25.438148);
	bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ArcEndPoint__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ArcEndPoint__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__ArcEndPoint__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__ArcEndPoint__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__ArcEndPoint__pf->OverrideMaterials.Reserve(1);
	bpv__ArcEndPoint__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__ArcEndPoint__pf->bGenerateOverlapEvents = false;
	bpv__ArcEndPoint__pf->bAbsoluteLocation = true;
	bpv__ArcEndPoint__pf->bAbsoluteRotation = true;
	bpv__ArcEndPoint__pf->bAbsoluteScale = true;
	bpv__ArcEndPoint__pf->bVisible = false;
	bpv__ArcEndPoint__pf->RelativeScale3D = FVector(0.150000, 0.150000, 0.150000);
	if(!bpv__ArcEndPoint__pf->IsTemplate())
	{
		bpv__ArcEndPoint__pf->BodyInstance.FixupData(bpv__ArcEndPoint__pf);
	}
	bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__TeleportCylinder__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__TeleportCylinder__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__TeleportCylinder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__TeleportCylinder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__TeleportCylinder__pf->OverrideMaterials.Reserve(1);
	bpv__TeleportCylinder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed));
	bpv__TeleportCylinder__pf->bAbsoluteLocation = true;
	bpv__TeleportCylinder__pf->bAbsoluteRotation = true;
	bpv__TeleportCylinder__pf->RelativeScale3D = FVector(0.750000, 0.750000, 1.000000);
	static TWeakObjectPtr<UProperty> __Local__7{};
	const UProperty* __Local__6 = __Local__7.Get();
	if (nullptr == __Local__6)
	{
		__Local__6 = (UActorComponent::StaticClass())->FindPropertyByName(FName(TEXT("bCanEverAffectNavigation")));
		check(__Local__6);
		__Local__7 = __Local__6;
	}
	(((UBoolProperty*)__Local__6)->SetPropertyValue_InContainer((bpv__TeleportCylinder__pf), false, 0));
	if(!bpv__TeleportCylinder__pf->IsTemplate())
	{
		bpv__TeleportCylinder__pf->BodyInstance.FixupData(bpv__TeleportCylinder__pf);
	}
	bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Ring__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Ring__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__Ring__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Ring__pf->OverrideMaterials.Reserve(1);
	bpv__Ring__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	bpv__Ring__pf->RelativeScale3D = FVector(0.500000, 0.500000, 0.150000);
	if(!bpv__Ring__pf->IsTemplate())
	{
		bpv__Ring__pf->BodyInstance.FixupData(bpv__Ring__pf);
	}
	bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Arrow__pf->AttachToComponent(bpv__TeleportCylinder__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Arrow__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__Arrow__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Arrow__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Arrow__pf->OverrideMaterials.Reserve(1);
	bpv__Arrow__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed));
	if(!bpv__Arrow__pf->IsTemplate())
	{
		bpv__Arrow__pf->BodyInstance.FixupData(bpv__Arrow__pf);
	}
	bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__RoomScaleMesh__pf->AttachToComponent(bpv__Arrow__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__RoomScaleMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("NoCollision")));
	bpv__RoomScaleMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__RoomScaleMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__RoomScaleMesh__pf->OverrideMaterials.Reserve(1);
	bpv__RoomScaleMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed));
	bpv__RoomScaleMesh__pf->bGenerateOverlapEvents = false;
	bpv__RoomScaleMesh__pf->bAbsoluteRotation = true;
	bpv__RoomScaleMesh__pf->bAbsoluteScale = true;
	if(!bpv__RoomScaleMesh__pf->IsTemplate())
	{
		bpv__RoomScaleMesh__pf->BodyInstance.FixupData(bpv__RoomScaleMesh__pf);
	}
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	static TWeakObjectPtr<UProperty> __Local__9{};
	const UProperty* __Local__8 = __Local__9.Get();
	if (nullptr == __Local__8)
	{
		__Local__8 = (UAIPerceptionStimuliSourceComponent::StaticClass())->FindPropertyByName(FName(TEXT("bAutoRegisterAsSource")));
		check(__Local__8);
		__Local__9 = __Local__8;
	}
	(((UBoolProperty*)__Local__8)->SetPropertyValue_InContainer((bpv__AIPerceptionStimuliSource__pf), false, 0));
	bpv__Hand__pf = EControllerHand::Left;
	bpv__AttachedActor__pf = nullptr;
	bpv__IsTeleporterActive__pf = false;
	bpv__SplineMeshes__pf = TArray<USplineMeshComponent*> ();
	bpv__bLastFrameValidDestination__pf = false;
	bpv__IsRoomScale__pf = false;
	bpv__TeleportDestination__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__IsValidTeleportDestination__pf = false;
	bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
	bpv__bWantsToGrip__pf = false;
	bpv__TeleportRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__TeleportLaunchVelocity__pf = 900.000000f;
	bpv__InitialControllerRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__inventoryOpen__pf = true;
	bpv__torchActive__pf = false;
	bpv__slot0_amount__pf = 0;
	bpv__slot0_item__pf = nullptr;
	bpv__slot1_amount__pf = 0;
	bpv__slot1_item__pf = nullptr;
	bpv__slot2_amount__pf = 0;
	bpv__slot2_item__pf = nullptr;
	bpv__slot3_amount__pf = 0;
	bpv__slot3_item__pf = nullptr;
	bpv__slot4_amount__pf = 0;
	bpv__slot4_item__pf = nullptr;
	bpv__current_slot__pf = -1;
	bpv__otherHand__pf = nullptr;
	bpv__motion_controller_pawn__pf = nullptr;
	PrimaryActorTick.bCanEverTick = true;
}
void ABP_MotionController_C__pf563933975::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__MotionController__pf)
	{
		bpv__MotionController__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HandMesh__pf)
	{
		bpv__HandMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcDirection__pf)
	{
		bpv__ArcDirection__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcSpline__pf)
	{
		bpv__ArcSpline__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GrabSphere__pf)
	{
		bpv__GrabSphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__inventory_core__pf)
	{
		bpv__inventory_core__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_0__pf)
	{
		bpv__slot_0__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_0Amount__pf)
	{
		bpv__slot_0Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_0Sprite__pf)
	{
		bpv__slot_0Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_0Collision__pf)
	{
		bpv__slot_0Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_1__pf)
	{
		bpv__slot_1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_1Amount__pf)
	{
		bpv__slot_1Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot1_Sprite__pf)
	{
		bpv__slot1_Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_1Collision__pf)
	{
		bpv__slot_1Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_2__pf)
	{
		bpv__slot_2__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_2Amount__pf)
	{
		bpv__slot_2Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot2_Sprite__pf)
	{
		bpv__slot2_Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_2Collision__pf)
	{
		bpv__slot_2Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_3__pf)
	{
		bpv__slot_3__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_3Amount__pf)
	{
		bpv__slot_3Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_3Sprite__pf)
	{
		bpv__slot_3Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_3Collision__pf)
	{
		bpv__slot_3Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_4__pf)
	{
		bpv__slot_4__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_4Amount__pf)
	{
		bpv__slot_4Amount__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_4Sprite__pf)
	{
		bpv__slot_4Sprite__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__slot_4Collision__pf)
	{
		bpv__slot_4Collision__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__hand_light__pf)
	{
		bpv__hand_light__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__hand_torch__pf)
	{
		bpv__hand_torch__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ArcEndPoint__pf)
	{
		bpv__ArcEndPoint__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__TeleportCylinder__pf)
	{
		bpv__TeleportCylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Ring__pf)
	{
		bpv__Ring__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Arrow__pf)
	{
		bpv__Arrow__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__RoomScaleMesh__pf)
	{
		bpv__RoomScaleMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__SteamVRChaperone__pf)
	{
		bpv__SteamVRChaperone__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AIPerceptionStimuliSource__pf)
	{
		bpv__AIPerceptionStimuliSource__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ABP_MotionController_C__pf563933975::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__10 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-0"));
	InDynamicClass->ComponentTemplates.Add(__Local__10);
	auto __Local__11 = NewObject<USplineMeshComponent>(InDynamicClass, USplineMeshComponent::StaticClass(), TEXT("NODE_AddSplineMeshComponent-1"));
	InDynamicClass->ComponentTemplates.Add(__Local__11);
	auto __Local__12 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_REMOVED_73604AB8494A4F511B55F0A4F1A85DC7"));
	InDynamicClass->ComponentTemplates.Add(__Local__12);
	auto __Local__13 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__13);
	__Local__10->SplineParams.StartScale = FVector2D(4.000000, 4.000000);
	__Local__10->SplineParams.EndScale = FVector2D(4.000000, 4.000000);
	__Local__10->SplineBoundaryMax = 1.000000f;
	__Local__10->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	__Local__10->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__10->OverrideMaterials.Reserve(1);
	__Local__10->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	__Local__10->Mobility = EComponentMobility::Type::Movable;
	__Local__11->SplineParams.StartScale = FVector2D(4.000000, 4.000000);
	__Local__11->SplineParams.EndScale = FVector2D(4.000000, 4.000000);
	__Local__11->SplineBoundaryMax = 1.000000f;
	__Local__11->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	__Local__11->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__11->OverrideMaterials.Reserve(1);
	__Local__11->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed));
	__Local__11->Mobility = EComponentMobility::Type::Movable;
	__Local__13->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__13->ComponentDelegateBindings.AddUninitialized(12);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__13->ComponentDelegateBindings.GetData(), 12);
	auto& __Local__14 = __Local__13->ComponentDelegateBindings[0];
	__Local__14.ComponentPropertyName = FName(TEXT("ControllerMesh"));
	__Local__14.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__14.FunctionNameToBind = FName(TEXT("BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));
	auto& __Local__15 = __Local__13->ComponentDelegateBindings[1];
	__Local__15.ComponentPropertyName = FName(TEXT("slot_4Collision"));
	__Local__15.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__15.FunctionNameToBind = FName(TEXT("BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_21_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__16 = __Local__13->ComponentDelegateBindings[2];
	__Local__16.ComponentPropertyName = FName(TEXT("slot_4Collision"));
	__Local__16.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__16.FunctionNameToBind = FName(TEXT("BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__17 = __Local__13->ComponentDelegateBindings[3];
	__Local__17.ComponentPropertyName = FName(TEXT("slot_3Collision"));
	__Local__17.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__17.FunctionNameToBind = FName(TEXT("BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__18 = __Local__13->ComponentDelegateBindings[4];
	__Local__18.ComponentPropertyName = FName(TEXT("slot_3Collision"));
	__Local__18.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__18.FunctionNameToBind = FName(TEXT("BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__19 = __Local__13->ComponentDelegateBindings[5];
	__Local__19.ComponentPropertyName = FName(TEXT("slot_2Collision"));
	__Local__19.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__19.FunctionNameToBind = FName(TEXT("BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__20 = __Local__13->ComponentDelegateBindings[6];
	__Local__20.ComponentPropertyName = FName(TEXT("slot_2Collision"));
	__Local__20.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__20.FunctionNameToBind = FName(TEXT("BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__21 = __Local__13->ComponentDelegateBindings[7];
	__Local__21.ComponentPropertyName = FName(TEXT("slot_1Collision"));
	__Local__21.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__21.FunctionNameToBind = FName(TEXT("BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__22 = __Local__13->ComponentDelegateBindings[8];
	__Local__22.ComponentPropertyName = FName(TEXT("slot_1Collision"));
	__Local__22.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__22.FunctionNameToBind = FName(TEXT("BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__23 = __Local__13->ComponentDelegateBindings[9];
	__Local__23.ComponentPropertyName = FName(TEXT("slot_0Collision"));
	__Local__23.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__23.FunctionNameToBind = FName(TEXT("BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__24 = __Local__13->ComponentDelegateBindings[10];
	__Local__24.ComponentPropertyName = FName(TEXT("slot_0Collision"));
	__Local__24.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__24.FunctionNameToBind = FName(TEXT("BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__25 = __Local__13->ComponentDelegateBindings[11];
	__Local__25.ComponentPropertyName = FName(TEXT("GrabSphere"));
	__Local__25.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__25.FunctionNameToBind = FName(TEXT("BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue9__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue10__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue7__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 103:
			{
				__CurrentState = 104;
				break;
			}
		case 104:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 105:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp3__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue9__pf = b0l__K2Node_ComponentBoundEvent_OtherComp3__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				if (!bpfv__CallFunc_ComponentHasTag_ReturnValue9__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 106:
			{
				bpv__current_slot__pf = 4;
			}
		case 107:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 108:
			{
				__CurrentState = 109;
				break;
			}
		case 109:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 110:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp2__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue10__pf = b0l__K2Node_ComponentBoundEvent_OtherComp2__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 4);
				bpfv__CallFunc_BooleanAND_ReturnValue7__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_ComponentHasTag_ReturnValue10__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 111:
			{
				bpv__current_slot__pf = -1;
				__CurrentState = 107;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue7__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue8__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue6__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 94:
			{
				__CurrentState = 95;
				break;
			}
		case 95:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 96:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp5__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue7__pf = b0l__K2Node_ComponentBoundEvent_OtherComp5__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				if (!bpfv__CallFunc_ComponentHasTag_ReturnValue7__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 97:
			{
				bpv__current_slot__pf = 3;
			}
		case 98:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 99:
			{
				__CurrentState = 100;
				break;
			}
		case 100:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 101:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp4__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue8__pf = b0l__K2Node_ComponentBoundEvent_OtherComp4__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 3);
				bpfv__CallFunc_BooleanAND_ReturnValue6__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_ComponentHasTag_ReturnValue8__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue6__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 102:
			{
				bpv__current_slot__pf = -1;
				__CurrentState = 98;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue5__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue6__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue5__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 85:
			{
				__CurrentState = 86;
				break;
			}
		case 86:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 87:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp7__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue5__pf = b0l__K2Node_ComponentBoundEvent_OtherComp7__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				if (!bpfv__CallFunc_ComponentHasTag_ReturnValue5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 88:
			{
				bpv__current_slot__pf = 2;
			}
		case 89:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 90:
			{
				__CurrentState = 91;
				break;
			}
		case 91:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 92:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp6__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue6__pf = b0l__K2Node_ComponentBoundEvent_OtherComp6__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 2);
				bpfv__CallFunc_BooleanAND_ReturnValue5__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_ComponentHasTag_ReturnValue6__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue5__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 93:
			{
				bpv__current_slot__pf = -1;
				__CurrentState = 89;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue3__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue4__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 76:
			{
				__CurrentState = 77;
				break;
			}
		case 77:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 78:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp9__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue3__pf = b0l__K2Node_ComponentBoundEvent_OtherComp9__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				if (!bpfv__CallFunc_ComponentHasTag_ReturnValue3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 79:
			{
				bpv__current_slot__pf = 1;
			}
		case 80:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 81:
			{
				__CurrentState = 82;
				break;
			}
		case 82:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 83:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp8__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue4__pf = b0l__K2Node_ComponentBoundEvent_OtherComp8__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 1);
				bpfv__CallFunc_BooleanAND_ReturnValue4__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_ComponentHasTag_ReturnValue4__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue4__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 84:
			{
				bpv__current_slot__pf = -1;
				__CurrentState = 80;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue__pf{};
	bool bpfv__CallFunc_ComponentHasTag_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 67:
			{
				__CurrentState = 68;
				break;
			}
		case 68:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 69:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp11__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue__pf = b0l__K2Node_ComponentBoundEvent_OtherComp11__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				if (!bpfv__CallFunc_ComponentHasTag_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 70:
			{
				bpv__current_slot__pf = 0;
			}
		case 71:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 72:
			{
				__CurrentState = 73;
				break;
			}
		case 73:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 74:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherComp10__pf))
				{
					bpfv__CallFunc_ComponentHasTag_ReturnValue2__pf = b0l__K2Node_ComponentBoundEvent_OtherComp10__pf->UActorComponent::ComponentHasTag(FName(TEXT("GrabSphere")));
				}
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 0);
				bpfv__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_ComponentHasTag_ReturnValue2__pf, bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue3__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 75:
			{
				bpv__current_slot__pf = -1;
				__CurrentState = 71;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_5(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	float bpfv__CallFunc_MapRangeClamped_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 112:
			{
				__CurrentState = 113;
				break;
			}
		case 113:
			{
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf);
				bpfv__CallFunc_MapRangeClamped_ReturnValue__pf = UKismetMathLibrary::MapRangeClamped(bpfv__CallFunc_VSize_ReturnValue__pf, 0.000000, 1500.000000, 0.000000, 0.800000);
				bpf__RumbleController__pf(bpfv__CallFunc_MapRangeClamped_ReturnValue__pf);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_6(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpf__UpdateInventory__pf();
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpf__SetupRoomScaleOutline__pf();
			}
		case 35:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(false, true);
				}
			}
		case 36:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->SetVisibility(false, false);
				}
			}
		case 37:
			{
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Left)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 59;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Right)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = 38;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Pad)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::ExternalCamera)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Gun)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_1)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_2)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_3)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_4)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_5)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_6)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_7)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_8)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum2_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(bpv__Hand__pf)), EnumToByte<EControllerHand>(TEnumAsByte<EControllerHand>(EControllerHand::Special_9)));
				if (!b0l__K2Node_SwitchEnum2_CmpSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 38:
			{
				if(IsValid(bpv__slot_0Collision__pf))
				{
					bpv__slot_0Collision__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 39:
			{
				if(IsValid(bpv__slot_0Sprite__pf))
				{
					bpv__slot_0Sprite__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 40:
			{
				if(IsValid(bpv__slot_0Amount__pf))
				{
					bpv__slot_0Amount__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 41:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 42:
			{
				if(IsValid(bpv__slot_1Collision__pf))
				{
					bpv__slot_1Collision__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 43:
			{
				if(IsValid(bpv__slot1_Sprite__pf))
				{
					bpv__slot1_Sprite__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 44:
			{
				if(IsValid(bpv__slot_1Amount__pf))
				{
					bpv__slot_1Amount__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 45:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 46:
			{
				if(IsValid(bpv__slot_2Collision__pf))
				{
					bpv__slot_2Collision__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 47:
			{
				if(IsValid(bpv__slot2_Sprite__pf))
				{
					bpv__slot2_Sprite__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 48:
			{
				if(IsValid(bpv__slot_2Amount__pf))
				{
					bpv__slot_2Amount__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 49:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 50:
			{
				if(IsValid(bpv__slot_3Collision__pf))
				{
					bpv__slot_3Collision__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 51:
			{
				if(IsValid(bpv__slot_3Sprite__pf))
				{
					bpv__slot_3Sprite__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 52:
			{
				if(IsValid(bpv__slot_3Amount__pf))
				{
					bpv__slot_3Amount__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 53:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 54:
			{
				if(IsValid(bpv__slot_4Collision__pf))
				{
					bpv__slot_4Collision__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 55:
			{
				if(IsValid(bpv__slot_4Sprite__pf))
				{
					bpv__slot_4Sprite__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 56:
			{
				if(IsValid(bpv__slot_4Amount__pf))
				{
					bpv__slot_4Amount__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 57:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 58:
			{
				if(IsValid(bpv__inventory_core__pf))
				{
					bpv__inventory_core__pf->UActorComponent::K2_DestroyComponent(this);
				}
				__CurrentState = -1;
				break;
			}
		case 59:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->USceneComponent::SetWorldScale3D(FVector(1.000000,-1.000000,1.000000));
				}
			}
		case 60:
			{
				bpf__ToggleInventory__pf();
				__CurrentState = 1;
				break;
			}
		case 66:
			{
				__CurrentState = 34;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_7(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				__CurrentState = 3;
				break;
			}
		case 3:
			{
				b0l__Temp_byte_Variable2__pf = EDynamicForceFeedbackAction::Start;
			}
		case 4:
			{
				b0l__Temp_bool_Variable__pf = false;
				b0l__Temp_bool_Variable2__pf = false;
				b0l__Temp_bool_Variable3__pf = false;
				b0l__Temp_bool_Variable4__pf = false;
				b0l__Temp_bool_Variable5__pf = false;
				b0l__Temp_bool_Variable6__pf = false;
				b0l__Temp_bool_Variable7__pf = false;
				b0l__Temp_bool_Variable8__pf = false;
				b0l__Temp_bool_Variable9__pf = false;
				b0l__Temp_bool_Variable10__pf = false;
				b0l__Temp_bool_Variable11__pf = false;
				b0l__Temp_bool_Variable12__pf = true;
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				b0l__Temp_bool_Variable13__pf = false;
				b0l__Temp_bool_Variable14__pf = false;
				b0l__Temp_byte_Variable__pf = bpv__Hand__pf;
				bpfv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 14, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Gun, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable13__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable14__pf)));
				if(IsValid(bpfv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::PlayDynamicForceFeedback(b0l__K2Node_CustomEvent_Intensity__pf, 0.040000, TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 14, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Gun, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable13__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable14__pf)), TSwitchValue<EControllerHand , bool >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 14, TSwitchPair<EControllerHand , bool >(EControllerHand::Left, b0l__Temp_bool_Variable12__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Right, b0l__Temp_bool_Variable11__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Pad, b0l__Temp_bool_Variable10__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::ExternalCamera, b0l__Temp_bool_Variable9__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Gun, b0l__Temp_bool_Variable8__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_1, b0l__Temp_bool_Variable7__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_2, b0l__Temp_bool_Variable6__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_3, b0l__Temp_bool_Variable5__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_4, b0l__Temp_bool_Variable4__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_5, b0l__Temp_bool_Variable3__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_6, b0l__Temp_bool_Variable2__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_7, b0l__Temp_bool_Variable__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_8, b0l__Temp_bool_Variable13__pf), TSwitchPair<EControllerHand , bool >(EControllerHand::Special_9, b0l__Temp_bool_Variable14__pf)), bpfv__CallFunc_Not_PreBool_ReturnValue3__pf, bpfv__CallFunc_Not_PreBool_ReturnValue3__pf, b0l__Temp_byte_Variable2__pf, FLatentActionInfo(-1, 935972259, TEXT("ExecuteUbergraph_BP_MotionController"), this));
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_8(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue__pf{};
	UAnimInstance* bpfv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanOR_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	float bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf{};
	float bpfv__CallFunc_Add_FloatFloat_ReturnValue3__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf{};
	FVector bpfv__CallFunc_SelectVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 5:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpf__TraceTeleportDestination__pf(/*out*/ b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf);
			}
		case 7:
			{
				bpv__IsValidTeleportDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
			}
		case 8:
			{
				__StateStack.Push(16);
				__StateStack.Push(15);
				__StateStack.Push(14);
				__StateStack.Push(12);
			}
		case 9:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(bpv__IsValidTeleportDestination__pf, true);
				}
			}
		case 10:
			{
				UKismetMathLibrary::BreakVector(b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, 0.900000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Y__pf, 0.900000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_X__pf, 0.900000);
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X2__pf, /*out*/ b0l__CallFunc_BreakVector_Y2__pf, /*out*/ b0l__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z2__pf, 0.100000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Y2__pf, 0.100000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_X2__pf, 0.100000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				bpfv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpfv__CallFunc_MakeVector_ReturnValue__pf, FVector(0.000000,0.000000,-1000.000000));
				bpfv__CallFunc_LineTraceSingleForObjects_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingleForObjects(this, bpfv__CallFunc_MakeVector_ReturnValue__pf, bpfv__CallFunc_Add_VectorVector_ReturnValue__pf, b0l__K2Node_MakeArray_Array__pf, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::ForOneFrame, /*out*/ b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
			}
		case 11:
			{
				UKismetMathLibrary::BreakVector(b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z__pf, 0.900000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Y__pf, 0.900000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_X__pf, 0.900000);
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakVector_X2__pf, /*out*/ b0l__CallFunc_BreakVector_Y2__pf, /*out*/ b0l__CallFunc_BreakVector_Z2__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Z2__pf, 0.100000);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_Y2__pf, 0.100000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue5__pf);
				bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__CallFunc_BreakVector_X2__pf, 0.100000);
				bpfv__CallFunc_Add_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Add_FloatFloat(bpfv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Multiply_FloatFloat_ReturnValue6__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_Add_FloatFloat_ReturnValue3__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_Add_FloatFloat_ReturnValue__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpfv__CallFunc_SelectVector_ReturnValue__pf = UKismetMathLibrary::SelectVector(b0l__CallFunc_BreakHitResult_Location__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf, b0l__CallFunc_BreakHitResult_bBlockingHit__pf);
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->USceneComponent::K2_SetWorldLocation(bpfv__CallFunc_SelectVector_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__bLastFrameValidDestination__pf);
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__IsValidTeleportDestination__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__IsValidTeleportDestination__pf, bpfv__CallFunc_Not_PreBool_ReturnValue__pf);
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpv__bLastFrameValidDestination__pf, bpfv__CallFunc_Not_PreBool_ReturnValue2__pf);
				bpfv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_BooleanAND_ReturnValue2__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpf__RumbleController__pf(0.300000);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpv__bLastFrameValidDestination__pf = b0l__CallFunc_TraceTeleportDestination_Success__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpf__UpdateArcSpline__pf(b0l__CallFunc_TraceTeleportDestination_Success__pf, /*out*/ b0l__CallFunc_TraceTeleportDestination_TracePoints__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpf__UpdateArcEndpoint__pf(b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf, b0l__CallFunc_TraceTeleportDestination_Success__pf);
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				bpf__ClearArc__pf();
				__CurrentState = 5;
				break;
			}
		case 18:
			{
				__StateStack.Push(30);
				__StateStack.Push(17);
			}
		case 19:
			{
				__StateStack.Push(28);
			}
		case 20:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(bpv__AttachedActor__pf, ((UObject*)nullptr));
				bpfv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf, bpv__bWantsToGrip__pf);
				if (!bpfv__CallFunc_BooleanOR_ReturnValue2__pf)
				{
					__CurrentState = 22;
					break;
				}
			}
		case 21:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				bpf__GetActorNearHand__pf(/*out*/ b0l__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 23:
			{
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf = UKismetMathLibrary::NotEqual_ObjectObject(((UObject*)nullptr), ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue2__pf)
				{
					__CurrentState = 25;
					break;
				}
			}
		case 24:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator1;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 25:
			{
				if (!bpv__bWantsToGrip__pf)
				{
					__CurrentState = 27;
					break;
				}
			}
		case 26:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator2;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				bpv__GripState__pf = E__GripEnum__pf::NewEnumerator0;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpfv__CallFunc_GetAnimInstance_ReturnValue__pf = bpv__HandMesh__pf->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf = Cast<URightHand_AnimBP_C__pf558596347>(bpfv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 29:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf))
				{
					b0l__K2Node_DynamicCast_AsRight_Hand_Anim_BP__pf->bpv__GripState__pf = bpv__GripState__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 30:
			{
				bpf__UpdateRoomScaleOutline__pf();
			}
		case 31:
			{
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(bpv__GripState__pf)), EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(E__GripEnum__pf::NewEnumerator0)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 33;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(bpv__GripState__pf)), EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(E__GripEnum__pf::NewEnumerator1)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 33;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(bpv__GripState__pf)), EnumToByte<E__GripEnum__pf>(TEnumAsByte<E__GripEnum__pf>(E__GripEnum__pf::NewEnumerator2)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					__CurrentState = 32;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				if(IsValid(bpv__HandMesh__pf))
				{
					bpv__HandMesh__pf->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 65:
			{
				__CurrentState = 18;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ExecuteUbergraph_BP_MotionController__pf_9(int32 bpp__EntryPoint__pf)
{
	bool bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 61:
			{
				__CurrentState = 62;
				break;
			}
		case 62:
			{
				b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = Cast<UStaticMeshComponent>(b0l__K2Node_ComponentBoundEvent_OtherComp12__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 63:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf))
				{
					bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf = b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf->IsSimulatingPhysics(FName(TEXT("None")));
				}
				if (!bpfv__CallFunc_IsSimulatingPhysics_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 64:
			{
				bpf__RumbleController__pf(0.800000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__27;
	T__Local__27& bpp__Hit__pf = *const_cast<T__Local__27 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_5(112);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_21_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_0(108);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_4Collision_K2Node_ComponentBoundEvent_20_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__28;
	T__Local__28& bpp__SweepResult__pf = *const_cast<T__Local__28 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor3__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp3__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_0(103);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_19_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent3__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor4__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp4__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex3__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_1(99);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_3Collision_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__29;
	T__Local__29& bpp__SweepResult__pf = *const_cast<T__Local__29 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent4__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor5__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp5__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex4__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep2__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult2__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_1(94);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_17_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent5__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor6__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp6__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex5__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_2(90);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_2Collision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__30;
	T__Local__30& bpp__SweepResult__pf = *const_cast<T__Local__30 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent6__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor7__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp7__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex6__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep3__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult3__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_2(85);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent7__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor8__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp8__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex7__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_3(81);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_1Collision_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__31;
	T__Local__31& bpp__SweepResult__pf = *const_cast<T__Local__31 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent8__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor9__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp9__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex8__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep4__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult4__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_3(76);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent9__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor10__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp10__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex9__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_4(72);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__slot_0Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__32;
	T__Local__32& bpp__SweepResult__pf = *const_cast<T__Local__32 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent10__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor11__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp11__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex10__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep5__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult5__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_4(67);
}
void ABP_MotionController_C__pf563933975::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_BP_MotionController__pf_6(66);
}
void ABP_MotionController_C__pf563933975::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_8(65);
}
void ABP_MotionController_C__pf563933975::bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__33;
	T__Local__33& bpp__SweepResult__pf = *const_cast<T__Local__33 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent11__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor12__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp12__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex11__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep6__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult6__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_9(61);
}
void ABP_MotionController_C__pf563933975::bpf__RumbleController__pf(float bpp__Intensity__pf)
{
	b0l__K2Node_CustomEvent_Intensity__pf = bpp__Intensity__pf;
	bpf__ExecuteUbergraph_BP_MotionController__pf_7(2);
}
void ABP_MotionController_C__pf563933975::bpf__UserConstructionScript__pf()
{
	if(IsValid(bpv__MotionController__pf))
	{
		bpv__MotionController__pf->Hand = bpv__Hand__pf;
	}
}
void ABP_MotionController_C__pf563933975::bpf__GetActorNearHand__pf(/*out*/ AActor*& bpp__NearestMesh__pf)
{
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<AActor*> bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf{};
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	AActor* bpfv__CallFunc_Array_Get_Item__pf{};
	bool bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	float bpfv__NearestOverlap__pf{};
	AActor* bpfv__NearestOverlappingActor__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__NearestOverlap__pf = 10000.000000;
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(12);
			}
		case 7:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf = UKismetSystemLibrary::DoesImplementInterface(bpfv__CallFunc_Array_Get_Item__pf, UPickupActorInterface_C::StaticClass());
				if (!bpfv__CallFunc_DoesImplementInterface_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, bpfv__NearestOverlap__pf);
				if (!bpfv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf).Reset();
					bpv__GrabSphere__pf->UPrimitiveComponent::GetOverlappingActors(/*out*/ bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, AActor::StaticClass());
				}
				FCustomThunkTemplates::Array_Get(bpfv__CallFunc_GetOverlappingActors_OverlappingActors__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				bpfv__NearestOverlappingActor__pf = bpfv__CallFunc_Array_Get_Item__pf;
			}
		case 10:
			{
				bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf);
				bpfv__NearestOverlap__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bpp__NearestMesh__pf = bpfv__NearestOverlappingActor__pf;
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ReleaseActor__pf()
{
	bool bpfv__CallFunc_IsValidInventoryItem_is_valid__pf{};
	bool bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue2__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	USceneComponent* bpfv__CallFunc_GetAttachParent_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = false;
			}
		case 2:
			{
				if(IsValid(bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__AttachedActor__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_GetAttachParent_ReturnValue__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::GetAttachParent();
				}
				bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::EqualEqual_ObjectObject(bpfv__CallFunc_GetAttachParent_ReturnValue__pf, bpv__MotionController__pf);
				if (!bpfv__CallFunc_EqualEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 3:
			{
				bpf__IsValidInventoryItem__pf(bpv__AttachedActor__pf, /*out*/ bpfv__CallFunc_IsValidInventoryItem_is_valid__pf);
			}
		case 4:
			{
				if(IsValid(bpv__otherHand__pf))
				{
					int32  __Local__34 = 0;
					bpv__otherHand__pf->bpf__CurrentSlotIsEmpty__pf(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__current_slot__pf) : (__Local__34)), /*out*/ bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf);
				}
			}
		case 5:
			{
				bool  __Local__35 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf, ((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__inventoryOpen__pf) : (__Local__35)));
				bpfv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_BooleanAND_ReturnValue__pf, bpfv__CallFunc_IsValidInventoryItem_is_valid__pf);
				if (!bpfv__CallFunc_BooleanAND_ReturnValue2__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				if(IsValid(bpv__otherHand__pf))
				{
					int32  __Local__36 = 0;
					bpv__otherHand__pf->bpf__InventoryPush__pf(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__current_slot__pf) : (__Local__36)));
				}
			}
		case 7:
			{
				bpv__AttachedActor__pf = ((AActor*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if ( bpv__AttachedActor__pf && bpv__AttachedActor__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpv__AttachedActor__pf);
					void* IAddress = bpv__AttachedActor__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Drop__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() );
				}
			}
		case 10:
			{
				bpf__RumbleController__pf(0.200000);
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__GrabActor__pf()
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	AInGame_Item_C__pf563933975* bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_Find_ReturnValue__pf{};
	bool bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	AActor* bpfv__CallFunc_GetActorNearHand_NearestMesh__pf{};
	TScriptInterface<IPickupActorInterface_C> bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess2__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpv__bWantsToGrip__pf = true;
			}
		case 2:
			{
				int32  __Local__37 = 0;
				bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::NotEqual_IntInt(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__current_slot__pf) : (__Local__37)), -1);
				bool  __Local__38 = false;
				bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpfv__CallFunc_NotEqual_IntInt_ReturnValue__pf, ((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__inventoryOpen__pf) : (__Local__38)));
				if (!bpfv__CallFunc_BooleanAND_ReturnValue__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__otherHand__pf))
				{
					int32  __Local__39 = 0;
					bpv__otherHand__pf->bpf__CurrentSlotIsEmpty__pf(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__current_slot__pf) : (__Local__39)), /*out*/ bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_CurrentSlotIsEmpty_is_empty__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue2__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 5:
			{
				if(IsValid(bpv__otherHand__pf))
				{
					int32  __Local__40 = 0;
					bpv__otherHand__pf->bpf__InventoryPull__pf(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__current_slot__pf) : (__Local__40)));
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpf__GetActorNearHand__pf(/*out*/ bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
			}
		case 7:
			{
				bpv__AttachedActor__pf = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf;
			}
		case 8:
			{
				if ( bpfv__CallFunc_GetActorNearHand_NearestMesh__pf && bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetClass()->ImplementsInterface(UPickupActorInterface_C::StaticClass()) )
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(bpfv__CallFunc_GetActorNearHand_NearestMesh__pf);
					void* IAddress = bpfv__CallFunc_GetActorNearHand_NearestMesh__pf->GetInterfaceAddress(UPickupActorInterface_C::StaticClass());
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetInterface(IAddress);
				}
				else
				{
					bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.SetObject(nullptr);
				}
				bpfv__K2Node_DynamicCast_bSuccess2__pf = (bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess2__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 9:
			{
				if(IsValid(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf))
				{
					IPickupActorInterface_C::Execute_bpf__Pickup__pf(bpfv__K2Node_DynamicCast_AsPickup_Actor_Interface__pf.GetObject() , bpv__MotionController__pf);
				}
			}
		case 10:
			{
				bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf = Cast<AInGame_Item_C__pf563933975>(bpv__AttachedActor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 11:
			{
				USoundWave*  __Local__41 = ((USoundWave*)nullptr);
				bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf = UKismetMathLibrary::NotEqual_ObjectObject(((IsValid(bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf)) ? (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf->bpv__pickup_wave__pf) : (__Local__41)), ((UObject*)nullptr));
				if (!bpfv__CallFunc_NotEqual_ObjectObject_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 12:
			{
				TArray<USoundWave*>  __Local__42 = TArray<USoundWave*> {};
				USoundWave*  __Local__43 = ((USoundWave*)nullptr);
				bpfv__CallFunc_Array_Find_ReturnValue__pf = FCustomThunkTemplates::Array_Find(((IsValid(bpv__motion_controller_pawn__pf)) ? (bpv__motion_controller_pawn__pf->bpv__played_waves__pf) : (__Local__42)), ((IsValid(bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf)) ? (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf->bpv__pickup_wave__pf) : (__Local__43)));
				bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::GreaterEqual_IntInt(bpfv__CallFunc_Array_Find_ReturnValue__pf, 0);
				bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_GreaterEqual_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_Not_PreBool_ReturnValue__pf)
				{
					__CurrentState = 15;
					break;
				}
			}
		case 13:
			{
				if(IsValid(bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				USoundWave*  __Local__44 = ((USoundWave*)nullptr);
				UGameplayStatics::PlaySoundAtLocation(this, ((IsValid(bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf)) ? (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf->bpv__pickup_wave__pf) : (__Local__44)), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
			}
		case 14:
			{
				TArray<USoundWave*>  __Local__45 = TArray<USoundWave*> {};
				USoundWave*  __Local__46 = ((USoundWave*)nullptr);
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(((IsValid(bpv__motion_controller_pawn__pf)) ? (bpv__motion_controller_pawn__pf->bpv__played_waves__pf) : (__Local__45)), ((IsValid(bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf)) ? (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf->bpv__pickup_wave__pf) : (__Local__46)));
			}
		case 15:
			{
				bpf__RumbleController__pf(0.700000);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ActivateTeleporter__pf()
{
	FRotator bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	bpv__IsTeleporterActive__pf = true;
	if(IsValid(bpv__TeleportCylinder__pf))
	{
		bpv__TeleportCylinder__pf->SetVisibility(true, true);
	}
	if(IsValid(bpv__RoomScaleMesh__pf))
	{
		bpv__RoomScaleMesh__pf->SetVisibility(bpv__IsRoomScale__pf, false);
	}
	if(IsValid(bpv__MotionController__pf))
	{
		bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__MotionController__pf->USceneComponent::K2_GetComponentRotation();
	}
	bpv__InitialControllerRotation__pf = bpfv__CallFunc_K2_GetComponentRotation_ReturnValue__pf;
}
void ABP_MotionController_C__pf563933975::bpf__DisableTeleporter__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__IsTeleporterActive__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				bpv__IsTeleporterActive__pf = false;
			}
		case 3:
			{
				if(IsValid(bpv__TeleportCylinder__pf))
				{
					bpv__TeleportCylinder__pf->SetVisibility(false, true);
				}
			}
		case 4:
			{
				if(IsValid(bpv__ArcEndPoint__pf))
				{
					bpv__ArcEndPoint__pf->SetVisibility(false, false);
				}
			}
		case 5:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__TraceTeleportDestination__pf(/*out*/ bool& bpp__Success__pf, /*out*/ TArray<FVector>& bpp__TracePoints__pf, /*out*/ FVector& bpp__NavMeshLocation__pf, /*out*/ FVector& bpp__TraceLocation__pf)
{
	TArray<AActor*> bpfv__Temp_object_Variable__pf{};
	FVector bpfv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	UNavigationSystem* bpfv__CallFunc_GetNavigationSystem_ReturnValue__pf{};
	TArray<TEnumAsByte<EObjectTypeQuery> > bpfv__K2Node_MakeArray_Array__pf{};
	FHitResult bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf{};
	TArray<FVector> bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf{};
	FVector bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutLastTraceDestination__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf{};
	bool bpfv__CallFunc_BreakHitResult_bBlockingHit__pf{};
	bool bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf{};
	float bpfv__CallFunc_BreakHitResult_Time__pf{};
	FVector bpfv__CallFunc_BreakHitResult_Location__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactPoint__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_Normal__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_ImpactNormal__pf(EForceInit::ForceInit);
	UPhysicalMaterial* bpfv__CallFunc_BreakHitResult_PhysMat__pf{};
	AActor* bpfv__CallFunc_BreakHitResult_HitActor__pf{};
	UPrimitiveComponent* bpfv__CallFunc_BreakHitResult_HitComponent__pf{};
	FName bpfv__CallFunc_BreakHitResult_HitBoneName__pf{};
	int32 bpfv__CallFunc_BreakHitResult_HitItem__pf{};
	int32 bpfv__CallFunc_BreakHitResult_FaceIndex__pf{};
	FVector bpfv__CallFunc_BreakHitResult_TraceStart__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_BreakHitResult_TraceEnd__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FVector bpfv__CallFunc_ProjectPointToNavigation_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__ProjectNavExtends__pf{};
	TArray<FVector> bpfv__UsedTracePoints__pf{};
	int32 bpfv__NrOfSegments__pf{};
	bool bpfv__HitSurface__pf{};
	FVector bpfv__CurrentTraceStart__pf(EForceInit::ForceInit);
	bpfv__ProjectNavExtends__pf = 500.000000;
	bpfv__NrOfSegments__pf = 15;
	if(IsValid(bpv__ArcDirection__pf))
	{
		bpfv__CallFunc_GetForwardVector_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::GetForwardVector();
	}
	bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpfv__CallFunc_GetForwardVector_ReturnValue__pf, bpv__TeleportLaunchVelocity__pf);
	if(IsValid(bpv__ArcDirection__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__ArcDirection__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__K2Node_MakeArray_Array__pf.SetNum(1, true);
	bpfv__K2Node_MakeArray_Array__pf[0] = EObjectTypeQuery::ObjectTypeQuery1;
	(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf).Reset();
	bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf = UGameplayStatics::Blueprint_PredictProjectilePath_ByObjectType(this, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf, /*out*/ bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutLastTraceDestination__pf, bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_Multiply_VectorFloat_ReturnValue__pf, true, 0.000000, bpfv__K2Node_MakeArray_Array__pf, false, bpfv__Temp_object_Variable__pf, EDrawDebugTrace::None, 0.000000, 30.000000, 2.000000, 0.000000);
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__ProjectNavExtends__pf, bpfv__ProjectNavExtends__pf, bpfv__ProjectNavExtends__pf);
	bpfv__CallFunc_GetNavigationSystem_ReturnValue__pf = UNavigationSystem::GetNavigationSystem(this);
	UGameplayStatics::BreakHitResult(bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ bpfv__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Time__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Location__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ bpfv__CallFunc_BreakHitResult_Normal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ bpfv__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitActor__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ bpfv__CallFunc_BreakHitResult_HitItem__pf, /*out*/ bpfv__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ bpfv__CallFunc_BreakHitResult_TraceEnd__pf);
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(true, bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_ReturnValue__pf);
	bpfv__CallFunc_ProjectPointToNavigation_ReturnValue__pf = UNavigationSystem::ProjectPointToNavigation(this, bpfv__CallFunc_BreakHitResult_Location__pf, ((ANavigationData*)nullptr), ((UClass*)nullptr), bpfv__CallFunc_MakeVector_ReturnValue__pf);
	bpp__Success__pf = bpfv__CallFunc_BooleanAND_ReturnValue__pf;
	bpp__TracePoints__pf = bpfv__CallFunc_Blueprint_PredictProjectilePath_ByObjectType_OutPathPositions__pf;
	bpp__NavMeshLocation__pf = bpfv__CallFunc_ProjectPointToNavigation_ReturnValue__pf;
	bpp__TraceLocation__pf = bpfv__CallFunc_BreakHitResult_Location__pf;
}
void ABP_MotionController_C__pf563933975::bpf__ClearArc__pf()
{
	int32 bpfv__Temp_int_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	USplineMeshComponent* bpfv__CallFunc_Array_Get_Item__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 2:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__SplineMeshes__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				FCustomThunkTemplates::Array_Get(bpv__SplineMeshes__pf, bpfv__Temp_int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf))
				{
					bpfv__CallFunc_Array_Get_Item__pf->UActorComponent::K2_DestroyComponent(this);
				}
			}
		case 4:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 2;
				break;
			}
		case 5:
			{
				FCustomThunkTemplates::Array_Clear(bpv__SplineMeshes__pf);
			}
		case 6:
			{
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::ClearSplinePoints(true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateArcSpline__pf(bool bpp__FoundValidLocation__pf, /*out*/ TArray<FVector>& bpp__SplinePoints__pf)
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Array_LastIndex_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	FVector bpfv__CallFunc_Array_Get_Item__pf(EForceInit::ForceInit);
	FTransform bpfv__CallFunc_MakeTransform_ReturnValue__pf{};
	int32 bpfv__Temp_int_Variable__pf{};
	USplineMeshComponent* bpfv__CallFunc_AddComponent_ReturnValue__pf{};
	FVector bpfv__CallFunc_Array_Get_Item2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Array_Add_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	FVector bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Array_Get_Item3__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue3__pf{};
	int32 bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf{};
	int32 bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpp__FoundValidLocation__pf)
				{
					__CurrentState = 2;
					break;
				}
			}
		case 2:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 3:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpp__SplinePoints__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 5:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 6:
			{
				__StateStack.Push(16);
			}
		case 7:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::AddSplinePoint(bpfv__CallFunc_Array_Get_Item__pf, ESplineCoordinateSpace::Local, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				bpfv__CallFunc_Array_LastIndex_ReturnValue__pf = FCustomThunkTemplates::Array_LastIndex(bpp__SplinePoints__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpv__ArcSpline__pf->USplineComponent::SetSplinePointType(bpfv__CallFunc_Array_LastIndex_ReturnValue__pf, ESplinePointType::CurveClamped, true);
				}
			}
		case 9:
			{
				bpfv__Temp_int_Variable__pf = 0;
			}
		case 10:
			{
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetNumberOfSplinePoints();
				}
				bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf = UKismetMathLibrary::Subtract_IntInt(bpfv__CallFunc_GetNumberOfSplinePoints_ReturnValue__pf, 2);
				bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::LessEqual_IntInt(bpfv__Temp_int_Variable__pf, bpfv__CallFunc_Subtract_IntInt_ReturnValue__pf);
				if (!bpfv__CallFunc_LessEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 11:
			{
				__StateStack.Push(15);
			}
		case 12:
			{
				bpfv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(FVector(0.000000,0.000000,0.000000), FRotator(0.000000,0.000000,0.000000), FVector(1.000000,1.000000,1.000000));
				bpfv__CallFunc_AddComponent_ReturnValue__pf = CastChecked<USplineMeshComponent>(AActor::AddComponent(FName(TEXT("NODE_AddSplineMeshComponent-1")), true, bpfv__CallFunc_MakeTransform_ReturnValue__pf, this), ECastCheckedType::NullAllowed);
			}
		case 13:
			{
				bpfv__CallFunc_Array_Add_ReturnValue__pf = FCustomThunkTemplates::Array_Add(bpv__SplineMeshes__pf, bpfv__CallFunc_AddComponent_ReturnValue__pf);
			}
		case 14:
			{
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__Temp_int_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpfv__Temp_int_Variable__pf, ESplineCoordinateSpace::Local);
				}
				FCustomThunkTemplates::Array_Get(bpp__SplinePoints__pf, bpfv__CallFunc_Add_IntInt_ReturnValue2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item3__pf);
				if(IsValid(bpv__ArcSpline__pf))
				{
					bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf = bpv__ArcSpline__pf->USplineComponent::GetTangentAtSplinePoint(bpfv__CallFunc_Add_IntInt_ReturnValue2__pf, ESplineCoordinateSpace::Local);
				}
				if(IsValid(bpfv__CallFunc_AddComponent_ReturnValue__pf))
				{
					bpfv__CallFunc_AddComponent_ReturnValue__pf->USplineMeshComponent::SetStartAndEnd(bpfv__CallFunc_Array_Get_Item2__pf, bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue__pf, bpfv__CallFunc_Array_Get_Item3__pf, bpfv__CallFunc_GetTangentAtSplinePoint_ReturnValue2__pf, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue3__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Variable__pf, 1);
				bpfv__Temp_int_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue3__pf;
				__CurrentState = 10;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 4;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateArcEndpoint__pf(FVector bpp__NewLocation__pf, bool bpp__ValidLocationFound__pf)
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf{};
	FRotator bpfv__CallFunc_ComposeRotators_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult2__pf{};
	bool bpfv__CallFunc_BooleanAND_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf{};
	bpfv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpp__ValidLocationFound__pf, bpv__IsTeleporterActive__pf);
	if(IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->SetVisibility(bpfv__CallFunc_BooleanAND_ReturnValue__pf, false);
	}
	if(IsValid(bpv__ArcEndPoint__pf))
	{
		bpv__ArcEndPoint__pf->USceneComponent::K2_SetWorldLocation(bpp__NewLocation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldLocation_SweepHitResult__pf, true);
	}
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
	bpfv__CallFunc_ComposeRotators_ReturnValue__pf = UKismetMathLibrary::ComposeRotators(bpv__TeleportRotation__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
	if(IsValid(bpv__Arrow__pf))
	{
		bpv__Arrow__pf->USceneComponent::K2_SetWorldRotation(bpfv__CallFunc_ComposeRotators_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult2__pf, false);
	}
	if(IsValid(bpv__RoomScaleMesh__pf))
	{
		bpv__RoomScaleMesh__pf->USceneComponent::K2_SetWorldRotation(bpv__TeleportRotation__pf, false, /*out*/ bpfv__CallFunc_K2_SetWorldRotation_SweepHitResult__pf, false);
	}
}
void ABP_MotionController_C__pf563933975::bpf__SetupRoomScaleOutline__pf()
{
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	TArray<FVector> bpfv__CallFunc_GetBounds_ReturnValue__pf{};
	FVector bpfv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf{};
	float bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf{};
	FHitResult bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue2__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf{};
	bool bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf{};
	bool bpfv__CallFunc_BooleanNAND_ReturnValue__pf{};
	float bpfv__ChaperoneMeshHeight__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__ChaperoneMeshHeight__pf = 70.000000;
			}
		case 2:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(0.000000, 0.000000, 1.000000);
				if(IsValid(bpv__SteamVRChaperone__pf))
				{
					bpfv__CallFunc_GetBounds_ReturnValue__pf = bpv__SteamVRChaperone__pf->USteamVRChaperoneComponent::GetBounds();
				}
				UKismetMathLibrary::MinimumAreaRectangle(this, bpfv__CallFunc_GetBounds_ReturnValue__pf, bpfv__CallFunc_MakeVector_ReturnValue__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutRectCenter__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, /*out*/ bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, false);
			}
		case 3:
			{
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, 100.000000, 0.010000);
				bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::NearlyEqual_FloatFloat(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, 100.000000, 0.010000);
				bpfv__CallFunc_BooleanNAND_ReturnValue__pf = UKismetMathLibrary::BooleanNAND(bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue2__pf, bpfv__CallFunc_NearlyEqual_FloatFloat_ReturnValue__pf);
				bpv__IsRoomScale__pf = bpfv__CallFunc_BooleanNAND_ReturnValue__pf;
			}
		case 4:
			{
				if (!bpv__IsRoomScale__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 5:
			{
				bpfv__CallFunc_MakeVector_ReturnValue2__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthX__pf, bpfv__CallFunc_MinimumAreaRectangle_OutSideLengthY__pf, bpfv__ChaperoneMeshHeight__pf);
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::SetWorldScale3D(bpfv__CallFunc_MakeVector_ReturnValue2__pf);
				}
			}
		case 6:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MinimumAreaRectangle_OutRectRotation__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateRoomScaleOutline__pf()
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsVisible_ReturnValue__pf{};
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakRotator_Roll__pf{};
	float bpfv__CallFunc_BreakRotator_Pitch__pf{};
	float bpfv__CallFunc_BreakRotator_Yaw__pf{};
	FVector bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpfv__CallFunc_IsVisible_ReturnValue__pf = bpv__RoomScaleMesh__pf->IsVisible();
				}
				if (!bpfv__CallFunc_IsVisible_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
				UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_BreakRotator_Roll__pf, /*out*/ bpfv__CallFunc_BreakRotator_Pitch__pf, /*out*/ bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Divide_VectorFloat(bpfv__CallFunc_MakeVector_ReturnValue__pf, -1.000000);
				bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, bpfv__CallFunc_BreakRotator_Yaw__pf);
				bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf = UKismetMathLibrary::LessLess_VectorRotator(bpfv__CallFunc_Divide_VectorFloat_ReturnValue__pf, bpfv__CallFunc_MakeRotator_ReturnValue__pf);
				if(IsValid(bpv__RoomScaleMesh__pf))
				{
					bpv__RoomScaleMesh__pf->USceneComponent::K2_SetRelativeLocation(bpfv__CallFunc_LessLess_VectorRotator_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__GetTeleportDestination__pf(/*out*/ FVector& bpp__Location__pf, /*out*/ FRotator& bpp__Rotation__pf)
{
	FRotator bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_BreakVector_X__pf{};
	float bpfv__CallFunc_BreakVector_Y__pf{};
	float bpfv__CallFunc_BreakVector_Z__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(/*out*/ bpfv__CallFunc_GetOrientationAndPosition_DeviceRotation__pf, /*out*/ bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf);
	UKismetMathLibrary::BreakVector(bpfv__CallFunc_GetOrientationAndPosition_DevicePosition__pf, /*out*/ bpfv__CallFunc_BreakVector_X__pf, /*out*/ bpfv__CallFunc_BreakVector_Y__pf, /*out*/ bpfv__CallFunc_BreakVector_Z__pf);
	if(IsValid(bpv__TeleportCylinder__pf))
	{
		bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__TeleportCylinder__pf->USceneComponent::K2_GetComponentLocation();
	}
	bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(bpfv__CallFunc_BreakVector_X__pf, bpfv__CallFunc_BreakVector_Y__pf, 0.000000);
	bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf = UKismetMathLibrary::GreaterGreater_VectorRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf, bpv__TeleportRotation__pf);
	bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf = UKismetMathLibrary::Subtract_VectorVector(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, bpfv__CallFunc_GreaterGreater_VectorRotator_ReturnValue__pf);
	bpp__Location__pf = bpfv__CallFunc_Subtract_VectorVector_ReturnValue__pf;
	bpp__Rotation__pf = bpv__TeleportRotation__pf;
}
void ABP_MotionController_C__pf563933975::bpf__ToggleInventory__pf()
{
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__inventoryOpen__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 2:
			{
				bpv__inventoryOpen__pf = false;
			}
		case 3:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->SetVisibility(false, true);
				}
			}
		case 4:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->SetVisibility(false, true);
				}
			}
		case 5:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->SetVisibility(false, true);
				}
			}
		case 6:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->SetVisibility(false, true);
				}
			}
		case 7:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->SetVisibility(false, true);
				}
			}
		case 8:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->ULightComponent::SetIntensity(20.000000);
				}
			}
		case 9:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->ULightComponent::SetLightColor(FLinearColor(0.066667,0.850980,1.000000,1.000000), true);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpv__inventoryOpen__pf = true;
			}
		case 11:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->SetVisibility(true, true);
				}
			}
		case 12:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->SetVisibility(true, true);
				}
			}
		case 13:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->SetVisibility(true, true);
				}
			}
		case 14:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->SetVisibility(true, true);
				}
			}
		case 15:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->SetVisibility(true, true);
				}
			}
		case 16:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->ULightComponent::SetIntensity(60.000000);
				}
			}
		case 17:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->ULightComponent::SetLightColor(FLinearColor(0.051397,1.000000,0.068340,1.000000), true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__ToggleTorch__pf()
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__hand_torch__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__hand_torch__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
			}
		case 2:
			{
				if (!bpv__torchActive__pf)
				{
					__CurrentState = 6;
					break;
				}
			}
		case 3:
			{
				bpv__torchActive__pf = false;
			}
		case 4:
			{
				if(IsValid(bpv__hand_torch__pf))
				{
					bpv__hand_torch__pf->SetVisibility(false, true);
				}
			}
		case 5:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->SetVisibility(true, false);
				}
				__CurrentState = -1;
				break;
			}
		case 6:
			{
				bpv__torchActive__pf = true;
			}
		case 7:
			{
				if(IsValid(bpv__hand_torch__pf))
				{
					bpv__hand_torch__pf->SetVisibility(true, true);
				}
			}
		case 8:
			{
				if(IsValid(bpv__hand_light__pf))
				{
					bpv__hand_light__pf->SetVisibility(false, false);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__UpdateInventory__pf()
{
	bool bpfv__CallFunc_SetSprite_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue4__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue5__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue6__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue11__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue12__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue13__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue7__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue8__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue14__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue9__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue10__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue15__pf{};
	FText bpfv__xxx__pfTTT{};
	FText bpfv__xxxxx__pfTT{};
	FText bpfv__x__pf{};
	FText bpfv__xxxxo__pfTT{};
	FText bpfv__xxoxo__pfTT{};
	FText bpfv__NewLocalVar_0__pf{};
	FText bpfv__xxemptyxx__pfXyTTVy{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__xxxxx__pfTT = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("x x x"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("EAE6BFD94E79E2EC0AB8019C65C82186") /* Key */
	);
			}
		case 2:
			{
				bpfv__x__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("x"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("2C9235AA4EB4C3C5E11736941D1C04C3") /* Key */
	);
			}
		case 3:
			{
				bpfv__xxxxo__pfTT = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("x x o"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("154B1E2140E1D813A5278BB8B5420CC9") /* Key */
	);
			}
		case 4:
			{
				bpfv__xxoxo__pfTT = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("x o o"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("444B52E64CAB67EAE9F7CE980EF6F1DD") /* Key */
	);
			}
		case 5:
			{
				bpfv__xxemptyxx__pfXyTTVy = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("[ empty ]"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("ED050CB243823B77BFB40B9D782F56EE") /* Key */
	);
			}
		case 6:
			{
				__StateStack.Push(44);
				__StateStack.Push(34);
				__StateStack.Push(24);
				__StateStack.Push(14);
			}
		case 7:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue15__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot0_amount__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue15__pf)
				{
					__CurrentState = 54;
					break;
				}
			}
		case 8:
			{
				if(IsValid(bpv__slot_0Amount__pf))
				{
					bpv__slot_0Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 9:
			{
				if(IsValid(bpv__slot_0Amount__pf))
				{
					bpv__slot_0Amount__pf->UTextRenderComponent::SetWorldSize(4.000000);
				}
			}
		case 10:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 11:
			{
				if(IsValid(bpv__slot_0Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue7__pf = bpv__slot_0Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 12:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue14__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot1_amount__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue14__pf)
				{
					__CurrentState = 21;
					break;
				}
			}
		case 15:
			{
				if(IsValid(bpv__slot_1Amount__pf))
				{
					bpv__slot_1Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 16:
			{
				if(IsValid(bpv__slot_1Amount__pf))
				{
					bpv__slot_1Amount__pf->UTextRenderComponent::SetWorldSize(4.000000);
				}
			}
		case 17:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 18:
			{
				if(IsValid(bpv__slot1_Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue8__pf = bpv__slot1_Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 19:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot1_amount__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 22:
			{
				if(IsValid(bpv__slot_1__pf))
				{
					bpv__slot_1__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 23:
			{
				if(IsValid(bpv__slot1_Sprite__pf))
				{
					UPaperSprite*  __Local__47 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue__pf = bpv__slot1_Sprite__pf->SetSprite(((IsValid(bpv__slot1_item__pf)) ? (bpv__slot1_item__pf->bpv__item_sprite__pf) : (__Local__47)));
				}
				__CurrentState = 19;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue13__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot2_amount__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue13__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 25:
			{
				if(IsValid(bpv__slot_2Amount__pf))
				{
					bpv__slot_2Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 26:
			{
				if(IsValid(bpv__slot_2Amount__pf))
				{
					bpv__slot_2Amount__pf->UTextRenderComponent::SetWorldSize(4.000000);
				}
			}
		case 27:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 28:
			{
				if(IsValid(bpv__slot2_Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue6__pf = bpv__slot2_Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 29:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot2_amount__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
			{
				if(IsValid(bpv__slot_2__pf))
				{
					bpv__slot_2__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 33:
			{
				if(IsValid(bpv__slot2_Sprite__pf))
				{
					UPaperSprite*  __Local__48 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue4__pf = bpv__slot2_Sprite__pf->SetSprite(((IsValid(bpv__slot2_item__pf)) ? (bpv__slot2_item__pf->bpv__item_sprite__pf) : (__Local__48)));
				}
				__CurrentState = 29;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue12__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot3_amount__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue12__pf)
				{
					__CurrentState = 41;
					break;
				}
			}
		case 35:
			{
				if(IsValid(bpv__slot_3Amount__pf))
				{
					bpv__slot_3Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 36:
			{
				if(IsValid(bpv__slot_3Amount__pf))
				{
					bpv__slot_3Amount__pf->UTextRenderComponent::SetWorldSize(4.000000);
				}
			}
		case 37:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 38:
			{
				if(IsValid(bpv__slot_3Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue10__pf = bpv__slot_3Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 39:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot3_amount__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				if(IsValid(bpv__slot_3__pf))
				{
					bpv__slot_3__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 43:
			{
				if(IsValid(bpv__slot_3Sprite__pf))
				{
					UPaperSprite*  __Local__49 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue3__pf = bpv__slot_3Sprite__pf->SetSprite(((IsValid(bpv__slot3_item__pf)) ? (bpv__slot3_item__pf->bpv__item_sprite__pf) : (__Local__49)));
				}
				__CurrentState = 39;
				break;
			}
		case 44:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue11__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot4_amount__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue11__pf)
				{
					__CurrentState = 51;
					break;
				}
			}
		case 45:
			{
				if(IsValid(bpv__slot_4Amount__pf))
				{
					bpv__slot_4Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 46:
			{
				if(IsValid(bpv__slot_4Amount__pf))
				{
					bpv__slot_4Amount__pf->UTextRenderComponent::SetWorldSize(4.000000);
				}
			}
		case 47:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed));
				}
			}
		case 48:
			{
				if(IsValid(bpv__slot_4Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue9__pf = bpv__slot_4Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 49:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__current_slot__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 50:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed));
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot4_amount__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 52:
			{
				if(IsValid(bpv__slot_4__pf))
				{
					bpv__slot_4__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 53:
			{
				if(IsValid(bpv__slot_4Sprite__pf))
				{
					UPaperSprite*  __Local__50 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue2__pf = bpv__slot_4Sprite__pf->SetSprite(((IsValid(bpv__slot4_item__pf)) ? (bpv__slot4_item__pf->bpv__item_sprite__pf) : (__Local__50)));
				}
				__CurrentState = 49;
				break;
			}
		case 54:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot0_amount__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				if(IsValid(bpv__slot_0__pf))
				{
					bpv__slot_0__pf->SetMaterial(0, CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed));
				}
			}
		case 56:
			{
				if(IsValid(bpv__slot_0Sprite__pf))
				{
					UPaperSprite*  __Local__51 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue5__pf = bpv__slot_0Sprite__pf->SetSprite(((IsValid(bpv__slot0_item__pf)) ? (bpv__slot0_item__pf->bpv__item_sprite__pf) : (__Local__51)));
				}
				__CurrentState = 12;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__CurrentSlotIsEmpty__pf(int32 bpp__current_slot__pf, /*out*/ bool& bpp__is_empty__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot0_amount__pf, 0);
				bpp__is_empty__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue10__pf;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 5;
					break;
				}
			}
		case 4:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot1_amount__pf, 0);
				bpp__is_empty__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue9__pf;
				__CurrentState = -1;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 7;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot2_amount__pf, 0);
				bpp__is_empty__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue8__pf;
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 8:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot3_amount__pf, 0);
				bpp__is_empty__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue7__pf;
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = 11;
					break;
				}
			}
		case 10:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf = UKismetMathLibrary::EqualEqual_IntInt(bpv__slot4_amount__pf, 0);
				bpp__is_empty__pf = bpfv__CallFunc_EqualEqual_IntInt_ReturnValue6__pf;
				__CurrentState = -1;
				break;
			}
		case 11:
			{
				bpp__is_empty__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__InventoryPush__pf(int32 bpp__current_slot__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue3__pf{};
	AInGame_Item_C__pf563933975* bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult2__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue4__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult3__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue3__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult4__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue4__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult5__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue5__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue5__pf{};
	AInventory_Item_C__pf563933975* bpfv__inventory_item__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				AActor*  __Local__52 = ((AActor*)nullptr);
				bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf = Cast<AInGame_Item_C__pf563933975>(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__AttachedActor__pf) : (__Local__52)));
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 2:
			{
				AInventory_Item_C__pf563933975*  __Local__53 = ((AInventory_Item_C__pf563933975*)nullptr);
				bpfv__inventory_item__pf = ((IsValid(bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf)) ? (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf->bpv__inventory_item__pf) : (__Local__53));
			}
		case 3:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 4:
			{
				if(IsValid(bpv__slot_0Sprite__pf))
				{
					UPaperSprite*  __Local__54 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue5__pf = bpv__slot_0Sprite__pf->SetSprite(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_sprite__pf) : (__Local__54)));
				}
			}
		case 5:
			{
				if(IsValid(bpv__slot_0Amount__pf))
				{
					FText  __Local__55 = FText::GetEmpty();
					bpv__slot_0Amount__pf->UTextRenderComponent::K2_SetText(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_name__pf) : (__Local__55)));
				}
			}
		case 6:
			{
				bpv__slot0_amount__pf = 1;
			}
		case 7:
			{
				bpv__slot0_item__pf = bpfv__inventory_item__pf;
			}
		case 8:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 9:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_SetActorLocation(FVector(0.000000,0.000000,-1000.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 17;
					break;
				}
			}
		case 11:
			{
				if(IsValid(bpv__slot1_Sprite__pf))
				{
					UPaperSprite*  __Local__56 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue4__pf = bpv__slot1_Sprite__pf->SetSprite(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_sprite__pf) : (__Local__56)));
				}
			}
		case 12:
			{
				if(IsValid(bpv__slot_1Amount__pf))
				{
					FText  __Local__57 = FText::GetEmpty();
					bpv__slot_1Amount__pf->UTextRenderComponent::K2_SetText(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_name__pf) : (__Local__57)));
				}
			}
		case 13:
			{
				bpv__slot1_amount__pf = 1;
			}
		case 14:
			{
				bpv__slot1_item__pf = bpfv__inventory_item__pf;
			}
		case 15:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 16:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue2__pf = bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_SetActorLocation(FVector(0.000000,0.000000,-1000.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult2__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 24;
					break;
				}
			}
		case 18:
			{
				if(IsValid(bpv__slot2_Sprite__pf))
				{
					UPaperSprite*  __Local__58 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue2__pf = bpv__slot2_Sprite__pf->SetSprite(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_sprite__pf) : (__Local__58)));
				}
			}
		case 19:
			{
				if(IsValid(bpv__slot_2Amount__pf))
				{
					FText  __Local__59 = FText::GetEmpty();
					bpv__slot_2Amount__pf->UTextRenderComponent::K2_SetText(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_name__pf) : (__Local__59)));
				}
			}
		case 20:
			{
				bpv__slot2_amount__pf = 1;
			}
		case 21:
			{
				bpv__slot2_item__pf = bpfv__inventory_item__pf;
			}
		case 22:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 23:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue3__pf = bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_SetActorLocation(FVector(0.000000,0.000000,-1000.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult3__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 31;
					break;
				}
			}
		case 25:
			{
				if(IsValid(bpv__slot_3Sprite__pf))
				{
					UPaperSprite*  __Local__60 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue3__pf = bpv__slot_3Sprite__pf->SetSprite(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_sprite__pf) : (__Local__60)));
				}
			}
		case 26:
			{
				if(IsValid(bpv__slot_3Amount__pf))
				{
					FText  __Local__61 = FText::GetEmpty();
					bpv__slot_3Amount__pf->UTextRenderComponent::K2_SetText(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_name__pf) : (__Local__61)));
				}
			}
		case 27:
			{
				bpv__slot3_amount__pf = 1;
			}
		case 28:
			{
				bpv__slot3_item__pf = bpfv__inventory_item__pf;
			}
		case 29:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 30:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue4__pf = bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_SetActorLocation(FVector(0.000000,0.000000,-1000.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult4__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		case 31:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 32:
			{
				if(IsValid(bpv__slot_4Sprite__pf))
				{
					UPaperSprite*  __Local__62 = ((UPaperSprite*)nullptr);
					bpfv__CallFunc_SetSprite_ReturnValue__pf = bpv__slot_4Sprite__pf->SetSprite(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_sprite__pf) : (__Local__62)));
				}
			}
		case 33:
			{
				if(IsValid(bpv__slot_4Amount__pf))
				{
					FText  __Local__63 = FText::GetEmpty();
					bpv__slot_4Amount__pf->UTextRenderComponent::K2_SetText(((IsValid(bpfv__inventory_item__pf)) ? (bpfv__inventory_item__pf->bpv__item_name__pf) : (__Local__63)));
				}
			}
		case 34:
			{
				bpv__slot4_amount__pf = 1;
			}
		case 35:
			{
				bpv__slot4_item__pf = bpfv__inventory_item__pf;
			}
		case 36:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_DetachFromActor(EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative, EDetachmentRule::KeepRelative);
				}
			}
		case 37:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__AttachedActor__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue5__pf = bpv__otherHand__pf->bpv__AttachedActor__pf->AActor::K2_SetActorLocation(FVector(0.000000,0.000000,-1000.000000), false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult5__pf, true);
				}
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__InventoryPull__pf(int32 bpp__current_slot__pf)
{
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf{};
	bool bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf(EForceInit::ForceInit);
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue3__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf{};
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue4__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult2__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue2__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue2__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult3__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue3__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue3__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue4__pf(EForceInit::ForceInit);
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult4__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue4__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue4__pf{};
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue5__pf(EForceInit::ForceInit);
	USceneComponent* bpfv__CallFunc_K2_GetRootComponent_ReturnValue5__pf{};
	FHitResult bpfv__CallFunc_K2_SetActorLocation_SweepHitResult5__pf{};
	bool bpfv__CallFunc_K2_SetActorLocation_ReturnValue5__pf{};
	bool bpfv__CallFunc_K2_AttachToComponent_ReturnValue5__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue2__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue3__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue4__pf{};
	bool bpfv__CallFunc_SetSprite_ReturnValue5__pf{};
	FText bpfv__xxemptyxx__pfXyTTVy{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__xxemptyxx__pfXyTTVy = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("[ empty ]"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("F12810C54AA8935B93EE988537DD0C01") /* Key */
	);
			}
		case 2:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 0);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue5__pf)
				{
					__CurrentState = 10;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__slot_0Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue5__pf = bpv__slot_0Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 4:
			{
				if(IsValid(bpv__slot_0Amount__pf))
				{
					bpv__slot_0Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 5:
			{
				bpv__slot0_amount__pf = 0;
			}
		case 6:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue5__pf = bpv__otherHand__pf->bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__slot0_item__pf) && IsValid(bpv__slot0_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue5__pf = bpv__slot0_item__pf->bpv__item_object__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue5__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult5__pf, true);
				}
			}
		case 7:
			{
				if(IsValid(bpv__slot0_item__pf) && IsValid(bpv__slot0_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue5__pf = bpv__slot0_item__pf->bpv__item_object__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue5__pf))
				{
					UMotionControllerComponent*  __Local__64 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue5__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue5__pf->USceneComponent::K2_AttachToComponent(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__MotionController__pf) : (__Local__64)), FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 8:
			{
				AInGame_Item_C__pf563933975*  __Local__65 = ((AInGame_Item_C__pf563933975*)nullptr);
				if(IsValid(bpv__otherHand__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf = ((IsValid(bpv__slot0_item__pf)) ? (bpv__slot0_item__pf->bpv__item_object__pf) : (__Local__65));
				}
			}
		case 9:
			{
				bpv__slot0_item__pf = ((AInventory_Item_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 1);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue3__pf)
				{
					__CurrentState = 18;
					break;
				}
			}
		case 11:
			{
				if(IsValid(bpv__slot1_Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue4__pf = bpv__slot1_Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 12:
			{
				if(IsValid(bpv__slot_1Amount__pf))
				{
					bpv__slot_1Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 13:
			{
				bpv__slot1_amount__pf = 0;
			}
		case 14:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue4__pf = bpv__otherHand__pf->bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__slot1_item__pf) && IsValid(bpv__slot1_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue4__pf = bpv__slot1_item__pf->bpv__item_object__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue4__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult4__pf, true);
				}
			}
		case 15:
			{
				if(IsValid(bpv__slot1_item__pf) && IsValid(bpv__slot1_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf = bpv__slot1_item__pf->bpv__item_object__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf))
				{
					UMotionControllerComponent*  __Local__66 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue4__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue__pf->USceneComponent::K2_AttachToComponent(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__MotionController__pf) : (__Local__66)), FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 16:
			{
				AInGame_Item_C__pf563933975*  __Local__67 = ((AInGame_Item_C__pf563933975*)nullptr);
				if(IsValid(bpv__otherHand__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf = ((IsValid(bpv__slot1_item__pf)) ? (bpv__slot1_item__pf->bpv__item_object__pf) : (__Local__67));
				}
			}
		case 17:
			{
				bpv__slot1_item__pf = ((AInventory_Item_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 2);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue4__pf)
				{
					__CurrentState = 26;
					break;
				}
			}
		case 19:
			{
				if(IsValid(bpv__slot2_Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue3__pf = bpv__slot2_Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 20:
			{
				if(IsValid(bpv__slot_2Amount__pf))
				{
					bpv__slot_2Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 21:
			{
				bpv__slot2_amount__pf = 0;
			}
		case 22:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf = bpv__otherHand__pf->bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__slot2_item__pf) && IsValid(bpv__slot2_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue3__pf = bpv__slot2_item__pf->bpv__item_object__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue3__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult3__pf, true);
				}
			}
		case 23:
			{
				if(IsValid(bpv__slot2_item__pf) && IsValid(bpv__slot2_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue2__pf = bpv__slot2_item__pf->bpv__item_object__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue2__pf))
				{
					UMotionControllerComponent*  __Local__68 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue3__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue2__pf->USceneComponent::K2_AttachToComponent(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__MotionController__pf) : (__Local__68)), FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 24:
			{
				AInGame_Item_C__pf563933975*  __Local__69 = ((AInGame_Item_C__pf563933975*)nullptr);
				if(IsValid(bpv__otherHand__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf = ((IsValid(bpv__slot2_item__pf)) ? (bpv__slot2_item__pf->bpv__item_object__pf) : (__Local__69));
				}
			}
		case 25:
			{
				bpv__slot2_item__pf = ((AInventory_Item_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 26:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 3);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue2__pf)
				{
					__CurrentState = 34;
					break;
				}
			}
		case 27:
			{
				if(IsValid(bpv__slot_3Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue2__pf = bpv__slot_3Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 28:
			{
				if(IsValid(bpv__slot_3Amount__pf))
				{
					bpv__slot_3Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 29:
			{
				bpv__slot3_amount__pf = 0;
			}
		case 30:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf = bpv__otherHand__pf->bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__slot3_item__pf) && IsValid(bpv__slot3_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue__pf = bpv__slot3_item__pf->bpv__item_object__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue2__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult__pf, true);
				}
			}
		case 31:
			{
				if(IsValid(bpv__slot3_item__pf) && IsValid(bpv__slot3_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue3__pf = bpv__slot3_item__pf->bpv__item_object__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue3__pf))
				{
					UMotionControllerComponent*  __Local__70 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue2__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue3__pf->USceneComponent::K2_AttachToComponent(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__MotionController__pf) : (__Local__70)), FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 32:
			{
				AInGame_Item_C__pf563933975*  __Local__71 = ((AInGame_Item_C__pf563933975*)nullptr);
				if(IsValid(bpv__otherHand__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf = ((IsValid(bpv__slot3_item__pf)) ? (bpv__slot3_item__pf->bpv__item_object__pf) : (__Local__71));
				}
			}
		case 33:
			{
				bpv__slot3_item__pf = ((AInventory_Item_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		case 34:
			{
				bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf = UKismetMathLibrary::EqualEqual_IntInt(bpp__current_slot__pf, 4);
				if (!bpfv__CallFunc_EqualEqual_IntInt_ReturnValue__pf)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 35:
			{
				if(IsValid(bpv__slot_4Sprite__pf))
				{
					bpfv__CallFunc_SetSprite_ReturnValue__pf = bpv__slot_4Sprite__pf->SetSprite(CastChecked<UPaperSprite>(CastChecked<UDynamicClass>(ABP_MotionController_C__pf563933975::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed));
				}
			}
		case 36:
			{
				if(IsValid(bpv__slot_4Amount__pf))
				{
					bpv__slot_4Amount__pf->UTextRenderComponent::K2_SetText(bpfv__xxemptyxx__pfXyTTVy);
				}
			}
		case 37:
			{
				bpv__slot4_amount__pf = 0;
			}
		case 38:
			{
				if(IsValid(bpv__otherHand__pf) && IsValid(bpv__otherHand__pf->bpv__GrabSphere__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__otherHand__pf->bpv__GrabSphere__pf->USceneComponent::K2_GetComponentLocation();
				}
				if(IsValid(bpv__slot4_item__pf) && IsValid(bpv__slot4_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_SetActorLocation_ReturnValue2__pf = bpv__slot4_item__pf->bpv__item_object__pf->AActor::K2_SetActorLocation(bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, false, /*out*/ bpfv__CallFunc_K2_SetActorLocation_SweepHitResult2__pf, true);
				}
			}
		case 39:
			{
				if(IsValid(bpv__slot4_item__pf) && IsValid(bpv__slot4_item__pf->bpv__item_object__pf))
				{
					bpfv__CallFunc_K2_GetRootComponent_ReturnValue4__pf = bpv__slot4_item__pf->bpv__item_object__pf->AActor::K2_GetRootComponent();
				}
				if(IsValid(bpfv__CallFunc_K2_GetRootComponent_ReturnValue4__pf))
				{
					UMotionControllerComponent*  __Local__72 = ((UMotionControllerComponent*)nullptr);
					bpfv__CallFunc_K2_AttachToComponent_ReturnValue__pf = bpfv__CallFunc_K2_GetRootComponent_ReturnValue4__pf->USceneComponent::K2_AttachToComponent(((IsValid(bpv__otherHand__pf)) ? (bpv__otherHand__pf->bpv__MotionController__pf) : (__Local__72)), FName(TEXT("None")), EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false);
				}
			}
		case 40:
			{
				AInGame_Item_C__pf563933975*  __Local__73 = ((AInGame_Item_C__pf563933975*)nullptr);
				if(IsValid(bpv__otherHand__pf))
				{
					bpv__otherHand__pf->bpv__AttachedActor__pf = ((IsValid(bpv__slot4_item__pf)) ? (bpv__slot4_item__pf->bpv__item_object__pf) : (__Local__73));
				}
			}
		case 41:
			{
				bpv__slot4_item__pf = ((AInventory_Item_C__pf563933975*)nullptr);
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::bpf__IsValidInventoryItem__pf(AActor* bpp__attached_actor__pf, /*out*/ bool& bpp__is_valid__pf)
{
	AInGame_Item_C__pf563933975* bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf{};
	bool bpfv__K2Node_DynamicCast_bSuccess__pf{};
	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf = Cast<AInGame_Item_C__pf563933975>(bpp__attached_actor__pf);
				bpfv__K2Node_DynamicCast_bSuccess__pf = (bpfv__K2Node_DynamicCast_AsIn_Game_Item__pf != nullptr);;
				if (!bpfv__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				bpp__is_valid__pf = true;
				__CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__is_valid__pf = false;
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ABP_MotionController_C__pf563933975::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right.MannequinHand_Right 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Sphere.Sphere 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/inventory_slot.inventory_slot 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryEmpty.M_InventoryEmpty 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Sprites/Sprites/kappa_sprite.kappa_sprite 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_ArcEndpoint.M_ArcEndpoint 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_TeleportCylinderPreview.MI_TeleportCylinderPreview 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/SM_FatCylinder.SM_FatCylinder 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeaconDirection.BeaconDirection 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/1x1_cube.1x1_cube 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Game/VirtualReality/Materials/MI_ChaperoneOutline.MI_ChaperoneOutline 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/VirtualReality/Meshes/BeamMesh.BeamMesh 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_SplineArcMat.M_SplineArcMat 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/lamp_switch_sound.lamp_switch_sound 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  PaperSprite /Game/Sprites/Sprites/empty_sprite.empty_sprite 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryHighlight.M_InventoryHighlight 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/VirtualReality/Materials/M_InventoryPartial.M_InventoryPartial 
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
void ABP_MotionController_C__pf563933975::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/VirtualReality/Mannequin/Character/Mesh/MannequinHand_Right_Skeleton.MannequinHand_Right_Skeleton 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace1D /Game/VirtualReality/Mannequin/Animations/RightGrip_BS.RightGrip_BS 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Engine/EngineMaterials/DefaultTextMaterialOpaque.DefaultTextMaterialOpaque 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/RobotoDistanceField.RobotoDistanceField 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/Materials/Black.Black 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/VirtualReality/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/MotionControllerPawn.MotionControllerPawn_C 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/Inventory_Item.Inventory_Item_C 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/InGame_Item.InGame_Item_C 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedEnum /Game/VirtualRealityBP/Blueprints/GripEnum.GripEnum 
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
struct FRegisterHelper__ABP_MotionController_C__pf563933975
{
	FRegisterHelper__ABP_MotionController_C__pf563933975()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), &ABP_MotionController_C__pf563933975::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ABP_MotionController_C__pf563933975 Instance;
};
FRegisterHelper__ABP_MotionController_C__pf563933975 FRegisterHelper__ABP_MotionController_C__pf563933975::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
