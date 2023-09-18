/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameFeatures.

/// Struct /Script/GameFeatures.GameFeatureComponentEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameFeatureComponentEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ComponentClass                                              ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bClientComponent                                            ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bServerComponent                                            ___ OFFSET(get<bool>, {0x40, 1, 1, 1})
};

/// Struct /Script/GameFeatures.DataRegistrySourceToAdd
/// Size: 0x0050 (0x000000 - 0x000050)
class FDataRegistrySourceToAdd : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     RegistryToAddTo                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AssetPriority                                               ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bClientSource                                               ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bServerSource                                               ___ OFFSET(get<bool>, {0x8, 1, 1, 1})
	CMember(TWeakObjectPtr<UDataTable*>)               DataTableToAdd                                              ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	CMember(TWeakObjectPtr<UCurveTable*>)              CurveTableToAdd                                             ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/GameFeatures.GameFeaturePluginStateMachineProperties
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGameFeaturePluginStateMachineProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UGameFeatureData*)                         GameFeatureData                                             ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/GameFeatures.GameFeaturePluginIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameFeaturePluginIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameFeatures.InstallBundlePluginProtocolMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FInstallBundlePluginProtocolMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Class /Script/GameFeatures.GameFeatureStateChangeObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureStateChangeObserver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureVersePathMapperCommandlet
/// Size: 0x0000 (0x000080 - 0x000080)
class UGameFeatureVersePathMapperCommandlet : public UCommandlet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddCheats
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameFeatureAction_AddCheats : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<TWeakObjectPtr>)                    CheatManagers                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLoadCheatManagersAsync                                     ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SpawnedCheatManagers                                        ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AddChunkOverride
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_AddChunkOverride : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeatureAction_AddComponents
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameFeatureAction_AddComponents : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FGameFeatureComponentEntry>)        ComponentList                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_AddWPContent
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_AddWPContent : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UContentBundleDescriptor*)                 ContentBundleDescriptor                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistry
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistry : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr>)                    RegistriesToAdd                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bPreloadInEditor                                            ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureAction_DataRegistrySource
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeatureAction_DataRegistrySource : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDataRegistrySourceToAdd>)          SourcesToAdd                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bPreloadInEditor                                            ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameFeatures.GameFeatureData
/// Size: 0x0020 (0x000030 - 0x000050)
class UGameFeatureData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UGameFeatureAction*>)               Actions                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FPrimaryAssetTypeInfo>)             PrimaryAssetTypesToScan                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GameFeatures.GameFeaturePluginStateMachine
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UGameFeaturePluginStateMachine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FGameFeaturePluginStateMachineProperties)  StateProperties                                             ___ OFFSET(get<T>, {0x30, 200, 0, 0})
};

/// Class /Script/GameFeatures.GameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeaturesProjectPolicies : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.DefaultGameFeaturesProjectPolicies
/// Size: 0x0000 (0x000028 - 0x000028)
class UDefaultGameFeaturesProjectPolicies : public UGameFeaturesProjectPolicies
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameFeatures.GameFeaturesSubsystem
/// Size: 0x0120 (0x000030 - 0x000150)
class UGameFeaturesSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TMap<FString, UGameFeaturePluginStateMachine*>) GameFeaturePluginStateMachines                         ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<UGameFeaturePluginStateMachine*>)   TerminalGameFeaturePluginStateMachines                      ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<UObject*>)                          Observers                                                   ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(UGameFeaturesProjectPolicies*)             GameSpecificPolicies                                        ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/GameFeatures.GameFeaturesSubsystemSettings
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameFeaturesSubsystemSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSoftClassPath)                            GameFeaturesManagerClassName                                ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(TArray<FString>)                           EnabledPlugins                                              ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FString>)                           DisabledPlugins                                             ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FString>)                           AdditionalPluginMetadataKeys                                ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Enum /Script/GameFeatures.EGameFeatureTargetState
/// Size: 0x06
enum EGameFeatureTargetState : uint8_t
{
	EGameFeatureTargetState__Installed0                                              = 0,
	EGameFeatureTargetState__Registered1                                             = 1,
	EGameFeatureTargetState__Loaded2                                                 = 2,
	EGameFeatureTargetState__Active3                                                 = 3,
	EGameFeatureTargetState__Count4                                                  = 4,
	EGameFeatureTargetState__EGameFeatureTargetState_MAX5                            = 5
};

