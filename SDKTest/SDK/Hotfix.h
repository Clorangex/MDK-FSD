/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Hotfix.

/// Struct /Script/Hotfix.UpdateContextDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
class FUpdateContextDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bCheckAvailabilityOnly                                      ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bPatchCheckEnabled                                          ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bPlatformEnvironmentDetectionEnabled                        ___ OFFSET(get<bool>, {0x13, 1, 0, 0})
	CMember(TSet<FString>)                             AdditionalTags                                              ___ OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x0240 (0x000028 - 0x000268)
class UOnlineHotfixManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FString)                                   OSSName                                                     ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FString)                                   HotfixManagerClassName                                      ___ OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FString)                                   DebugPrefix                                                 ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TArray<UObject*>)                          AssetsHotfixedFromIniFiles                                  ___ OFFSET(get<T>, {0x258, 16, 0, 0})
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x01D0 (0x000028 - 0x0001F8)
class UUpdateManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(float)                                     UpdateCheckStartDelay                                       ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     UpdateCheckCachedResponseDelay                              ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     HotfixCheckCompleteDelay                                    ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     UpdateCheckCompleteDelay                                    ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     HotfixAvailabilityCheckCompleteDelay                        ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     UpdateCheckAvailabilityCompleteDelay                        ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   AppSuspendedUpdateCheckTimeSeconds                          ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bPlatformEnvironmentDetected                                ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bInitialUpdateFinished                                      ___ OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bCheckHotfixAvailabilityOnly                                ___ OFFSET(get<bool>, {0xB2, 1, 0, 0})
	CMember(EUpdateState)                              CurrentUpdateState                                          ___ OFFSET(get<T>, {0xB3, 1, 0, 0})
	DMember(int32_t)                                   WorstNumFilesPendingLoadViewed                              ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	CMember(EHotfixResult)                             LastHotfixResult                                            ___ OFFSET(get<T>, {0xBC, 1, 0, 0})
	SMember(FDateTime)                                 LastUpdateCheck                                             ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(EUpdateCompletionStatus)                   LastCompletionResult                                        ___ OFFSET(get<T>, {0xF0, 2, 0, 0})
	CMember(UEnum*)                                    UpdateStateEnum                                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UEnum*)                                    UpdateCompletionEnum                                        ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FUpdateContextDefinition)                  UpdateContextDefinitionUnknown                              ___ OFFSET(get<T>, {0x128, 104, 0, 0})
	CMember(TArray<FUpdateContextDefinition>)          UpdateContextDefinitions                                    ___ OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x06
enum EHotfixResult : uint8_t
{
	EHotfixResult__Failed0                                                           = 0,
	EHotfixResult__Success1                                                          = 1,
	EHotfixResult__SuccessNoChange2                                                  = 2,
	EHotfixResult__SuccessNeedsReload3                                               = 3,
	EHotfixResult__SuccessNeedsRelaunch4                                             = 4,
	EHotfixResult__EHotfixResult_MAX5                                                = 5
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x09
enum EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle0                                                        = 0,
	EUpdateState__UpdatePending1                                                     = 1,
	EUpdateState__CheckingForPatch2                                                  = 2,
	EUpdateState__DetectingPlatformEnvironment3                                      = 3,
	EUpdateState__CheckingForHotfix4                                                 = 4,
	EUpdateState__WaitingOnInitialLoad5                                              = 5,
	EUpdateState__InitialLoadComplete6                                               = 6,
	EUpdateState__UpdateComplete7                                                    = 7,
	EUpdateState__EUpdateState_MAX8                                                  = 8
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x10
enum EUpdateCompletionStatus : uint8_t
{
	EUpdateCompletionStatus__UpdateUnknown0                                          = 0,
	EUpdateCompletionStatus__UpdateSuccess1                                          = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange2                                 = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload3                              = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch4                            = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch5                               = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck6                               = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck7                              = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn8                              = 8,
	EUpdateCompletionStatus__EUpdateCompletionStatus_MAX9                            = 9
};

