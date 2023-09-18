/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ComputeFramework.

/// Struct /Script/ComputeFramework.ComputeGraphEdge
/// Size: 0x0038 (0x000000 - 0x000038)
class FComputeGraphEdge : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   KernelIndex                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   KernelBindingIndex                                          ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DataInterfaceIndex                                          ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   DataInterfaceBindingIndex                                   ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bKernelInput                                                ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FString)                                   BindingFunctionNameOverride                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   BindingFunctionNamespace                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeGraphInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FComputeGraphInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<UComputeDataProvider*>)             DataProviders                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationBool
/// Size: 0x0018 (0x000000 - 0x000018)
class FComputeKernelPermutationBool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FComputeKernelPermutationSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FComputeKernelPermutationBool>)     BooleanOptions                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FComputeKernelDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Symbol                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Define                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinitionSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FComputeKernelDefinitionSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FComputeKernelDefinition>)          Defines                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationVector
/// Size: 0x0058 (0x000000 - 0x000058)
class FComputeKernelPermutationVector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TMap<FString, uint32_t>)                   Permutations                                                ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(uint32_t)                                  BitCount                                                    ___ OFFSET(get<uint32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/ComputeFramework.ShaderValueTypeHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FShaderValueTypeHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ComputeFramework.ShaderValueType
/// Size: 0x0020 (0x000000 - 0x000020)
class FShaderValueType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EShaderFundamentalType)                    Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EShaderFundamentalDimensionType)           DimensionType                                               ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsDynamicArray                                             ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ComputeFramework.ShaderParamTypeDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
class FShaderParamTypeDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   TypeDeclaration                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FShaderValueTypeHandle)                    ValueType                                                   ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(uint16_t)                                  ArrayElementCount                                           ___ OFFSET(get<uint16_t>, {0x28, 2, 0, 0})
	CMember(EShaderParamBindingType)                   BindingType                                                 ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(EShaderResourceType)                       ResourceType                                                ___ OFFSET(get<T>, {0x2B, 1, 0, 0})
};

/// Struct /Script/ComputeFramework.ShaderFunctionDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FShaderFunctionDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FShaderParamTypeDefinition>)        ParamTypes                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bHasReturnType                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UComputeDataInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ComputeFramework.ComputeDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UComputeDataProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ComputeFramework.ComputeKernelSource
/// Size: 0x0070 (0x000028 - 0x000098)
class UComputeKernelSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   EntryPoint                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FIntVector)                                GroupSize                                                   ___ OFFSET(get<T>, {0x38, 12, 0, 0})
	SMember(FComputeKernelPermutationSet)              PermutationSet                                              ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FComputeKernelDefinitionSet)               DefinitionsSet                                              ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UComputeSource*>)                   AdditionalSources                                           ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FShaderFunctionDefinition>)         ExternalInputs                                              ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FShaderFunctionDefinition>)         ExternalOutputs                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeSource
/// Size: 0x0010 (0x000028 - 0x000038)
class UComputeSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UComputeSource*>)                   AdditionalSources                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeGraph
/// Size: 0x0068 (0x000028 - 0x000090)
class UComputeGraph : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<UComputeKernel*>)                   KernelInvocations                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UComputeDataInterface*>)            DataInterfaces                                              ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FComputeGraphEdge>)                 GraphEdges                                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UClass*>)                           Bindings                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<int32_t>)                           DataInterfaceToBinding                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeGraphComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UComputeGraphComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UComputeGraph*)                            ComputeGraph                                                ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FComputeGraphInstance)                     ComputeGraphInstance                                        ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeKernel
/// Size: 0x0010 (0x000028 - 0x000038)
class UComputeKernel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UComputeKernelSource*)                     KernelSource                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   KernelFlags                                                 ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeKernelFromText
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UComputeKernelFromText : public UComputeKernelSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FFilePath)                                 SourceFile                                                  ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/ComputeFramework.ComputeSourceFromText
/// Size: 0x0010 (0x000038 - 0x000048)
class UComputeSourceFromText : public UComputeSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FFilePath)                                 SourceFile                                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/ComputeFramework.EComputeKernelFlags
/// Size: 0x03
enum EComputeKernelFlags : uint8_t
{
	EComputeKernelFlags__IsDefaultKernel0                                            = 1,
	EComputeKernelFlags__IsolatedMemoryWrites1                                       = 2,
	EComputeKernelFlags__EComputeKernelFlags_MAX2                                    = 3
};

/// Enum /Script/ComputeFramework.EShaderFundamentalType
/// Size: 0x07
enum EShaderFundamentalType : uint8_t
{
	EShaderFundamentalType__Bool0                                                    = 0,
	EShaderFundamentalType__Int1                                                     = 1,
	EShaderFundamentalType__Uint2                                                    = 2,
	EShaderFundamentalType__Float3                                                   = 3,
	EShaderFundamentalType__Struct4                                                  = 4,
	EShaderFundamentalType__None5                                                    = 255,
	EShaderFundamentalType__EShaderFundamentalType_MAX6                              = 256
};

/// Enum /Script/ComputeFramework.EShaderFundamentalDimensionType
/// Size: 0x04
enum EShaderFundamentalDimensionType : uint8_t
{
	EShaderFundamentalDimensionType__Scalar0                                         = 0,
	EShaderFundamentalDimensionType__Vector1                                         = 1,
	EShaderFundamentalDimensionType__Matrix2                                         = 2,
	EShaderFundamentalDimensionType__EShaderFundamentalDimensionType_MAX3            = 3
};

/// Enum /Script/ComputeFramework.EShaderParamBindingType
/// Size: 0x05
enum EShaderParamBindingType : uint8_t
{
	EShaderParamBindingType__None0                                                   = 0,
	EShaderParamBindingType__ConstantParameter1                                      = 1,
	EShaderParamBindingType__ReadOnlyResource2                                       = 2,
	EShaderParamBindingType__ReadWriteResource3                                      = 3,
	EShaderParamBindingType__EShaderParamBindingType_MAX4                            = 4
};

/// Enum /Script/ComputeFramework.EShaderResourceType
/// Size: 0x09
enum EShaderResourceType : uint8_t
{
	EShaderResourceType__None0                                                       = 0,
	EShaderResourceType__Texture1D1                                                  = 1,
	EShaderResourceType__Texture2D2                                                  = 2,
	EShaderResourceType__Texture3D3                                                  = 3,
	EShaderResourceType__TextureCube4                                                = 4,
	EShaderResourceType__Buffer5                                                     = 5,
	EShaderResourceType__StructuredBuffer6                                           = 6,
	EShaderResourceType__ByteAddressBuffer7                                          = 7,
	EShaderResourceType__EShaderResourceType_MAX8                                    = 8
};

