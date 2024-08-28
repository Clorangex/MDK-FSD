
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FSDAnsel.FSDAnselFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFSDAnselFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.StopPhotographySession
	// void StopPhotographySession(class UObject* WorldContextObject);                                                          // [0x94d570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.StartPhotographySession
	// void StartPhotographySession(class UObject* WorldContextObject);                                                         // [0x94d4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
	// void SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible); // [0x94d3f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
	// void SetSettleFrames(int32_t NumSettleFrames);                                                                           // [0x94d370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
	// void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);                                                                // [0x94d2f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
	// void SetCameraMovementSpeed(float TranslationSpeed);                                                                     // [0x94d270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
	// void SetCameraConstraintDistance(float MaxCameraDistance);                                                               // [0x94d1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
	// void SetCameraConstraintCameraSize(float CameraSize);                                                                    // [0x94d170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
	// void SetAutoPostprocess(bool bShouldAutoPostprocess);                                                                    // [0x94d0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
	// void SetAutoPause(bool bShouldAutoPause);                                                                                // [0x94d070] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
	// bool IsPhotographyAvailable();                                                                                           // [0x94d040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
	// bool IsPhotographyAllowed();                                                                                             // [0x94d010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
	// void ConstrainCameraByGeometry(class UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation); // [0x94ce50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
	// void ConstrainCameraByDistance(class UObject* WorldContextObject, FVector NewCameraLocation, FVector PreviousCameraLocation, FVector OriginalCameraLocation, FVector& OutCameraLocation, float MaxDistance); // [0x94cc50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Enum /Script/FSDAnsel.EUIControlEffectTarget
/// Size: 0x04
enum class EUIControlEffectTarget : uint8_t
{
	Bloom                                                                            = 0,
	DepthOfField                                                                     = 1,
	ChromaticAberration                                                              = 2,
	MotionBlur                                                                       = 3
};

