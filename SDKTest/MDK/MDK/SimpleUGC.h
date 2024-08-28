
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SimpleUGC.MakeReplaceableActorComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMakeReplaceableActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UClass*)                             CompatibleReplacement                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/SimpleUGC.ReplacementActorComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UReplacementActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<class UClass*>)                     ActorClassesToReplace                                       OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/SimpleUGC.UGCBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUGCBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SimpleUGC.UGCBlueprintLibrary.GetUGCSettings
	// class UUGCSettings* GetUGCSettings(class UObject* WorldContextObject);                                                   // [0x114c5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCBlueprintLibrary.GetUGCRegistry
	// class UUGCRegistry* GetUGCRegistry(class UObject* WorldContextObject);                                                   // [0x114c530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCBlueprintLibrary.GetUGCLatentActionManager
	// class UUGCLatentActionManager* GetUGCLatentActionManager(class UObject* WorldContextObject);                             // [0x114c4a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.ModioModInfoWrapper
/// Size: 0x0068 (0x000028 - 0x000090)
class UModioModInfoWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   ModId                                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ModName                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   ModURL                                                      OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   ModAuthor                                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   ModVersion                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   ModDescription                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(EUGCApprovalStatus)                        Status                                                      OFFSET(get<T>, {0x88, 1, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.ModioModInfoWrapper.IsModIdInvalid
	// bool IsModIdInvalid();                                                                                                   // [0x114c7e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.ModioTermsWrapper
/// Size: 0x0070 (0x000028 - 0x000098)
class UModioTermsWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   AgreeButtonText                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   DisagreeButtonText                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   TermsLink                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   TermsText                                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   PrivacyLink                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   PrivacyText                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   TermsOfUseText                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.ModioTermsWrapper.isEmpty
	// bool isEmpty();                                                                                                          // [0x114e700] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.UGCLatentActionManager
/// Size: 0x01F0 (0x000028 - 0x000218)
class UUGCLatentActionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TWeakObjectPtr<class UModioTermsWrapper*>) LatestModioTermsAndConditions                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<int64_t, class UModioModInfoWrapper*>) ModioModMetaDatas                                          OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TMap<int64_t, class UTexture2DDynamic*>)   ModioModThumbnails                                          OFFSET(get<T>, {0x128, 80, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.UGCLatentActionManager.GetCachedModioModMetaData
	// class UModioModInfoWrapper* GetCachedModioModMetaData(int64_t ModId);                                                    // [0x114baa0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.UGCPackage
/// Size: 0x0100 (0x000028 - 0x000128)
class UUGCPackage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   ModURL                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Categories                                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(EUGCApprovalStatus)                        Status                                                      OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(EUGCDownloadVersion)                       DownloadVersion                                             OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FString)                                   ModPath                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   PakFileLocation                                             OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(TArray<FString>)                           PakFileAssets                                               OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   Author                                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FString)                                   AuthorURL                                                   OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      IsMounted                                                   OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(bool)                                      MountingToBeApplied                                         OFFSET(get<bool>, {0xFD, 1, 0, 0})
	DMember(bool)                                      DeprecatedLocation                                          OFFSET(get<bool>, {0xFE, 1, 0, 0})
	DMember(bool)                                      ShowStatusForAudioCosmetic                                  OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(TArray<int64_t>)                           Dependencies                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      DependencyRemoved                                           OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      PackagedForLatestVersion                                    OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      OverridePackedForLatestVersion                              OFFSET(get<bool>, {0x11A, 1, 0, 0})
	SMember(FDateTime)                                 LastUpdated                                                 OFFSET(getStruct<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.UGCPackage.GetIdAsString
	// FString GetIdAsString();                                                                                                 // [0x114bcd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCPackage.GetIdAsInt
	// int64_t GetIdAsInt();                                                                                                    // [0x114bca0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.UGCRegistry
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UUGCRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FMulticastInlineDelegate)                  OnPackageMounted                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<class UUGCPackage*>)                UGCPackages                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<class UClass*, class UClass*>)        RegisteredOverrides                                         OFFSET(get<T>, {0x48, 80, 0, 0})
	DMember(bool)                                      PackageChange                                               OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlueprintsSpawned                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<class UUGCPackage*>)                UGCPackagesInstalledDuringJoin                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<class UUGCPackage*>)                UGCPackagesUnmountedDuringJoin                              OFFSET(get<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.UGCRegistry.UnmountUGCPackages
	// void UnmountUGCPackages(TArray<FString> ExcludingModIds);                                                                // [0x114e330] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.UnmountUGCPackage
	// bool UnmountUGCPackage(class UUGCPackage* Package, bool RemoveFromUserSettings, bool RemoveFromDisk);                    // [0x114e210] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.UnmountSandboxUGCPackages
	// void UnmountSandboxUGCPackages();                                                                                        // [0x114e1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.UnmountAllNonVerifiedUGCPackages
	// void UnmountAllNonVerifiedUGCPackages();                                                                                 // [0x114e1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.UGCPackageMounted__DelegateSignature
	// void UGCPackageMounted__DelegateSignature(bool Sandbox);                                                                 // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCRegistry.UGCBlueprintsSpawned__DelegateSignature
	// void UGCBlueprintsSpawned__DelegateSignature(int32_t Count);                                                             // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCRegistry.TryGetPackageFromId
	// class UUGCPackage* TryGetPackageFromId(FString ModId);                                                                   // [0x114e0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.ResetUGCPackagesManipulatedDuringJoin
	// void ResetUGCPackagesManipulatedDuringJoin();                                                                            // [0x114dbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.RegisterAssetFromPackage
	// void RegisterAssetFromPackage(class UUGCPackage* Package);                                                               // [0x114da80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.NumberOfModsInstalled
	// int32_t NumberOfModsInstalled(EUGCApprovalStatus ApprovalStatus);                                                        // [0x114d890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCRegistry.MountUGCPackage
	// bool MountUGCPackage(class UUGCPackage* Package, bool FromJoining);                                                      // [0x114d7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCRegistry.IsModToBeEnabled
	// bool IsModToBeEnabled(int64_t ModId);                                                                                    // [0x114cd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.IsModInstalledImprecise
	// bool IsModInstalledImprecise(FString ModName, bool IncludeDeprecatedLocation);                                           // [0x114cb50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.IsModInstalledByIdOrName
	// bool IsModInstalledByIdOrName(FString ModIdOrName, bool IncludeDeprecatedLocation);                                      // [0x114ca10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.IsModInstalled
	// bool IsModInstalled(FString ModId);                                                                                      // [0x114c910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.IsModEnabled
	// bool IsModEnabled(FString ModId);                                                                                        // [0x114c6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.GetPackagesWhichDependsOnPackage
	// TArray<UUGCPackage*> GetPackagesWhichDependsOnPackage(class UUGCPackage* Package);                                       // [0x114c300] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCRegistry.GetPackagesSorted
	// TArray<UUGCPackage*> GetPackagesSorted(EPackageSortField ByField, bool Ascending);                                       // [0x114c1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCRegistry.GetMapsInPackage
	// bool GetMapsInPackage(class UUGCPackage* Package, TArray<FName>& Maps);                                                  // [0x114bd50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCRegistry.GetAllClassesInPackage
	// bool GetAllClassesInPackage(class UUGCPackage* Package, TArray<UClass*>& Classes);                                       // [0x114b9a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCRegistry.AreModsInstalled
	// bool AreModsInstalled(EUGCApprovalStatus ApprovalStatus);                                                                // [0x114b5c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCRegistry.AreDeprecatedModsInstalled
	// bool AreDeprecatedModsInstalled();                                                                                       // [0x114b590] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SimpleUGC.UGCSettings
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UUGCSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FString>)                           slot1                                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   slot1Icon                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(TArray<FString>)                           slot2                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   slot2Icon                                                   OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<FString>)                           slot3                                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   slot3Icon                                                   OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	CMember(TArray<FString>)                           slot4                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   slot4Icon                                                   OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   SelectedSlot                                                OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSettingsUpdated                                           OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.UGCSettings.WriteToPlainText
	// bool WriteToPlainText(FString Filename, FString TextContent, FText& OutError, bool Append);                              // [0x114e4a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.UGCSettingsUpdated__DelegateSignature
	// void UGCSettingsUpdated__DelegateSignature();                                                                            // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSettings.SetIconIndexOfSlot
	// void SetIconIndexOfSlot(int32_t SlotNumber, int32_t iconIndex);                                                          // [0x114dd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.SaveToSlot
	// void SaveToSlot(int32_t SlotNumber);                                                                                     // [0x114dbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.SaveToSelectedSlot
	// void SaveToSelectedSlot();                                                                                               // [0x114dbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.ResetSlot
	// void ResetSlot();                                                                                                        // [0x114db90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.ReadFromPlainText
	// bool ReadFromPlainText(FString Filename, FString& OutTextContent);                                                       // [0x114d920] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSettings.LoadSlot
	// bool LoadSlot(int32_t SlotNumber);                                                                                       // [0x114d700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.GetModNamesOfSlot
	// TArray<FString> GetModNamesOfSlot(int32_t SlotNumber, int32_t& outNumberOfUnknown);                                      // [0x114bf30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSettings.GetModIdsOfSlot
	// TArray<FString> GetModIdsOfSlot(int32_t SlotNumber);                                                                     // [0x114be50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSettings.GetIconIndexOfSlot
	// int32_t GetIconIndexOfSlot(int32_t SlotNumber);                                                                          // [0x114bc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.DoesSlotContainMods
	// bool DoesSlotContainMods(int32_t SlotNumber);                                                                            // [0x114b720] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSettings.ClearSlot
	// void ClearSlot(int32_t SlotNumber);                                                                                      // [0x114b670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSettings.CleanupSlots
	// void CleanupSlots();                                                                                                     // [0x114b650] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SimpleUGC.UGCSubsystem
/// Size: 0x0238 (0x000030 - 0x000268)
class UUGCSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	DMember(bool)                                      forceNoMods                                                 OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      noInternetAccess                                            OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      noModioUser                                                 OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      IsJoining                                                   OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(class UUGCRegistry*)                       UGCRegistry                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UUGCSettings*)                       UGCSettings                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UUGCLatentActionManager*)            UGCLatentActionManager                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      ModioTermsAndConditionsAccepted                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModioUserAuthenticated                                    OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnErrorInstalling                                           OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(TMap<FString, EUGCPackageError>)           ModsFailedInstall                                           OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModDownloadExtractProgress                                OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModDownloadExtractProgressFinished                        OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModUninstallProgressFinished                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModManagementStateChanged                                 OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      IsModioModManagementEnabled                                 OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLocalUserModsInstalled                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      IsLocalUserModsInstalled                                    OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEscapeMenuOpened                                          OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModioRequestHandled                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	CMember(TArray<FString>)                           CrashingDisabledMods                                        OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<class UUGCPackage*>)                ModsPendingUninstall                                        OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(TArray<class UUGCPackage*>)                ModsPendingUpdate                                           OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(TArray<EModioRequestType>)                 ModioRequests                                               OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(TArray<int64_t>)                           ModioSubscribeRequestsIds                                   OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<int64_t>)                           ModioSubscribeDependecyRequestsIds                          OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(TArray<int64_t>)                           ModioAddDependecyRequestsIds                                OFFSET(get<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/SimpleUGC.UGCSubsystem.UGRequiredModsFetched__DelegateSignature
	// void UGRequiredModsFetched__DelegateSignature(TArray<FString>& ModsToEnable, TArray<FString>& ModsToInstall);            // [0x1d6f900] Public|Delegate|HasOutParms 
	// Function /Script/SimpleUGC.UGCSubsystem.UGModProgressDone__DelegateSignature
	// void UGModProgressDone__DelegateSignature(FString ModName, FString ModId);                                               // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGInstallError__DelegateSignature
	// void UGInstallError__DelegateSignature(FString ModName, EUGCPackageError ErrorType);                                     // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCRequestHandled__DelegateSignature
	// void UGCRequestHandled__DelegateSignature(EModioRequestType requestType);                                                // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCModProgress__DelegateSignature
	// void UGCModProgress__DelegateSignature(FString Name, TArray<FString>& ModsPendingDownload, bool Downloading, int32_t Progress, int32_t Total); // [0x1d6f900] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCModManagementStateChanged__DelegateSignature
	// void UGCModManagementStateChanged__DelegateSignature(bool Enabled);                                                      // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCLocalUserModsInstalled__DelegateSignature
	// void UGCLocalUserModsInstalled__DelegateSignature();                                                                     // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCHiddenMods__DelegateSignature
	// void UGCHiddenMods__DelegateSignature();                                                                                 // [0x1d6f900] Public|Delegate      
	// Function /Script/SimpleUGC.UGCSubsystem.UGCEscapeMenuOpened__DelegateSignature
	// void UGCEscapeMenuOpened__DelegateSignature();                                                                           // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.UGCAuthenticatedModioUser__DelegateSignature
	// void UGCAuthenticatedModioUser__DelegateSignature(bool Authenticated);                                                   // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SimpleUGC.UGCSubsystem.SetPackagesAsRecentlyInstalled
	// void SetPackagesAsRecentlyInstalled(TArray<UUGCPackage*> RecentMods);                                                    // [0x114dfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.SetModsAsRecentlyInstalled
	// void SetModsAsRecentlyInstalled(TArray<FString> RecentMods);                                                             // [0x114de70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.SetModidngSettingsMenuEnabled
	// void SetModidngSettingsMenuEnabled(bool bEnabled);                                                                       // [0x114dde0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.SetCheckGameVersion
	// void SetCheckGameVersion(bool ShouldCheck);                                                                              // [0x114dc80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.RemoveRequestOfType
	// void RemoveRequestOfType(EModioRequestType requestType);                                                                 // [0x114db10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.MarkRecentlyInstalledModsSuccesful
	// void MarkRecentlyInstalledModsSuccesful();                                                                               // [0x114d7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestTermsOfUse
	// void K2_RequestTermsOfUse(class UObject* WorldContext, FLatentActionInfo LatentInfo);                                    // [0x114d610] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestSubscribe
	// bool K2_RequestSubscribe(FString ModId);                                                                                 // [0x114d510] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestModThumbnailById
	// void K2_RequestModThumbnailById(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId);               // [0x114d390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestModThumbnail
	// void K2_RequestModThumbnail(class UObject* WorldContext, FLatentActionInfo LatentInfo, class UUGCPackage* Package);      // [0x114d250] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestModMetaData
	// void K2_RequestModMetaData(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModioStringID, int64_t& ModId); // [0x114d080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestModDependencyList
	// void K2_RequestModDependencyList(class UObject* WorldContext, FLatentActionInfo LatentInfo, FString ModId, FString& outParentId, TArray<FString>& outModIds); // [0x114ce10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestFetchModUpdates
	// void K2_RequestFetchModUpdates();                                                                                        // [0x114cdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.K2_RequestAuthentication
	// void K2_RequestAuthentication();                                                                                         // [0x114cdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.IsModPendingUninstall
	// bool IsModPendingUninstall(class UUGCPackage* InMod);                                                                    // [0x114cc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SimpleUGC.UGCSubsystem.HasOutstadingRequestOfType
	// bool HasOutstadingRequestOfType(EModioRequestType requestType);                                                          // [0x114c650] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetQueuedModioRequests
	// TArray<EModioRequestType> GetQueuedModioRequests();                                                                      // [0x114c3e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUpdate
	// TArray<FString> GetNamesOfModsPendingUpdate();                                                                           // [0x114c170] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetNamesOfModsPendingUninstall
	// TArray<FString> GetNamesOfModsPendingUninstall();                                                                        // [0x114c0f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetNamesOfModsPendingInstall
	// TArray<FString> GetNamesOfModsPendingInstall();                                                                          // [0x114c070] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetModdingSettingsMenuEnabled
	// bool GetModdingSettingsMenuEnabled();                                                                                    // [0x114c050] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.GetCheckGameVersion
	// bool GetCheckGameVersion();                                                                                              // [0x114bbd0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SimpleUGC.UGCSubsystem.FetchModsForSession
	// bool FetchModsForSession(TArray<FString> HostMods, FDelegateProperty OnModsFetched);                                     // [0x114b7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.EnableModioModManagement
	// void EnableModioModManagement();                                                                                         // [0x114b7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.DisableModioModManagement
	// void DisableModioModManagement();                                                                                        // [0x114b700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SimpleUGC.UGCSubsystem.ApplyPendingMods
	// void ApplyPendingMods(bool FromJoining);                                                                                 // [0x114b500] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SimpleUGC.ModDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FModDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Category                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SimpleUGC.Mods
/// Size: 0x0010 (0x000000 - 0x000010)
class FMods : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FModDefinition>)                    Mods                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/SimpleUGC.EUGCApprovalStatus
/// Size: 0x04
enum class EUGCApprovalStatus : uint8_t
{
	EUGCApprovalStatus__Fully                                                        = 0,
	EUGCApprovalStatus__Progression                                                  = 1,
	EUGCApprovalStatus__Sandbox                                                      = 2,
	EUGCApprovalStatus__All                                                          = 255
};

/// Enum /Script/SimpleUGC.EPackageSortField
/// Size: 0x05
enum class EPackageSortField : uint8_t
{
	EPackageSortField__None                                                          = 0,
	EPackageSortField__Name                                                          = 1,
	EPackageSortField__Status                                                        = 2,
	EPackageSortField__Author                                                        = 3,
	EPackageSortField__Mounted                                                       = 4
};

/// Enum /Script/SimpleUGC.EModioRequestType
/// Size: 0x10
enum class EModioRequestType : uint8_t
{
	EModioRequestType__Authentication                                                = 0,
	EModioRequestType__K2_Authentication                                             = 1,
	EModioRequestType__TermsOfUse                                                    = 2,
	EModioRequestType__FetchModUpdates                                               = 3,
	EModioRequestType__ModMetaData                                                   = 4,
	EModioRequestType__Thumbnail                                                     = 5,
	EModioRequestType__Subscribe                                                     = 6,
	EModioRequestType__ModDependencySubscribe                                        = 7,
	EModioRequestType__ModDependencyList                                             = 8,
	EModioRequestType__ModDependencyAdd                                              = 9
};

/// Enum /Script/SimpleUGC.EUGCPackageError
/// Size: 0x03
enum class EUGCPackageError : uint8_t
{
	EUGCPackageError__Exists                                                         = 0,
	EUGCPackageError__Invalid                                                        = 1,
	EUGCPackageError__Other                                                          = 2
};

/// Enum /Script/SimpleUGC.EUGCDownloadVersion
/// Size: 0x03
enum class EUGCDownloadVersion : uint8_t
{
	EUGCDownloadVersion__Optional                                                    = 0,
	EUGCDownloadVersion__Required                                                    = 1,
	EUGCDownloadVersion__All                                                         = 255
};

/// Enum /Script/SimpleUGC.EUGCBlueprintSpawning
/// Size: 0x03
enum class EUGCBlueprintSpawning : uint8_t
{
	EUGCBlueprintSpawning__Spacerig                                                  = 0,
	EUGCBlueprintSpawning__Cave                                                      = 1,
	EUGCBlueprintSpawning__Other                                                     = 2
};

