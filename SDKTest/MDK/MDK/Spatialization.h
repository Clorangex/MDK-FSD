
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Spatialization.ITDSpatializationSourceSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bEnableILD                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        PanningIntensityOverDistance                                OFFSET(getStruct<T>, {0x30, 136, 0, 0})
};

