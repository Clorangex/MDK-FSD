
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class UConsoleSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   MaxScrollbackSize                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FAutoCompleteCommand>)              ManualAutoCompleteList                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           AutoCompleteMapPaths                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     BackgroundOpacityPercentage                                 OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bOrderTopToBottom                                           OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(bool)                                      bDisplayHelpInAutoComplete                                  OFFSET(get<bool>, {0x55, 1, 0, 0})
	SMember(FColor)                                    InputColor                                                  OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FColor)                                    HistoryColor                                                OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCommandColor                                    OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCVarColor                                       OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteFadedColor                                      OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameMapsSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   LocalMapOptions                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           TransitionMap                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bUseSplitscreen                                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ETwoPlayerSplitScreenType>)    TwoPlayerSplitscreenLayout                                  OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<EThreePlayerSplitScreenType>)  ThreePlayerSplitscreenLayout                                OFFSET(get<T>, {0x52, 1, 0, 0})
	CMember(EFourPlayerSplitScreenType)                FourPlayerSplitscreenLayout                                 OFFSET(get<T>, {0x53, 1, 0, 0})
	DMember(bool)                                      bOffsetPlayerGamepadIds                                     OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FSoftClassPath)                            GameInstanceClass                                           OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FSoftObjectPath)                           GameDefaultMap                                              OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FSoftObjectPath)                           ServerDefaultMap                                            OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultGameMode                                       OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultServerGameMode                                 OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeMapPrefixes                                         OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeClassAliases                                        OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                            // [0x4de52b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// bool GetSkipAssigningGamepadToPlayer1();                                                                                 // [0x4de529c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
	// UGameMapsSettings* GetGameMapsSettings();                                                                                // [0x4de526c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UGameNetworkManagerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   MinDynamicBandwidth                                         OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxDynamicBandwidth                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TotalNetBandwidth                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   BadPingThreshold                                            OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bIsStandbyCheckingEnabled                                   OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(float)                                     StandbyRxCheatTime                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     StandbyTxCheatTime                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PercentMissingForRxStandby                                  OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PercentMissingForTxStandby                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PercentForBadPing                                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     JoinInProgressStandbyWaitTime                               OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameSessionSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   MaxSpectators                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bRequiresPushToTalk                                         OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeneralEngineSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UGeneralProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FString)                                   CompanyName                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   CompanyDistinguishedName                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CopyrightNotice                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   Homepage                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   LicensingTerms                                              OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   PrivacyPolicy                                               OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FGuid)                                     ProjectID                                                   OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   ProjectName                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   ProjectVersion                                              OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   SupportContact                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FText)                                     ProjectDisplayedTitle                                       OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     ProjectDebugTitleInfo                                       OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(bool)                                      bShouldWindowPreserveAspectRatio                            OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bUseBorderlessWindow                                        OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bStartInVR                                                  OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bAllowWindowResize                                          OFFSET(get<bool>, {0x10B, 1, 0, 0})
	DMember(bool)                                      bAllowClose                                                 OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bAllowMaximize                                              OFFSET(get<bool>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bAllowMinimize                                              OFFSET(get<bool>, {0x10E, 1, 0, 0})
	DMember(float)                                     EyeOffsetForFakeStereoRenderingDevice                       OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     FOVForFakeStereoRenderingDevice                             OFFSET(get<float>, {0x114, 4, 0, 0})
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UHudSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bShowHUD                                                    OFFSET(get<bool>, {0x28, 1, 1, 0})
	CMember(TArray<FName>)                             DebugDisplay                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (0x000000 - 0x000028)
class FAutoCompleteCommand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Command                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Desc                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameModeName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftClassPath)                            GameMode                                                    OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/EngineSettings.TemplateMapInfoOverride
/// Size: 0x0048 (0x000000 - 0x000048)
class FTemplateMapInfoOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoftObjectPath)                           Thumbnail                                                   OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSoftObjectPath)                           Map                                                         OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x03
enum ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal0                                           = 0,
	ETwoPlayerSplitScreenType__Vertical1                                             = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX2                        = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x05
enum EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop0                                           = 0,
	EThreePlayerSplitScreenType__FavorBottom1                                        = 1,
	EThreePlayerSplitScreenType__Vertical2                                           = 2,
	EThreePlayerSplitScreenType__Horizontal3                                         = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX4                    = 4
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x04
enum EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid0                                                = 0,
	EFourPlayerSplitScreenType__Vertical1                                            = 1,
	EFourPlayerSplitScreenType__Horizontal2                                          = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX3                      = 3
};

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x03
enum ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass0                                                  = 0,
	ESubLevelStripMode__IsChildOf1                                                   = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX2                                      = 2
};

