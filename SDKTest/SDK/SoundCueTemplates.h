/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package SoundCueTemplates.

/// Struct /Script/SoundCueTemplates.SoundCueCrossfadeInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundCueCrossfadeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDistanceDatum)                            DistanceInfo                                                ___ OFFSET(get<T>, {0x0, 20, 0, 0})
	CMember(USoundWave*)                               sound                                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SoundCueTemplates.SoundCueTemplateQualitySettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSoundCueTemplateQualitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   MaxConcatenatedVariations                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxRandomizedVariations                                     ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaxMixVariations                                            ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Class /Script/SoundCueTemplates.SoundCueTemplate
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueTemplate : public USoundCue
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueContainer
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueContainer : public USoundCueTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueDistanceCrossfade
/// Size: 0x0000 (0x000560 - 0x000560)
class USoundCueDistanceCrossfade : public USoundCueTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SoundCueTemplates.SoundCueTemplateSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundCueTemplateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/SoundCueTemplates.ESoundContainerType
/// Size: 0x04
enum ESoundContainerType : uint8_t
{
	ESoundContainerType__Concatenate0                                                = 0,
	ESoundContainerType__Randomize1                                                  = 1,
	ESoundContainerType__Mix2                                                        = 2,
	ESoundContainerType__ESoundContainerType_MAX3                                    = 3
};

