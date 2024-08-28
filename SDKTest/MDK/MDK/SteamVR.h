
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/SteamVR.SteamVRChaperoneComponent
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class USteamVRChaperoneComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnLeaveBounds                                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReturnToBounds                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})


	/// Functions
	// Function /Script/SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature
	// void SteamVRChaperoneEvent__DelegateSignature();                                                                         // [0x1d6f900] MulticastDelegate|Public|Delegate 
	// Function /Script/SteamVR.SteamVRChaperoneComponent.GetBounds
	// TArray<FVector> GetBounds();                                                                                             // [0xf46af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SteamVR.SteamVRFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds
	// void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32_t>& OutTrackedDeviceIds);               // [0xf46e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation
	// bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, FVector& OutPosition, FRotator& OutOrientation);           // [0xf46cd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation
	// bool GetHandPositionAndOrientation(int32_t ControllerIndex, EControllerHand hand, FVector& OutPosition, FRotator& OutOrientation); // [0xf46b70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SteamVR.SteamVRHQStereoLayerShape
/// Size: 0x0010 (0x000028 - 0x000038)
class USteamVRHQStereoLayerShape : public UStereoLayerShapeQuad
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bCurved                                                     OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAntiAlias                                                  OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     AutoCurveMinDistance                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     AutoCurveMaxDistance                                        OFFSET(get<float>, {0x30, 4, 0, 0})


	/// Functions
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetCurved
	// void SetCurved(bool InCurved);                                                                                           // [0xf47070] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance
	// void SetAutoCurveMinDistance(float InDistance);                                                                          // [0xf46ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance
	// void SetAutoCurveMaxDistance(float InDistance);                                                                          // [0xf46f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias
	// void SetAntiAlias(bool InAntiAlias);                                                                                     // [0xf46ee0] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/SteamVR.ESteamVRTrackedDeviceType
/// Size: 0x04
enum class ESteamVRTrackedDeviceType : uint8_t
{
	ESteamVRTrackedDeviceType__Controller                                            = 0,
	ESteamVRTrackedDeviceType__TrackingReference                                     = 1,
	ESteamVRTrackedDeviceType__Other                                                 = 2,
	ESteamVRTrackedDeviceType__Invalid                                               = 3
};

