
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/FSR2TemporalUpscaling.FSR2Settings
/// Size: 0x0048 (0x000038 - 0x000080)
class UFSR2Settings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      AutoExposure                                                OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      EnabledInEditorViewport                                     OFFSET(get<bool>, {0x3A, 1, 0, 0})
	DMember(bool)                                      UseSSRExperimentalDenoiser                                  OFFSET(get<bool>, {0x3B, 1, 0, 0})
	DMember(bool)                                      UseNativeDX12                                               OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      UseNativeVulkan                                             OFFSET(get<bool>, {0x3D, 1, 0, 0})
	CMember(EFSR2QualityMode)                          QualityMode                                                 OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(EFSR2HistoryFormat)                        HistoryFormat                                               OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      AdjustMipBias                                               OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      ReactiveMask                                                OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      ForceVertexDeformationOutputsVelocity                       OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(float)                                     ReflectionScale                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ReflectionLuminanceBias                                     OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RoughnessScale                                              OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RoughnessBias                                               OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     RoughnessMaxDistance                                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      ReactiveMaskRoughnessForceMaxDistance                       OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(float)                                     TranslucencyBias                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     TranslucencyLuminanceBias                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     TranslucencyMaxDistance                                     OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     PreDOFTranslucencyScale                                     OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      PreDOFTranslucencyMax                                       OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2HistoryFormat
/// Size: 0x02
enum class EFSR2HistoryFormat : uint32_t
{
	EFSR2HistoryFormat__FloatRGBA                                                    = 0,
	EFSR2HistoryFormat__FloatR11G11B10                                               = 1
};

/// Enum /Script/FSR2TemporalUpscaling.EFSR2QualityMode
/// Size: 0x05
enum class EFSR2QualityMode : uint32_t
{
	EFSR2QualityMode__Unused                                                         = 0,
	EFSR2QualityMode__Quality                                                        = 1,
	EFSR2QualityMode__Balanced                                                       = 2,
	EFSR2QualityMode__Performance                                                    = 3,
	EFSR2QualityMode__UltraPerformance                                               = 4
};

