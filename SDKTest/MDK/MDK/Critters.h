
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FSD

/// Class /Game/Critters/JellyPlatform/ENE_Jelly_Passive.ENE_Jelly_Passive_C
/// Size: 0x0038 (0x000390 - 0x0003C8)
class AENE_Jelly_Passive_C : public ADeepPathfinderCharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x390, 8, 0, 0})
	CMember(class UEnemyComponent*)                    enemy                                                       OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(class UAudioComponent*)                    Audio                                                       OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(class UPawnStatsComponent*)                PawnStats                                                   OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(class USimpleHealthComponent*)             SimpleHealth                                                OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(class UParticleSystem*)                    DeathParticle                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(class USoundBase*)                         DeathScream                                                 OFFSET(get<T>, {0x3C0, 8, 0, 0})


	/// Functions
	// Function /Game/Critters/JellyPlatform/ENE_Jelly_Passive.ENE_Jelly_Passive_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	// void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent); // [0x1d6f900] BlueprintEvent       
	// Function /Game/Critters/JellyPlatform/ENE_Jelly_Passive.ENE_Jelly_Passive_C.OnDeath
	// void OnDeath();                                                                                                          // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Critters/JellyPlatform/ENE_Jelly_Passive.ENE_Jelly_Passive_C.ExecuteUbergraph_ENE_Jelly_Passive
	// void ExecuteUbergraph_ENE_Jelly_Passive(int32_t EntryPoint);                                                             // [0x1d6f900] Final                
};

/// Class /Game/Critters/JellyPlatform/ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C
/// Size: 0x0018 (0x0003C8 - 0x0003E0)
class AENE_Jelly_Passive_Mother_C : public AENE_Jelly_Passive_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C8, 8, 0, 0})
	CMember(class UParticleSystemComponent*)           ParticleSystem                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(class UBoxComponent*)                      Box1                                                        OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/Critters/JellyPlatform/ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.OnDeath
	// void OnDeath();                                                                                                          // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Critters/JellyPlatform/ENE_Jelly_Passive_Mother.ENE_Jelly_Passive_Mother_C.ExecuteUbergraph_ENE_Jelly_Passive_Mother
	// void ExecuteUbergraph_ENE_Jelly_Passive_Mother(int32_t EntryPoint);                                                      // [0x1d6f900] Final                
};

/// Class /Game/Critters/JellyPlatform/AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C
/// Size: 0x0008 (0x000358 - 0x000360)
class AAIC_Jelly_Passive_Mother_C : public AFSDAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Game/Critters/JellyPlatform/AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Protected|BlueprintEvent 
	// Function /Game/Critters/JellyPlatform/AIC_Jelly_Passive_Mother.AIC_Jelly_Passive_Mother_C.ExecuteUbergraph_AIC_Jelly_Passive_Mother
	// void ExecuteUbergraph_AIC_Jelly_Passive_Mother(int32_t EntryPoint);                                                      // [0x1d6f900] Final                
};

