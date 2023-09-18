/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCache.

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FTrackRenderData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCacheMeshBatchInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (0x000000 - 0x000009)
class FGeometryCacheVertexInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FGeometryCacheMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraGeometryCacheMICOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInstanceConstant*)                ReplacementMaterial                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraGeometryCacheReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UGeometryCache*)                           GeometryCache                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              GeometryCacheUserParamBinding                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraGeometryCacheMICOverride>)  MICOverrideMaterials                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0068 (0x000028 - 0x000090)
class UGeometryCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<UMaterialInterface*>)               Materials                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             MaterialSlotNames                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UGeometryCacheTrack*>)              Tracks                                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   StartFrame                                                  ___ OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   EndFrame                                                    ___ OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(uint64_t)                                  Hash                                                        ___ OFFSET(get<uint64_t>, {0x88, 8, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AGeometryCacheActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UGeometryCacheComponent*)                  GeometryCacheComponent                                      ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<int32_t>)                           TopologyRanges                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   DummyProperty                                               ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0090 (0x0005A0 - 0x000630)
class UGeometryCacheComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UGeometryCache*)                           GeometryCache                                               ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(bool)                                      bRunning                                                    ___ OFFSET(get<bool>, {0x5A8, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x5A9, 1, 0, 0})
	DMember(bool)                                      bExtrapolateFrames                                          ___ OFFSET(get<bool>, {0x5AA, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             ___ OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               ___ OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     MotionVectorScale                                           ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(int32_t)                                   NumTracks                                                   ___ OFFSET(get<int32_t>, {0x5B8, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 ___ OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bManualTick                                                 ___ OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      bOverrideWireframeColor                                     ___ OFFSET(get<bool>, {0x611, 1, 0, 0})
	SMember(FLinearColor)                              WireframeOverrideColor                                      ___ OFFSET(get<T>, {0x614, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(uint32_t)                                  NumMeshSamples                                              ___ OFFSET(get<uint32_t>, {0x58, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UGeometryCacheCodecBase*)                  Codec                                                       ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     StartSampleTime                                             ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00C8 (0x000058 - 0x000120)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x01B8 (0x0000B0 - 0x000268)
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	CMember(TArray<FNiagaraGeometryCacheReference>)    GeometryCaches                                              ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bIsLooping                                                  ___ OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         ___ OFFSET(get<uint32_t>, {0xC4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RotationBinding                                             ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ElapsedTimeBinding                                          ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ArrayIndexBinding                                           ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               ___ OFFSET(get<bool>, {0x1E4, 1, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x1E8, 80, 0, 0})
};

