
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/TimeSynth.TimeSynthVolumeGroup
/// Size: 0x0008 (0x000028 - 0x000030)
class UTimeSynthVolumeGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     DefaultVolume                                               OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthClipSound
/// Size: 0x0018 (0x000000 - 0x000018)
class FTimeSynthClipSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USoundWave*)                         SoundWave                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     RandomWeight                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector2D)                                 DistanceRange                                               OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthTimeDef
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimeSynthTimeDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumBars                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumBeats                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Class /Script/TimeSynth.TimeSynthClip
/// Size: 0x0040 (0x000028 - 0x000068)
class UTimeSynthClip : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FTimeSynthClipSound>)               Sounds                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FVector2D)                                 VolumeScaleDb                                               OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 PitchScaleSemitones                                         OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	SMember(FTimeSynthTimeDef)                         FadeInTime                                                  OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bApplyFadeOut                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FTimeSynthTimeDef)                         FadeOutTime                                                 OFFSET(getStruct<T>, {0x54, 8, 0, 0})
	SMember(FTimeSynthTimeDef)                         ClipDuration                                                OFFSET(getStruct<T>, {0x5C, 8, 0, 0})
	CMember(ETimeSynthEventClipQuantization)           ClipQuantization                                            OFFSET(get<T>, {0x64, 1, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthQuantizationSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FTimeSynthQuantizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     BeatsPerMinute                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BeatsPerBar                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ETimeSynthBeatDivision)                    BeatDivision                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EventDelaySeconds                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(ETimeSynthEventQuantization)               GlobalQuantization                                          OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FTimeSynthFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ETimeSynthFilterType)                      FilterType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FTimeSynthEnvelopeFollowerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ETimeSynthEnvelopeFollowerPeakMode)        PeakMode                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsAnalogMode                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Class /Script/TimeSynth.TimeSynthComponent
/// Size: 0x0A50 (0x0006C0 - 0x001110)
class UTimeSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4368;

public:
	SMember(FTimeSynthQuantizationSettings)            QuantizationSettings                                        OFFSET(getStruct<T>, {0x6C0, 20, 0, 0})
	DMember(bool)                                      bEnableSpectralAnalysis                                     OFFSET(get<bool>, {0x6D4, 1, 1, 0})
	CMember(TArray<float>)                             FrequenciesToAnalyze                                        OFFSET(get<T>, {0x6D8, 16, 0, 0})
	CMember(ETimeSynthFFTSize)                         FFTSize                                                     OFFSET(get<T>, {0x6E8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackTime                                              OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	DMember(bool)                                      bIsFilterAEnabled                                           OFFSET(get<bool>, {0x700, 1, 1, 0})
	DMember(bool)                                      bIsFilterBEnabled                                           OFFSET(get<bool>, {0x700, 1, 1, 1})
	SMember(FTimeSynthFilterSettings)                  FilterASettings                                             OFFSET(getStruct<T>, {0x704, 12, 0, 0})
	SMember(FTimeSynthFilterSettings)                  FilterBSettings                                             OFFSET(getStruct<T>, {0x710, 12, 0, 0})
	DMember(bool)                                      bIsEnvelopeFollowerEnabled                                  OFFSET(get<bool>, {0x71C, 1, 1, 0})
	SMember(FTimeSynthEnvelopeFollowerSettings)        EnvelopeFollowerSettings                                    OFFSET(getStruct<T>, {0x720, 12, 0, 0})
	DMember(int32_t)                                   MaxPoolSize                                                 OFFSET(get<int32_t>, {0x72C, 4, 0, 0})


	/// Functions
	// Function /Script/TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
	// void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, FTimeSynthTimeDef& FadeTime); // [0x9ada70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
	// void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization); // [0x9ad9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
	// void StopClipWithFadeOverride(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization, FTimeSynthTimeDef& FadeTime); // [0x9ad850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.StopClip
	// void StopClip(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization);                     // [0x9ad760] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetVolumeGroup
	// void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);                      // [0x9ad650] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetSeed
	// void SetSeed(int32_t InSeed);                                                                                            // [0x9ad5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetQuantizationSettings
	// void SetQuantizationSettings(FTimeSynthQuantizationSettings& InQuantizationSettings);                                    // [0x9ad500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetFilterSettings
	// void SetFilterSettings(ETimeSynthFilter Filter, FTimeSynthFilterSettings& InSettings);                                   // [0x9ad420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetFilterEnabled
	// void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);                                                         // [0x9ad350] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetFFTSize
	// void SetFFTSize(ETimeSynthFFTSize InFFTSize);                                                                            // [0x9ad2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
	// void SetEnvelopeFollowerSettings(FTimeSynthEnvelopeFollowerSettings& InSettings);                                        // [0x9ad230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
	// void SetEnvelopeFollowerEnabled(bool bInIsEnabled);                                                                      // [0x9ad1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.SetBPM
	// void SetBPM(float BeatsPerMinute);                                                                                       // [0x9ad120] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.ResetSeed
	// void ResetSeed();                                                                                                        // [0x9ad100] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.PlayClip
	// FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);                 // [0x9ad020] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.HasActiveClips
	// bool HasActiveClips();                                                                                                   // [0x9acff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TimeSynth.TimeSynthComponent.GetSpectralData
	// TArray<FTimeSynthSpectralData> GetSpectralData();                                                                        // [0x9acf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
	// int32_t GetMaxActiveClipLimit();                                                                                         // [0x9acf40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
	// float GetEnvelopeFollowerValue();                                                                                        // [0x9acf20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TimeSynth.TimeSynthComponent.GetBPM
	// int32_t GetBPM();                                                                                                        // [0x9acef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
	// void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, FDelegateProperty& OnQuantizationEvent); // [0x9ace00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TimeSynth.TimeSynthClipHandle
/// Size: 0x000C (0x000000 - 0x00000C)
class FTimeSynthClipHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClipName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ClipId                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/TimeSynth.TimeSynthSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTimeSynthSpectralData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     FrequencyHz                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/TimeSynth.ETimeSynthEventQuantization
/// Size: 0x15
enum class ETimeSynthEventQuantization : uint8_t
{
	ETimeSynthEventQuantization__None                                                = 0,
	ETimeSynthEventQuantization__Bars8                                               = 1,
	ETimeSynthEventQuantization__Bars4                                               = 2,
	ETimeSynthEventQuantization__Bars2                                               = 3,
	ETimeSynthEventQuantization__Bar                                                 = 4,
	ETimeSynthEventQuantization__HalfNote                                            = 5,
	ETimeSynthEventQuantization__HalfNoteTriplet                                     = 6,
	ETimeSynthEventQuantization__QuarterNote                                         = 7,
	ETimeSynthEventQuantization__QuarterNoteTriplet                                  = 8,
	ETimeSynthEventQuantization__EighthNote                                          = 9,
	ETimeSynthEventQuantization__EighthNoteTriplet                                   = 10,
	ETimeSynthEventQuantization__SixteenthNote                                       = 11,
	ETimeSynthEventQuantization__SixteenthNoteTriplet                                = 12,
	ETimeSynthEventQuantization__ThirtySecondNote                                    = 13,
	ETimeSynthEventQuantization__Count                                               = 14
};

/// Enum /Script/TimeSynth.ETimeSynthEnvelopeFollowerPeakMode
/// Size: 0x04
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8_t
{
	ETimeSynthEnvelopeFollowerPeakMode__MeanSquared                                  = 0,
	ETimeSynthEnvelopeFollowerPeakMode__RootMeanSquared                              = 1,
	ETimeSynthEnvelopeFollowerPeakMode__Peak                                         = 2,
	ETimeSynthEnvelopeFollowerPeakMode__Count                                        = 3
};

/// Enum /Script/TimeSynth.ETimeSynthFilterType
/// Size: 0x05
enum class ETimeSynthFilterType : uint8_t
{
	ETimeSynthFilterType__LowPass                                                    = 0,
	ETimeSynthFilterType__HighPass                                                   = 1,
	ETimeSynthFilterType__BandPass                                                   = 2,
	ETimeSynthFilterType__BandStop                                                   = 3,
	ETimeSynthFilterType__Count                                                      = 4
};

/// Enum /Script/TimeSynth.ETimeSynthFilter
/// Size: 0x03
enum class ETimeSynthFilter : uint8_t
{
	ETimeSynthFilter__FilterA                                                        = 0,
	ETimeSynthFilter__FilterB                                                        = 1,
	ETimeSynthFilter__Count                                                          = 2
};

/// Enum /Script/TimeSynth.ETimeSynthEventClipQuantization
/// Size: 0x16
enum class ETimeSynthEventClipQuantization : uint8_t
{
	ETimeSynthEventClipQuantization__Global                                          = 0,
	ETimeSynthEventClipQuantization__None                                            = 1,
	ETimeSynthEventClipQuantization__Bars8                                           = 2,
	ETimeSynthEventClipQuantization__Bars4                                           = 3,
	ETimeSynthEventClipQuantization__Bars2                                           = 4,
	ETimeSynthEventClipQuantization__Bar                                             = 5,
	ETimeSynthEventClipQuantization__HalfNote                                        = 6,
	ETimeSynthEventClipQuantization__HalfNoteTriplet                                 = 7,
	ETimeSynthEventClipQuantization__QuarterNote                                     = 8,
	ETimeSynthEventClipQuantization__QuarterNoteTriplet                              = 9,
	ETimeSynthEventClipQuantization__EighthNote                                      = 10,
	ETimeSynthEventClipQuantization__EighthNoteTriplet                               = 11,
	ETimeSynthEventClipQuantization__SixteenthNote                                   = 12,
	ETimeSynthEventClipQuantization__SixteenthNoteTriplet                            = 13,
	ETimeSynthEventClipQuantization__ThirtySecondNote                                = 14,
	ETimeSynthEventClipQuantization__Count                                           = 15
};

/// Enum /Script/TimeSynth.ETimeSynthFFTSize
/// Size: 0x04
enum class ETimeSynthFFTSize : uint8_t
{
	ETimeSynthFFTSize__Min                                                           = 0,
	ETimeSynthFFTSize__Small                                                         = 1,
	ETimeSynthFFTSize__Medium                                                        = 2,
	ETimeSynthFFTSize__Large                                                         = 3
};

/// Enum /Script/TimeSynth.ETimeSynthBeatDivision
/// Size: 0x06
enum class ETimeSynthBeatDivision : uint8_t
{
	ETimeSynthBeatDivision__One                                                      = 0,
	ETimeSynthBeatDivision__Two                                                      = 1,
	ETimeSynthBeatDivision__Four                                                     = 2,
	ETimeSynthBeatDivision__Eight                                                    = 3,
	ETimeSynthBeatDivision__Sixteen                                                  = 4,
	ETimeSynthBeatDivision__Count                                                    = 5
};

