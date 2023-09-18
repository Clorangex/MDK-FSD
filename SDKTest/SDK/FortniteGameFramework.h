/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FortniteGameFramework.

/// Struct /Script/FortniteGameFramework.ComponentCacheHelper
/// Size: 0x0058 (0x000000 - 0x000058)
class FComponentCacheHelper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/FortniteGameFramework.ActorOwnedStateTreeConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FActorOwnedStateTreeConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UStateTree*>)               StateTreeAsset                                              ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bShouldReplicate                                            ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateTreeRuntimeData
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeRuntimeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UStateTree*)                               StateTree                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FStateTreeInstanceData)                    StateTreeInstanceData                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateChangeData
/// Size: 0x001C (0x00000C - 0x000028)
class FStateChangeData : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   StateTreeDataHandle                                         ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Handle                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   StateIdentifier                                             ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(UStateTreeTaskObject*)                     StateObject                                                 ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(ETaskObjectStateChangeType)                StateChangeType                                             ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateChangeDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FStateChangeDataArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FStateChangeData>)                  StateChangeDataList                                         ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UStateTreeManagerComponent*)               StateTreeManagerComponent                                   ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/FortniteGameFramework.StateTreeClientSimulationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreeClientSimulationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteGameFramework.FGF_Character
/// Size: 0x0060 (0x000660 - 0x0006C0)
class AFGF_Character : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
};

/// Class /Script/FortniteGameFramework.FGF_GameMode
/// Size: 0x0058 (0x000378 - 0x0003D0)
class AFGF_GameMode : public AGameMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/FortniteGameFramework.FGF_GameState
/// Size: 0x0060 (0x000300 - 0x000360)
class AFGF_GameState : public AGameState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/FortniteGameFramework.FGF_PlayerController
/// Size: 0x0058 (0x000850 - 0x0008A8)
class AFGF_PlayerController : public APlayerController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2216;

public:
};

/// Class /Script/FortniteGameFramework.FGF_PlayerState
/// Size: 0x0058 (0x000348 - 0x0003A0)
class AFGF_PlayerState : public APlayerState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Script/FortniteGameFramework.ObjectBasedStateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UObjectBasedStateTreeSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteGameFramework.StateTreeManagerComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UStateTreeManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FStateTreeRuntimeData>)             StateTreeRuntimeDataList                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FStateTreeClientSimulationData>)    SimulatedDataList                                           ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FStateChangeDataArray)                     ReplicatedStateChanges                                      ___ OFFSET(get<T>, {0xC0, 288, 0, 0})
};

/// Class /Script/FortniteGameFramework.StateTreeTaskObject
/// Size: 0x0008 (0x000048 - 0x000050)
class UStateTreeTaskObject : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bReplicates                                                 ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Enum /Script/FortniteGameFramework.ETaskObjectStateChangeType
/// Size: 0x04
enum ETaskObjectStateChangeType : uint8_t
{
	ETaskObjectStateChangeType__None0                                                = 0,
	ETaskObjectStateChangeType__BeginState1                                          = 1,
	ETaskObjectStateChangeType__EndState2                                            = 2,
	ETaskObjectStateChangeType__ETaskObjectStateChangeType_MAX3                      = 3
};

