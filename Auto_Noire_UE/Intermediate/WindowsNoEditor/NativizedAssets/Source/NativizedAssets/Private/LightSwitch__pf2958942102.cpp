#include "NativizedAssets.h"
#include "LightSwitch__pf2958942102.h"
#include "GeneratedCodeHelpers.h"
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
#include "LightSwitch__pf2958942102.h"
#include "Runtime/Engine/Classes/Engine/PointLight.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
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
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
ALightSwitch_C__pf2958942102::ALightSwitch_C__pf2958942102(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ALightSwitch_C__pf2958942102::StaticClass() == GetClass()))
	{
		ALightSwitch_C__pf2958942102::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Scene__pf = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	bpv__PointLight__pf = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
	bpv__Cylinder__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cylinder"));
	bpv__StaticMesh1__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
	RootComponent = bpv__Scene__pf;
	bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh__pf->RelativeRotation = FRotator(0.000157, 90.000206, -89.999908);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.100000, 0.100000, 0.154897);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PointLight__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__PointLight__pf->AttenuationRadius = 10.000000f;
	bpv__PointLight__pf->LightGuid = FGuid(0xDA7FD12B, 0x43D38168, 0x51AE34A9, 0x31119CB8);
	bpv__PointLight__pf->Intensity = 20.000000f;
	bpv__PointLight__pf->RelativeLocation = FVector(9.706650, 0.000000, 4.993765);
	bpv__PointLight__pf->RelativeRotation = FRotator(0.000027, 0.000000, 0.000000);
	bpv__PointLight__pf->RelativeScale3D = FVector(0.100000, 0.100000, 0.100000);
	bpv__Cylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Cylinder__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Cylinder__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__Cylinder__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__Cylinder__pf->OverrideMaterials.Reserve(1);
	bpv__Cylinder__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__Cylinder__pf->RelativeLocation = FVector(3.000000, 0.000000, 0.000000);
	bpv__Cylinder__pf->RelativeRotation = FRotator(0.000000, 0.000000, -89.999847);
	bpv__Cylinder__pf->RelativeScale3D = FVector(0.036924, 0.036924, 0.018323);
	if(!bpv__Cylinder__pf->IsTemplate())
	{
		bpv__Cylinder__pf->BodyInstance.FixupData(bpv__Cylinder__pf);
	}
	bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh1__pf->AttachToComponent(bpv__Scene__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh1__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__StaticMesh1__pf->OverrideMaterials = TArray<UMaterialInterface*> ();
	bpv__StaticMesh1__pf->OverrideMaterials.Reserve(1);
	bpv__StaticMesh1__pf->OverrideMaterials.Add(CastChecked<UMaterialInterface>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed));
	bpv__StaticMesh1__pf->RelativeLocation = FVector(3.000000, 0.000000, 0.000000);
	bpv__StaticMesh1__pf->RelativeRotation = FRotator(-0.000239, 90.000130, -20.000000);
	bpv__StaticMesh1__pf->RelativeScale3D = FVector(0.059917, 0.052910, 0.053221);
	if(!bpv__StaticMesh1__pf->IsTemplate())
	{
		bpv__StaticMesh1__pf->BodyInstance.FixupData(bpv__StaticMesh1__pf);
	}
	bpv__Timeline_1_Switch_Movement_F842A6FC434519D43221329A94523C60__pf = 0.000000f;
	bpv__Timeline_1__Direction_F842A6FC434519D43221329A94523C60__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_1__pf = nullptr;
	bpv__Timeline_0_Switch_Movement_92623C7D4ADC220780827FB2491EB3B4__pf = 0.000000f;
	bpv__Timeline_0__Direction_92623C7D4ADC220780827FB2491EB3B4__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__attached_lights__pf = TArray<APointLight*> ();
	bpv__switch_state__pf = true;
	AutoReceiveInput = EAutoReceiveInput::Type::Player0;
}
void ALightSwitch_C__pf2958942102::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Scene__pf)
	{
		bpv__Scene__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__PointLight__pf)
	{
		bpv__PointLight__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Cylinder__pf)
	{
		bpv__Cylinder__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh1__pf)
	{
		bpv__StaticMesh1__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void ALightSwitch_C__pf2958942102::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_UPickupActorInterface_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UPickupActorInterface_C());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__0);
	auto __Local__1 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"));
	InDynamicClass->Timelines.Add(__Local__1);
	auto __Local__2 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_1_Template"));
	InDynamicClass->Timelines.Add(__Local__2);
	__Local__1->TimelineLength = 0.300000f;
	__Local__1->bValidatedAsWired = true;
	__Local__1->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__1->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__1->FloatTracks.GetData(), 1);
	auto& __Local__3 = __Local__1->FloatTracks[0];
	auto __Local__4 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__4);
	__Local__4->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__4->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__4->FloatCurve.Keys.GetData(), 2);
	auto& __Local__5 = __Local__4->FloatCurve.Keys[0];
	__Local__5.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__5.Value = -90.000000f;
	auto& __Local__6 = __Local__4->FloatCurve.Keys[1];
	__Local__6.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__6.Time = 0.300000f;
	__Local__6.Value = -20.000000f;
	__Local__3.CurveFloat = __Local__4;
	__Local__3.TrackName = FName(TEXT("Switch Movement"));
	__Local__1->TimelineGuid = FGuid(0x92623C7D, 0x4ADC2207, 0x80827FB2, 0x491EB3B4);
	__Local__2->TimelineLength = 0.300000f;
	__Local__2->bValidatedAsWired = true;
	__Local__2->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__2->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__2->FloatTracks.GetData(), 1);
	auto& __Local__7 = __Local__2->FloatTracks[0];
	auto __Local__8 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__8);
	__Local__8->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__8->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__8->FloatCurve.Keys.GetData(), 2);
	auto& __Local__9 = __Local__8->FloatCurve.Keys[0];
	__Local__9.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__9.Value = -20.000000f;
	auto& __Local__10 = __Local__8->FloatCurve.Keys[1];
	__Local__10.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__10.Time = 0.300000f;
	__Local__10.Value = -90.000000f;
	__Local__7.CurveFloat = __Local__8;
	__Local__7.TrackName = FName(TEXT("Switch Movement"));
	__Local__2->TimelineGuid = FGuid(0xF842A6FC, 0x434519D4, 0x3221329A, 0x94523C60);
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_0(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__StaticMesh1__pf))
				{
					bpv__StaticMesh1__pf->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,90.000000,-90.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 12:
			{
				if(IsValid(bpv__StaticMesh1__pf))
				{
					bpv__StaticMesh1__pf->USceneComponent::K2_SetRelativeRotation(FRotator(0.000000,90.000000,-20.000000), false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult4__pf, false);
				}
				__CurrentState = -1;
				break;
			}
		case 13:
			{
				if (!bpv__switch_state__pf)
				{
					__CurrentState = 1;
					break;
				}
				__CurrentState = 12;
				break;
			}
		case 17:
			{
				__CurrentState = 13;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_1(int32 bpp__EntryPoint__pf)
{
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 3:
			{
				__CurrentState = 4;
				break;
			}
		case 4:
			{
				bpf__toggle_lights__pf();
				__CurrentState = -1;
				break;
			}
		case 16:
			{
				__CurrentState = 4;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_2(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue2__pf = UKismetMathLibrary::MakeRotator(bpv__Timeline_1_Switch_Movement_F842A6FC434519D43221329A94523C60__pf, 0.000000, 90.000000);
	if(IsValid(bpv__StaticMesh1__pf))
	{
		bpv__StaticMesh1__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult3__pf, false);
	}
	return; // KCST_GotoReturn
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_3(int32 bpp__EntryPoint__pf)
{
	FRotator bpfv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(bpv__Timeline_0_Switch_Movement_92623C7D4ADC220780827FB2491EB3B4__pf, 0.000000, 90.000000);
	if(IsValid(bpv__StaticMesh1__pf))
	{
		bpv__StaticMesh1__pf->USceneComponent::K2_SetRelativeRotation(bpfv__CallFunc_MakeRotator_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult2__pf, false);
	}
	return; // KCST_GotoReturn
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_4(int32 bpp__EntryPoint__pf)
{
	FVector bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf(EForceInit::ForceInit);
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 2:
			{
				if(IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 7:
			{
				if(IsValid(bpv__Timeline_1__pf))
				{
					bpv__Timeline_1__pf->UTimelineComponent::PlayFromStart();
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				__CurrentState = 10;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__StaticMesh__pf))
				{
					bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf = bpv__StaticMesh__pf->USceneComponent::K2_GetComponentLocation();
				}
				UGameplayStatics::PlaySoundAtLocation(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(ALightSwitch_C__pf2958942102::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), bpfv__CallFunc_K2_GetComponentLocation_ReturnValue__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, ((USoundAttenuation*)nullptr), ((USoundConcurrency*)nullptr));
			}
		case 11:
			{
				if (!bpv__switch_state__pf)
				{
					__CurrentState = 2;
					break;
				}
				__CurrentState = 7;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void ALightSwitch_C__pf2958942102::bpf__ExecuteUbergraph_LightSwitch__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 8);
	return; // KCST_GotoReturn
}
void ALightSwitch_C__pf2958942102::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_0(17);
}
void ALightSwitch_C__pf2958942102::bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf)
{
	b0l__K2Node_Event_AttachTo__pf = bpp__AttachTo__pf;
	bpf__ExecuteUbergraph_LightSwitch__pf_4(9);
}
void ALightSwitch_C__pf2958942102::bpf__Drop__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_5(8);
}
void ALightSwitch_C__pf2958942102::bpf__Timeline_1__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_2(5);
}
void ALightSwitch_C__pf2958942102::bpf__Timeline_1__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_1(3);
}
void ALightSwitch_C__pf2958942102::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_3(15);
}
void ALightSwitch_C__pf2958942102::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_LightSwitch__pf_1(16);
}
void ALightSwitch_C__pf2958942102::bpf__UserConstructionScript__pf()
{
}
void ALightSwitch_C__pf2958942102::bpf__toggle_lights__pf()
{
	int32 bpfv__Temp_int_Loop_Counter_Variable__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue__pf{};
	int32 bpfv__Temp_int_Loop_Counter_Variable2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue__pf{};
	int32 bpfv__CallFunc_Add_IntInt_ReturnValue2__pf{};
	int32 bpfv__Temp_int_Array_Index_Variable2__pf{};
	APointLight* bpfv__CallFunc_Array_Get_Item__pf{};
	APointLight* bpfv__CallFunc_Array_Get_Item2__pf{};
	int32 bpfv__CallFunc_Array_Length_ReturnValue2__pf{};
	bool bpfv__CallFunc_Less_IntInt_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = 1;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				if (!bpv__switch_state__pf)
				{
					__CurrentState = 9;
					break;
				}
			}
		case 2:
			{
				bpv__switch_state__pf = false;
			}
		case 3:
			{
				bpfv__Temp_int_Loop_Counter_Variable__pf = 0;
			}
		case 4:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = 0;
			}
		case 5:
			{
				bpfv__CallFunc_Array_Length_ReturnValue2__pf = FCustomThunkTemplates::Array_Length(bpv__attached_lights__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue2__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, bpfv__CallFunc_Array_Length_ReturnValue2__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue2__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				bpfv__Temp_int_Array_Index_Variable__pf = bpfv__Temp_int_Loop_Counter_Variable__pf;
			}
		case 7:
			{
				__StateStack.Push(17);
			}
		case 8:
			{
				FCustomThunkTemplates::Array_Get(bpv__attached_lights__pf, bpfv__Temp_int_Array_Index_Variable__pf, /*out*/ bpfv__CallFunc_Array_Get_Item__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item__pf) && IsValid(bpfv__CallFunc_Array_Get_Item__pf->PointLightComponent))
				{
					bpfv__CallFunc_Array_Get_Item__pf->PointLightComponent->SetVisibility(false, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpv__switch_state__pf = true;
			}
		case 10:
			{
				bpfv__Temp_int_Loop_Counter_Variable2__pf = 0;
			}
		case 11:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = 0;
			}
		case 12:
			{
				bpfv__CallFunc_Array_Length_ReturnValue__pf = FCustomThunkTemplates::Array_Length(bpv__attached_lights__pf);
				bpfv__CallFunc_Less_IntInt_ReturnValue__pf = UKismetMathLibrary::Less_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, bpfv__CallFunc_Array_Length_ReturnValue__pf);
				if (!bpfv__CallFunc_Less_IntInt_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				bpfv__Temp_int_Array_Index_Variable2__pf = bpfv__Temp_int_Loop_Counter_Variable2__pf;
			}
		case 14:
			{
				__StateStack.Push(16);
			}
		case 15:
			{
				FCustomThunkTemplates::Array_Get(bpv__attached_lights__pf, bpfv__Temp_int_Array_Index_Variable2__pf, /*out*/ bpfv__CallFunc_Array_Get_Item2__pf);
				if(IsValid(bpfv__CallFunc_Array_Get_Item2__pf) && IsValid(bpfv__CallFunc_Array_Get_Item2__pf->PointLightComponent))
				{
					bpfv__CallFunc_Array_Get_Item2__pf->PointLightComponent->SetVisibility(true, false);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue2__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable2__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable2__pf = bpfv__CallFunc_Add_IntInt_ReturnValue2__pf;
				__CurrentState = 12;
				break;
			}
		case 17:
			{
				bpfv__CallFunc_Add_IntInt_ReturnValue__pf = UKismetMathLibrary::Add_IntInt(bpfv__Temp_int_Loop_Counter_Variable__pf, 1);
				bpfv__Temp_int_Loop_Counter_Variable__pf = bpfv__CallFunc_Add_IntInt_ReturnValue__pf;
				__CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void ALightSwitch_C__pf2958942102::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/lightswitch_updated_polySurface1.lightswitch_updated_polySurface1 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Material /Game/lambert1.lambert1 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Engine/BasicShapes/Cylinder.Cylinder 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Furniture/meshes/lightswitch_updated_polySurface3.lightswitch_updated_polySurface3 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundWave /Game/MusicAndSound/SoundEffects/wall_switch_sound.wall_switch_sound 
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
void ALightSwitch_C__pf2958942102::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/VirtualRealityBP/Blueprints/PickupActorInterface.PickupActorInterface_C 
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
struct FRegisterHelper__ALightSwitch_C__pf2958942102
{
	FRegisterHelper__ALightSwitch_C__pf2958942102()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Furniture/LightSwitch"), &ALightSwitch_C__pf2958942102::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ALightSwitch_C__pf2958942102 Instance;
};
FRegisterHelper__ALightSwitch_C__pf2958942102 FRegisterHelper__ALightSwitch_C__pf2958942102::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
