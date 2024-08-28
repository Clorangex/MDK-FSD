
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraTypeDefinitionHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RegisteredTypeIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraVariableBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraTypeDefinitionHandle)              TypeDefHandle                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0014 (0x00000C - 0x000020)
class FNiagaraVariable : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<char>)                              VarData                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SectionStartBehavior                                        OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SectionEvaluateBehavior                                    OFFSET(get<T>, {0xEC, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SectionEndBehavior                                          OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0xF4, 1, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000220 - 0x000230)
class ANiagaraActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UNiagaraComponent*)                  NiagaraComponent                                            OFFSET(get<T>, {0x220, 8, 0, 0})
	DMember(bool)                                      bDestroyOnSystemFinish                                      OFFSET(get<bool>, {0x228, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xbb9030] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0xbb8fa0] Final|Native|Private 
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraBakerTextureSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraBakerTextureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     OutputName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bUseFrameSize                                               OFFSET(get<bool>, {0x10, 1, 1, 0})
	SMember(FIntPoint)                                 FrameSize                                                   OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FIntPoint)                                 TextureSize                                                 OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(class UTexture2D*)                         GeneratedTexture                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UNiagaraBakerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     StartSeconds                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   FramesPerSecond                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bPreviewLooping                                             OFFSET(get<bool>, {0x34, 1, 1, 0})
	SMember(FIntPoint)                                 FramesPerDimension                                          OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(TArray<FNiagaraBakerTextureSettings>)      OutputTextures                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(ENiagaraBakerViewMode)                     CameraViewportMode                                          OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FVector)                                   CameraViewportLocation                                      OFFSET(getStruct<T>, {0x54, 84, 0, 0})
	SMember(FRotator)                                  CameraViewportRotation                                      OFFSET(getStruct<T>, {0xA8, 84, 0, 0})
	DMember(float)                                     CameraOrbitDistance                                         OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     CameraFOV                                                   OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     CameraOrthoWidth                                            OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(bool)                                      bUseCameraAspectRatio                                       OFFSET(get<bool>, {0x108, 1, 1, 0})
	DMember(float)                                     CameraAspectRatio                                           OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bRenderComponentOnly                                        OFFSET(get<bool>, {0x110, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (0x00000C - 0x000010)
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraParameterStore : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UObject*)                            Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FNiagaraVariableWithOffset>)        SortedParameterOffsets                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<char>)                              ParameterData                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraDataInterface*>)      DataInterfaces                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<class UObject*>)                    UObjects                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000078 - 0x0000C8)
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FNiagaraVariable, FNiagaraVariable>)  UserParameterRedirects                                      OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  MaterialSubIndex                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	CMember(class UNiagaraRendererProperties*)         EmitterRendererProperty                                     OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01B0 (0x000450 - 0x000600)
class UNiagaraComponent : public UFXSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(class UNiagaraSystem*)                     Asset                                                       OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(ENiagaraTickBehavior)                      TickBehavior                                                OFFSET(get<T>, {0x458, 1, 0, 0})
	DMember(int32_t)                                   RandomSeedOffset                                            OFFSET(get<int32_t>, {0x45C, 4, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     OverrideParameters                                          OFFSET(getStruct<T>, {0x460, 200, 0, 0})
	DMember(bool)                                      bForceSolo                                                  OFFSET(get<bool>, {0x528, 1, 1, 0})
	DMember(bool)                                      bEnableGpuComputeDebug                                      OFFSET(get<bool>, {0x528, 1, 1, 1})
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x558, 1, 1, 0})
	DMember(bool)                                      bRenderingEnabled                                           OFFSET(get<bool>, {0x558, 1, 1, 1})
	DMember(bool)                                      bAutoManageAttachment                                       OFFSET(get<bool>, {0x558, 1, 1, 2})
	DMember(bool)                                      bAutoAttachWeldSimulatedBodies                              OFFSET(get<bool>, {0x558, 1, 1, 3})
	DMember(float)                                     MaxTimeBeforeForceUpdateTransform                           OFFSET(get<float>, {0x55C, 4, 0, 0})
	CMember(TArray<FNiagaraMaterialOverride>)          EmitterMaterials                                            OFFSET(get<T>, {0x560, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSystemFinished                                            OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	CMember(TWeakObjectPtr<class USceneComponent*>)    AutoAttachParent                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	SMember(FName)                                     AutoAttachSocketName                                        OFFSET(getStruct<T>, {0x590, 8, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachLocationRule                                      OFFSET(get<T>, {0x598, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachRotationRule                                      OFFSET(get<T>, {0x599, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachScaleRule                                         OFFSET(get<T>, {0x59A, 1, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xbbd860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xbbd780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xbbd6b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0xbbd5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xbbd510] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0xbbd440] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0xbbd370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xbbd2a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xbbd1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xbbd100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xbbd030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0xbbcf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xbbcee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0xbbce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xbbcdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0xbbcd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                    // [0xbbcc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0xbbcbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xbbcaf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xbbca00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xbbc920] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xbbc830] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0xbbc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xbbc740] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xbbc660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xbbc570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xbbc490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0xbbc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0xbbc330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0xbbc2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xbbc210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0xbbc180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0xbbc100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xbbc070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xbbbfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                     // [0xbbbf10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0xbbbe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xbbbe00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xbbbd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0xbbbd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0xbbbd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0xbbbd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0xbbbcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xbbbcd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0xbbbca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0xbbbc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0xbbbc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0xbbbc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xbbb9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xbbbaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xbbb8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0xbbb880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0xbbb850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0xbbb820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0xbbb7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0xbbb740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0xbbb720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xbbb6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xbbb620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xbbb550] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPoolElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UNiagaraComponent*)                  Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNCPoolElement>)                    FreeElements                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<class UNiagaraSystem*, FNCPool>)      WorldParticleSystemPools                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraDeviceProfileStateEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  QualityLevelMask                                            OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  SetQualityLevelMask                                         OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraPlatformSetCVarCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     CVarName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   MinInt                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxInt                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinFloat                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxFloat                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bUseMinInt                                                  OFFSET(get<bool>, {0x1C, 1, 1, 0})
	DMember(bool)                                      bUseMaxInt                                                  OFFSET(get<bool>, {0x1C, 1, 1, 1})
	DMember(bool)                                      bUseMinFloat                                                OFFSET(get<bool>, {0x1C, 1, 1, 2})
	DMember(bool)                                      bUseMaxFloat                                                OFFSET(get<bool>, {0x1C, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraDeviceProfileStateEntry>)   DeviceProfileStates                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraPlatformSetCVarCondition>)  CVarConditions                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0050 (0x000028 - 0x000078)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   SortOrderHint                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(ENiagaraRendererMotionVectorSetting)       MotionVectorSetting                                         OFFSET(get<T>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bMotionBlurEnabled                                          OFFSET(get<bool>, {0x61, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVariableAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FNiagaraVariableBase)                      ParamMapVariable                                            OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FNiagaraVariable)                          DataSetVariable                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FNiagaraVariable)                          RootVariable                                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	CMember(TEnumAsByte<ENiagaraBindingSource>)        BindingSourceMode                                           OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      bBindingExistsOnSource                                      OFFSET(get<bool>, {0x54, 1, 1, 0})
	DMember(bool)                                      bIsCachedParticleValue                                      OFFSET(get<bool>, {0x54, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraTypeDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UObject*)                            ClassStructOrEnum                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  UnderlyingType                                              OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FNiagaraComponentPropertyBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FNiagaraVariableAttributeBinding)          AttributeBinding                                            OFFSET(getStruct<T>, {0x0, 88, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FNiagaraTypeDefinition)                    PropertyType                                                OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FName)                                     MetadataSetterName                                          OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FNiagaraVariable)                          WritableValue                                               OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0138 (0x000078 - 0x0001B0)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(class UClass*)                             ComponentType                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0x80, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(getStruct<T>, {0x88, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0xE0, 88, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      bOnlyCreateComponentsOnParticleSpawn                        OFFSET(get<bool>, {0x139, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	CMember(class USceneComponent*)                    TemplateComponent                                           OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(TArray<FNiagaraComponentPropertyBinding>)  PropertyBindings                                            OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UNiagaraComponentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TSet<FName>)                               SuppressActivationList                                      OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TSet<FName>)                               ForceAutoPooolingList                                       OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TSet<FNiagaraEmitterNameSettingsRef>)      SuppressEmitterList                                         OFFSET(get<T>, {0xC8, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UTexture2DArray*)                    Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxElements                                                 OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<float>)                             FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector2D>)                         FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector>)                           FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FVector4>)                          FloatData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FLinearColor>)                      ColorData                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FQuat>)                             QuatData                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0xbc1e70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // [0xbc1bb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0xbc1a90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // [0xbc18f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0xbc17d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0xbc1d50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // [0xbc1630] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0xbc1510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0xbc1380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0xbc1260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // [0xbc10d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0xbc0fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // [0xbc0e10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0xbc0cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // [0xbc0b40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0xbc0a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);           // [0xbc0810] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0xbc05f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0xbc04e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0xbc03d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xbc02c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0xbc0700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);               // [0xbc01b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0xbc00a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0xbbffa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0xbbfe90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);              // [0xbbfd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0xbbfc80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0xbbfb70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xbbfa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);                // [0xbbf960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0xbbf850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<int32_t>)                           IntData                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000050 - 0x000060)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<bool>)                              BoolData                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class USoundSubmix*)                       Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     ScopeInMilliseconds                                         OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class USoundBase*)                         SoundToPlay                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class USoundAttenuation*)                  Attenuation                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class USoundConcurrency*)                  Concurrency                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FName>)                             ParameterNames                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bLimitPlaysPerTick                                          OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   MaxPlaysPerTick                                             OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bStopWhenComponentIsDestroyed                               OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayerControllerIndex                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<float>)                             ShaderLUT                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     LUTMinTime                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LUTMaxTime                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LUTInvTimeRange                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LUTNumSamplesMinusOne                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bExposeCurve                                                OFFSET(get<bool>, {0x58, 1, 1, 1})
	SMember(FName)                                     ExposedName                                                 OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	CMember(class UTexture2D*)                         ExposedTexture                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UTextureCube*)                       Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  Seed                                                        OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRichCurve)                                Curve                                                       OFFSET(getStruct<T>, {0x70, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                         // [0xbc0920] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraUserParameterBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraUserParameterBinding)              CallbackHandlerParameter                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	CMember(ENDIExport_GPUAllocationMode)              GPUAllocationMode                                           OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   GPUAllocationFixedSize                                      OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     GPUAllocationPerParticleSize                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TSet<int32_t>)                             OutputShaderStages                                          OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TSet<int32_t>)                             IterationShaderStages                                       OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (0x0000D8 - 0x0000F8)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(int32_t)                                   NumCellsX                                                   OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   NumCellsY                                                   OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(bool)                                      SetGridFromMaxAxis                                          OFFSET(get<bool>, {0xE8, 1, 0, 0})
	SMember(FVector2D)                                 WorldBBoxSize                                               OFFSET(getStruct<T>, {0xEC, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (0x0000F8 - 0x0001C0)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xF8, 32, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x119, 1, 1, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2DArray*>) ManagedRenderTargets                               OFFSET(get<T>, {0x170, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0xbc5340] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0xbc5090] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0xbc4f70] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0xbc4c00] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (0x0000F8 - 0x000168)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (0x0000D8 - 0x000100)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FIntVector)                                NumCells                                                    OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	CMember(ESetResolutionMethod)                      SetResolutionMethod                                         OFFSET(get<T>, {0xEC, 4, 0, 0})
	SMember(FVector)                                   WorldBBoxSize                                               OFFSET(getStruct<T>, {0xF0, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (0x000100 - 0x000180)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0x108, 32, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x129, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0xbc5470] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0xbc51c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0xbc4f70] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xbc4d70] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0078 (0x0000D8 - 0x000150)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2D*>) ManagedRenderTargets                                    OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class AActor*)                             SourceLandscape                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENDILandscape_SourceMode)                  SourceMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          PhysicalMaterials                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UNiagaraMeshRendererProperties*)     MeshRenderer                                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000100 - 0x000108)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(uint32_t)                                  MaxNeighborsPerCell                                         OFFSET(get<uint32_t>, {0x100, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x38, 48, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x00D0 (0x0000D8 - 0x0001A8)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	CMember(ENiagaraMipMapGeneration)                  MipMapGeneration                                            OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0xE2, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE2, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2D*>) ManagedRenderTargets                                    OFFSET(get<T>, {0x158, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0xE5, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE5, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTarget2DArray*>) ManagedRenderTargets                               OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0078 (0x0000D8 - 0x000150)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0xDD, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xDD, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE0, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTargetCube*>) ManagedRenderTargets                                  OFFSET(get<T>, {0x100, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (0x0000D8 - 0x000158)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0xE5, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0xE5, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(getStruct<T>, {0xE8, 32, 0, 0})
	CMember(TMap<uint64_t, class UTextureRenderTargetVolume*>) ManagedRenderTargets                                OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0090 (0x000038 - 0x0000C8)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(ENDISkeletalMesh_SourceMode)               SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	CMember(class USkeletalMeshComponent*)             SourceComponent                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(ENDISkeletalMesh_SkinningMode)             SkinningMode                                                OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TArray<FName>)                             SamplingRegions                                             OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(int32_t)                                   WholeMeshLOD                                                OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredBones                                               OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FName)                                     ExcludeBoneName                                             OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      bExcludeBone                                                OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(int32_t)                                   UvSetIndex                                                  OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SplineUserParameter                                         OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIStaticMeshSectionFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           AllowedMaterialSlots                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(ENDIStaticMesh_SourceMode)                 SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(class UStaticMesh*)                        DefaultMesh                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class AActor*)                             Source                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               SourceComponent                                             OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FNDIStaticMeshSectionFilter)               SectionFilter                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bUsePhysicsBodyVelocity                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UTexture*)                           Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                WCurve                                                      OFFSET(getStruct<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0x170, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UVectorField*)                       Field                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bTileX                                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bTileY                                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bTileZ                                                      OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UVolumeTexture*)                     Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHUDVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraDebugHudTextOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ENiagaraDebugHudFont)                      Font                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDebugHudHAlign)                    HorizontalAlignment                                         OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraDebugHudVAlign)                    VerticalAlignment                                           OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FVector2D)                                 ScreenOffset                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraDebugHUDSettingsData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValidateSystemSimulationDataBuffers                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValidateParticleDataBuffers                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bOverviewEnabled                                            OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(ENiagaraDebugHudFont)                      OverviewFont                                                OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FVector2D)                                 OverviewLocation                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   ActorFilter                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bComponentFilterEnabled                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FString)                                   ComponentFilter                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bSystemFilterEnabled                                        OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FString)                                   SystemFilter                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bEmitterFilterEnabled                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FString)                                   EmitterFilter                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bActorFilterEnabled                                         OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemDebugVerbosity                                        OFFSET(get<T>, {0x6C, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemEmitterVerbosity                                      OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bSystemShowBounds                                           OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bSystemShowActiveOnlyInWorld                                OFFSET(get<bool>, {0x75, 1, 0, 0})
	DMember(bool)                                      bShowSystemVariables                                        OFFSET(get<bool>, {0x76, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          SystemVariables                                             OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               SystemTextOptions                                           OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bShowParticleVariables                                      OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bEnableGpuParticleReadback                                  OFFSET(get<bool>, {0x99, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          ParticlesVariables                                          OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               ParticleTextOptions                                         OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bShowParticlesVariablesWithSystem                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bUseMaxParticlesToDisplay                                   OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(int32_t)                                   MaxParticlesToDisplay                                       OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	CMember(ENiagaraDebugPlaybackMode)                 PlaybackMode                                                OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bPlaybackRateEnabled                                        OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(float)                                     PlaybackRate                                                OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bLoopTimeEnabled                                            OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     LoopTime                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bShowGlobalBudgetInfo                                       OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0100 (0x000028 - 0x000128)
class UNiagaraDebugHUDSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FNiagaraDebugHUDSettingsData)              Data                                                        OFFSET(getStruct<T>, {0x48, 224, 0, 0})
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraSystemScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bCullByDistance                                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCullMaxInstanceCount                                       OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bCullPerSystemMaxInstanceCount                              OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bCullByMaxTimeWithoutRender                                 OFFSET(get<bool>, {0x30, 1, 1, 3})
	DMember(bool)                                      bCullByGlobalBudget                                         OFFSET(get<bool>, {0x30, 1, 1, 4})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxInstances                                                OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemInstances                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxGlobalBudgetUsage                                        OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilitySettings>) Settings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterScalabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bScaleSpawnCount                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     SpawnCountScale                                             OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilitySettingsArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilitySettings>) Settings                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraPerfBaselineStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PerInstanceAvg_GT                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PerInstanceAvg_RT                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_GT                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_RT                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0070 (0x000028 - 0x000098)
class UNiagaraEffectType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENiagaraScalabilityUpdateFrequency)        UpdateFrequency                                             OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(ENiagaraCullReaction)                      CullReaction                                                OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(class UNiagaraSignificanceHandler*)        SignificanceHandler                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilitySettings>) DetailLevelScalabilitySettings                              OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraSystemScalabilitySettingsArray)    SystemScalabilitySettings                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettingsArray)   EmitterScalabilitySettings                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UNiagaraBaselineController*)         PerformanceBaselineController                               OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FNiagaraPerfBaselineStats)                 PerfBaselineStats                                           OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FGuid)                                     PerfBaselineVersion                                         OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraEventReceiverProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourceEventGenerator                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     SourceEmitter                                               OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraTypeLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<uint32_t>)                          FloatComponentByteOffsets                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<uint32_t>)                          FloatComponentRegisterOffsets                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Int32ComponentByteOffsets                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Int32ComponentRegisterOffsets                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<uint32_t>)                          HalfComponentByteOffsets                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<uint32_t>)                          HalfComponentRegisterOffsets                                OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FNiagaraVariableLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(uint32_t)                                  FloatComponentStart                                         OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  Int32ComponentStart                                         OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  HalfComponentStart                                          OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraTypeLayoutInfo)                    LayoutInfo                                                  OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraDataSetID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ENiagaraDataSetType)                       Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataSetCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariableLayoutInfo>)        VariableLayouts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(uint32_t)                                  TotalFloatComponents                                        OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  TotalInt32Components                                        OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint32_t)                                  TotalHalfComponents                                         OFFSET(get<uint32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraEventGeneratorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxEventsPerFrame                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x10, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEmitterScriptProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraEventReceiverProperties>)   EventReceivers                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraEventGeneratorProperties>)  EventGenerators                                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraDetailsLevelScaleOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Medium                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Epic                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Cine                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverrideSpawnCountScale                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilityOverride>) Overrides                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EScriptExecutionMode)                      ExecutionMode                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  SpawnNumber                                                 OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  MaxEventsPerFrame                                           OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGuid)                                     SourceEmitterID                                             OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FName)                                     SourceEventName                                             OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bRandomSpawnNumber                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(uint32_t)                                  MinSpawnNumber                                              OFFSET(get<uint32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0278 (0x000028 - 0x0002A0)
class UNiagaraEmitter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bLocalSpace                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(EParticleAllocationMode)                   AllocationMode                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   PreAllocationCount                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           UpdateScriptProps                                           OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           SpawnScriptProps                                            OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x88, 1, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x8C, 28, 0, 0})
	DMember(int32_t)                                   MinDetailLevel                                              OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   MaxDetailLevel                                              OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FNiagaraDetailsLevelScaleOverrides)        GlobalSpawnCountScaleOverrides                              OFFSET(getStruct<T>, {0xB0, 20, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(getStruct<T>, {0xC8, 48, 0, 0})
	SMember(FNiagaraEmitterScalabilityOverrides)       ScalabilityOverrides                                        OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(bool)                                      bInterpolatedSpawning                                       OFFSET(get<bool>, {0x108, 1, 1, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x108, 1, 1, 1})
	DMember(bool)                                      bUseMinDetailLevel                                          OFFSET(get<bool>, {0x108, 1, 1, 2})
	DMember(bool)                                      bUseMaxDetailLevel                                          OFFSET(get<bool>, {0x108, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalSpawnCountScale                              OFFSET(get<bool>, {0x108, 1, 1, 4})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x108, 1, 1, 5})
	DMember(bool)                                      bCombineEventSpawn                                          OFFSET(get<bool>, {0x108, 1, 1, 6})
	DMember(float)                                     MaxDeltaTimePerTick                                         OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(uint32_t)                                  DefaultShaderStageIndex                                     OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	DMember(uint32_t)                                  MaxUpdateIterations                                         OFFSET(get<uint32_t>, {0x114, 4, 0, 0})
	CMember(TSet<uint32_t>)                            SpawnStages                                                 OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bSimulationStagesEnabled                                    OFFSET(get<bool>, {0x168, 1, 1, 0})
	DMember(bool)                                      bDeprecatedShaderStagesEnabled                              OFFSET(get<bool>, {0x168, 1, 1, 1})
	DMember(bool)                                      bLimitDeltaTime                                             OFFSET(get<bool>, {0x168, 1, 1, 2})
	SMember(FString)                                   UniqueEmitterName                                           OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	CMember(TArray<class UNiagaraRendererProperties*>) RendererProperties                                          OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<FNiagaraEventScriptProperties>)     EventHandlerScriptProps                                     OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<class UNiagaraSimulationStageBase*>) SimulationStages                                           OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(class UNiagaraScript*)                     GPUComputeScript                                            OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FName>)                             SharedEventGeneratorIds                                     OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  NumParticles                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xbce350] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0xbce070] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0xbcdb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0xbcdc90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0xbcdb70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0xbcda40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0xbcd490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0xbcd370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0xbcd250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0xbcce80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02B8 (0x000078 - 0x000330)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(bool)                                      bUseInverseSquaredFalloff                                   OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bAffectsTranslucency                                        OFFSET(get<bool>, {0x78, 1, 1, 1})
	DMember(bool)                                      bAlphaScalesBrightness                                      OFFSET(get<bool>, {0x78, 1, 1, 2})
	DMember(float)                                     RadiusScale                                                 OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     DefaultExponent                                             OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FVector)                                   ColorAdd                                                    OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightRenderingEnabledBinding                                OFFSET(getStruct<T>, {0x98, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightExponentBinding                                        OFFSET(getStruct<T>, {0xF0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x148, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x1A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RadiusBinding                                               OFFSET(getStruct<T>, {0x1F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumetricScatteringBinding                                 OFFSET(getStruct<T>, {0x250, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x2A8, 88, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraMeshRendererMeshProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraMeshMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UMaterialInterface*)                 ExplicitMat                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UserParamBinding                                            OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (0x000000 - 0x00002C)
class FNiagaraMaterialAttributeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraVariable                                             OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedNiagaraVariable                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraChildVariable                                        OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0820 (0x000078 - 0x000898)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2200;

public:
	CMember(TArray<FNiagaraMeshRendererMeshProperties>) Meshes                                                     OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0x88, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0x89, 1, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          OFFSET(get<bool>, {0x8C, 1, 1, 0})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0x8C, 1, 1, 1})
	DMember(bool)                                      bGpuLowLatencyTranslucency                                  OFFSET(get<bool>, {0x8C, 1, 1, 2})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0x8C, 1, 1, 3})
	DMember(bool)                                      bEnableFrustumCulling                                       OFFSET(get<bool>, {0x8C, 1, 1, 4})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0x8C, 1, 1, 5})
	DMember(bool)                                      bEnableMeshFlipbook                                         OFFSET(get<bool>, {0x8C, 1, 1, 6})
	CMember(TArray<FNiagaraMeshMaterialOverride>)      OverrideMaterials                                           OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(ENiagaraMeshFacingMode)                    FacingMode                                                  OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bLockedAxisEnable                                           OFFSET(get<bool>, {0xAC, 1, 1, 0})
	SMember(FVector)                                   LockedAxis                                                  OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	CMember(ENiagaraMeshLockedAxisSpace)               LockedAxisSpace                                             OFFSET(get<T>, {0xBC, 1, 0, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0xC8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xD0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x128, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x180, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshOrientationBinding                                      OFFSET(getStruct<T>, {0x1D8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(getStruct<T>, {0x230, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x288, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x2E0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x338, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x390, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x3E8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x440, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x498, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x4F0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x548, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x5A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshIndexBinding                                            OFFSET(getStruct<T>, {0x5F8, 88, 0, 0})
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  MaterialParameterBindings                                   OFFSET(get<T>, {0x650, 16, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(getStruct<T>, {0x660, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevScaleBinding                                            OFFSET(getStruct<T>, {0x6B8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevMeshOrientationBinding                                  OFFSET(getStruct<T>, {0x710, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(getStruct<T>, {0x768, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(getStruct<T>, {0x7C0, 88, 0, 0})
	CMember(class UStaticMesh*)                        ParticleMesh                                                OFFSET(get<T>, {0x880, 8, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x888, 12, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            OFFSET(get<T>, {0x894, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UNiagaraParameterCollection*)        Collection                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  OverridenParameters                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    ParameterStorage                                            OFFSET(getStruct<T>, {0x40, 120, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0xbcdf80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0xbcde90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0xbcddb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0xbcd950] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0xbcd870] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0xbcd780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0xbcd690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0xbcd5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0xbcd190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0xbcd0d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0xbcd010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0xbccf50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0xbccdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0xbccd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0xbccc60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0xbccbb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Namespace                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(class UMaterialParameterCollection*)       SourceMaterialCollection                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(class UNiagaraParameterCollectionInstance*) DefaultInstance                                            OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGuid)                                     CompileId                                                   OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParameterDefinitionsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0040 (0x000028 - 0x000068)
class UNiagaraBaselineController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     TestDuration                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class ANiagaraPerfBaselineActor*)          Owner                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<class UNiagaraSystem*>)     System                                                      OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0xbd2970] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0xbd28e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0xbd2850] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0xbd2830] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                       // [0xbd27d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000068 - 0x000080)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   NumInstances                                                OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          SpawnedComponents                                           OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000220 - 0x000230)
class ANiagaraPerfBaselineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UNiagaraBaselineController*)         Controller                                                  OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(class UTextRenderComponent*)               Label                                                       OFFSET(get<T>, {0x228, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<class UNiagaraScript*>)             Scripts                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000220 - 0x000220)
class ANiagaraPreviewBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x1d6f900] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x1d6f900] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0xbd2800] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0xbd2580] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Param                                                       OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Min                                                         OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Max                                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector2D)                                 Min                                                         OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 Max                                                         OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Min                                                         OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FVector)                                   Max                                                         OFFSET(getStruct<T>, {0x44, 12, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector4)                                  Min                                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FVector4)                                  Max                                                         OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FLinearColor)                              Min                                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FLinearColor)                              Max                                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000220 - 0x000270)
class ANiagaraPreviewGrid : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(class UNiagaraSystem*)                     System                                                      OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(ENiagaraPreviewGridResetMode)              ResetMode                                                   OFFSET(get<T>, {0x228, 1, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisX                                                OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(class UNiagaraPreviewAxis*)                PreviewAxisY                                                OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UClass*)                             PreviewClass                                                OFFSET(get<T>, {0x240, 8, 0, 0})
	DMember(float)                                     SpacingX                                                    OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     SpacingY                                                    OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   NumX                                                        OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	DMember(int32_t)                                   NumY                                                        OFFSET(get<int32_t>, {0x254, 4, 0, 0})
	CMember(TArray<class UChildActorComponent*>)       PreviewComponents                                           OFFSET(get<T>, {0x258, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0xbd29c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0xbd2720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0xbd2700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0xbd24f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FNiagaraRibbonUVSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ENiagaraRibbonUVDistributionMode)          DistributionMode                                            OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  LeadingEdgeMode                                             OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  TrailingEdgeMode                                            OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     TilingLength                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bEnablePerParticleUOverride                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bEnablePerParticleVRangeOverride                            OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRibbonShapeCustomVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Normal                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureV                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x07E8 (0x000078 - 0x000860)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	CMember(ENiagaraRibbonFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV0Settings                                                 OFFSET(getStruct<T>, {0xA4, 36, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV1Settings                                                 OFFSET(getStruct<T>, {0xC8, 36, 0, 0})
	CMember(ENiagaraRibbonDrawDirection)               DrawDirection                                               OFFSET(get<T>, {0xEC, 1, 0, 0})
	CMember(ENiagaraRibbonShapeMode)                   Shape                                                       OFFSET(get<T>, {0xED, 1, 0, 0})
	DMember(bool)                                      bEnableAccurateGeometry                                     OFFSET(get<bool>, {0xEE, 1, 0, 0})
	DMember(int32_t)                                   WidthSegmentationCount                                      OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   MultiPlaneCount                                             OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   TubeSubdivisions                                            OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	CMember(TArray<FNiagaraRibbonShapeCustomVertex>)   CustomVertices                                              OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     CurveTension                                                OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(ENiagaraRibbonTessellationMode)            TessellationMode                                            OFFSET(get<T>, {0x114, 1, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x118, 4, 0, 0})
	DMember(bool)                                      bUseConstantFactor                                          OFFSET(get<bool>, {0x11C, 1, 0, 0})
	DMember(float)                                     TessellationAngle                                           OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bScreenSpaceTessellation                                    OFFSET(get<bool>, {0x124, 1, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0x128, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x180, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x1D8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x230, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonTwistBinding                                          OFFSET(getStruct<T>, {0x288, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonWidthBinding                                          OFFSET(getStruct<T>, {0x2E0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonFacingBinding                                         OFFSET(getStruct<T>, {0x338, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonIdBinding                                             OFFSET(getStruct<T>, {0x390, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonLinkOrderBinding                                      OFFSET(getStruct<T>, {0x3E8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x440, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x498, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x4F0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x548, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x5A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonUVDistance                                            OFFSET(getStruct<T>, {0x5F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U0OverrideBinding                                           OFFSET(getStruct<T>, {0x650, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V0RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x6A8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U1OverrideBinding                                           OFFSET(getStruct<T>, {0x700, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V1RangeOverrideBinding                                      OFFSET(getStruct<T>, {0x758, 88, 0, 0})
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  MaterialParameterBindings                                   OFFSET(get<T>, {0x7B0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptExecutionPaddingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  SrcOffset                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DestOffset                                                  OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  SrcSize                                                     OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  DestSize                                                    OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000078 - 0x000098)
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(int32_t)                                   ParameterSize                                               OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(uint32_t)                                  PaddedParameterSize                                         OFFSET(get<uint32_t>, {0x7C, 4, 0, 0})
	CMember(TArray<FNiagaraScriptExecutionPaddingInfo>) PaddingInfo                                                OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraBoundParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   SrcOffset                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   DestOffset                                                  OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVMExecutableDataId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CompilerVersionID                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraScriptUsage)                       ScriptUsageType                                             OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ScriptUsageTypeID                                           OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	DMember(bool)                                      bUsesRapidIterationParams                                   OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bInterpolatedSpawn                                          OFFSET(get<bool>, {0x24, 1, 1, 1})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x24, 1, 1, 2})
	SMember(FGuid)                                     BaseScriptID                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FNiagaraCompileHash)                       BaseScriptCompileHash                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FGuid)                                     ScriptVersionID                                             OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompilerTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraScriptDataUsageInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bReadsAttributeData                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceCompileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsPlaceholder                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FVMFunctionSpecifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FVMExternalFunctionBindingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<bool>)                              InputParamLocations                                         OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FVMFunctionSpecifier>)              FunctionSpecifiers                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDataSetProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraStatScope : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     FullName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     FriendlyName                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FNiagaraVMExecutableData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<char>)                              OptimizedByteCode                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumTempRegisters                                            OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   NumUserPtrs                                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(TArray<FNiagaraCompilerTag>)               CompileTags                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<char>)                              ScriptLiterals                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Attributes                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraScriptDataUsageInfo)               DataUsage                                                   OFFSET(getStruct<T>, {0x58, 1, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceCompileInfo>) DataInterfaceInfo                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FVMExternalFunctionBindingInfo>)    CalledVMExternalFunctions                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetID>)                 ReadDataSets                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetProperties>)         WriteDataSets                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FNiagaraStatScope>)                 StatScopes                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FNiagaraDataInterfaceGPUParamInfo>) DIParamInfo                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(ENiagaraScriptCompileStatus)               LastCompileStatus                                           OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(TArray<FSimulationStageMetaData>)          SimulationStageMetaData                                     OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bReadsSignificanceIndex                                     OFFSET(get<bool>, {0xE8, 1, 1, 0})
	DMember(bool)                                      bNeedsGPUContextInit                                        OFFSET(get<bool>, {0xE8, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02B8 (0x000028 - 0x0002E0)
class UNiagaraScript : public UNiagaraScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(ENiagaraScriptUsage)                       Usage                                                       OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FGuid)                                     UsageId                                                     OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    RapidIterationParameters                                    OFFSET(getStruct<T>, {0x40, 120, 0, 0})
	SMember(FNiagaraScriptExecutionParameterStore)     ScriptExecutionParamStore                                   OFFSET(getStruct<T>, {0xB8, 152, 0, 0})
	CMember(TArray<FNiagaraBoundParameter>)            ScriptExecutionBoundParameters                              OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FNiagaraVMExecutableDataId)                CachedScriptVMId                                            OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FNiagaraVMExecutableData)                  CachedScriptVM                                              OFFSET(getStruct<T>, {0x1C8, 240, 0, 0})
	CMember(TArray<class UNiagaraParameterCollection*>) CachedParameterCollectionReferences                        OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceInfo>)   CachedDefaultDataInterfaces                                 OFFSET(get<T>, {0x2C8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0xbd29a0] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0090 (0x000038 - 0x0000C8)
class UNiagaraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FSoftObjectPath)                           DefaultEffectType                                           OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TArray<FText>)                             QualityLevels                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TMap<FString, FText>)                      ComponentRendererWarningsPerClass                           OFFSET(get<T>, {0x60, 80, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   DefaultRenderTargetFormat                                   OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   DefaultGridFormat                                           OFFSET(get<T>, {0xB1, 1, 0, 0})
	CMember(ENiagaraDefaultRendererMotionVectorSetting) DefaultRendererMotionVectorSetting                         OFFSET(get<T>, {0xB4, 4, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>) NDISkelMesh_GpuMaxInfluences                               OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat>) NDISkelMesh_GpuUniformSamplingFormat               OFFSET(get<T>, {0xB9, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat>) NDISkelMesh_AdjacencyTriangleIndexFormat       OFFSET(get<T>, {0xBA, 1, 0, 0})
	CMember(class UNiagaraEffectType*)                 DefaultEffectTypePtr                                        OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(class UNiagaraScript*)                     Script                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     SimulationStageName                                         OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraVariableDataInterfaceBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FNiagaraVariable)                          BoundVariable                                               OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ENiagaraIterationSource)                   IterationSource                                             OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bSpawnOnly                                                  OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bDisablePartialParticleUpdate                               OFFSET(get<bool>, {0x48, 1, 1, 1})
	SMember(FNiagaraVariableDataInterfaceBinding)      DataInterface                                               OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0A38 (0x000078 - 0x000AB0)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2736;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(getStruct<T>, {0x88, 32, 0, 0})
	CMember(ENiagaraSpriteAlignment)                   Alignment                                                   OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(ENiagaraSpriteFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xA9, 1, 0, 0})
	SMember(FVector2D)                                 PivotInUVSpace                                              OFFSET(getStruct<T>, {0xAC, 8, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xB4, 1, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bRemoveHMDRollInVR                                          OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bGpuLowLatencyTranslucency                                  OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(float)                                     MinFacingCameraBlendDistance                                OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MaxFacingCameraBlendDistance                                OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xCC, 1, 1, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0xD8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(getStruct<T>, {0xE0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(getStruct<T>, {0x138, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(getStruct<T>, {0x190, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteRotationBinding                                       OFFSET(getStruct<T>, {0x1E8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteSizeBinding                                           OFFSET(getStruct<T>, {0x240, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteFacingBinding                                         OFFSET(getStruct<T>, {0x298, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteAlignmentBinding                                      OFFSET(getStruct<T>, {0x2F0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(getStruct<T>, {0x348, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(getStruct<T>, {0x3A0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(getStruct<T>, {0x3F8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(getStruct<T>, {0x450, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(getStruct<T>, {0x4A8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(getStruct<T>, {0x500, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          UVScaleBinding                                              OFFSET(getStruct<T>, {0x558, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PivotOffsetBinding                                          OFFSET(getStruct<T>, {0x5B0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(getStruct<T>, {0x608, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(getStruct<T>, {0x660, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(getStruct<T>, {0x6B8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(getStruct<T>, {0x710, 88, 0, 0})
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  MaterialParameterBindings                                   OFFSET(get<T>, {0x768, 16, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(getStruct<T>, {0x778, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(getStruct<T>, {0x7D0, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteRotationBinding                                   OFFSET(getStruct<T>, {0x828, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteSizeBinding                                       OFFSET(getStruct<T>, {0x880, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteFacingBinding                                     OFFSET(getStruct<T>, {0x8D8, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteAlignmentBinding                                  OFFSET(getStruct<T>, {0x930, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(getStruct<T>, {0x988, 88, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPivotOffsetBinding                                      OFFSET(getStruct<T>, {0x9E0, 88, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000048 - 0x000050)
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bOverrideDistanceSettings                                   OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceCountSettings                              OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverridePerSystemInstanceCountSettings                     OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideTimeSinceRendererSettings                          OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalBudgetCullingSettings                        OFFSET(get<bool>, {0x48, 1, 1, 4})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilityOverrides : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilityOverride>) Overrides                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraEmitterHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     IdName                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(class UNiagaraEmitter*)                    instance                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterDataSetBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ParameterOffset                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataSetComponentOffset                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraParameterDataSetBindingCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNiagaraParameterDataSetBinding>)   FloatOffsets                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBinding>)   Int32Offsets                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0218 (0x000000 - 0x000218)
class FNiagaraSystemCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FNiagaraParameterStore)                    InstanceParamStore                                          OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0x78, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               SpawnInstanceParamsDataSetCompiledData                      OFFSET(getStruct<T>, {0xB8, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               UpdateInstanceParamsDataSetCompiledData                     OFFSET(getStruct<T>, {0xF8, 64, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceGlobalBinding                                  OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceSystemBinding                                  OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceOwnerBinding                                   OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) SpawnInstanceEmitterBindings                        OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceGlobalBinding                                 OFFSET(getStruct<T>, {0x1A8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceSystemBinding                                 OFFSET(getStruct<T>, {0x1C8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceOwnerBinding                                  OFFSET(getStruct<T>, {0x1E8, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) UpdateInstanceEmitterBindings                       OFFSET(get<T>, {0x208, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0468 (0x000030 - 0x000498)
class UNiagaraSystem : public UFXSystemAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	DMember(bool)                                      bDumpDebugSystemInfo                                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bDumpDebugEmitterInfo                                       OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x34, 1, 1, 0})
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bOverrideScalabilitySettings                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilityOverride>) ScalabilityOverrides                                        OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraSystemScalabilityOverrides)        SystemScalabilityOverrides                                  OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNiagaraEmitterHandle>)             EmitterHandles                                              OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<class UNiagaraParameterCollectionInstance*>) ParameterCollectionOverrides                       OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(class UNiagaraScript*)                     SystemSpawnScript                                           OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UNiagaraScript*)                     SystemUpdateScript                                          OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FNiagaraSystemCompiledData)                SystemCompiledData                                          OFFSET(getStruct<T>, {0xA8, 536, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     ExposedParameters                                           OFFSET(getStruct<T>, {0x2C0, 200, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(getStruct<T>, {0x388, 28, 0, 0})
	DMember(bool)                                      bAutoDeactivate                                             OFFSET(get<bool>, {0x3A4, 1, 0, 0})
	DMember(float)                                     WarmupTime                                                  OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x3AC, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(bool)                                      bHasSystemScriptDIsWithPerInstanceData                      OFFSET(get<bool>, {0x3B4, 1, 0, 0})
	DMember(bool)                                      bNeedsGPUContextInitForDataInterfaces                       OFFSET(get<bool>, {0x3B5, 1, 0, 0})
	CMember(TArray<FName>)                             UserDINamesReadInSystemScripts                              OFFSET(get<T>, {0x3B8, 16, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMovieSceneBoolChannel)                    BoolChannel                                                 OFFSET(getStruct<T>, {0x40, 144, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (0x000040 - 0x0002C0)
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FMovieSceneFloatChannel)                   RedChannel                                                  OFFSET(getStruct<T>, {0x40, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenChannel                                                OFFSET(getStruct<T>, {0xE0, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueChannel                                                 OFFSET(getStruct<T>, {0x180, 160, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaChannel                                                OFFSET(getStruct<T>, {0x220, 160, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x40, 160, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerChannel                                              OFFSET(getStruct<T>, {0x40, 144, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
class FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              SpawnSectionStartFrame                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FFrameNumber)                              SpawnSectionEndFrame                                        OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SpawnSectionStartBehavior                                   OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SpawnSectionEvaluateBehavior                               OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SpawnSectionEndBehavior                                     OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (0x000040 - 0x0002C8)
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FMovieSceneFloatChannel)                   VectorChannels                                              OFFSET(getStruct<T>, {0x40, 640, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScalabilityState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Significance                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCulled                                                     OFFSET(get<bool>, {0x4, 1, 1, 0})
	DMember(bool)                                      bPreviousCulled                                             OFFSET(get<bool>, {0x4, 1, 1, 1})
	DMember(bool)                                      bCulledByDistance                                           OFFSET(get<bool>, {0x4, 1, 1, 2})
	DMember(bool)                                      bCulledByInstanceCount                                      OFFSET(get<bool>, {0x4, 1, 1, 3})
	DMember(bool)                                      bCulledByVisibility                                         OFFSET(get<bool>, {0x4, 1, 1, 4})
	DMember(bool)                                      bCulledByGlobalBudget                                       OFFSET(get<bool>, {0x4, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCompileDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   LinkerErrorMessage                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     NodeGuid                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      DependentVariable                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraRandInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Seed1                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed2                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed3                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptVariableBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraVariableInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     Definition                                                  OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraSystemUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReset                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToReInit                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ComponentsToNotifySimDestroy                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<class UNiagaraSystem*>)             SystemSimsToDestroy                                         OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
class FNiagaraFunctionSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bRequiresContext                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bRequiresExecPin                                            OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bMemberFunction                                             OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bExperimental                                               OFFSET(get<bool>, {0x30, 1, 1, 3})
	DMember(bool)                                      bSupportsCPU                                                OFFSET(get<bool>, {0x30, 1, 1, 4})
	DMember(bool)                                      bSupportsGPU                                                OFFSET(get<bool>, {0x30, 1, 1, 5})
	DMember(bool)                                      bWriteFunction                                              OFFSET(get<bool>, {0x30, 1, 1, 6})
	DMember(bool)                                      bSoftDeprecatedFunction                                     OFFSET(get<bool>, {0x30, 1, 1, 7})
	DMember(bool)                                      bIsCompileTagGenerator                                      OFFSET(get<bool>, {0x31, 1, 1, 0})
	DMember(bool)                                      bHidden                                                     OFFSET(get<bool>, {0x31, 1, 1, 1})
	DMember(int32_t)                                   ModuleUsageBitmask                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   ContextStageMinIndex                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ContextStageMaxIndex                                        OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TMap<FName, FName>)                        FunctionSpecifiers                                          OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraEmitterNameSettingsRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SystemName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (0x000000 - 0x00001C)
class FBasicParticleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshTriCoordinate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Tri                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector)                                   BaryCoord                                                   OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraSimpleClientInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Systems                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Actors                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Components                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           Emitters                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraOutlinerCaptureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bTriggerCapture                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bGatherPerfData                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraRequestSimpleClientInfoMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraOutlinerEmitterInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(ENiagaraExecutionState)                    ExecState                                                   OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumParticles                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraOutlinerTimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     GameThread                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RenderThread                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraOutlinerSystemInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraOutlinerEmitterInstanceData>) Emitters                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraExecutionState)                    ActualExecutionState                                        OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraExecutionState)                    RequestedExecutionState                                     OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FNiagaraScalabilityState)                  ScalabilityState                                            OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bPendingKill                                                OFFSET(get<bool>, {0x30, 1, 1, 0})
	CMember(ENCPoolMethod)                             PoolMethod                                                  OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AverageTime                                                 OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxTime                                                     OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraOutlinerSystemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraOutlinerSystemInstanceData>) SystemInstances                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerInstanceTime                                      OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerInstanceTime                                          OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerWorldData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FString, FNiagaraOutlinerSystemData>) Systems                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(bool)                                      bHasBegunPlay                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(char)                                      WorldType                                                   OFFSET(get<char>, {0x51, 1, 0, 0})
	DMember(char)                                      NetMode                                                     OFFSET(get<char>, {0x52, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraOutlinerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FNiagaraOutlinerWorldData>)  WorldData                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraDebuggerOutlinerUpdate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNiagaraOutlinerData)                      OutlinerData                                                OFFSET(getStruct<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebuggerExecuteConsoleCommand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Command                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRequiresWorld                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerConnectionClosed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     sessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerAcceptConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     sessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerRequestConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     sessionId                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceId                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraGraphViewSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 Location                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (0x000000 - 0x00002C)
class FNiagaraCollisionEventPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FVector)                                   CollisionPos                                                OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   CollisionNormal                                             OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   CollisionVelocity                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   PhysicalMaterialIndex                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (0x000000 - 0x000001)
class FParameterDefinitionsSubscription : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraPlatformSetConflictEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraPlatformSetConflictInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SetAIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SetBIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraPlatformSetConflictEntry>)  Conflicts                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0070 (0x000000 - 0x000070)
class FNiagaraScalabilityManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UNiagaraEffectType*)                 EffectType                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          ManagedComponents                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (0x000000 - 0x000001)
class FVersionedNiagaraScriptData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraModuleDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ENiagaraModuleDependencyType)              Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ENiagaraModuleDependencyScriptConstraint)  ScriptConstraint                                            OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000078 - 0x000088)
class FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraScriptHighlight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (0x000000 - 0x000080)
class FNiagaraSystemCompileRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<class UObject*>)                    RootObjects                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0090 (0x000000 - 0x000090)
class FEmitterCompiledScriptPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0130 (0x000000 - 0x000130)
class FNiagaraEmitterCompiledData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FName>)                             SpawnAttributes                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnIntervalVar                                     OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInterpSpawnStartDTVar                                OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnGroupVar                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterAgeVar                                               OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterRandomSeedVar                                        OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInstanceSeedVar                                      OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
	SMember(FNiagaraVariable)                          EmitterTotalSpawnedParticlesVar                             OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(getStruct<T>, {0xF0, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraInputConditionMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FString>)                           TargetValues                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraVariableMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     CategoryName                                                OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bAdvancedDisplay                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   EditorSortPriority                                          OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bInlineEditConditionToggle                                  OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            EditCondition                                               OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            VisibleCondition                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(TMap<FName, FString>)                      PropertyMetaData                                            OFFSET(get<T>, {0x70, 80, 0, 0})
	SMember(FName)                                     ParentAttribute                                             OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FGuid)                                     VariableGuid                                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bIsStaticSwitch                                             OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(int32_t)                                   StaticSwitchDefaultValue                                    OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompileHashVisitorDebugInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Object                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyKeys                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyValues                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AcquireTag                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSpawnInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpStartDt                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IntervalDt                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SpawnGroup                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraAssetVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   MajorVersion                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinorVersion                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VersionGuid                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsVisibleInVersionSelector                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraMatrix : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4)                                  Row0                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVector4)                                  Row1                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector4)                                  Row2                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector4)                                  Row3                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraParameterMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraNumeric : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraHalfVector4 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  W                                                           OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
class FNiagaraHalfVector3 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraHalfVector2 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
class FNiagaraHalf : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraBool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraInt32 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraWildcard : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariant : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UObject*)                            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UNiagaraDataInterface*)              DataInterface                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<char>)                              Bytes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraVariantMode)                       CurrentMode                                                 OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FNiagaraWorldManagerTickFunction : public FTickFunction
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x03
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x02
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x01
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x08
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x04
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x02
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x07
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x05
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x03
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x02
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x06
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x02
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x03
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x05
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x13
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x07
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x06
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x03
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x02
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x02
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x03
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x02
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x04
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x02
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x04
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x03
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x04
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x02
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x03
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x03
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x04
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x03
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x04
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x03
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x02
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x03
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x03
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x04
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x05
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x02
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x03
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x05
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x03
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x04
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x04
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x04
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x03
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x03
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x02
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x03
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x04
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x02
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x02
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x03
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x03
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x04
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x02
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x02
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x05
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x02
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x03
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x03
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x05
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x03
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x03
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x03
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x03
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x06
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x04
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x04
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

