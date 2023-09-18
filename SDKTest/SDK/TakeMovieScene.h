/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TakeMovieScene.

/// Class /Script/TakeMovieScene.MovieSceneTakeSection
/// Size: 0x0620 (0x0000F0 - 0x000710)
class UMovieSceneTakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FMovieSceneIntegerChannel)                 HoursCurve                                                  ___ OFFSET(get<T>, {0xF0, 256, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 MinutesCurve                                                ___ OFFSET(get<T>, {0x1F0, 256, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 SecondsCurve                                                ___ OFFSET(get<T>, {0x2F0, 256, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 FramesCurve                                                 ___ OFFSET(get<T>, {0x3F0, 256, 0, 0})
	SMember(FMovieSceneFloatChannel)                   SubFramesCurve                                              ___ OFFSET(get<T>, {0x4F0, 272, 0, 0})
	SMember(FMovieSceneStringChannel)                  Slate                                                       ___ OFFSET(get<T>, {0x600, 272, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeSettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UMovieSceneTakeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   HoursName                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   MinutesName                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   SecondsName                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   FramesName                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   SubFramesName                                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   SlateName                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/TakeMovieScene.MovieSceneTakeTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

