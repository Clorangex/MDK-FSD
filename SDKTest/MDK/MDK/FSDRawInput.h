
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InputCore

/// Class /Script/FSDRawInput.RawInputFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/FSDRawInput.RawInputFunctionLibrary.GetRegisteredDevices
	// TArray<FRegisteredDeviceInfo> GetRegisteredDevices();                                                                    // [0xf2fd70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/FSDRawInput.RawInputDeviceAxisToButtonProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FRawInputDeviceAxisToButtonProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     AxisValue                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AxisThreshold                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FKey)                                      ButtonKey                                                   OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/FSDRawInput.RawInputDeviceAxisProperties
/// Size: 0x0038 (0x000000 - 0x000038)
class FRawInputDeviceAxisProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bMapToButton                                                OFFSET(get<bool>, {0x0, 1, 1, 1})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bInverted                                                   OFFSET(get<bool>, {0x20, 1, 1, 0})
	DMember(bool)                                      bGamepadStick                                               OFFSET(get<bool>, {0x20, 1, 1, 1})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TArray<FRawInputDeviceAxisToButtonProperties>) AxisToButtonMapping                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/FSDRawInput.RawInputDeviceButtonProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FRawInputDeviceButtonProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/FSDRawInput.RawInputDeviceConfiguration
/// Size: 0x0040 (0x000000 - 0x000040)
class FRawInputDeviceConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   VendorID                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProductID                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRawInputDeviceAxisProperties>)     AxisProperties                                              OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FRawInputDeviceButtonProperties>)   ButtonProperties                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FSDRawInput.RawInputSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class URawInputSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRawInputDeviceConfiguration>)      DeviceConfigurations                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bRegisterDefaultDevice                                      OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/FSDRawInput.RegisteredDeviceInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FRegisteredDeviceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   VendorID                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ProductID                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

