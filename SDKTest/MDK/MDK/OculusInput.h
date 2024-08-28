
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/OculusInput.OculusCapsuleCollider
/// Size: 0x0010 (0x000000 - 0x000010)
class FOculusCapsuleCollider : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UCapsuleComponent*)                  Capsule                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EBone)                                     BoneId                                                      OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/OculusInput.OculusHandComponent
/// Size: 0x00A0 (0x000800 - 0x0008A0)
class UOculusHandComponent : public UPoseableMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	CMember(EOculusHandType)                           SkeletonType                                                OFFSET(get<T>, {0x800, 1, 0, 0})
	CMember(EOculusHandType)                           MeshType                                                    OFFSET(get<T>, {0x801, 1, 0, 0})
	CMember(EConfidenceBehavior)                       ConfidenceBehavior                                          OFFSET(get<T>, {0x802, 1, 0, 0})
	CMember(ESystemGestureBehavior)                    SystemGestureBehavior                                       OFFSET(get<T>, {0x803, 1, 0, 0})
	CMember(class UMaterialInterface*)                 SystemGestureMaterial                                       OFFSET(get<T>, {0x808, 8, 0, 0})
	DMember(bool)                                      bInitializePhysics                                          OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      bUpdateHandScale                                            OFFSET(get<bool>, {0x811, 1, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(TMap<EBone, FName>)                        BoneNameMappings                                            OFFSET(get<T>, {0x820, 80, 0, 0})
	CMember(TArray<FOculusCapsuleCollider>)            CollisionCapsules                                           OFFSET(get<T>, {0x870, 16, 0, 0})
	DMember(bool)                                      bSkeletalMeshInitialized                                    OFFSET(get<bool>, {0x880, 1, 0, 0})
};

/// Class /Script/OculusInput.OculusInputFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOculusInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OculusInput.OculusInputFunctionLibrary.IsPointerPoseValid
	// bool IsPointerPoseValid(EOculusHandType DeviceHand, int32_t ControllerIndex);                                            // [0x1313500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.IsHandTrackingEnabled
	// bool IsHandTrackingEnabled();                                                                                            // [0x13134d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.InitializeHandPhysics
	// TArray<FOculusCapsuleCollider> InitializeHandPhysics(EOculusHandType SkeletonType, class USkinnedMeshComponent* HandComponent, float WorldToMeters); // [0x1313380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetTrackingConfidence
	// ETrackingConfidence GetTrackingConfidence(EOculusHandType DeviceHand, int32_t ControllerIndex);                          // [0x13132b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetPointerPose
	// FTransform GetPointerPose(EOculusHandType DeviceHand, int32_t ControllerIndex);                                          // [0x13131b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetHandSkeletalMesh
	// bool GetHandSkeletalMesh(class USkeletalMesh* HandSkeletalMesh, EOculusHandType SkeletonType, EOculusHandType MeshType, float WorldToMeters); // [0x1313060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetHandScale
	// float GetHandScale(EOculusHandType DeviceHand, int32_t ControllerIndex);                                                 // [0x1312f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetDominantHand
	// EOculusHandType GetDominantHand(int32_t ControllerIndex);                                                                // [0x1312f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetBoneRotation
	// FQuat GetBoneRotation(EOculusHandType DeviceHand, EBone BoneId, int32_t ControllerIndex);                                // [0x1312df0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusInput.OculusInputFunctionLibrary.GetBoneName
	// FString GetBoneName(EBone BoneId);                                                                                       // [0x1312d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Enum /Script/OculusInput.ESystemGestureBehavior
/// Size: 0x02
enum class ESystemGestureBehavior : uint8_t
{
	ESystemGestureBehavior__None                                                     = 0,
	ESystemGestureBehavior__SwapMaterial                                             = 1
};

/// Enum /Script/OculusInput.EConfidenceBehavior
/// Size: 0x02
enum class EConfidenceBehavior : uint8_t
{
	EConfidenceBehavior__None                                                        = 0,
	EConfidenceBehavior__HideActor                                                   = 1
};

/// Enum /Script/OculusInput.EBone
/// Size: 0x29
enum class EBone : uint8_t
{
	EBone__Wrist_Root                                                                = 0,
	EBone__Hand_Start                                                                = 0,
	EBone__Forearm_Stub                                                              = 1,
	EBone__Thumb                                                                     = 2,
	EBone__Thumb5                                                                    = 3,
	EBone__Thumb6                                                                    = 4,
	EBone__Thumb7                                                                    = 5,
	EBone__Index                                                                     = 6,
	EBone__Index9                                                                    = 7,
	EBone__Index10                                                                   = 8,
	EBone__Middle                                                                    = 9,
	EBone__Middle12                                                                  = 10,
	EBone__Middle13                                                                  = 11,
	EBone__Ring                                                                      = 12,
	EBone__Ring15                                                                    = 13,
	EBone__Ring16                                                                    = 14,
	EBone__Pinky                                                                     = 15,
	EBone__Pinky18                                                                   = 16,
	EBone__Pinky19                                                                   = 17,
	EBone__Pinky20                                                                   = 18,
	EBone__Thumb_Tip                                                                 = 19,
	EBone__Max_Skinnable                                                             = 19,
	EBone__Index_Tip                                                                 = 20,
	EBone__Middle_Tip                                                                = 21,
	EBone__Ring_Tip                                                                  = 22,
	EBone__Pinky_Tip                                                                 = 23,
	EBone__Hand_End                                                                  = 24,
	EBone__Bone_Max                                                                  = 24,
	EBone__Invalid                                                                   = 25
};

/// Enum /Script/OculusInput.ETrackingConfidence
/// Size: 0x02
enum class ETrackingConfidence : uint8_t
{
	ETrackingConfidence__Low                                                         = 0,
	ETrackingConfidence__High                                                        = 1
};

/// Enum /Script/OculusInput.EOculusHandType
/// Size: 0x03
enum class EOculusHandType : uint8_t
{
	EOculusHandType__None                                                            = 0,
	EOculusHandType__HandLeft                                                        = 1,
	EOculusHandType__HandRight                                                       = 2
};

