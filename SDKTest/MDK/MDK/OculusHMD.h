
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OculusHMD.OculusFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
	// void SetReorientHMDOnControllerRecenter(bool recenterMode);                                                              // [0x1304b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetPositionScale3D
	// void SetPositionScale3D(FVector PosScale3D);                                                                             // [0x1304ad0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
	// void SetGuardianVisibility(bool GuardianVisible);                                                                        // [0x1304a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel
	// void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);                                 // [0x1304990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
	// void SetDisplayFrequency(float RequestedFrequency);                                                                      // [0x1304910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
	// void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);                                                             // [0x13046d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset
	// void SetColorScaleAndOffset(FLinearColor ColorScale, FLinearColor ColorOffset, bool bApplyToAllLayers);                  // [0x1304800] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetClientColorDesc
	// void SetClientColorDesc(EColorSpace ColorSpace);                                                                         // [0x1304790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
	// void SetBaseRotationAndPositionOffset(FRotator BaseRot, FVector PosOffset, TEnumAsByte<EOrientPositionSelector> options); // [0x13045b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
	// void SetBaseRotationAndBaseOffsetInMeters(FRotator Rotation, FVector BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> options); // [0x1304490] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
	// bool IsGuardianDisplayed();                                                                                              // [0x1304460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsGuardianConfigured
	// bool IsGuardianConfigured();                                                                                             // [0x1304430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.IsDeviceTracked
	// bool IsDeviceTracked(ETrackedDeviceType DeviceType);                                                                     // [0x13043b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
	// bool HasSystemOverlayPresent();                                                                                          // [0x1304380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.HasInputFocus
	// bool HasInputFocus();                                                                                                    // [0x1304350] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetUserProfile
	// bool GetUserProfile(FHmdUserProfile& Profile);                                                                           // [0x1304220] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetSystemHmd3DofModeEnabled
	// bool GetSystemHmd3DofModeEnabled();                                                                                      // [0x13041f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetRawSensorData
	// void GetRawSensorData(FVector& AngularAcceleration, FVector& LinearAcceleration, FVector& AngularVelocity, FVector& LinearVelocity, float& TimeInSeconds, ETrackedDeviceType DeviceType); // [0x1303fb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPose
	// void GetPose(FRotator& DeviceRotation, FVector& DevicePosition, FVector& NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, FVector PositionScale); // [0x1303da0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
	// FGuardianTestResult GetPointGuardianIntersection(FVector Point, EBoundaryType BoundaryType);                             // [0x1303cc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
	// FTransform GetPlayAreaTransform();                                                                                       // [0x1303c60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
	// FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);              // [0x1303b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetHmdColorDesc
	// EColorSpace GetHmdColorDesc();                                                                                           // [0x1303b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGuardianPoints
	// TArray<FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);                                        // [0x1303a40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
	// FVector GetGuardianDimensions(EBoundaryType BoundaryType);                                                               // [0x13039b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGPUUtilization
	// void GetGPUUtilization(bool& IsGPUAvailable, float& GPUUtilization);                                                     // [0x13038d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
	// float GetGPUFrameTime();                                                                                                 // [0x13038a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel
	// EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();                                                           // [0x1303870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetDeviceType
	// EOculusDeviceType GetDeviceType();                                                                                       // [0x1303840] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetDeviceName
	// FString GetDeviceName();                                                                                                 // [0x13037c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
	// float GetCurrentDisplayFrequency();                                                                                      // [0x1303790] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
	// void GetBaseRotationAndPositionOffset(FRotator& OutRot, FVector& OutPosOffset);                                          // [0x13036c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
	// void GetBaseRotationAndBaseOffsetInMeters(FRotator& OutRotation, FVector& OutBaseOffsetInMeters);                        // [0x13035f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
	// TArray<float> GetAvailableDisplayFrequencies();                                                                          // [0x1303570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OculusHMD.OculusFunctionLibrary.EnablePositionTracking
	// void EnablePositionTracking(bool bPositionTracking);                                                                     // [0x13034f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
	// void EnableOrientationTracking(bool bOrientationTracking);                                                               // [0x1303470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
	// void ClearLoadingSplashScreens();                                                                                        // [0x1303450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
	// void AddLoadingSplashScreen(class UTexture2D* Texture, FVector TranslationInMeters, FRotator Rotation, FVector2D SizeInMeters, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x1303250] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/OculusHMD.OculusSplashDesc
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FOculusSplashDesc : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSoftObjectPath)                           TexturePath                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                TransformInMeters                                           OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FVector2D)                                 QuadSizeInMeters                                            OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FQuat)                                     DeltaRotation                                               OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FVector2D)                                 TextureOffset                                               OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	SMember(FVector2D)                                 TextureScale                                                OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bNoAlphaChannel                                             OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Class /Script/OculusHMD.OculusHMDRuntimeSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UOculusHMDRuntimeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bAutoEnabled                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FOculusSplashDesc>)                 SplashDescs                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bEnableSpecificColorGamut                                   OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(EColorSpace)                               ColorSpace                                                  OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bSupportsDash                                               OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bCompositesDepth                                            OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bHQDistortion                                               OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     PixelDensityMin                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PixelDensityMax                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   CPULevel                                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   GPULevel                                                    OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(EFixedFoveatedRenderingLevel)              FFRLevel                                                    OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(bool)                                      FFRDynamic                                                  OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bChromaCorrection                                           OFFSET(get<bool>, {0x5A, 1, 0, 0})
	DMember(bool)                                      bRecenterHMDWithController                                  OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bFocusAware                                                 OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bLateLatching                                               OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bRequiresSystemKeyboard                                     OFFSET(get<bool>, {0x5E, 1, 0, 0})
	CMember(EHandTrackingSupport)                      HandTrackingSupport                                         OFFSET(get<T>, {0x5F, 1, 0, 0})
	DMember(bool)                                      bPhaseSync                                                  OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/OculusHMD.OculusResourceHolder
/// Size: 0x0008 (0x000028 - 0x000030)
class UOculusResourceHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UMaterial*)                          PokeAHoleMaterial                                           OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OculusHMD.OculusSceneCaptureCubemap
/// Size: 0x0068 (0x000028 - 0x000090)
class UOculusSceneCaptureCubemap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<class USceneCaptureComponent2D*>)   CaptureComponents                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/OculusHMD.GuardianTestResult
/// Size: 0x0020 (0x000000 - 0x000020)
class FGuardianTestResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      IsTriggering                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ETrackedDeviceType)                        DeviceType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     ClosestDistance                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   ClosestPoint                                                OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   ClosestPointNormal                                          OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/OculusHMD.HmdUserProfileField
/// Size: 0x0020 (0x000000 - 0x000020)
class FHmdUserProfileField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FieldName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   FieldValue                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OculusHMD.HmdUserProfile
/// Size: 0x0048 (0x000000 - 0x000048)
class FHmdUserProfile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Gender                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     PlayerHeight                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     EyeHeight                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     IPD                                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector2D)                                 NeckToEyeDistance                                           OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	CMember(TArray<FHmdUserProfileField>)              ExtraFields                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Enum /Script/OculusHMD.EOculusDeviceType
/// Size: 0x08
enum class EOculusDeviceType : uint8_t
{
	EOculusDeviceType__OculusMobile_Deprecated0                                      = 0,
	EOculusDeviceType__OculusQuest                                                   = 1,
	EOculusDeviceType__OculusQuest2                                                  = 2,
	EOculusDeviceType__Rift                                                          = 100,
	EOculusDeviceType__Rift_S                                                        = 101,
	EOculusDeviceType__Quest_Link                                                    = 102,
	EOculusDeviceType__Quest2_Link                                                   = 103,
	EOculusDeviceType__OculusUnknown                                                 = 200
};

/// Enum /Script/OculusHMD.EHandTrackingSupport
/// Size: 0x03
enum class EHandTrackingSupport : uint8_t
{
	EHandTrackingSupport__ControllersOnly                                            = 0,
	EHandTrackingSupport__ControllersAndHands                                        = 1,
	EHandTrackingSupport__HandsOnly                                                  = 2
};

/// Enum /Script/OculusHMD.EColorSpace
/// Size: 0x09
enum class EColorSpace : uint8_t
{
	EColorSpace__Unknown                                                             = 0,
	EColorSpace__Unmanaged                                                           = 1,
	EColorSpace__Rec                                                                 = 2,
	EColorSpace__Rec4                                                                = 3,
	EColorSpace__Rift_CV1                                                            = 4,
	EColorSpace__Rift_S                                                              = 5,
	EColorSpace__Quest                                                               = 6,
	EColorSpace__P3                                                                  = 7,
	EColorSpace__Adobe_RGB                                                           = 8
};

/// Enum /Script/OculusHMD.EBoundaryType
/// Size: 0x02
enum class EBoundaryType : uint8_t
{
	EBoundaryType__Boundary_Outer                                                    = 0,
	EBoundaryType__Boundary_PlayArea                                                 = 1
};

/// Enum /Script/OculusHMD.EFixedFoveatedRenderingLevel
/// Size: 0x05
enum class EFixedFoveatedRenderingLevel : uint8_t
{
	EFixedFoveatedRenderingLevel__FFR_Off                                            = 0,
	EFixedFoveatedRenderingLevel__FFR_Low                                            = 1,
	EFixedFoveatedRenderingLevel__FFR_Medium                                         = 2,
	EFixedFoveatedRenderingLevel__FFR_High                                           = 3,
	EFixedFoveatedRenderingLevel__FFR_HighTop                                        = 4
};

/// Enum /Script/OculusHMD.ETrackedDeviceType
/// Size: 0x07
enum class ETrackedDeviceType : uint8_t
{
	ETrackedDeviceType__None                                                         = 0,
	ETrackedDeviceType__HMD                                                          = 1,
	ETrackedDeviceType__LTouch                                                       = 2,
	ETrackedDeviceType__RTouch                                                       = 3,
	ETrackedDeviceType__Touch                                                        = 4,
	ETrackedDeviceType__DeviceObjectZero                                             = 5,
	ETrackedDeviceType__All                                                          = 6
};

