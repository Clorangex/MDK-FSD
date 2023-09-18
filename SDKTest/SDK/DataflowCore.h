/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DataflowCore.

/// Struct /Script/DataflowCore.DataflowConnection
/// Size: 0x0038 (0x000000 - 0x000038)
class FDataflowConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/DataflowCore.DataflowInput
/// Size: 0x0008 (0x000038 - 0x000040)
class FDataflowInput : public FDataflowConnection
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/DataflowCore.DataflowOutput
/// Size: 0x0028 (0x000038 - 0x000060)
class FDataflowOutput : public FDataflowConnection
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/DataflowCore.DataflowNode
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FDataflowNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bActive                                                     ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/DataflowCore.DataflowOverrideNode
/// Size: 0x0020 (0x0000E8 - 0x000108)
class FDataflowOverrideNode : public FDataflowNode
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     Key                                                         ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	SMember(FString)                                   Default                                                     ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      IsOverriden                                                 ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Struct /Script/DataflowCore.DataflowSelection
/// Size: 0x0020 (0x000000 - 0x000020)
class FDataflowSelection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowTransformSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowTransformSelection : public FDataflowSelection
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowVertexSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowVertexSelection : public FDataflowSelection
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.DataflowFaceSelection
/// Size: 0x0000 (0x000020 - 0x000020)
class FDataflowFaceSelection : public FDataflowSelection
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/DataflowCore.NodeColors
/// Size: 0x0020 (0x000000 - 0x000020)
class FNodeColors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FLinearColor)                              NodeTitleColor                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NodeBodyTintColor                                           ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/DataflowCore.DataflowTerminalNode
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class FDataflowTerminalNode : public FDataflowNode
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/DataflowCore.DataflowSettings
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UDataflowSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FLinearColor)                              ArrayPinTypeColor                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              ManagedArrayCollectionPinTypeColor                          ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              BoxPinTypeColor                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              SpherePinTypeColor                                          ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TMap<FName, FNodeColors>)                  NodeColorsMap                                               ___ OFFSET(get<T>, {0x70, 80, 0, 0})
};

