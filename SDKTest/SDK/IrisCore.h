/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package IrisCore.

/// Struct /Script/IrisCore.DataStreamDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FDataStreamDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     DataStreamName                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UClass*)                                   Class                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EDataStreamSendStatus)                     DefaultSendStatus                                           ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bAutoCreate                                                 ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/IrisCore.NetSerializerConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FNetSerializerConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.DateTimeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FDateTimeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.EnumInt8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumInt8NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int8_t)                                    LowerBound                                                  ___ OFFSET(get<int8_t>, {0x10, 1, 0, 0})
	DMember(int8_t)                                    UpperBound                                                  ___ OFFSET(get<int8_t>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumInt16NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int16_t)                                   LowerBound                                                  ___ OFFSET(get<int16_t>, {0x10, 2, 0, 0})
	DMember(int16_t)                                   UpperBound                                                  ___ OFFSET(get<int16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FEnumInt32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   LowerBound                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumInt64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FEnumInt64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   LowerBound                                                  ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UpperBound                                                  ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint8NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumUint8NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(char)                                      LowerBound                                                  ___ OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  ___ OFFSET(get<char>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint16NetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FEnumUint16NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint16_t)                                  LowerBound                                                  ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  UpperBound                                                  ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint32NetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FEnumUint32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint32_t)                                  LowerBound                                                  ___ OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  UpperBound                                                  ___ OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.EnumUint64NetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FEnumUint64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint64_t)                                  LowerBound                                                  ___ OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  UpperBound                                                  ___ OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.FloatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FFloatNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.DoubleNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FDoubleNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.GuidNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGuidNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.BitfieldNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FBitfieldNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitMask                                                     ___ OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.ArrayPropertyNetSerializerConfig
/// Size: 0x0030 (0x000010 - 0x000040)
class FArrayPropertyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint16_t)                                  MaxElementCount                                             ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  ElementCountBitCount                                        ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/IrisCore.LastResortPropertyNetSerializerConfig
/// Size: 0x0028 (0x000010 - 0x000038)
class FLastResortPropertyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  MaxAllowedObjectReferences                                  ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetRoleNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FNetRoleNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   RelativeInternalOffsetToOtherRole                           ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RelativeExternalOffsetToOtherRole                           ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      LowerBound                                                  ___ OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x1A, 1, 0, 0})
	DMember(char)                                      AutonomousProxyValue                                        ___ OFFSET(get<char>, {0x1B, 1, 0, 0})
	DMember(char)                                      SimulatedProxyValue                                         ___ OFFSET(get<char>, {0x1C, 1, 0, 0})
};

/// Struct /Script/IrisCore.FieldPathNetSerializerConfig
/// Size: 0x0020 (0x000010 - 0x000030)
class FFieldPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/IrisCore.FieldPathNetSerializerSerializationHelper
/// Size: 0x0018 (0x000000 - 0x000018)
class FFieldPathNetSerializerSerializationHelper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UStruct*>)                  Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FName>)                             PropertyPath                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/IrisCore.IntNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FIntNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FInt8RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int8_t)                                    LowerBound                                                  ___ OFFSET(get<int8_t>, {0x10, 1, 0, 0})
	DMember(int8_t)                                    UpperBound                                                  ___ OFFSET(get<int8_t>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FInt16RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int16_t)                                   LowerBound                                                  ___ OFFSET(get<int16_t>, {0x10, 2, 0, 0})
	DMember(int16_t)                                   UpperBound                                                  ___ OFFSET(get<int16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FInt32RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   LowerBound                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   UpperBound                                                  ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.Int64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FInt64RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   LowerBound                                                  ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   UpperBound                                                  ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.IrisFastArraySerializer
/// Size: 0x0018 (0x000108 - 0x000120)
class FIrisFastArraySerializer : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(uint32_t)                                  ChangeMaskStorage                                           ___ OFFSET(get<uint32_t>, {0x10C, 16, 0, 0})
};

/// Struct /Script/IrisCore.NetBlobHandlerDefinition
/// Size: 0x0004 (0x000000 - 0x000004)
class FNetBlobHandlerDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetObjectFilterDefinition
/// Size: 0x000C (0x000000 - 0x00000C)
class FNetObjectFilterDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     FilterName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     ConfigClassName                                             ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/IrisCore.NetObjectPrioritizerDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FNetObjectPrioritizerDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PrioritizerName                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UClass*)                                   Class                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     ConfigClassName                                             ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(UClass*)                                   ConfigClass                                                 ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/IrisCore.BoolNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FBoolNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.StructNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FStructNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/IrisCore.NopNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNopNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.ObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.WeakObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FWeakObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.ScriptInterfaceNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FScriptInterfaceNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   InterfaceClass                                              ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePollConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FObjectReplicationBridgePollConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     PollFrequency                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIncludeSubclasses                                          ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeFilterConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectReplicationBridgeFilterConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     DynamicFilterName                                           ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgePrioritizerConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FObjectReplicationBridgePrioritizerConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PrioritizerName                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bForceEnableOnAllInstances                                  ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/IrisCore.ObjectReplicationBridgeDeltaCompressionConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FObjectReplicationBridgeDeltaCompressionConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ClassName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnableDeltaCompression                                     ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/IrisCore.PackedInt64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedInt64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedUint64NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedUint64NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedInt32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedInt32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PackedUint32NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPackedUint32NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantizeNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantizeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantize10NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantize10NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantize100NetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantize100NetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.VectorNetQuantizeNormalNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetQuantizeNormalNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.PolymorphicStructNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/IrisCore.PolymorphicArrayStructNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class FPolymorphicArrayStructNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/IrisCore.UnitQuatNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuatNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UnitQuat4fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuat4fNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UnitQuat4dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FUnitQuat4dNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorAsByteNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorAsByteNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.RotatorAsShortNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FRotatorAsShortNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftObjectNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftObjectNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftObjectPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftObjectPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SoftClassPathNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FSoftClassPathNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.NameNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNameNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.StringNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FStringNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.UintNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUintNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint8RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUint8RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(char)                                      LowerBound                                                  ___ OFFSET(get<char>, {0x10, 1, 0, 0})
	DMember(char)                                      UpperBound                                                  ___ OFFSET(get<char>, {0x11, 1, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x12, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint16RangeNetSerializerConfig
/// Size: 0x0008 (0x000010 - 0x000018)
class FUint16RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  LowerBound                                                  ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  UpperBound                                                  ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x14, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint32RangeNetSerializerConfig
/// Size: 0x0010 (0x000010 - 0x000020)
class FUint32RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint32_t)                                  LowerBound                                                  ___ OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(uint32_t)                                  UpperBound                                                  ___ OFFSET(get<uint32_t>, {0x14, 4, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/IrisCore.Uint64RangeNetSerializerConfig
/// Size: 0x0018 (0x000010 - 0x000028)
class FUint64RangeNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint64_t)                                  LowerBound                                                  ___ OFFSET(get<uint64_t>, {0x10, 8, 0, 0})
	DMember(uint64_t)                                  UpperBound                                                  ___ OFFSET(get<uint64_t>, {0x18, 8, 0, 0})
	DMember(char)                                      BitCount                                                    ___ OFFSET(get<char>, {0x20, 1, 0, 0})
};

/// Struct /Script/IrisCore.VectorNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVectorNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Vector3fNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVector3fNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.Vector3dNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FVector3dNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IrisCore.SupportsStructNetSerializerConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FSupportsStructNetSerializerConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     StructName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCanUseStructNetSerializer                                  ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Class /Script/IrisCore.DataStream
/// Size: 0x0000 (0x000028 - 0x000028)
class UDataStream : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.DataStreamDefinitions
/// Size: 0x0018 (0x000028 - 0x000040)
class UDataStreamDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FDataStreamDefinition>)             DataStreamDefinitions                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.DataStreamManager
/// Size: 0x0008 (0x000028 - 0x000030)
class UDataStreamManager : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NetObjectFilterConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UNetObjectFilterConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ENetFilterType)                            FilterType                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/IrisCore.FilterOutNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UFilterOutNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NetObjectFilter
/// Size: 0x0028 (0x000028 - 0x000050)
class UNetObjectFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.FilterOutNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UFilterOutNetObjectFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.IrisObjectReferencePackageMap
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UIrisObjectReferencePackageMap : public UPackageMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.LocationBasedNetObjectPrioritizer
/// Size: 0x0038 (0x000028 - 0x000060)
class ULocationBasedNetObjectPrioritizer : public UNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/IrisCore.NetBlobHandler
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.NetBlobHandlerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetBlobHandlerDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetBlobHandlerDefinition>)         NetBlobHandlerDefinitions                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetObjectBlobHandler
/// Size: 0x0000 (0x000038 - 0x000038)
class UNetObjectBlobHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.NetObjectConnectionFilterConfig
/// Size: 0x0008 (0x000030 - 0x000038)
class UNetObjectConnectionFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint16_t)                                  MaxObjectCount                                              ___ OFFSET(get<uint16_t>, {0x30, 2, 0, 0})
};

/// Class /Script/IrisCore.NetObjectConnectionFilter
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UNetObjectConnectionFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UNetObjectPrioritizerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IrisCore.NetObjectCountLimiterConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENetObjectCountLimiterMode)                Mode                                                        ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  MaxObjectCount                                              ___ OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     Priority                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OwningConnectionPriority                                    ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bEnableOwnedObjectsFastLane                                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/IrisCore.NetObjectCountLimiter
/// Size: 0x0068 (0x000028 - 0x000090)
class UNetObjectCountLimiter : public UNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/IrisCore.NetObjectFilterDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectFilterDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetObjectFilterDefinition>)        NetObjectFilterDefinitions                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetObjectGridFilterConfig
/// Size: 0x0048 (0x000030 - 0x000078)
class UNetObjectGridFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  ViewPosRelevancyFrameCount                                  ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     CellSizeX                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CellSizeY                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxCullDistance                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     DefaultCullDistance                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FVector)                                   MinPos                                                      ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   MaxPos                                                      ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/IrisCore.NetObjectGridFilter
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class UNetObjectGridFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/IrisCore.NetObjectGridWorldLocFilter
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UNetObjectGridWorldLocFilter : public UNetObjectGridFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/IrisCore.NetObjectGridFragmentLocFilter
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UNetObjectGridFragmentLocFilter : public UNetObjectGridFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Script/IrisCore.NetObjectPrioritizerDefinitions
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetObjectPrioritizerDefinitions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetObjectPrioritizerDefinition>)   NetObjectPrioritizerDefinitions                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/IrisCore.NetRPCHandler
/// Size: 0x0008 (0x000038 - 0x000040)
class UNetRPCHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/IrisCore.NetTokenDataStream
/// Size: 0x0050 (0x000028 - 0x000078)
class UNetTokenDataStream : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/IrisCore.NopNetObjectFilterConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UNopNetObjectFilterConfig : public UNetObjectFilterConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/IrisCore.NopNetObjectFilter
/// Size: 0x0000 (0x000050 - 0x000050)
class UNopNetObjectFilter : public UNetObjectFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/IrisCore.ReplicationBridge
/// Size: 0x00E8 (0x000028 - 0x000110)
class UReplicationBridge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/IrisCore.ObjectReplicationBridge
/// Size: 0x03A0 (0x000110 - 0x0004B0)
class UObjectReplicationBridge : public UReplicationBridge
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
};

/// Class /Script/IrisCore.ObjectReplicationBridgeConfig
/// Size: 0x0048 (0x000028 - 0x000070)
class UObjectReplicationBridgeConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FObjectReplicationBridgePollConfig>) PollConfigs                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgeFilterConfig>) FilterConfigs                                            ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgePrioritizerConfig>) PrioritizerConfigs                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FObjectReplicationBridgeDeltaCompressionConfig>) DeltaCompressionConfigs                        ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     DefaultSpatialFilterName                                    ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FName)                                     RequiredNetDriverChannelClassName                           ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandlerConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class USequentialPartialNetBlobHandlerConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  MaxPartBitCount                                             ___ OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  MaxPartCount                                                ___ OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandlerConfig
/// Size: 0x0008 (0x000030 - 0x000038)
class UPartialNetObjectAttachmentHandlerConfig : public USequentialPartialNetBlobHandlerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  BitCountSplitThreshold                                      ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/IrisCore.SequentialPartialNetBlobHandler
/// Size: 0x0010 (0x000038 - 0x000048)
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/IrisCore.PartialNetObjectAttachmentHandler
/// Size: 0x0000 (0x000048 - 0x000048)
class UPartialNetObjectAttachmentHandler : public USequentialPartialNetBlobHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/IrisCore.ReplicationDataStream
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationDataStream : public UDataStream
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/IrisCore.ReplicationSystem
/// Size: 0x0030 (0x000028 - 0x000058)
class UReplicationSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UReplicationBridge*)                       ReplicationBridge                                           ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizerConfig
/// Size: 0x0018 (0x000028 - 0x000040)
class USphereNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     InnerRadius                                                 ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     OuterRadius                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     InnerPriority                                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OuterPriority                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     OutsidePriority                                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/IrisCore.SphereNetObjectPrioritizer
/// Size: 0x0008 (0x000060 - 0x000068)
class USphereNetObjectPrioritizer : public ULocationBasedNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizerConfig
/// Size: 0x0008 (0x000040 - 0x000048)
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public USphereNetObjectPrioritizerConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     OwnerPriorityBoost                                          ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/IrisCore.SphereWithOwnerBoostNetObjectPrioritizer
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USphereWithOwnerBoostNetObjectPrioritizer : public USphereNetObjectPrioritizer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/IrisCore.ReplicationStateDescriptorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UReplicationStateDescriptorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSupportsStructNetSerializerConfig>) SupportsStructNetSerializerList                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Enum /Script/IrisCore.EDataStreamSendStatus
/// Size: 0x03
enum EDataStreamSendStatus : uint8_t
{
	EDataStreamSendStatus__Send0                                                     = 0,
	EDataStreamSendStatus__Pause1                                                    = 1,
	EDataStreamSendStatus__EDataStreamSendStatus_MAX2                                = 2
};

/// Enum /Script/IrisCore.ENetObjectCountLimiterMode
/// Size: 0x03
enum ENetObjectCountLimiterMode : uint8_t
{
	ENetObjectCountLimiterMode__RoundRobin0                                          = 0,
	ENetObjectCountLimiterMode__Fill1                                                = 1,
	ENetObjectCountLimiterMode__ENetObjectCountLimiterMode_MAX2                      = 2
};

/// Enum /Script/IrisCore.ENetFilterType
/// Size: 0x03
enum ENetFilterType : uint8_t
{
	ENetFilterType__PrePoll_Raw0                                                     = 0,
	ENetFilterType__PostPoll_FragmentBased1                                          = 1,
	ENetFilterType__ENetFilterType_MAX2                                              = 2
};

