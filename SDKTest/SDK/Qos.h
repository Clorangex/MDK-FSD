/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Qos.

/// Struct /Script/Qos.QosSubspaceComparisonParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FQosSubspaceComparisonParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNonSubspacePingMs                                        ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinSubspacePingMs                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ConstantMaxToleranceMs                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     ScaledMaxTolerancePct                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Qos.QosPingServerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FQosPingServerInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Address                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Port                                                        ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Qos.QosDatacenterInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FQosDatacenterInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RegionId                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FQosPingServerInfo>)                Servers                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Qos.QosRegionInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FQosRegionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   RegionId                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bAutoAssignable                                             ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bAllowSubspaceBias                                          ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	SMember(FQosSubspaceComparisonParams)              SubspaceBiasParams                                          ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/Qos.DatacenterQosInstance
/// Size: 0x0068 (0x000000 - 0x000068)
class FDatacenterQosInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FQosDatacenterInfo)                        Definition                                                  ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(EQosDatacenterResult)                      Result                                                      ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   AvgPingMs                                                   ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TArray<int32_t>)                           PingResults                                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bUsable                                                     ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/Qos.RegionQosInstance
/// Size: 0x0050 (0x000000 - 0x000050)
class FRegionQosInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQosRegionInfo)                            Definition                                                  ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	CMember(TArray<FDatacenterQosInstance>)            DatacenterOptions                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Qos.QosBeaconClient
/// Size: 0x0038 (0x000320 - 0x000358)
class AQosBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
};

/// Class /Script/Qos.QosBeaconHost
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AQosBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/Qos.QosEvaluator
/// Size: 0x0058 (0x000028 - 0x000080)
class UQosEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bInProgress                                                 ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bCancelOperation                                            ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	CMember(TArray<FDatacenterQosInstance>)            Datacenters                                                 ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Qos.QosRegionManager
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UQosRegionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(int32_t)                                   NumTestsPerRegion                                           ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     PingTimeout                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bEnableSubspaceBiasOrder                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   SubspaceDelimiter                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FQosRegionInfo>)                    RegionDefinitions                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FQosDatacenterInfo>)                DatacenterDefinitions                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UQosEvaluator*)                            Evaluator                                                   ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(EQosCompletionResult)                      QosEvalResult                                               ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FRegionQosInstance>)                RegionOptions                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   ForceRegionId                                               ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bRegionForcedViaCommandline                                 ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FString)                                   SelectedRegionId                                            ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Enum /Script/Qos.EQosResponseType
/// Size: 0x04
enum EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse0                                                    = 0,
	EQosResponseType__Success1                                                       = 1,
	EQosResponseType__Failure2                                                       = 2,
	EQosResponseType__EQosResponseType_MAX3                                          = 3
};

/// Enum /Script/Qos.EQosDatacenterResult
/// Size: 0x04
enum EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid0                                                   = 0,
	EQosDatacenterResult__Success1                                                   = 1,
	EQosDatacenterResult__Incomplete2                                                = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX3                                  = 3
};

/// Enum /Script/Qos.EQosCompletionResult
/// Size: 0x05
enum EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid0                                                   = 0,
	EQosCompletionResult__Success1                                                   = 1,
	EQosCompletionResult__Failure2                                                   = 2,
	EQosCompletionResult__Canceled3                                                  = 3,
	EQosCompletionResult__EQosCompletionResult_MAX4                                  = 4
};

