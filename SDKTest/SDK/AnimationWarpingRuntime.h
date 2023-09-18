/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimationWarpingRuntime.

/// Struct /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FFootPlacementInterpolationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     UnplantLinearStiffness                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     UnplantLinearDamping                                        ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     UnplantAngularStiffness                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantAngularDamping                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FloorLinearStiffness                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     FloorLinearDamping                                          ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     FloorAngularStiffness                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     FloorAngularDamping                                         ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableFloorInterpolation                                   ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFootPlacementTraceSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SweepRadius                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              ComplexTraceChannel                                         ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     MaxGroundPenetration                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SimpleCollisionInfluence                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              SimpleTraceChannel                                          ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FFootPlacementRootDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBoneReference)                            PelvisBone                                                  ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            IKRootBone                                                  ___ OFFSET(get<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FFootPlacementPelvisSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     MaxOffset                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LinearStiffness                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LinearDamping                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HorizontalRebalancingWeight                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxOffsetHorizontal                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     HeelLiftRatio                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPelvisHeightMode)                         PelvisHeightMode                                            ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EActorMovementCompensationMode)            ActorMovementCompensationMode                               ___ OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(bool)                                      bEnableInterpolation                                        ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
/// Size: 0x0030 (0x000000 - 0x000030)
class FFootPlacemenLegDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            FKFootBone                                                  ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            IKFootBone                                                  ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            BallBone                                                    ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     DisableLockCurveName                                        ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
/// Size: 0x0034 (0x000000 - 0x000034)
class FFootPlacementPlantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(float)                                     SpeedThreshold                                              ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DistanceToGround                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EFootPlacementLockType)                    LockType                                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     UnplantRadius                                               ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ReplantRadiusRatio                                          ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     UnplantAngle                                                ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReplantAngleRatio                                           ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxExtensionRatio                                           ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinExtensionRatio                                           ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     SeparatingDistance                                          ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     UnalignmentSpeedThreshold                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AnkleTwistReduction                                         ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bAdjustHeelBeforePlanting                                   ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
/// Size: 0x0338 (0x0000C8 - 0x000400)
class FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(EWarpingEvaluationMode)                    PlantSpeedMode                                              ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              ___ OFFSET(get<T>, {0xCC, 12, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  ___ OFFSET(get<T>, {0xD8, 12, 0, 0})
	SMember(FFootPlacementPelvisSettings)              PelvisSettings                                              ___ OFFSET(get<T>, {0xE4, 28, 0, 0})
	CMember(TArray<FFootPlacemenLegDefinition>)        LegDefinitions                                              ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FFootPlacementPlantSettings)               PlantSettings                                               ___ OFFSET(get<T>, {0x110, 52, 0, 0})
	SMember(FFootPlacementInterpolationSettings)       InterpolationSettings                                       ___ OFFSET(get<T>, {0x144, 36, 0, 0})
	SMember(FFootPlacementTraceSettings)               TraceSettings                                               ___ OFFSET(get<T>, {0x168, 28, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
/// Size: 0x00C8 (0x0000C8 - 0x000190)
class FAnimNode_OffsetRootBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
/// Size: 0x00D0 (0x0000C8 - 0x000198)
class FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(float)                                     OrientationAngle                                            ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     LocomotionAngle                                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     LocomotionAngleDeltaThreshold                               ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    SpineBones                                                  ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              ___ OFFSET(get<T>, {0xF0, 12, 0, 0})
	CMember(TArray<FBoneReference>)                    IKFootBones                                                 ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        RotationAxis                                                ___ OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(float)                                     DistributedBoneOrientationAlpha                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     RotationInterpSpeed                                         ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     WarpingAlpha                                                ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     OffsetAlpha                                                 ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MaxOffsetAngle                                              ___ OFFSET(get<float>, {0x124, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
class FSlopeWarpingFootDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBoneReference)                            IKFootBone                                                  ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     FootSize                                                    ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FSlopeWarpingFootData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
/// Size: 0x0210 (0x0000C8 - 0x0002D8)
class FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FBoneReference)                            IKFootRootBone                                              ___ OFFSET(get<T>, {0xE0, 12, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  ___ OFFSET(get<T>, {0xEC, 12, 0, 0})
	CMember(TArray<FSlopeWarpingFootDefinition>)       FeetDefinitions                                             ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FSlopeWarpingFootData>)             FeetData                                                    ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              PelvisOffsetInterpolator                                    ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FVector)                                   GravityDir                                                  ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FVector)                                   CustomFloorOffset                                           ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	DMember(float)                                     CachedDeltaTime                                             ___ OFFSET(get<float>, {0x1A8, 4, 0, 0})
	SMember(FVector)                                   TargetFloorNormalWorldSpace                                 ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorNormalInterpolator                                     ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FVector)                                   TargetFloorOffsetLocalSpace                                 ___ OFFSET(get<T>, {0x228, 24, 0, 0})
	SMember(FVectorRK4SpringInterpolator)              FloorOffsetInterpolator                                     ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	DMember(float)                                     MaxStepHeight                                               ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bKeepMeshInsideOfCapsule                                    ___ OFFSET(get<bool>, {0x2A4, 1, 1, 0})
	DMember(bool)                                      bPullPelvisDown                                             ___ OFFSET(get<bool>, {0x2A4, 1, 1, 1})
	DMember(bool)                                      bUseCustomFloorOffset                                       ___ OFFSET(get<bool>, {0x2A4, 1, 1, 2})
	DMember(bool)                                      bWasOnGround                                                ___ OFFSET(get<bool>, {0x2A4, 1, 1, 3})
	DMember(bool)                                      bShowDebug                                                  ___ OFFSET(get<bool>, {0x2A4, 1, 1, 4})
	DMember(bool)                                      bFloorSmoothingInitialized                                  ___ OFFSET(get<bool>, {0x2A4, 1, 1, 5})
	SMember(FVector)                                   ActorLocation                                               ___ OFFSET(get<T>, {0x2A8, 24, 0, 0})
	SMember(FVector)                                   GravityDirCompSpace                                         ___ OFFSET(get<T>, {0x2C0, 24, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
/// Size: 0x0024 (0x000000 - 0x000024)
class FStrideWarpingFootDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FBoneReference)                            IKFootBone                                                  ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            ThighBone                                                   ___ OFFSET(get<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
/// Size: 0x0178 (0x0000C8 - 0x000240)
class FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(EWarpingEvaluationMode)                    Mode                                                        ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FVector)                                   StrideDirection                                             ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	DMember(float)                                     StrideScale                                                 ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     LocomotionSpeed                                             ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     MinRootMotionSpeedThreshold                                 ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FBoneReference)                            PelvisBone                                                  ___ OFFSET(get<T>, {0xF4, 12, 0, 0})
	SMember(FBoneReference)                            IKFootRootBone                                              ___ OFFSET(get<T>, {0x100, 12, 0, 0})
	CMember(TArray<FStrideWarpingFootDefinition>)      FootDefinitions                                             ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FInputClampConstants)                      StrideScaleModifier                                         ___ OFFSET(get<T>, {0x120, 20, 0, 0})
	SMember(FWarpingVectorValue)                       FloorNormalDirection                                        ___ OFFSET(get<T>, {0x138, 32, 0, 0})
	SMember(FWarpingVectorValue)                       GravityDirection                                            ___ OFFSET(get<T>, {0x158, 32, 0, 0})
	SMember(FIKFootPelvisPullDownSolver)               PelvisIKFootSolver                                          ___ OFFSET(get<T>, {0x178, 128, 0, 0})
	DMember(bool)                                      bOrientStrideDirectionUsingFloorNormal                      ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      bCompensateIKUsingFKThighRotation                           ___ OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      bClampIKUsingFKLimits                                       ___ OFFSET(get<bool>, {0x1FA, 1, 0, 0})
};

/// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
/// Size: 0x05
enum EFootPlacementLockType : uint8_t
{
	EFootPlacementLockType__Unlocked0                                                = 0,
	EFootPlacementLockType__PivotAroundBall1                                         = 1,
	EFootPlacementLockType__PivotAroundAnkle2                                        = 2,
	EFootPlacementLockType__LockRotation3                                            = 3,
	EFootPlacementLockType__EFootPlacementLockType_MAX4                              = 4
};

/// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
/// Size: 0x04
enum EPelvisHeightMode : uint8_t
{
	EPelvisHeightMode__AllLegs0                                                      = 0,
	EPelvisHeightMode__AllPlantedFeet1                                               = 1,
	EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill2                     = 2,
	EPelvisHeightMode__EPelvisHeightMode_MAX3                                        = 3
};

/// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
/// Size: 0x04
enum EActorMovementCompensationMode : uint8_t
{
	EActorMovementCompensationMode__ComponentSpace0                                  = 0,
	EActorMovementCompensationMode__WorldSpace1                                      = 1,
	EActorMovementCompensationMode__SuddenMotionOnly2                                = 2,
	EActorMovementCompensationMode__EActorMovementCompensationMode_MAX3              = 3
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
/// Size: 0x05
enum EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate0                                                 = 0,
	EOffsetRootBoneMode__Interpolate1                                                = 1,
	EOffsetRootBoneMode__Hold2                                                       = 2,
	EOffsetRootBoneMode__Release3                                                    = 3,
	EOffsetRootBoneMode__EOffsetRootBoneMode_MAX4                                    = 4
};

