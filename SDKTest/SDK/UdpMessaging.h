/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UdpMessaging.

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FUdpMockMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UUdpMessagingSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      EnabledByDefault                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      EnableTransport                                             ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAutoRepair                                                 ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     MaxSendRate                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  AutoRepairAttemptLimit                                      ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  WorkQueueSize                                               ___ OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(bool)                                      bStopServiceWhenAppDeactivates                              ___ OFFSET(get<bool>, {0x36, 1, 0, 0})
	SMember(FString)                                   UnicastEndpoint                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   MulticastEndpoint                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EUdpMessageFormat)                         MessageFormat                                               ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(char)                                      MulticastTimeToLive                                         ___ OFFSET(get<char>, {0x59, 1, 0, 0})
	CMember(TArray<FString>)                           StaticEndpoints                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FString>)                           ExcludedEndpoints                                           ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bShareKnownNodesWithActiveConnections                       ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      EnableTunnel                                                ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	SMember(FString)                                   TunnelUnicastEndpoint                                       ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   TunnelMulticastEndpoint                                     ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FString>)                           RemoteTunnelEndpoints                                       ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x06
enum EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None0                                                         = 0,
	EUdpMessageFormat__Json1                                                         = 1,
	EUdpMessageFormat__TaggedProperty2                                               = 2,
	EUdpMessageFormat__CborPlatformEndianness3                                       = 3,
	EUdpMessageFormat__CborStandardEndianness4                                       = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX5                                        = 5
};

