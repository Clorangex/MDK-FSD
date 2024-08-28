
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Modio

/// Class /Script/ModioEx.ModioSubmissionExtensionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioSubmissionExtensionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_SubmitNewModFileForModFromMemory
	// void K2_SubmitNewModFileForModFromMemory(class UModioSubsystem* Target, FModioModID Mod, FModioCreateModFileMemoryParams Params); // [0xf24cf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModioEx.ModioSubmissionExtensionLibrary.K2_LoadModFileToMemory
	// bool K2_LoadModFileToMemory(class UModioSubsystem* Target, FModioModID ModId, TArray<char>& ModData);                    // [0xf24bc0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ModioEx.ModioCreateModFileMemoryParams
/// Size: 0x0060 (0x000000 - 0x000060)
class FModioCreateModFileMemoryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<char>)                              ModMemory                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

