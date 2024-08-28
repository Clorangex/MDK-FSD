
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DiscordSDK.DiscordSDKInterface
/// Size: 0x0030 (0x000028 - 0x000058)
class UDiscordSDKInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  OnJoinRequest                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/DiscordSDK.DiscordSDKInterface.RejectInvite
	// void RejectInvite(FString UserId);                                                                                       // [0x1128950] Native|Protected|BlueprintCallable 
	// Function /Script/DiscordSDK.DiscordSDKInterface.IgnoreInvite
	// void IgnoreInvite(FString UserId);                                                                                       // [0x1128860] Native|Protected|BlueprintCallable 
	// Function /Script/DiscordSDK.DiscordSDKInterface.Get
	// class UDiscordSDKInterface* Get();                                                                                       // [0x1128840] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DiscordSDK.DiscordSDKInterface.AcceptInvite
	// void AcceptInvite(FString UserId);                                                                                       // [0x1128750] Native|Protected|BlueprintCallable 
};

/// Class /Script/DiscordSDK.DiscordSDKInterface_Win64
/// Size: 0x0008 (0x000058 - 0x000060)
class UDiscordSDKInterface_Win64 : public UDiscordSDKInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/DiscordSDK.DiscordUserDataSDK
/// Size: 0x0040 (0x000000 - 0x000040)
class FDiscordUserDataSDK : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   UserId                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Username                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   discriminator                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   avatar                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

