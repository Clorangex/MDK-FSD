
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamVRInputDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin
	// void ShowSteamVR_ActionOrigin(FSteamVRAction SteamVRAction, FSteamVRActionSet SteamVRActionSet);                         // [0xf6ed30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins
	// void ShowAllSteamVR_ActionOrigins();                                                                                     // [0xf6ed10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow
	// float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue);                                                          // [0xf6ec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource
	// void SetPoseSource(bool bUseSkeletonPose);                                                                               // [0xf6ec00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState
	// void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState);                                              // [0xf6eb30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition
	// bool ResetSeatedPosition();                                                                                              // [0xf6eb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback
	// void PlaySteamVR_HapticFeedback(ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude); // [0xf6e960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD
	// float GetUserIPD();                                                                                                      // [0xf6e910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo
	// bool GetSteamVR_OriginTrackedDeviceInfo(FSteamVRAction SteamVRAction, FSteamVRInputOriginInfo& InputOriginInfo);         // [0xf6e780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName
	// void GetSteamVR_OriginLocalizedName(FSteamVRAction SteamVRAction, TArray<ESteamVRInputStringBits> LocalizedParts, FString& OriginLocalizedName); // [0xf6e590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo
	// TArray<FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(FSteamVRAction SteamVRActionHandle);                        // [0xf6e440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow
	// bool GetSteamVR_HandPoseRelativeToNow(FVector& Position, FRotator& Orientation, ESteamVRHand hand, float PredictedSecondsFromNow); // [0xf6e2d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow
	// float GetSteamVR_GlobalPredictedSecondsFromNow();                                                                        // [0xf6e2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray
	// void GetSteamVR_ActionSetArray(TArray<FSteamVRActionSet>& SteamVRActionSets);                                            // [0xf6e1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray
	// void GetSteamVR_ActionArray(TArray<FSteamVRAction>& SteamVRActions);                                                     // [0xf6e120] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform
	// void GetSkeletalTransform(FSteamVRSkeletonTransform& LeftHand, FSteamVRSkeletonTransform& RightHand, bool bWithController); // [0xf6dfb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState
	// void GetSkeletalState(bool& LeftHandState, bool& RightHandState);                                                        // [0xf6ded0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData
	// void GetRightHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);        // [0xf6dd50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource
	// void GetPoseSource(bool& bUsingSkeletonPose);                                                                            // [0xf6dcd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData
	// void GetLeftHandPoseData(FVector& Position, FRotator& Orientation, FVector& AngularVelocity, FVector& Velocity);         // [0xf6db50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays
	// void GetFingerCurlsAndSplays(EHand hand, FSteamVRFingerCurls& FingerCurls, FSteamVRFingerSplays& FingerSplays, ESkeletalSummaryDataType SummaryDataType); // [0xf6d9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState
	// void GetCurlsAndSplaysState(bool& LeftHandState, bool& RightHandState);                                                  // [0xf6d8f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity
	// void GetControllerFidelity(EControllerFidelity& LeftControllerFidelity, EControllerFidelity& RightControllerFidelity);   // [0xf6d810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo
	// void FindSteamVR_OriginTrackedDeviceInfo(FName ActionName, bool& bResult, FSteamVRInputOriginInfo& InputOriginInfo, FName ActionSet); // [0xf6d680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo
	// TArray<FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(FName ActionName, FName ActionSet);                        // [0xf6d570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin
	// bool FindSteamVR_ActionOrigin(FName ActionName, FName ActionSet);                                                        // [0xf6d4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action
	// void FindSteamVR_Action(FName ActionName, bool& bResult, FSteamVRAction& FoundAction, FSteamVRActionSet& FoundActionSet, FName ActionSet); // [0xf6d2c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamVRInputDevice.SteamVRTrackingReferences
/// Size: 0x0058 (0x0000B0 - 0x000108)
class USteamVRTrackingReferences : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnTrackedDeviceActivated                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrackedDeviceDeactivated                                  OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     ActiveDevicePollFrequency                                   OFFSET(get<float>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   TrackingReferenceScale                                      OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       TrackingReferences                                          OFFSET(get<T>, {0xE0, 16, 0, 0})


	/// Functions
	// Function /Script/SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences
	// bool ShowTrackingReferences(class UStaticMesh* TrackingReferenceMesh);                                                   // [0xf6eec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences
	// void HideTrackingReferences();                                                                                           // [0xf6e940] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SteamVRInputDevice.SteamVRSkeletonTransform
/// Size: 0x05D0 (0x000000 - 0x0005D0)
class FSteamVRSkeletonTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FTransform)                                Root                                                        OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FTransform)                                wrist                                                       OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                Thumb                                                       OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FTransform)                                Thumb1                                                      OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FTransform)                                Thumb2                                                      OFFSET(getStruct<T>, {0xC0, 48, 0, 0})
	SMember(FTransform)                                Thumb3                                                      OFFSET(getStruct<T>, {0xF0, 48, 0, 0})
	SMember(FTransform)                                Index                                                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FTransform)                                Index1                                                      OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FTransform)                                Index2                                                      OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FTransform)                                Index3                                                      OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	SMember(FTransform)                                Index4                                                      OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
	SMember(FTransform)                                Middle                                                      OFFSET(getStruct<T>, {0x210, 48, 0, 0})
	SMember(FTransform)                                Middle1                                                     OFFSET(getStruct<T>, {0x240, 48, 0, 0})
	SMember(FTransform)                                Middle2                                                     OFFSET(getStruct<T>, {0x270, 48, 0, 0})
	SMember(FTransform)                                Middle3                                                     OFFSET(getStruct<T>, {0x2A0, 48, 0, 0})
	SMember(FTransform)                                Middle4                                                     OFFSET(getStruct<T>, {0x2D0, 48, 0, 0})
	SMember(FTransform)                                Ring                                                        OFFSET(getStruct<T>, {0x300, 48, 0, 0})
	SMember(FTransform)                                Ring1                                                       OFFSET(getStruct<T>, {0x330, 48, 0, 0})
	SMember(FTransform)                                Ring2                                                       OFFSET(getStruct<T>, {0x360, 48, 0, 0})
	SMember(FTransform)                                Ring3                                                       OFFSET(getStruct<T>, {0x390, 48, 0, 0})
	SMember(FTransform)                                Ring4                                                       OFFSET(getStruct<T>, {0x3C0, 48, 0, 0})
	SMember(FTransform)                                Pinky                                                       OFFSET(getStruct<T>, {0x3F0, 48, 0, 0})
	SMember(FTransform)                                Pinky1                                                      OFFSET(getStruct<T>, {0x420, 48, 0, 0})
	SMember(FTransform)                                Pinky2                                                      OFFSET(getStruct<T>, {0x450, 48, 0, 0})
	SMember(FTransform)                                Pinky3                                                      OFFSET(getStruct<T>, {0x480, 48, 0, 0})
	SMember(FTransform)                                Pinky4                                                      OFFSET(getStruct<T>, {0x4B0, 48, 0, 0})
	SMember(FTransform)                                Aux_Thumb                                                   OFFSET(getStruct<T>, {0x4E0, 48, 0, 0})
	SMember(FTransform)                                Aux_Index                                                   OFFSET(getStruct<T>, {0x510, 48, 0, 0})
	SMember(FTransform)                                Aux_Middle                                                  OFFSET(getStruct<T>, {0x540, 48, 0, 0})
	SMember(FTransform)                                Aux_Ring                                                    OFFSET(getStruct<T>, {0x570, 48, 0, 0})
	SMember(FTransform)                                Aux_Pinky                                                   OFFSET(getStruct<T>, {0x5A0, 48, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.UE4RetargettingRefs
/// Size: 0x0028 (0x000000 - 0x000028)
class FUE4RetargettingRefs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsRightHanded                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FVector)                                   KnuckleAverageMS_UE4                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   WristSideDirectionLS_UE4                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   WristForwardLS_UE4                                          OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
/// Size: 0x0610 (0x000010 - 0x000620)
class FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	CMember(EMotionRange)                              MotionRange                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EHand)                                     hand                                                        OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(EHandSkeleton)                             HandSkeleton                                                OFFSET(get<T>, {0x12, 1, 0, 0})
	DMember(bool)                                      Mirror                                                      OFFSET(get<bool>, {0x13, 1, 0, 0})
	SMember(FSteamVRSkeletonTransform)                 SteamVRSkeletalTransform                                    OFFSET(getStruct<T>, {0x20, 1488, 0, 0})
	SMember(FUE4RetargettingRefs)                      UE4RetargettingRefs                                         OFFSET(getStruct<T>, {0x5F0, 40, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
/// Size: 0x0030 (0x000010 - 0x000040)
class FAnimNode_SteamVRSetWristTransform : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FPoseLink)                                 ReferencePose                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EHandSkeleton)                             HandSkeleton                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FPoseLink)                                 targetPose                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRInputBindingInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FSteamVRInputBindingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     DevicePathName                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     InputPathName                                               OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     ModeName                                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     slotName                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRInputOriginInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FSteamVRInputOriginInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   TrackedDeviceIndex                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   RenderModelComponentName                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   TrackedDeviceModel                                          OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRActionSet
/// Size: 0x0018 (0x000000 - 0x000018)
class FSteamVRActionSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRAction
/// Size: 0x0028 (0x000000 - 0x000028)
class FSteamVRAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRFingerSplays
/// Size: 0x0010 (0x000000 - 0x000010)
class FSteamVRFingerSplays : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Thumb_Index                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Index_Middle                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Middle_Ring                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Ring_Pinky                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SteamVRInputDevice.SteamVRFingerCurls
/// Size: 0x0014 (0x000000 - 0x000014)
class FSteamVRFingerCurls : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Thumb                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Index                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Middle                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Ring                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Pinky                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Enum /Script/SteamVRInputDevice.ESkeletalSummaryDataType
/// Size: 0x02
enum class ESkeletalSummaryDataType : uint8_t
{
	ESkeletalSummaryDataType__VR_SummaryType_FromAnimation                           = 0,
	ESkeletalSummaryDataType__VR_SummaryType_FromDevice                              = 1
};

/// Enum /Script/SteamVRInputDevice.ESteamVRInputStringBits
/// Size: 0x04
enum class ESteamVRInputStringBits : uint8_t
{
	ESteamVRInputStringBits__VR_InputString_Hand                                     = 0,
	ESteamVRInputStringBits__VR_InputString_ControllerType                           = 1,
	ESteamVRInputStringBits__VR_InputString_InputSource                              = 2,
	ESteamVRInputStringBits__VR_InputString_All                                      = 3
};

/// Enum /Script/SteamVRInputDevice.EControllerFidelity
/// Size: 0x03
enum class EControllerFidelity : uint8_t
{
	EControllerFidelity__VR_ControllerFidelity_Estimated                             = 0,
	EControllerFidelity__VR_ControllerFidelity_Full                                  = 1,
	EControllerFidelity__VR_ControllerFidelity_Partial                               = 2
};

/// Enum /Script/SteamVRInputDevice.EHandSkeleton
/// Size: 0x02
enum class EHandSkeleton : uint8_t
{
	EHandSkeleton__VR_SteamVRHandSkeleton                                            = 0,
	EHandSkeleton__VR_UE4HandSkeleton                                                = 1
};

/// Enum /Script/SteamVRInputDevice.EHand
/// Size: 0x02
enum class EHand : uint8_t
{
	EHand__VR_LeftHand                                                               = 0,
	EHand__VR_RightHand                                                              = 1
};

/// Enum /Script/SteamVRInputDevice.EMotionRange
/// Size: 0x02
enum class EMotionRange : uint8_t
{
	EMotionRange__VR_WithoutController                                               = 0,
	EMotionRange__VR_WithController                                                  = 1
};

/// Enum /Script/SteamVRInputDevice.ESteamVRHand
/// Size: 0x02
enum class ESteamVRHand : uint8_t
{
	ESteamVRHand__VR_Left                                                            = 0,
	ESteamVRHand__VR_Right                                                           = 1
};

