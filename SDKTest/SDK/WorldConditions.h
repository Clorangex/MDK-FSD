/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WorldConditions.

/// Struct /Script/WorldConditions.WorldConditionQueryDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FWorldConditionQueryDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   SchemaClass                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionBase
/// Size: 0x0010 (0x000000 - 0x000010)
class FWorldConditionBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0xB, 1, 1, 2})
	CMember(EWorldConditionOperator)                   Operator                                                    ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(char)                                      NextExpressionDepth                                         ___ OFFSET(get<char>, {0xD, 1, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionCommonBase
/// Size: 0x0000 (0x000010 - 0x000010)
class FWorldConditionCommonBase : public FWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/WorldConditions.WorldConditionCommonActorBase
/// Size: 0x0000 (0x000010 - 0x000010)
class FWorldConditionCommonActorBase : public FWorldConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/WorldConditions.WorldConditionEditable
/// Size: 0x0001 (0x000000 - 0x000001)
class FWorldConditionEditable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/WorldConditions.WorldConditionQuerySharedDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FWorldConditionQuerySharedDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FInstancedStructContainer)                 Conditions                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UClass*)                                   SchemaClass                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionItem
/// Size: 0x0003 (0x000000 - 0x000003)
class FWorldConditionItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
};

/// Struct /Script/WorldConditions.WorldConditionStateObject
/// Size: 0x0008 (0x000000 - 0x000008)
class FWorldConditionStateObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionQueryState
/// Size: 0x0030 (0x000000 - 0x000030)
class FWorldConditionQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionQuery
/// Size: 0x0048 (0x000000 - 0x000048)
class FWorldConditionQuery : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionQueryDefinition)            QueryDefinition                                             ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  ___ OFFSET(get<T>, {0x18, 48, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionResult
/// Size: 0x0002 (0x000000 - 0x000002)
class FWorldConditionResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EWorldConditionResultValue)                Value                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCanBeCached                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionContextDataDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FWorldConditionContextDataDesc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UStruct*)                                  Struct                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EWorldConditionContextDataType)            Type                                                        ___ OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/WorldConditions.WorldConditionContextDataRef
/// Size: 0x0008 (0x000000 - 0x000008)
class FWorldConditionContextDataRef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(char)                                      Index                                                       ___ OFFSET(get<char>, {0x4, 1, 0, 0})
};

/// Class /Script/WorldConditions.WorldConditionSchema
/// Size: 0x0010 (0x000028 - 0x000038)
class UWorldConditionSchema : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FWorldConditionContextDataDesc>)    ContextDataDescs                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Enum /Script/WorldConditions.EWorldConditionResultValue
/// Size: 0x04
enum EWorldConditionResultValue : uint8_t
{
	EWorldConditionResultValue__IsFalse0                                             = 0,
	EWorldConditionResultValue__IsTrue1                                              = 1,
	EWorldConditionResultValue__Invalid2                                             = 2,
	EWorldConditionResultValue__EWorldConditionResultValue_MAX3                      = 3
};

/// Enum /Script/WorldConditions.EWorldConditionOperator
/// Size: 0x04
enum EWorldConditionOperator : uint8_t
{
	EWorldConditionOperator__And0                                                    = 0,
	EWorldConditionOperator__Or1                                                     = 1,
	EWorldConditionOperator__Copy2                                                   = 2,
	EWorldConditionOperator__EWorldConditionOperator_MAX3                            = 3
};

/// Enum /Script/WorldConditions.EWorldConditionContextDataType
/// Size: 0x03
enum EWorldConditionContextDataType : uint8_t
{
	EWorldConditionContextDataType__Dynamic0                                         = 0,
	EWorldConditionContextDataType__Persistent1                                      = 1,
	EWorldConditionContextDataType__EWorldConditionContextDataType_MAX2              = 2
};

