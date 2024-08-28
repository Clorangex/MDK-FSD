
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Art
/// dependency: Character
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FSD
/// dependency: LevelElements
/// dependency: LevelSequence
/// dependency: UMG

/// Class /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C
/// Size: 0x0038 (0x000228 - 0x000260)
class ALVL_CharacterSelection_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	CMember(class ULevelSequencePlayer*)               Player                                                      OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class ACharacterSelectionSwitcher_C*)      switcher                                                    OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(TArray<FCharacterViewInfo>)                CharViewerList                                              OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(class ACharacterSelectionSwitcher_C*)      CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class ACameraActor*)                       CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty OFFSET(get<T>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.MakeVanity
	// void MakeVanity(bool UseSleves, FEquippedVanity& UseSleveless);                                                          // [0x1d6f900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.PlaySpecificSequence
	// void PlaySpecificSequence(class ULevelSequence* LevelSequence);                                                          // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlayer
	// void StopPlayer();                                                                                                       // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlayer
	// void StartPlayer(ECharselectionCameraLocation CamSetting);                                                               // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.StopPlay
	// void StopPlay();                                                                                                         // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.StartPlay
	// void StartPlay(ECharselectionCameraLocation selectionLocation);                                                          // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.StartLevelSeq
	// void StartLevelSeq(class ULevelSequence* CharacterLevelSequence);                                                        // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_CharacterSelection.LVL_CharacterSelection_C.ExecuteUbergraph_LVL_CharacterSelection
	// void ExecuteUbergraph_LVL_CharacterSelection(int32_t EntryPoint);                                                        // [0x1d6f900] Final|HasDefaults    
};

/// Class /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C
/// Size: 0x0018 (0x000228 - 0x000240)
class ALVL_Loading_StartMission01_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	CMember(class ULevelSequencePlayer*)               Player                                                      OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class AEmitter*)                           P_E3trailer_DropPod_Exhaust_4_ExecuteUbergraph_LVL_Loading_StartMission01_RefProperty OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.OnFinshed
	// void OnFinshed();                                                                                                        // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StopPlayer
	// void StopPlayer();                                                                                                       // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.StartPlayer
	// void StartPlayer(class ULevelSequence* LevelSequence);                                                                   // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStart
	// void PlayerStart(class ULevelSequence* LoaderLevelSequence);                                                             // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.PlayerStop
	// void PlayerStop();                                                                                                       // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_StartMission01.LVL_Loading_StartMission01_C.ExecuteUbergraph_LVL_Loading_StartMission01
	// void ExecuteUbergraph_LVL_Loading_StartMission01(int32_t EntryPoint);                                                    // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C
/// Size: 0x0018 (0x000228 - 0x000240)
class ALVL_Loading_DeepDive_B_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	CMember(class ULevelSequencePlayer*)               Player                                                      OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class ABP_DepthCount_C*)                   BP_HUD_DepthCount_EdGraph_1_RefProperty                     OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.StopPlayer
	// void StopPlayer();                                                                                                       // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.Start Player
	// void Start Player(class ULevelSequence* LevelSequence);                                                                  // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStart
	// void PlayerStart(class ULevelSequence* LoaderLevelSequence);                                                             // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.PlayerStop
	// void PlayerStop();                                                                                                       // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/LVL_Loading_DeepDive_B.LVL_Loading_DeepDive_B_C.ExecuteUbergraph_LVL_Loading_DeepDive_B
	// void ExecuteUbergraph_LVL_Loading_DeepDive_B(int32_t EntryPoint);                                                        // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/BP_Portal.BP_Portal_C
/// Size: 0x0028 (0x000220 - 0x000248)
class ABP_Portal_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SM_Prim_GeoSphere_20segments                                OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USceneCaptureComponent2D*)           NewVar                                                      OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UObject*)                            SceneReference                                              OFFSET(get<T>, {0x240, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/BP_Portal.BP_Portal_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/BP_Portal.BP_Portal_C.ExecuteUbergraph_BP_Portal
	// void ExecuteUbergraph_BP_Portal(int32_t EntryPoint);                                                                     // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C
/// Size: 0x0048 (0x000220 - 0x000268)
class ABP_DepthCount_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	CMember(class UWidgetComponent*)                   Widget_Pinger                                               OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class UWidgetComponent*)                   DepthWidget                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UBP_DepthCountWidget_C*)             Widget                                                      OFFSET(get<T>, {0x240, 8, 0, 0})
	DMember(float)                                     NewDepth                                                    OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     currentDepth                                                OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(bool)                                      PingActive                                                  OFFSET(get<bool>, {0x250, 1, 0, 0})
	CMember(class UAudioComponent*)                    Audio_Component                                             OFFSET(get<T>, {0x258, 8, 0, 0})
	SMember(FTimerHandle)                              PingHandle                                                  OFFSET(getStruct<T>, {0x260, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C.SetPingActive
	// void SetPingActive(bool InPingActive);                                                                                   // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C.DoPing
	// void DoPing();                                                                                                           // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCount.BP_DepthCount_C.ExecuteUbergraph_BP_DepthCount
	// void ExecuteUbergraph_BP_DepthCount(int32_t EntryPoint);                                                                 // [0x1d6f900] Final|HasDefaults    
};

/// Class /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms.BP_Count_Randoms_C
/// Size: 0x0034 (0x000220 - 0x000254)
class ABP_Count_Randoms_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 596;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	CMember(class UWidgetComponent*)                   Widget1                                                     OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UBP_Count_Randoms_Widget_C*)         Widget                                                      OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     Start                                                       OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     End                                                         OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     NewDepth                                                    OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(float)                                     currentDepth                                                OFFSET(get<float>, {0x250, 4, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms.BP_Count_Randoms_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms.BP_Count_Randoms_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms.BP_Count_Randoms_C.ExecuteUbergraph_BP_Count_Randoms
	// void ExecuteUbergraph_BP_Count_Randoms(int32_t EntryPoint);                                                              // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C
/// Size: 0x003C (0x000260 - 0x00029C)
class UBP_Count_Randoms_Widget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 668;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x260, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UImage*)                             Image1                                                      OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UImage*)                             Image2                                                      OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock1                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock2                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x298, 4, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.UpdateDepthText
	// void UpdateDepthText();                                                                                                  // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.SetProgress
	// void SetProgress(float Progress);                                                                                        // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.Construct
	// void Construct();                                                                                                        // [0x1d6f900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Count_Randoms_Widget.BP_Count_Randoms_Widget_C.ExecuteUbergraph_BP_Count_Randoms_Widget
	// void ExecuteUbergraph_BP_Count_Randoms_Widget(int32_t EntryPoint);                                                       // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/Assets/HUD/BP_Ping_Widget.BP_Ping_Widget_C
/// Size: 0x0010 (0x000260 - 0x000270)
class UBP_Ping_Widget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x260, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   Ping                                                        OFFSET(get<T>, {0x268, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Ping_Widget.BP_Ping_Widget_C.Construct
	// void Construct();                                                                                                        // [0x1d6f900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_Ping_Widget.BP_Ping_Widget_C.ExecuteUbergraph_BP_Ping_Widget
	// void ExecuteUbergraph_BP_Ping_Widget(int32_t EntryPoint);                                                                // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/Assets/HUD/BP_DepthCountWidget.BP_DepthCountWidget_C
/// Size: 0x003C (0x000260 - 0x00029C)
class UBP_DepthCountWidget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 668;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x260, 8, 0, 0})
	CMember(class UWidgetAnimation*)                   AlertBlink                                                  OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UImage*)                             Image                                                       OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock1                                                  OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlock2                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UTextBlock*)                         TextBlockDepth                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x298, 4, 0, 0})


	/// Functions
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCountWidget.BP_DepthCountWidget_C.UpdateDepthText
	// void UpdateDepthText();                                                                                                  // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCountWidget.BP_DepthCountWidget_C.SetProgress
	// void SetProgress(float Progress);                                                                                        // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCountWidget.BP_DepthCountWidget_C.Construct
	// void Construct();                                                                                                        // [0x1d6f900] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Maps/UILevels/Assets/HUD/BP_DepthCountWidget.BP_DepthCountWidget_C.ExecuteUbergraph_BP_DepthCountWidget
	// void ExecuteUbergraph_BP_DepthCountWidget(int32_t EntryPoint);                                                           // [0x1d6f900] Final                
};

/// Class /Game/Maps/UILevels/Assets/BP_DeepDive_SEQ_DropPod.BP_DeepDive_SEQ_DropPod_C
/// Size: 0x0070 (0x000220 - 0x000290)
class ABP_DeepDive_SEQ_DropPod_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class UParticleSystemComponent*)           ParticleSystem                                              OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class USceneComponent*)                    hull                                                        OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             SK_DropPod_Drill                                            OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class USkeletalMeshComponent*)             SK_DropPod_Airlock                                          OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Spot2                                                       OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Spot1                                                       OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class USceneComponent*)                    Scene                                                       OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Cone2                                                       OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLight2                                                  OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class USpotLightComponent*)                SpotLight1                                                  OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Cone1                                                       OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SM_DropPod_Hull                                             OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SM_DropPod_Hull_NoCol                                       OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(class USceneComponent*)                    DefaultSceneRoot                                            OFFSET(get<T>, {0x288, 8, 0, 0})
};

/// Class /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C
/// Size: 0x0228 (0x000228 - 0x000450)
class ALVL_SpaceRig_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x228, 8, 0, 0})
	DMember(float)                                     SunSpeed                                                    OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfBarrelsInDroppod                             OFFSET(get<int32_t>, {0x234, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfBarrels                                      OFFSET(get<int32_t>, {0x238, 4, 0, 0})
	DMember(int32_t)                                   DesiredBarrelNumber                                         OFFSET(get<int32_t>, {0x23C, 4, 0, 0})
	DMember(int32_t)                                   MedbayBantersPlayed                                         OFFSET(get<int32_t>, {0x240, 4, 0, 0})
	DMember(int32_t)                                   Players_spawned                                             OFFSET(get<int32_t>, {0x244, 4, 0, 0})
	CMember(class UFSDAchievement*)                    TimeWellSpentAchievement                                    OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UFSDAchievement*)                    ForeignObjectsInTheLaunchbay                                OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(TArray<TSoftObjectPtr<UClass*>>)           Preload_Widgets                                             OFFSET(get<T>, {0x258, 16, 0, 0})
	CMember(TArray<class UAudioComponent*>)            AmbientAudioComponents                                      OFFSET(get<T>, {0x268, 16, 0, 0})
	SMember(FLinearColor)                              BarLightColor                                               OFFSET(getStruct<T>, {0x278, 16, 0, 0})
	CMember(class USoundCue*)                          CurrentAmbienceCue                                          OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class USoundCue*)                          DefaultAmbienceCue                                          OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty       OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(class AEmitter*)                           P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty   OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty   OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(class ASkeletalMeshActor*)                 SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty  OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty            OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(class ASign_MemorialUnlock_C*)             Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class AStaticMeshActor*)                   SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(class APointLight*)                        Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(class ABP_DropPod_Rig_C*)                  BP_DropPod_Rig_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(class AActor*)                             TrashCompactorDirection_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(class ATriggerBox*)                        TriggerBox_TrashCompactor_ExecuteUbergraph_LVL_SpaceRig_RefProperty OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(class ABP_Phys_Newsstand_FreeBeer_C*)      BP_Phys_Newsstand_FreeBeer4_EdGraph_0_RefProperty           OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(class ABP_Phys_Newsstand_FreeBeer_C*)      BP_Phys_Newsstand_FreeBeer3_EdGraph_0_RefProperty           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(class ABP_Phys_Newsstand_FreeBeer_C*)      BP_Phys_Newsstand_FreeBeer2_EdGraph_0_RefProperty           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(class ABP_Phys_Newsstand_FreeBeer_C*)      BP_Phys_Newsstand_FreeBeer_2_EdGraph_0_RefProperty          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(class ABP_ConfettiPlane_C*)                BP_ConfettiPlane3_EdGraph_0_RefProperty                     OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(class ABP_ConfettiPlane_C*)                BP_ConfettiPlane2_EdGraph_0_RefProperty                     OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(class ABP_ConfettiPlane_C*)                BP_ConfettiPlane_4_EdGraph_0_RefProperty                    OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(class ASkeletalMeshActor*)                 SK_Banner3_EdGraph_0_RefProperty                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(class ABP_ModularLamp_C*)                  BP_Lamp_BASE3_EdGraph_2_RefProperty                         OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(class ABP_ModularLamp_C*)                  BP_Lamp_BASE2_5_EdGraph_2_RefProperty                       OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.UpdateAmbienceAudioComponents
	// void UpdateAmbienceAudioComponents();                                                                                    // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnRep_BarLightColor
	// void OnRep_BarLightColor();                                                                                              // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.GetEventOrDefaultAmbiance
	// void GetEventOrDefaultAmbiance(class USoundCue*& OutAmbiance);                                                           // [0x1d6f900] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.Set Beer Event Active
	// void Set Beer Event Active(bool Is Active);                                                                              // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnLoaded_C80486AD4277C47F32FE05A37AB96333
	// void OnLoaded_C80486AD4277C47F32FE05A37AB96333(class UClass* Loaded);                                                    // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnLeaveSpacerig_Event
	// void OnLeaveSpacerig_Event();                                                                                            // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature
	// void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature
	// void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature
	// void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature
	// void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature
	// void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.Play medbay banter
	// void Play medbay banter(class AFSDPlayerController* Player controller);                                                  // [0x1d6f900] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_6_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature
	// void BndEvt__InsideDroppodTriggerBox_AllBarrelsIn_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnFreeBeerRewardChanged
	// void OnFreeBeerRewardChanged(bool IsBeersFree);                                                                          // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnCountdownChanged_Event
	// void OnCountdownChanged_Event(bool Active);                                                                              // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.StreamSubLevels
	// void StreamSubLevels();                                                                                                  // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.BndEvt__LVL_SpaceRig_TriggerBox_TrashCompactor_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__LVL_SpaceRig_TriggerBox_TrashCompactor_K2Node_ActorBoundEvent_8_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.SpawnTrashCompactor
	// void SpawnTrashCompactor(float Seed);                                                                                    // [0x1d6f900] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnStreamerModeChanged
	// void OnStreamerModeChanged(bool NewValue);                                                                               // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.HandleEventSpecifics
	// void HandleEventSpecifics();                                                                                             // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.OnHostSeasonSetEvent_Event
	// void OnHostSeasonSetEvent_Event();                                                                                       // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/SpaceRig/LVL_SpaceRig.LVL_SpaceRig_C.ExecuteUbergraph_LVL_SpaceRig
	// void ExecuteUbergraph_LVL_SpaceRig(int32_t EntryPoint);                                                                  // [0x1d6f900] Final|HasDefaults    
};

/// Class /Game/Maps/SpaceRig/SLVL_SpaceRig_BaseMesh.SLVL_SpaceRig_BaseMesh_C
/// Size: 0x0000 (0x000228 - 0x000228)
class ASLVL_SpaceRig_BaseMesh_C : public ALevelScriptActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

