/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FieldNotification.

/// Struct /Script/FieldNotification.FieldNotificationId
/// Size: 0x0004 (0x000000 - 0x000004)
class FFieldNotificationId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     FieldName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Class /Script/FieldNotification.NotifyFieldValueChanged
/// Size: 0x0000 (0x000028 - 0x000028)
class UNotifyFieldValueChanged : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

