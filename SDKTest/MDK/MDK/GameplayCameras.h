
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieSceneTracks
/// dependency: TemplateSequence

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTestCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0018 (0x000038 - 0x000050)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(getStruct<T>, {0x44, 12, 0, 0})
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0020 (0x000028 - 0x000048)
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<class UCameraShakePattern*>)        ChildPatterns                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FFOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EInitialOscillatorOffset>)     InitialOffset                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EOscillatorWaveform)                       Waveform                                                    OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FROscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              Pitch                                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Yaw                                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Roll                                                        OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FVOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              X                                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Y                                                           OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Z                                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Class /Script/GameplayCameras.MatineeCameraShake
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UMatineeCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(float)                                     OscillationDuration                                         OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     OscillationBlendInTime                                      OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     OscillationBlendOutTime                                     OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FROscillator)                              RotOscillation                                              OFFSET(getStruct<T>, {0xB4, 36, 0, 0})
	SMember(FVOscillator)                              LocOscillation                                              OFFSET(getStruct<T>, {0xD8, 36, 0, 0})
	SMember(FFOscillator)                              FOVOscillation                                              OFFSET(getStruct<T>, {0xFC, 12, 0, 0})
	DMember(float)                                     AnimPlayRate                                                OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     AnimScale                                                   OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     AnimBlendInTime                                             OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     AnimBlendOutTime                                            OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     RandomAnimSegmentDuration                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(class UCameraAnim*)                        Anim                                                        OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class UCameraAnimationSequence*)           AnimSequence                                                OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(bool)                                      bRandomAnimSegment                                          OFFSET(get<bool>, {0x130, 1, 1, 0})
	DMember(float)                                     OscillatorTimeRemaining                                     OFFSET(get<float>, {0x134, 4, 0, 0})
	CMember(class UCameraAnimInst*)                    AnimInst                                                    OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class USequenceCameraShakePattern*)        SequenceShakePattern                                        OFFSET(get<T>, {0x180, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
	// class UMatineeCameraShake* StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x1153230] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
	// class UMatineeCameraShake* StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, class UClass* ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot); // [0x1153060] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveStopShake
	// void ReceiveStopShake(bool bImmediately);                                                                                // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceivePlayShake
	// void ReceivePlayShake(float Scale);                                                                                      // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Script/GameplayCameras.MatineeCameraShake.ReceiveIsFinished
	// bool ReceiveIsFinished();                                                                                                // [0x1153030] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
	// void BlueprintUpdateCameraShake(float DeltaTime, float alpha, FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);     // [0x1d6f900] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayCameras.MatineeCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatineeCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.MovieSceneMatineeCameraShakeEvaluator
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneMatineeCameraShakeEvaluator : public UMovieSceneCameraShakeEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
	// class UMatineeCameraShake* Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake);                                 // [0x1152fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
class FPerlinNoiseShaker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        X                                                           OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Y                                                           OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Z                                                           OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        Pitch                                                       OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Yaw                                                         OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Roll                                                        OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        FOV                                                         OFFSET(getStruct<T>, {0x78, 8, 0, 0})
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FWaveOscillator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EInitialWaveOscillatorOffsetType)          InitialOffsetType                                           OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FWaveOscillator)                           X                                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FWaveOscillator)                           Y                                                           OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FWaveOscillator)                           Z                                                           OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FWaveOscillator)                           Pitch                                                       OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
	SMember(FWaveOscillator)                           Yaw                                                         OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	SMember(FWaveOscillator)                           Roll                                                        OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	SMember(FWaveOscillator)                           FOV                                                         OFFSET(getStruct<T>, {0x90, 12, 0, 0})
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x02
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom                                                                 = 0,
	EOO_OffsetZero                                                                   = 1
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x02
enum class EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave                                                    = 0,
	EOscillatorWaveform__PerlinNoise                                                 = 1
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x02
enum class EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random                                         = 0,
	EInitialWaveOscillatorOffsetType__Zero                                           = 1
};

