
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: UMG

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UWrapBox*)                                 WrapBox                                                     OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UClass*)                                   EntryWidgetClass                                            OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TArray<UAthenaItemElementWidgetBase*>)     EntryWidgets                                                OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UFortItemDefinition*)                      PreviewItemDef                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   NumPreviewEntries                                           OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
/// Size: 0x00B8 (0x0002D0 - 0x000388)
class UClassSelectorTabButtons : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UCommonActionWidget*)                      LeftActionWidget                                            OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      RightActionWidget                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UScrollBox*)                               TabButtonsScrollBox                                         OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        LeftButton                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        RightButton                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       LeftInputAction                                             OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightInputAction                                            OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(TArray<UClassSelectorTeamTile*>)           TabButtons                                                  OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMargin)                                   TabButtonPadding                                            OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	CMember(TArray<FText>)                             DesignerPreviewTabNames                                     OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(float)                                     ButtonScrollAmount                                          OFFSET(get<float>, {0x368, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class UClassSelectorTeamInfoWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UCommonTextBlock*)                         TeamName                                                    OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TeamCountText                                               OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TeamDescription                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
/// Size: 0x0040 (0x001470 - 0x0014B0)
class UCreativeClassSelectorButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(UCommonTextBlock*)                         ButtonTextBlock                                             OFFSET(get<T>, {0x1470, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget                                                OFFSET(get<T>, {0x1478, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x1480, 24, 0, 0})
	SMember(FDataTableRowHandle)                       buttonInputAction                                           OFFSET(getStruct<T>, {0x1498, 16, 0, 0})
	DMember(bool)                                      bAutoCapitalize                                             OFFSET(get<bool>, {0x14A8, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton.SetButtonText
	// void SetButtonText(FText& InText);                                                                                       // [0x9a9b700] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
/// Size: 0x00B0 (0x0014B0 - 0x001560)
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	CMember(UTextBlock*)                               PlayerCount                                                 OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonLazyImage*)                         TeamIconImage                                               OFFSET(get<T>, {0x1548, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamSet
	// void OnTeamSet(FMinigameTeam& NewTeamData);                                                                              // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamIconSet
	// void OnTeamIconSet(FCreativeIconOption& NewTeamIcon);                                                                    // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnTeamColorIndexSet
	// void OnTeamColorIndexSet(int32_t TeamColorIndex);                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile.OnPlayerCountSet
	// void OnPlayerCountSet(int32_t NewPlayerCount);                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UClassSelectorTeamTiles : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(TArray<UClassSelectorTeamTile*>)           TeamTiles                                                   OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UUniformGridPanel*)                        RootPanel                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   EntryClass                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   DesignerPreviewEntries                                      OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassItemInfo
/// Size: 0x0058 (0x000028 - 0x000080)
class UCreativeClassItemInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMinigameClassSlot)                        ClassSlot                                                   OFFSET(getStruct<T>, {0x28, 80, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassEntry
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
class UCreativeClassEntry : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	CMember(UCreativeClassItemInfo*)                   ItemInfo                                                    OFFSET(get<T>, {0x14B8, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnClassEntryDataSet
	// void OnClassEntryDataSet(bool bIsCurrentClass, bool bIsPendingClass);                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassEntry.OnBrowsingLoadout
	// void OnBrowsingLoadout(bool bBrowsingLoadout);                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelector
/// Size: 0x0138 (0x0003E8 - 0x000520)
class UCreativeClassSelector : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(UClassSelectorTabButtons*)                 TabButtons_TeamSelection                                    OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonListView*)                          ListView_Classes                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TArray<UCreativeClassItemInfo*>)           ClassItemInfos                                              OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(UScrollBox*)                               LoadoutScrollBox                                            OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UClassSelectorLoadoutContainer*)           LoadoutContainer_Inventory                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UClassSelectorLoadoutContainer*)           LoadoutContainer_Resources                                  OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SelectLoadout                                        OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_RandomClass                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Descriptions                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UPanelWidget*)                             ClassAndTeamDescriptionContainer                            OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPanelWidget*)                             ItemDescriptionContainer                                    OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPanelWidget*)                             InventoryPanel                                              OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UPanelWidget*)                             ResourcesPanel                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemRarity                                                  OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemName                                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemDescription                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UPanelWidget*)                             TeamDescriptionContainer                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UClassSelectorTeamInfoWidget*)             TeamInfoWidget_FullView                                     OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UClassSelectorTeamInfoWidget*)             TeamInfoWidget_TeamsOnly                                    OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          DisplaySwitcher                                             OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UPanelWidget*)                             ClassAndTeamSelectionContainer                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UPanelWidget*)                             OnlyTeamSelectionContainer                                  OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UPanelWidget*)                             InvalidDataContainer                                        OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UClassSelectorTeamTiles*)                  TeamTiles                                                   OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UClass*)                                   TeamSelectionTabClass                                       OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(bool)                                      bIsModalVersion                                             OFFSET(get<bool>, {0x4C8, 1, 0, 0})
	DMember(bool)                                      bEnableModalTimeLimit                                       OFFSET(get<bool>, {0x4C9, 1, 0, 0})
	DMember(int32_t)                                   ModalTimeLimitInSeconds                                     OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	CMember(EClassSelectorDisplayMode)                 DisplayMode                                                 OFFSET(get<T>, {0x4E0, 1, 0, 0})
	DMember(bool)                                      bDeferRespawn                                               OFFSET(get<bool>, {0x4E1, 1, 0, 0})
	SMember(FDataTableRowHandle)                       ReturnToClassSelectionInputAction                           OFFSET(getStruct<T>, {0x4E8, 16, 0, 0})
	DMember(float)                                     LoadoutScrollPadding                                        OFFSET(get<float>, {0x4F8, 4, 0, 0})
	CMember(UCreativeClassItemInfo*)                   SelectedClassItemInfo                                       OFFSET(get<T>, {0x518, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown
	// void OnTimerCountdown(int32_t RemainingTime);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted
	// void OnLoadoutCommitted(FText& NewClassName, FText& NewTeamName, bool bNewLoadout);                                      // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated
	// void OnClassSelectorUIPopulated(bool bHasValidData);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged
	// void OnClassSelectionChanged(FText& NewClassName, FText& NewClassDescription);                                           // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged
	// void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);                              // [0x9a9b640] Final|Native|Protected 
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem
	// UWidget* GetFirstLoadoutItem();                                                                                          // [0x9a9b604] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
/// Size: 0x0060 (0x0003E8 - 0x000448)
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FAthenaMapScreenContainerTabInfo)          MapTabInfo                                                  OFFSET(getStruct<T>, {0x3F8, 72, 0, 0})
	CMember(UCreativeClassSelector*)                   CreativeClassSelector                                       OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName
	// void SetTabName(FText& TabName);                                                                                         // [0x9a9b79c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI
/// Size: 0x0000 (0x000338 - 0x000338)
class AMutator_ClassSelectorUI : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

