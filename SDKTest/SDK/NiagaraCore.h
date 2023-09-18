/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraCore.

/// Struct /Script/NiagaraCore.NiagaraVariableCommonReference
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraVariableCommonReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UObject*)                                  UnderlyingType                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/NiagaraCore.NiagaraCompileHash
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraCompileHash : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              DataHash                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/NiagaraCore.NiagaraMergeable
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMergeable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NiagaraCore.NiagaraDataInterfaceBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/NiagaraCore.ENiagaraIterationSource
/// Size: 0x04
enum ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles0                                              = 0,
	ENiagaraIterationSource__DataInterface1                                          = 1,
	ENiagaraIterationSource__DirectSet2                                              = 2,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX3                            = 3
};

