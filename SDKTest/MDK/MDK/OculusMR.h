
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: HeadMountedDisplay
/// dependency: OculusHMD

/// Class /Script/OculusMR.OculusMR_CastingCameraActor
/// Size: 0x00E8 (0x000238 - 0x000320)
class AOculusMR_CastingCameraActor : public ASceneCapture2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(class UVRNotificationsComponent*)          VRNotificationComponent                                     OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(class UTexture2D*)                         CameraColorTexture                                          OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(class UTexture2D*)                         CameraDepthTexture                                          OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UOculusMR_PlaneMeshComponent*)       PlaneMeshComponent                                          OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UMaterial*)                          ChromaKeyMaterial                                           OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UMaterial*)                          OpaqueColoredMaterial                                       OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ChromaKeyMaterialInstance                                   OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CameraFrameMaterialInstance                                 OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           BackdropMaterialInstance                                    OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(class UTexture2D*)                         DefaultTexture_White                                        OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     BackgroundRenderTargets                                     OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(class ASceneCapture2D*)                    ForegroundCaptureActor                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     ForegroundRenderTargets                                     OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<double>)                            PoseTimes                                                   OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(class UOculusMR_Settings*)                 MRSettings                                                  OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UOculusMR_State*)                    MRState                                                     OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/OculusMR.OculusMR_PlaneMeshComponent
/// Size: 0x0018 (0x000478 - 0x000490)
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:


	/// Functions
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle>& Triangles);                                             // [0x131c040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x131bd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FOculusMR_PlaneMeshTriangle>& Triangles);                                             // [0x131bc30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OculusMR.OculusMR_Settings
/// Size: 0x0070 (0x000028 - 0x000098)
class UOculusMR_Settings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(EOculusMR_ClippingReference)               ClippingReference                                           OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseTrackedCameraResolution                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   WidthPerView                                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   HeightPerView                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     CastingLatency                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FColor)                                    BackdropColor                                               OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(float)                                     HandPoseStateLatency                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FColor)                                    ChromaKeyColor                                              OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(float)                                     ChromaKeySimilarity                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     ChromaKeySmoothRange                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     ChromaKeySpillRange                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EOculusMR_PostProcessEffects)              ExternalCompositionPostProcessEffects                       OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(bool)                                      bIsCasting                                                  OFFSET(get<bool>, {0x51, 1, 0, 0})
	CMember(EOculusMR_CompositionMethod)               CompositionMethod                                           OFFSET(get<T>, {0x52, 1, 0, 0})
	CMember(EOculusMR_CameraDeviceEnum)                CapturingCamera                                             OFFSET(get<T>, {0x53, 1, 0, 0})


	/// Functions
	// Function /Script/OculusMR.OculusMR_Settings.SetIsCasting
	// void SetIsCasting(bool Val);                                                                                             // [0x131c100] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SetCompositionMethod
	// void SetCompositionMethod(EOculusMR_CompositionMethod Val);                                                              // [0x131bfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SetCapturingCamera
	// void SetCapturingCamera(EOculusMR_CameraDeviceEnum Val);                                                                 // [0x131bf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.SaveToIni
	// void SaveToIni();                                                                                                        // [0x131bf20] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/OculusMR.OculusMR_Settings.LoadFromIni
	// void LoadFromIni();                                                                                                      // [0x131bf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetIsCasting
	// bool GetIsCasting();                                                                                                     // [0x131bdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetCompositionMethod
	// EOculusMR_CompositionMethod GetCompositionMethod();                                                                      // [0x131bdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetCapturingCamera
	// EOculusMR_CameraDeviceEnum GetCapturingCamera();                                                                         // [0x131bdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex
	// int32_t GetBindToTrackedCameraIndex();                                                                                   // [0x131bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable
	// void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex);                                                  // [0x131bce0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OculusMR.TrackedCamera
/// Size: 0x0078 (0x000000 - 0x000078)
class FTrackedCamera : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(double)                                    UpdateTime                                                  OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(ETrackedDeviceType)                        AttachedTrackedDevice                                       OFFSET(get<T>, {0x2C, 1, 0, 0})
	SMember(FRotator)                                  CalibratedRotation                                          OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   CalibratedOffset                                            OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FRotator)                                  UserRotation                                                OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   UserOffset                                                  OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FRotator)                                  RawRotation                                                 OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	SMember(FVector)                                   RawOffset                                                   OFFSET(getStruct<T>, {0x6C, 12, 0, 0})
};

/// Class /Script/OculusMR.OculusMR_State
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UOculusMR_State : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FTrackedCamera)                            TrackedCamera                                               OFFSET(getStruct<T>, {0x28, 120, 0, 0})
	CMember(class USceneComponent*)                    TrackingReferenceComponent                                  OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(double)                                    ScalingFactor                                               OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(bool)                                      ChangeCameraStateRequested                                  OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      BindToTrackedCameraIndexRequested                           OFFSET(get<bool>, {0xB5, 1, 0, 0})
};

/// Class /Script/OculusMR.OculusMRFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent
	// bool SetTrackingReferenceComponent(class USceneComponent* Component);                                                    // [0x131c210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor
	// bool SetMrcScalingFactor(float ScalingFactor);                                                                           // [0x131c190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.IsMrcEnabled
	// bool IsMrcEnabled();                                                                                                     // [0x131bed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.IsMrcActive
	// bool IsMrcActive();                                                                                                      // [0x131bea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent
	// class USceneComponent* GetTrackingReferenceComponent();                                                                  // [0x131be70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings
	// class UOculusMR_Settings* GetOculusMRSettings();                                                                         // [0x131be40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor
	// float GetMrcScalingFactor();                                                                                             // [0x131be10] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OculusMR.OculusMR_PlaneMeshTriangle
/// Size: 0x003C (0x000000 - 0x00003C)
class FOculusMR_PlaneMeshTriangle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector)                                   Vertex0                                                     OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector2D)                                 UV0                                                         OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector)                                   Vertex1                                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector2D)                                 UV1                                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FVector)                                   Vertex2                                                     OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector2D)                                 UV2                                                         OFFSET(getStruct<T>, {0x34, 8, 0, 0})
};

/// Enum /Script/OculusMR.EOculusMR_CompositionMethod
/// Size: 0x02
enum class EOculusMR_CompositionMethod : uint8_t
{
	EOculusMR_CompositionMethod__ExternalComposition                                 = 0,
	EOculusMR_CompositionMethod__DirectComposition                                   = 1
};

/// Enum /Script/OculusMR.EOculusMR_PostProcessEffects
/// Size: 0x02
enum class EOculusMR_PostProcessEffects : uint8_t
{
	EOculusMR_PostProcessEffects__PPE_Off                                            = 0,
	EOculusMR_PostProcessEffects__PPE_On                                             = 1
};

/// Enum /Script/OculusMR.EOculusMR_ClippingReference
/// Size: 0x02
enum class EOculusMR_ClippingReference : uint8_t
{
	EOculusMR_ClippingReference__CR_TrackingReference                                = 0,
	EOculusMR_ClippingReference__CR_Head                                             = 1
};

/// Enum /Script/OculusMR.EOculusMR_CameraDeviceEnum
/// Size: 0x03
enum class EOculusMR_CameraDeviceEnum : uint8_t
{
	EOculusMR_CameraDeviceEnum__CD_None                                              = 0,
	EOculusMR_CameraDeviceEnum__CD_WebCamera0                                        = 1,
	EOculusMR_CameraDeviceEnum__CD_WebCamera1                                        = 2
};

