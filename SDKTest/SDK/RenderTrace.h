/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RenderTrace.

/// Struct /Script/RenderTrace.PhysicalMaterialTraceInput
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicalMaterialTraceInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Class /Script/RenderTrace.MaterialExpressionPhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionPhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPhysicalMaterialTraceInput>)       Inputs                                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

