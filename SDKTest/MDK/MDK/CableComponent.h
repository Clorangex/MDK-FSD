
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000220 - 0x000228)
class ACableActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UCableComponent*)                    CableComponent                                              OFFSET(get<T>, {0x220, 8, 0, 0})
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0098 (0x000478 - 0x000510)
class UCableComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(bool)                                      bAttachStart                                                OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(bool)                                      bAttachEnd                                                  OFFSET(get<bool>, {0x479, 1, 0, 0})
	SMember(FComponentReference)                       AttachEndTo                                                 OFFSET(getStruct<T>, {0x480, 40, 0, 0})
	SMember(FName)                                     AttachEndToSocketName                                       OFFSET(getStruct<T>, {0x4A8, 8, 0, 0})
	SMember(FVector)                                   EndLocation                                                 OFFSET(getStruct<T>, {0x4B0, 12, 0, 0})
	DMember(float)                                     CableLength                                                 OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 OFFSET(get<int32_t>, {0x4C0, 4, 0, 0})
	DMember(float)                                     SubstepTime                                                 OFFSET(get<float>, {0x4C4, 4, 0, 0})
	DMember(int32_t)                                   SolverIterations                                            OFFSET(get<int32_t>, {0x4C8, 4, 0, 0})
	DMember(bool)                                      bEnableStiffness                                            OFFSET(get<bool>, {0x4CC, 1, 0, 0})
	DMember(bool)                                      bUseSubstepping                                             OFFSET(get<bool>, {0x4CD, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotVisible                              OFFSET(get<bool>, {0x4CE, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotOwnerRecentlyRendered                OFFSET(get<bool>, {0x4CF, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	DMember(float)                                     CollisionFriction                                           OFFSET(get<float>, {0x4D4, 4, 0, 0})
	SMember(FVector)                                   CableForce                                                  OFFSET(getStruct<T>, {0x4D8, 12, 0, 0})
	DMember(float)                                     CableGravityScale                                           OFFSET(get<float>, {0x4E4, 4, 0, 0})
	DMember(float)                                     CableWidth                                                  OFFSET(get<float>, {0x4E8, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x4EC, 4, 0, 0})
	DMember(float)                                     TileMaterial                                                OFFSET(get<float>, {0x4F0, 4, 0, 0})


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x1262de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x1262cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x1262c20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x1262bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x1262bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

