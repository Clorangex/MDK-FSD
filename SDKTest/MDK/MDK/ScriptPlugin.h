
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ScriptPlugin.ScriptBlueprint
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UScriptBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   SourceCode                                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/ScriptPlugin.ScriptBlueprintGeneratedClass
/// Size: 0x0040 (0x000328 - 0x000368)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<char>)                              ByteCode                                                    OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FString)                                   SourceCode                                                  OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	CMember(TArray<class UProperty*>)                  ScriptProperties                                            OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/ScriptPlugin.ScriptContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UScriptContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ScriptPlugin.ScriptContext.CallScriptFunction
	// void CallScriptFunction(FString FunctionName);                                                                           // [0xbf59b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ScriptPlugin.ScriptContextComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UScriptContextComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/ScriptPlugin.ScriptContextComponent.CallScriptFunction
	// void CallScriptFunction(FString FunctionName);                                                                           // [0xbf5aa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ScriptPlugin.ScriptPluginComponent
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UScriptPluginComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:


	/// Functions
	// Function /Script/ScriptPlugin.ScriptPluginComponent.CallScriptFunction
	// bool CallScriptFunction(FString FunctionName);                                                                           // [0xbf5b90] Native|Public|BlueprintCallable 
};

/// Class /Script/ScriptPlugin.ScriptTestActor
/// Size: 0x0018 (0x000220 - 0x000238)
class AScriptTestActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FString)                                   TestString                                                  OFFSET(getStruct<T>, {0x220, 16, 0, 0})
	DMember(float)                                     TestValue                                                   OFFSET(get<float>, {0x230, 4, 0, 0})
	DMember(bool)                                      TestBool                                                    OFFSET(get<bool>, {0x234, 1, 0, 0})


	/// Functions
	// Function /Script/ScriptPlugin.ScriptTestActor.TestFunction
	// float TestFunction(float InValue, float InFactor, bool bMultiply);                                                       // [0xbf5c90] Final|Native|Public  
};

