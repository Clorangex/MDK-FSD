
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FSD

/// Class /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C
/// Size: 0x003C (0x0000A8 - 0x0000E4)
class UTSK_FleeFrom_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 228;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	SMember(FBlackboardKeySelector)                    DangerKey                                                   OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     WaitAfterFleeing                                            OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     RandomWaitTime                                              OFFSET(get<float>, {0xE0, 4, 0, 0})


	/// Functions
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.GetDanagerLocation
	// FVector GetDanagerLocation();                                                                                            // [0x1d6f900] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
	// void SetFleeFalse(class AController* Controller);                                                                        // [0x1d6f900] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
	// void OutsideDanger(class AActor* Pawn, bool& res);                                                                       // [0x1d6f900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.PathDone
	// void PathDone(bool success);                                                                                             // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
	// void RefreshDest();                                                                                                      // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                  // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
	// void ExecuteUbergraph_TSK_FleeFrom(int32_t EntryPoint);                                                                  // [0x1d6f900] Final                
};

/// Class /Game/AI/Tasks/TSK_FindRandomPoint.TSK_FindRandomPoint_C
/// Size: 0x003C (0x0000A8 - 0x0000E4)
class UTSK_FindRandomPoint_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 228;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	SMember(FBlackboardKeySelector)                    LocationKey                                                 OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(bool)                                      SnapToCeiling                                               OFFSET(get<bool>, {0xDC, 1, 0, 0})
	CMember(EOffsetFrom)                               offsetFrom                                                  OFFSET(get<T>, {0xDD, 1, 0, 0})
	DMember(float)                                     OffsetFromDistance                                          OFFSET(get<float>, {0xE0, 4, 0, 0})


	/// Functions
	// Function /Game/AI/Tasks/TSK_FindRandomPoint.TSK_FindRandomPoint_C.snap
	// void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, FVector& Location);                             // [0x1d6f900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FindRandomPoint.TSK_FindRandomPoint_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FindRandomPoint.TSK_FindRandomPoint_C.ExecuteUbergraph_TSK_FindRandomPoint
	// void ExecuteUbergraph_TSK_FindRandomPoint(int32_t EntryPoint);                                                           // [0x1d6f900] Final                
};

/// Class /Game/AI/Tasks/TSK_ChangeDest.TSK_ChangeDest_C
/// Size: 0x0034 (0x0000A8 - 0x0000DC)
class UTSK_ChangeDest_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 220;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA8, 8, 0, 0})
	SMember(FBlackboardKeySelector)                    DestKey                                                     OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     ApproximatePlayerDistance                                   OFFSET(get<float>, {0xD8, 4, 0, 0})


	/// Functions
	// Function /Game/AI/Tasks/TSK_ChangeDest.TSK_ChangeDest_C.FindPlayer
	// void FindPlayer(class AActor* from, class APlayerCharacter*& Player, FVector& Location);                                 // [0x1d6f900] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_ChangeDest.TSK_ChangeDest_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_ChangeDest.TSK_ChangeDest_C.ExecuteUbergraph_TSK_ChangeDest
	// void ExecuteUbergraph_TSK_ChangeDest(int32_t EntryPoint);                                                                // [0x1d6f900] Final                
};

/// Class /Game/AI/Tasks/TSK_FindFormation.TSK_FindFormation_C
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UTSK_FindFormation_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Game/AI/Tasks/TSK_FindFormation.TSK_FindFormation_C.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/AI/Tasks/TSK_FindFormation.TSK_FindFormation_C.ExecuteUbergraph_TSK_FindFormation
	// void ExecuteUbergraph_TSK_FindFormation(int32_t EntryPoint);                                                             // [0x1d6f900] Final                
};

