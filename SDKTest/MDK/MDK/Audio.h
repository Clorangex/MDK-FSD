
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FSD
/// dependency: Synthesis

/// Class /Game/Audio/BP_DynamicReverb.BP_DynamicReverb_C
/// Size: 0x0000 (0x000118 - 0x000118)
class UBP_DynamicReverb_C : public UDynamicReverbComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UBP_AudioControl_LowHealth_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	DMember(bool)                                      wasAbove                                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(class UAudioComponent*)                    IronWillIsSpawned                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(class USubmixEffectSubmixEQPreset*)        LowHealthEq                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      On_Off                                                      OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(class UAudioComponent*)                    Health_Low_Cue                                              OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class APlayerCharacter*)                   PlayerCharacter                                             OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UPlayerHealthComponent*)             PlayerHealthComponent                                       OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class USubmixEffectReverbPreset*)          LowHealthReverb                                             OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UCurveFloat*)                        fadeInCurve                                                 OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     FadeTimeLeft                                                OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     FadeInTime                                                  OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     alpha                                                       OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      IsFadingIn                                                  OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(float)                                     FadeOutTime                                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(bool)                                      prevIsLowHealth                                             OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(float)                                     HealthChange                                                OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(bool)                                      IsLowHealthOn                                               OFFSET(get<bool>, {0x11C, 1, 0, 0})
	CMember(class UAudioComponent*)                    Temperature_Low_Cue                                         OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(class USoundCue*)                          PlagueInfected                                              OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(class UAudioComponent*)                    Temperature_VeryLow_Cue                                     OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(class USubmixEffectStereoDelayPreset*)     PlagueInfectedAudioEcho                                     OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(class USubmixEffectFilterPreset*)          PlagueInfectedFilter                                        OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UAudioComponent*)                    InfectedSound                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	DMember(float)                                     Infection_Level_max                                         OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     Infection_Level_Current                                     OFFSET(get<float>, {0x154, 4, 0, 0})


	/// Functions
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.SetSoundFromAlpha
	// void SetSoundFromAlpha(float FadeAlpha);                                                                                 // [0x1d6f900] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ShouldSetTimestamp
	// bool ShouldSetTimestamp(bool IsActivate);                                                                                // [0x1d6f900] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1d6f900] Event|Public|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HealthChanged
	// void HealthChanged(float amount);                                                                                        // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeInLowHealth
	// void FadeInLowHealth();                                                                                                  // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.FadeOutLowHealth
	// void FadeOutLowHealth();                                                                                                 // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleHeartbeat
	// void HandleHeartbeat(bool TurnOn);                                                                                       // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.HandleLowHealthMuffling
	// void HandleLowHealthMuffling(bool TurnOn);                                                                               // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeath_Event
	// void OnDeath_Event(class UHealthComponentBase* HealthComponent);                                                         // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDestroyed_Event
	// void OnDestroyed_Event(class AActor* DestroyedActor);                                                                    // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.OnDeahtAndDestroyed
	// void OnDeahtAndDestroyed();                                                                                              // [0x1d6f900] BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/SoundControl/BP_AudioControl_LowHealth.BP_AudioControl_LowHealth_C.ExecuteUbergraph_BP_AudioControl_LowHealth
	// void ExecuteUbergraph_BP_AudioControl_LowHealth(int32_t EntryPoint);                                                     // [0x1d6f900] Final|HasDefaults    
};

/// Class /Game/Audio/Functions/MixFunctions.MixFunctions_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UMixFunctions_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Audio/Functions/MixFunctions.MixFunctions_C.PushMixAtDistanceForDuration
	// void PushMixAtDistanceForDuration(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, float Duration, class UObject* __WorldContext); // [0x1d6f900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/Functions/MixFunctions.MixFunctions_C.PopMix
	// void PopMix(class USoundMix* InSoundMixModifier, class UObject* __WorldContext);                                         // [0x1d6f900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/Functions/MixFunctions.MixFunctions_C.PopMixAtDistance
	// void PopMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext); // [0x1d6f900] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/Functions/MixFunctions.MixFunctions_C.PushMixAtDistance
	// void PushMixAtDistance(class USoundMix* InSoundMixModifier, class AActor* Target, float MinDistance, float MaxDistance, class UObject* __WorldContext); // [0x1d6f900] Static|Public|BlueprintCallable|BlueprintEvent 
};

