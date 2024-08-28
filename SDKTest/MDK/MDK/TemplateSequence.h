
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000060 - 0x000108)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(class UMovieScene*)                        MovieScene                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             BoundActorClass                                             OFFSET(get<T>, {0x68, 40, 0, 0})
	CMember(TWeakObjectPtr<class AActor*>)             BoundPreviewActor                                           OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        OFFSET(get<T>, {0xB8, 80, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x000108 - 0x000108)
class UCameraAnimationSequence : public UTemplateSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0648 (0x000028 - 0x000670)
class USequenceCameraShakeCameraStandIn : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bConstrainAspectRatio                                       OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x40, 1376, 0, 0})
	DMember(float)                                     PostProcessBlendWeight                                      OFFSET(get<float>, {0x5A0, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x5A4, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x5B0, 24, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x5C8, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x628, 4, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UCameraAnimationSequence*)           Sequence                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(class USequenceCameraShakeSequencePlayer*) Player                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class USequenceCameraShakeCameraStandIn*)  CameraStandIn                                               OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x0400 (0x000028 - 0x000428)
class USequenceCameraShakeSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(class UObject*)                            BoundObjectOverride                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(class UMovieSceneSequence*)                Sequence                                                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x2E0, 232, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<class UObject*>)            Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0058 (0x000220 - 0x000278)
class ATemplateSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x230, 20, 0, 0})
	CMember(class UTemplateSequencePlayer*)            SequencePlayer                                              OFFSET(get<T>, {0x248, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             OFFSET(getStruct<T>, {0x268, 12, 0, 0})


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x1164460] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0x1164390] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x1164360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x1164330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x1164300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004E8 - 0x0004F0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x1164180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FTemplateSectionPropertyScale : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGuid)                                     ObjectBinding                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             OFFSET(getStruct<T>, {0x10, 20, 0, 0})
	CMember(ETemplateSectionPropertyScaleType)         PropertyScaleType                                           OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x28, 160, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0018 (0x000168 - 0x000180)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FTemplateSectionPropertyScale>)     PropertyScales                                              OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x03
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

