
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/DSTelemetry.DJSONArray
/// Size: 0x0010 (0x000028 - 0x000038)
class UDJSONArray : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/DSTelemetry.DJSONArray.CreateJSONArray
	// class UDJSONArray* CreateJSONArray(class UObject* WorldContextObject);                                                   // [0xfdaa80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DSTelemetry.DJSONArray.Clear
	// bool Clear();                                                                                                            // [0xfdaa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AsString
	// FString AsString();                                                                                                      // [0xfda980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DSTelemetry.DJSONArray.AddStringItem
	// bool AddStringItem(FString Item);                                                                                        // [0xfda8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddStringArrayItem
	// bool AddStringArrayItem(TArray<FString>& Item);                                                                          // [0xfda6f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddJSONObjectItem
	// bool AddJSONObjectItem(class UDJSONObject* Item);                                                                        // [0xfda520] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddJSONObjectArrayItem
	// bool AddJSONObjectArrayItem(TArray<UDJSONObject*>& Item);                                                                // [0xfda370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddJSONArrayItem
	// bool AddJSONArrayItem(class UDJSONArray* Item);                                                                          // [0xfda1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddJSONArrayArrayItem
	// bool AddJSONArrayArrayItem(TArray<UDJSONArray*>& Item);                                                                  // [0xfda010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddIntegerItem
	// bool AddIntegerItem(int32_t Item);                                                                                       // [0xfd9e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddIntegerArrayItem
	// bool AddIntegerArrayItem(TArray<int32_t>& Item);                                                                         // [0xfd9cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddFloatItem
	// bool AddFloatItem(float Item);                                                                                           // [0xfd9b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddFloatArrayItem
	// bool AddFloatArrayItem(TArray<float>& Item);                                                                             // [0xfd9950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddEmptyItem
	// bool AddEmptyItem();                                                                                                     // [0xfd9810] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddBooleanItem
	// bool AddBooleanItem(bool Item);                                                                                          // [0xfd96c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONArray.AddBooleanArrayItem
	// bool AddBooleanArrayItem(TArray<bool>& Item);                                                                            // [0xfd9510] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DSTelemetry.DJSONObject
/// Size: 0x0018 (0x000028 - 0x000040)
class UDJSONObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/DSTelemetry.DJSONObject.CreateJSONObject
	// class UDJSONObject* CreateJSONObject(class UObject* WorldContextObject);                                                 // [0xfdab10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DSTelemetry.DJSONObject.Clear
	// bool Clear();                                                                                                            // [0xfdaa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AsString
	// FString AsString();                                                                                                      // [0xfda9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DSTelemetry.DJSONObject.AddStringField
	// bool AddStringField(FString Key, FString Value);                                                                         // [0xfda7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddStringArrayField
	// bool AddStringArrayField(FString Key, TArray<FString>& Value);                                                           // [0xfda5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddJSONObjectField
	// bool AddJSONObjectField(FString Key, class UDJSONObject* Value);                                                         // [0xfda430] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddJSONObjectArrayField
	// bool AddJSONObjectArrayField(FString Key, TArray<UDJSONObject*>& Value);                                                 // [0xfda260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddJSONArrayField
	// bool AddJSONArrayField(FString Key, class UDJSONArray* Value);                                                           // [0xfda0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddJSONArrayArrayField
	// bool AddJSONArrayArrayField(FString Key, TArray<UDJSONArray*>& Value);                                                   // [0xfd9f00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddIntegerField
	// bool AddIntegerField(FString Key, int32_t Value);                                                                        // [0xfd9d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddIntegerArrayField
	// bool AddIntegerArrayField(FString Key, TArray<int32_t>& Value);                                                          // [0xfd9ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddFloatField
	// bool AddFloatField(FString Key, float Value);                                                                            // [0xfd9a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddFloatArrayField
	// bool AddFloatArrayField(FString Key, TArray<float>& Value);                                                              // [0xfd9840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddEmptyField
	// bool AddEmptyField(FString Key);                                                                                         // [0xfd9760] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddBooleanField
	// bool AddBooleanField(FString Key, bool Value);                                                                           // [0xfd95d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DJSONObject.AddBooleanArrayField
	// bool AddBooleanArrayField(FString Key, TArray<bool>& Value);                                                             // [0xfd9400] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DSTelemetry.DSTelemetry
/// Size: 0x0008 (0x000028 - 0x000030)
class UDSTelemetry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/DSTelemetry.DSTelemetry.Terminate
	// void Terminate();                                                                                                        // [0xfdbec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitString
	// bool SubmitString(FString EventKey, FString EventData);                                                                  // [0xfdbdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitSerialized
	// bool SubmitSerialized(FString EventKey, FString EventData);                                                              // [0xfdbcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitJSONObject
	// bool SubmitJSONObject(FString EventKey, class UDJSONObject* EventData);                                                  // [0xfdbbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitJSONArray
	// bool SubmitJSONArray(FString EventKey, class UDJSONArray* EventData);                                                    // [0xfdbae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitInteger
	// bool SubmitInteger(FString EventKey, int32_t EventData);                                                                 // [0xfdb9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitFloat
	// bool SubmitFloat(FString EventKey, float EventData);                                                                     // [0xfdb8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitEmpty
	// bool SubmitEmpty(FString EventKey);                                                                                      // [0xfdb840] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SubmitBoolean
	// bool SubmitBoolean(FString EventKey, bool EventData);                                                                    // [0xfdb750] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.Start
	// bool Start(FString GameId, FString BuildID);                                                                             // [0xfdb5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateString
	// bool SetStateString(FString StateKey, FString StateData);                                                                // [0xfdb4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateSerialized
	// bool SetStateSerialized(FString StateKey, FString StateData);                                                            // [0xfdb3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateJSONObject
	// bool SetStateJSONObject(FString StateKey, class UDJSONObject* StateData);                                                // [0xfdb2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateJSONArray
	// bool SetStateJSONArray(FString StateKey, class UDJSONArray* StateData);                                                  // [0xfdb1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateInteger
	// bool SetStateInteger(FString StateKey, int32_t StateData);                                                               // [0xfdb100] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateFloat
	// bool SetStateFloat(FString StateKey, float StateData);                                                                   // [0xfdb000] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateEmpty
	// bool SetStateEmpty(FString StateKey);                                                                                    // [0xfdaf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetStateBoolean
	// bool SetStateBoolean(FString StateKey, bool StateData);                                                                  // [0xfdae60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetOnlinePlatformUserID
	// bool SetOnlinePlatformUserID(FString OnlinePlatformUserID);                                                              // [0xfdadb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.SetOnlinePlatformIdentifier
	// bool SetOnlinePlatformIdentifier(FString OnlinePlatformIdentifier);                                                      // [0xfdad00] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.Resume
	// void Resume();                                                                                                           // [0xfdace0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.Pause
	// void Pause();                                                                                                            // [0xfdacc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DSTelemetry.DSTelemetry.IsTerminated
	// bool IsTerminated();                                                                                                     // [0xfdac90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DSTelemetry.DSTelemetry.IsPaused
	// bool IsPaused();                                                                                                         // [0xfdac60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DSTelemetry.DSTelemetry.GetTelemetryInstanceID
	// int64_t GetTelemetryInstanceID();                                                                                        // [0xfdac30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DSTelemetry.DSTelemetry.CreateTelemetry
	// class UDSTelemetry* CreateTelemetry(class UObject* WorldContextObject);                                                  // [0xfdaba0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

