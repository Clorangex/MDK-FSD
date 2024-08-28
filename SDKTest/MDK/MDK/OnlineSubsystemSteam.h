
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PacketHandler

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x0008 (0x001C48 - 0x001C50)
class USteamNetConnection : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7248;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x1C48, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0008 (0x0007D0 - 0x0007D8)
class USteamNetDriver : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2008;

public:
};

