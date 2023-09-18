/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PBIK.

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0050 (0x000000 - 0x000050)
class FPBIKBoneSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationStiffness                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     MinX                                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxX                                                        ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     MinY                                                        ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxY                                                        ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           ___ OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     MinZ                                                        ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/PBIK.RootPrePullSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRootPrePullSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationAlphaX                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RotationAlphaY                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RotationAlphaZ                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PositionAlphaX                                              ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PositionAlphaY                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PositionAlphaZ                                              ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x003C (0x000000 - 0x00003C)
class FPBIKSolverSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(int32_t)                                   Iterations                                                  ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         ___ OFFSET(get<T>, {0xC, 32, 0, 0})
	DMember(float)                                     GlobalPullChainAlpha                                        ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (0x000000 - 0x000068)
class FPBIKSolver : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (0x000000 - 0x000008)
class FPBIKDebug : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DrawScale                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0090 (0x000000 - 0x000090)
class FPBIKEffector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 ___ OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/PBIK.PBIKWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FPBIKWorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bNeedsInit                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  HashInitializedWith                                         ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(TArray<int32_t>)                           BoneSettingToSolverBoneIndex                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           SolverBoneToElementIndex                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FPBIKSolver)                               Solver                                                      ___ OFFSET(get<T>, {0x28, 104, 0, 0})
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x0120 (0x000160 - 0x000280)
class FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FName)                                     Root                                                        ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	CMember(TArray<FPBIKEffector>)                     Effectors                                                   ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<int32_t>)                           EffectorSolverIndices                                       ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FPBIKBoneSetting>)                  BoneSettings                                                ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FPBIKSolverSettings)                       Settings                                                    ___ OFFSET(get<T>, {0x1A8, 60, 0, 0})
	SMember(FPBIKDebug)                                Debug                                                       ___ OFFSET(get<T>, {0x1E4, 8, 0, 0})
	SMember(FPBIKWorkData)                             WorkData                                                    ___ OFFSET(get<T>, {0x1F0, 144, 0, 0})
};

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x04
enum EPBIKLimitType : uint8_t
{
	EPBIKLimitType__Free0                                                            = 0,
	EPBIKLimitType__Limited1                                                         = 1,
	EPBIKLimitType__Locked2                                                          = 2,
	EPBIKLimitType__EPBIKLimitType_MAX3                                              = 3
};

/// Enum /Script/PBIK.EPBIKRootBehavior
/// Size: 0x04
enum EPBIKRootBehavior : uint8_t
{
	EPBIKRootBehavior__PrePull0                                                      = 0,
	EPBIKRootBehavior__PinToInput1                                                   = 1,
	EPBIKRootBehavior__Free2                                                         = 2,
	EPBIKRootBehavior__EPBIKRootBehavior_MAX3                                        = 3
};

