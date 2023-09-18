/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SmartObjectsModule.

/// Struct /Script/SmartObjectsModule.SmartObjectEventData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSmartObjectEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ESmartObjectChangeReason)                  Reason                                                      ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectSlotHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint64_t)                                  ID                                                          ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinitionData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectSlotDefinitionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotAnnotation
/// Size: 0x0000 (0x000008 - 0x000008)
class FSmartObjectSlotAnnotation : public FSmartObjectSlotDefinitionData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionBase
/// Size: 0x0000 (0x000010 - 0x000010)
class FSmartObjectWorldConditionBase : public FWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
/// Size: 0x0010 (0x000008 - 0x000018)
class FSmartObjectAnnotation_SlotUserCollision : public FSmartObjectSlotAnnotation
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bUseUserCapsuleSize                                         ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FSmartObjectUserCapsuleParams)             Capsule                                                     ___ OFFSET(get<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserCapsuleParams
/// Size: 0x000C (0x000000 - 0x00000C)
class FSmartObjectUserCapsuleParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StepHeight                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceAnnotation
/// Size: 0x0048 (0x000008 - 0x000050)
class FSmartObjectSlotEntranceAnnotation : public FSmartObjectSlotAnnotation
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector3f)                                 Offset                                                      ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FRotator3f)                                Rotation                                                    ___ OFFSET(get<T>, {0x14, 12, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bIsEntry                                                    ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bIsExit                                                     ___ OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bTraceGroundLocation                                        ___ OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bCheckTransitionTrajectory                                  ___ OFFSET(get<bool>, {0x40, 1, 1, 3})
	CMember(ESmartObjectEntrancePriority)              SelectionPriority                                           ___ OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(float)                                     TrajectoryStartHeightOffset                                 ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrajectorySlotHeightOffset                                  ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TransitionCheckRadius                                       ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotLinkAnnotation
/// Size: 0x0008 (0x000008 - 0x000010)
class FSmartObjectSlotLinkAnnotation : public FSmartObjectSlotAnnotation
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FSmartObjectSlotReference)                 LinkedSlot                                                  ___ OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotReference
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSlotReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Index                                                       ___ OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectComponentInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
class FSmartObjectComponentInstanceData : public FActorComponentInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(USmartObjectDefinition*)                   DefinitionAsset                                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotDefinition
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FSmartObjectSlotDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     RuntimeTags                                                 ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTagQuery)                         UserTagFilter                                               ___ OFFSET(get<T>, {0x28, 72, 0, 0})
	SMember(FGameplayTagContainer)                     ActivityTags                                                ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	SMember(FWorldConditionQueryDefinition)            SelectionPreconditions                                      ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FVector3f)                                 Offset                                                      ___ OFFSET(get<T>, {0xA8, 12, 0, 0})
	SMember(FRotator3f)                                Rotation                                                    ___ OFFSET(get<T>, {0xB4, 12, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Data                                                        ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<USmartObjectBehaviorDefinition*>)   BehaviorDefinitions                                         ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectDefinitionPreviewData
/// Size: 0x0078 (0x000000 - 0x000078)
class FSmartObjectDefinitionPreviewData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ObjectActorClass                                            ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           ObjectMeshPath                                              ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserActorClass                                              ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserValidationFilterClass                                   ___ OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSpatialEntryData
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSpatialEntryData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectHashGridEntryData
/// Size: 0x000B (0x000001 - 0x00000C)
class FSmartObjectHashGridEntryData : public FSmartObjectSpatialEntryData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectOctreeEntryData
/// Size: 0x000F (0x000001 - 0x000010)
class FSmartObjectOctreeEntryData : public FSmartObjectSpatialEntryData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectCollectionEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FSmartObjectCollectionEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FSoftObjectPath)                           Path                                                        ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FBox)                                      Bounds                                                      ___ OFFSET(get<T>, {0xA0, 56, 0, 0})
	SMember(FSmartObjectHandle)                        Handle                                                      ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(uint32_t)                                  DefinitionIdx                                               ___ OFFSET(get<uint32_t>, {0xE0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectContainer
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FSmartObjectContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FBox)                                      Bounds                                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(TArray<FSmartObjectCollectionEntry>)       CollectionEntries                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSoftObjectPath>) RegisteredIdToObjectMap                                     ___ OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TArray<USmartObjectDefinition*>)           Definitions                                                 ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectClaimHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectClaimHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FSmartObjectUserHandle)                    UserHandle                                                  ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectUserHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FSmartObjectUserHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotStateData
/// Size: 0x0001 (0x000000 - 0x000001)
class FSmartObjectSlotStateData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotTransform
/// Size: 0x005F (0x000001 - 0x000060)
class FSmartObjectSlotTransform : public FSmartObjectSlotStateData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntimeSlot
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FSmartObjectRuntimeSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FWorldConditionQueryState)                 PreconditionState                                           ___ OFFSET(get<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRuntime
/// Size: 0x0120 (0x000000 - 0x000120)
class FSmartObjectRuntime : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FWorldConditionQueryState)                 PreconditionState                                           ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	CMember(TArray<FSmartObjectRuntimeSlot>)           Slots                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(USmartObjectDefinition*)                   Definition                                                  ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<USmartObjectComponent*>)    OwnerComponent                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FInstancedStruct)                          SpatialEntryData                                            ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotView
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectSlotView : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestFilter
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FSmartObjectRequestFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        ___ OFFSET(get<T>, {0x28, 72, 0, 0})
	CMember(UClass*)                                   BehaviorDefinitionClass                                     ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<UClass*>)                           BehaviorDefinitionClasses                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bShouldEvaluateConditions                                   ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequest
/// Size: 0x0130 (0x000000 - 0x000130)
class FSmartObjectRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FBox)                                      QueryBox                                                    ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FSmartObjectRequestFilter)                 Filter                                                      ___ OFFSET(get<T>, {0x40, 240, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectRequestResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectRequestResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectHandle)                        SmartObjectHandle                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectSlotEntranceHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSmartObjectSlotHandle)                    SlotHandle                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FSmartObjectSlotEntranceLocationRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationResult
/// Size: 0x0078 (0x000000 - 0x000078)
class FSmartObjectSlotEntranceLocationResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FSmartObjectSlotEntranceHandle)            EntranceHandle                                              ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FSmartObjectSlotIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectTraceParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectTraceParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESmartObjectTraceType)                     Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ObjectTypes                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfile                                            ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(bool)                                      bTraceComplex                                               ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectSlotValidationParams
/// Size: 0x0070 (0x000000 - 0x000070)
class FSmartObjectSlotValidationParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UClass*)                                   NavigationFilter                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   SearchExtents                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FSmartObjectTraceParams)                   GroundTraceParameters                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FSmartObjectTraceParams)                   TransitionTraceParameters                                   ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bUseNavigationCapsuleSize                                   ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FSmartObjectUserCapsuleParams)             UserCapsule                                                 ___ OFFSET(get<T>, {0x64, 12, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectActorUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectActorUserData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AActor*>)                   UserActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FSmartObjectWorldConditionObjectTagQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
class FSmartObjectWorldConditionObjectTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
/// Size: 0x0018 (0x000000 - 0x000018)
class FSmartObjectWorldConditionSlotTagQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
/// Size: 0x0058 (0x000010 - 0x000068)
class FSmartObjectWorldConditionSlotTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FWorldCondition_SmartObjectActorTagQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
/// Size: 0x0050 (0x000010 - 0x000060)
class FWorldCondition_SmartObjectActorTagQuery : public FSmartObjectWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x18, 72, 0, 0})
};

/// Class /Script/SmartObjectsModule.EnvQueryGenerator_SmartObjects
/// Size: 0x0120 (0x000050 - 0x000170)
class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UClass*)                                   QueryOriginContext                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FSmartObjectRequestFilter)                 SmartObjectRequestFilter                                    ___ OFFSET(get<T>, {0x60, 240, 0, 0})
	SMember(FVector)                                   QueryBoxExtent                                              ___ OFFSET(get<T>, {0x150, 24, 0, 0})
	DMember(bool)                                      bOnlyClaimable                                              ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.EnvQueryItemType_SmartObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class USmartObjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESmartObjectTagFilteringPolicy)            DefaultUserTagsFilteringPolicy                              ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(ESmartObjectTagMergingPolicy)              DefaultActivityTagsMergingPolicy                            ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	CMember(UClass*)                                   DefaultWorldConditionSchemaClass                            ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.BlackboardKeyType_SOClaimHandle
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSmartObjectClaimHandle)                   Handle                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SmartObjectsModule.GenericSmartObject
/// Size: 0x0008 (0x000290 - 0x000298)
class AGenericSmartObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USmartObjectComponent*)                    SOComponent                                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectCollection
/// Size: 0x00B0 (0x000290 - 0x000340)
class ASmartObjectCollection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FBox)                                      Bounds                                                      ___ OFFSET(get<T>, {0x290, 56, 0, 0})
	CMember(TArray<FSmartObjectCollectionEntry>)       CollectionEntries                                           ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSoftObjectPath>) RegisteredIdToObjectMap                                     ___ OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TArray<USmartObjectDefinition*>)           Definitions                                                 ___ OFFSET(get<T>, {0x328, 16, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectComponent
/// Size: 0x0050 (0x0002A0 - 0x0002F0)
class USmartObjectComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FMulticastInlineDelegate)                  OnSmartObjectEvent                                          ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(USmartObjectDefinition*)                   DefinitionAsset                                             ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FSmartObjectHandle)                        RegisteredHandle                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(bool)                                      bCanBePartOfCollection                                      ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectContainerRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectDebugRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectBehaviorDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectBehaviorDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectDefinition
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class USmartObjectDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FSmartObjectSlotDefinition>)        Slots                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<USmartObjectBehaviorDefinition*>)   DefaultBehaviorDefinitions                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTagQuery)                         UserTagFilter                                               ___ OFFSET(get<T>, {0x50, 72, 0, 0})
	SMember(FWorldConditionQueryDefinition)            Preconditions                                               ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ActivityTags                                                ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(UClass*)                                   WorldConditionSchemaClass                                   ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(ESmartObjectTagMergingPolicy)              ActivityTagsMergingPolicy                                   ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(ESmartObjectTagFilteringPolicy)            UserTagsFilteringPolicy                                     ___ OFFSET(get<T>, {0xD9, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectSpacePartition
/// Size: 0x0000 (0x000028 - 0x000028)
class USmartObjectSpacePartition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectHashGrid
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class USmartObjectHashGrid : public USmartObjectSpacePartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectOctree
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class USmartObjectOctree : public USmartObjectSpacePartition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectPersistentCollection
/// Size: 0x00B8 (0x000290 - 0x000348)
class ASmartObjectPersistentCollection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FSmartObjectContainer)                     SmartObjectContainer                                        ___ OFFSET(get<T>, {0x290, 176, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class USmartObjectRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystem
/// Size: 0x0168 (0x000030 - 0x000198)
class USmartObjectSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FSoftClassPath)                            SpacePartitionClassName                                     ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(UClass*)                                   SpacePartitionClass                                         ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(USmartObjectSpacePartition*)               SpacePartition                                              ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(ASmartObjectSubsystemRenderingActor*)      RenderingActor                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FSmartObjectContainer)                     SmartObjectContainer                                        ___ OFFSET(get<T>, {0x60, 176, 0, 0})
	CMember(TMap<FSmartObjectHandle, FSmartObjectRuntime>) RuntimeSmartObjects                                     ___ OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<USmartObjectComponent*>)            RegisteredSOComponents                                      ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TArray<USmartObjectComponent*>)            PendingSmartObjectRegistration                              ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectSubsystemRenderingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ASmartObjectSubsystemRenderingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USmartObjectSubsystemRenderingComponent*)  RenderingComponent                                          ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectTest
/// Size: 0x0008 (0x000028 - 0x000030)
class USmartObjectTest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ASmartObjectTestingActor*)                 SmartObjectTestingActor                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectSimpleQueryTest
/// Size: 0x0140 (0x000030 - 0x000170)
class USmartObjectSimpleQueryTest : public USmartObjectTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FSmartObjectRequest)                       Request                                                     ___ OFFSET(get<T>, {0x30, 304, 0, 0})
	CMember(TArray<FSmartObjectRequestResult>)         Results                                                     ___ OFFSET(get<T>, {0x160, 16, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectTestRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/SmartObjectsModule.SmartObjectTestingActor
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASmartObjectTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(TArray<USmartObjectTest*>)                 Tests                                                       ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(USmartObjectTestRenderingComponent*)       RenderingComponent                                          ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USmartObjectSubsystem*)                    SmartObjectSubsystem                                        ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bRunTestsEachFrame                                          ___ OFFSET(get<bool>, {0x2B0, 1, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectSlotValidationFilter
/// Size: 0x00E8 (0x000028 - 0x000110)
class USmartObjectSlotValidationFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSmartObjectSlotValidationParams)          EntryParameters                                             ___ OFFSET(get<T>, {0x28, 112, 0, 0})
	DMember(bool)                                      bUseEntryParametersForExit                                  ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FSmartObjectSlotValidationParams)          ExitParameters                                              ___ OFFSET(get<T>, {0xA0, 112, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectUserComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class USmartObjectUserComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UClass*)                                   ValidationFilter                                            ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/SmartObjectsModule.SmartObjectWorldConditionSchema
/// Size: 0x0028 (0x000038 - 0x000060)
class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Enum /Script/SmartObjectsModule.ESmartObjectChangeReason
/// Size: 0x12
enum ESmartObjectChangeReason : uint8_t
{
	ESmartObjectChangeReason__None0                                                  = 0,
	ESmartObjectChangeReason__OnEvent1                                               = 1,
	ESmartObjectChangeReason__OnTagAdded2                                            = 2,
	ESmartObjectChangeReason__OnTagRemoved3                                          = 3,
	ESmartObjectChangeReason__OnClaimed4                                             = 4,
	ESmartObjectChangeReason__OnOccupied5                                            = 5,
	ESmartObjectChangeReason__OnReleased6                                            = 6,
	ESmartObjectChangeReason__OnSlotEnabled7                                         = 7,
	ESmartObjectChangeReason__OnSlotDisabled8                                        = 8,
	ESmartObjectChangeReason__OnObjectEnabled9                                       = 9,
	ESmartObjectChangeReason__OnObjectDisabled10                                     = 10,
	ESmartObjectChangeReason__ESmartObjectChangeReason_MAX11                         = 11
};

/// Enum /Script/SmartObjectsModule.ESmartObjectEntrancePriority
/// Size: 0x11
enum ESmartObjectEntrancePriority : uint8_t
{
	ESmartObjectEntrancePriority__Lowest0                                            = 0,
	ESmartObjectEntrancePriority__Lower1                                             = 1,
	ESmartObjectEntrancePriority__Low2                                               = 2,
	ESmartObjectEntrancePriority__BelowNormal3                                       = 3,
	ESmartObjectEntrancePriority__Normal4                                            = 4,
	ESmartObjectEntrancePriority__AboveNormal5                                       = 5,
	ESmartObjectEntrancePriority__High6                                              = 6,
	ESmartObjectEntrancePriority__Higher7                                            = 7,
	ESmartObjectEntrancePriority__Highest8                                           = 8,
	ESmartObjectEntrancePriority__MIN9                                               = 0,
	ESmartObjectEntrancePriority__MAX10                                              = 8
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotShape
/// Size: 0x03
enum ESmartObjectSlotShape : uint8_t
{
	ESmartObjectSlotShape__Circle0                                                   = 0,
	ESmartObjectSlotShape__Rectangle1                                                = 1,
	ESmartObjectSlotShape__ESmartObjectSlotShape_MAX2                                = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotState
/// Size: 0x06
enum ESmartObjectSlotState : uint8_t
{
	ESmartObjectSlotState__Invalid0                                                  = 0,
	ESmartObjectSlotState__Free1                                                     = 1,
	ESmartObjectSlotState__Claimed2                                                  = 2,
	ESmartObjectSlotState__Occupied3                                                 = 3,
	ESmartObjectSlotState__Disabled4                                                 = 4,
	ESmartObjectSlotState__ESmartObjectSlotState_MAX5                                = 5
};

/// Enum /Script/SmartObjectsModule.FSmartObjectSlotEntrySelectionMethod
/// Size: 0x03
enum FSmartObjectSlotEntrySelectionMethod : uint8_t
{
	FSmartObjectSlotEntrySelectionMethod__First0                                     = 0,
	FSmartObjectSlotEntrySelectionMethod__NearestToSearchLocation1                   = 1,
	FSmartObjectSlotEntrySelectionMethod__FSmartObjectSlotEntrySelectionMethod_MAX2  = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectCollectionRegistrationResult
/// Size: 0x05
enum ESmartObjectCollectionRegistrationResult : uint8_t
{
	ESmartObjectCollectionRegistrationResult__Failed_InvalidCollection0              = 0,
	ESmartObjectCollectionRegistrationResult__Failed_AlreadyRegistered1              = 1,
	ESmartObjectCollectionRegistrationResult__Failed_NotFromPersistentLevel2         = 2,
	ESmartObjectCollectionRegistrationResult__Succeeded3                             = 3,
	ESmartObjectCollectionRegistrationResult__ESmartObjectCollectionRegistrationResult_MAX4 = 4
};

/// Enum /Script/SmartObjectsModule.ESmartObjectUnregistrationMode
/// Size: 0x03
enum ESmartObjectUnregistrationMode : uint8_t
{
	ESmartObjectUnregistrationMode__KeepRuntimeInstanceActiveIfPartOfCollection0     = 0,
	ESmartObjectUnregistrationMode__DestroyRuntimeInstance1                          = 1,
	ESmartObjectUnregistrationMode__ESmartObjectUnregistrationMode_MAX2              = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagMergingPolicy
/// Size: 0x03
enum ESmartObjectTagMergingPolicy : uint8_t
{
	ESmartObjectTagMergingPolicy__Combine0                                           = 0,
	ESmartObjectTagMergingPolicy__Override1                                          = 1,
	ESmartObjectTagMergingPolicy__ESmartObjectTagMergingPolicy_MAX2                  = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTagFilteringPolicy
/// Size: 0x04
enum ESmartObjectTagFilteringPolicy : uint8_t
{
	ESmartObjectTagFilteringPolicy__NoFilter0                                        = 0,
	ESmartObjectTagFilteringPolicy__Combine1                                         = 1,
	ESmartObjectTagFilteringPolicy__Override2                                        = 2,
	ESmartObjectTagFilteringPolicy__ESmartObjectTagFilteringPolicy_MAX3              = 3
};

/// Enum /Script/SmartObjectsModule.ESmartObjectSlotNavigationLocationType
/// Size: 0x03
enum ESmartObjectSlotNavigationLocationType : uint8_t
{
	ESmartObjectSlotNavigationLocationType__Entry0                                   = 0,
	ESmartObjectSlotNavigationLocationType__Exit1                                    = 1,
	ESmartObjectSlotNavigationLocationType__ESmartObjectSlotNavigationLocationType_MAX2 = 2
};

/// Enum /Script/SmartObjectsModule.ESmartObjectTraceType
/// Size: 0x04
enum ESmartObjectTraceType : uint8_t
{
	ESmartObjectTraceType__ByChannel0                                                = 0,
	ESmartObjectTraceType__ByProfile1                                                = 1,
	ESmartObjectTraceType__ByObjectTypes2                                            = 2,
	ESmartObjectTraceType__ESmartObjectTraceType_MAX3                                = 3
};

