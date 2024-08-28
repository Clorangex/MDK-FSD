
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

/// Class /Script/FSDEngine.TerrainMaterialBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UTerrainMaterialBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FSDEngine.TerrainMaterialCore
/// Size: 0x0048 (0x000030 - 0x000078)
class UTerrainMaterialCore : public UTerrainMaterialBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UTerrainMaterialCore*)               BurntMaterial                                               OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UTerrainMaterialCore*)               BulletBurntMaterial                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      PathfinderDanger                                            OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      PathfinderPreventSpawning                                   OFFSET(get<bool>, {0x40, 1, 1, 1})
	CMember(class UMaterialInterface*)                 ScannerMaterial                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMaterialInterface*>) RenderMaterial                                              OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/FSDEngine.BakeSetting
/// Size: 0x001C (0x000000 - 0x00001C)
class FBakeSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     Key                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FVector)                                   vectorValue                                                 OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/FSDEngine.BakeSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FBakeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FBakeSetting>)                      Pairs                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGNode
/// Size: 0x0004 (0x000000 - 0x000004)
class FDeepCSGNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Val                                                         OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGFloatTreePacked
/// Size: 0x0018 (0x000000 - 0x000018)
class FDeepCSGFloatTreePacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDeepCSGNode)                              Root                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<int32_t>)                           encplanes                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FSDEngine.SmartTerrainMaterialVal
/// Size: 0x0028 (0x000000 - 0x000028)
class FSmartTerrainMaterialVal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(uint32_t)                                  IfEmpty                                                     OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  IfSolid                                                     OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(TArray<uint32_t>)                          OverrideKeys                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<uint32_t>)                          OverrideValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FSDEngine.BakeEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FBakeEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FDeepCSGFloatTreePacked)                   Tree                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FBox)                                      AABB                                                        OFFSET(getStruct<T>, {0x18, 28, 0, 0})
	CMember(TArray<class UTerrainMaterialCore*>)       Materials                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FSmartTerrainMaterialVal>)          SmartMaterials                                              OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGBake
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UCSGBake : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FBakeSettings)                             BakeSettings                                                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   NumVariations                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   InitialSeed                                                 OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TSoftObjectPtr<class UClass*>)             CSG                                                         OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FString)                                   Status                                                      OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      CombinedAABB                                                OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(TArray<FBakeEntry>)                        Entries                                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      IsBaking                                                    OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TArray<class UBakeConfig*>)                CurrentBakeConfigs                                          OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(class ACSGBuilder*)                        CDO                                                         OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.CSGBake.BakeCSG
	// void BakeCSG();                                                                                                          // [0xbd29a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FSDEngine.BuilderBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuilderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FSDEngine.MeshBaseProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FMeshBaseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Class /Script/FSDEngine.CSGBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UCSGBase : public UBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMeshBaseProperties)                       BaseProperties                                              OFFSET(getStruct<T>, {0x28, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/FSDEngine.CSGBakedChildInstanceProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FCSGBakedChildInstanceProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UCSGBake*)                           BakedCSG                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   VariantIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGFloatPlane
/// Size: 0x0020 (0x000000 - 0x000020)
class FDeepCSGFloatPlane : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector4)                                  Plane                                                       OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FDeepCSGNode)                              Top                                                         OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FDeepCSGNode)                              Bottom                                                      OFFSET(getStruct<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGFloatTree
/// Size: 0x0018 (0x000000 - 0x000018)
class FDeepCSGFloatTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDeepCSGNode)                              Root                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FDeepCSGFloatPlane>)                planes                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGBakedChildInstance
/// Size: 0x00B0 (0x000060 - 0x000110)
class UCSGBakedChildInstance : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FCSGBakedChildInstanceProperties)          Properties                                                  OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FBox)                                      ChildLocalSpaceBoundingBox                                  OFFSET(getStruct<T>, {0x70, 28, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0x8C, 28, 0, 0})
	SMember(FMatrix)                                   TransformMatInv                                             OFFSET(getStruct<T>, {0xB0, 64, 0, 0})
	SMember(FDeepCSGFloatTree)                         TempTree                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
};

/// Class /Script/FSDEngine.CSGBuilderBaseSceneComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UCSGBuilderBaseSceneComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/FSDEngine.CSGBaseComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UCSGBaseComponent : public UCSGBuilderBaseSceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMeshBaseProperties)                       BaseProperties                                              OFFSET(getStruct<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FSDEngine.CSGBakedChildInstanceComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UCSGBakedChildInstanceComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FCSGBakedChildInstanceProperties)          Properties                                                  OFFSET(getStruct<T>, {0x200, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGSingleChildBase
/// Size: 0x0010 (0x000060 - 0x000070)
class UCSGSingleChildBase : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UCSGBase*)                           Child                                                       OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGDuplicateSingleChildBase
/// Size: 0x0010 (0x000060 - 0x000070)
class UCSGDuplicateSingleChildBase : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UCSGBase*>)                   Children                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGBuilderBase
/// Size: 0x0068 (0x000220 - 0x000288)
class ACSGBuilderBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FBox)                                      BoundingBox                                                 OFFSET(getStruct<T>, {0x220, 28, 0, 0})
	DMember(int32_t)                                   PreviewSeed                                                 OFFSET(get<int32_t>, {0x23C, 4, 0, 0})
	SMember(FBakeSettings)                             PreviewSettings                                             OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	CMember(class UTerrainMaterialCore*)               EmptyMat                                                    OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UTerrainMaterialCore*)               ErrorMat                                                    OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UTerrainMaterialCore*)               SolidMat                                                    OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UTerrainMaterialCore*)               BurnedMat                                                   OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UCSGPreviewComponent*)               PreviewComponent                                            OFFSET(get<T>, {0x270, 8, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.CSGBuilderBase.PreGenerate
	// void PreGenerate(class UBakeConfig* builder);                                                                            // [0x1d6f900] Event|Public|BlueprintEvent 
};

/// Class /Script/FSDEngine.CSGBuilder
/// Size: 0x0030 (0x000288 - 0x0002B8)
class ACSGBuilder : public ACSGBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(class UCSGGroupComponent*)                 CSGRoot                                                     OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TArray<class UTerrainMaterialCore*>)       UsedMaterials                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(class UCSGBase*)                           CurrentPreviewRoot                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentPreviewConfig                                        OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(class UCSGPreviewScene*)                   PreviewScene                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/FSDEngine.BakeConfig
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UBakeConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBakeSettings)                             Settings                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TMap<FName, class UBuilderBase*>)          Objects                                                     OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<FString>)                           Warnings                                                    OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.BakeConfig.GetVectorSetting
	// FVector GetVectorSetting(FName Name, FVector defaultVal);                                                                // [0x3e5a830] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FSDEngine.BakeConfig.GetRandomStream
	// FRandomStream GetRandomStream();                                                                                         // [0x199fc80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FSDEngine.BakeConfig.GetObject
	// class UBuilderBase* GetObject(FName Name);                                                                               // [0x3e5a790] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FSDEngine.BakeConfig.GetIntSetting
	// int32_t GetIntSetting(FName Name, int32_t defaultVal);                                                                   // [0x3e5a6c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FSDEngine.BakeConfig.GetFloatSetting
	// float GetFloatSetting(FName Name, float defaultVal);                                                                     // [0x3e5a5f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FSDEngine.BakeConfig.GetBoolSetting
	// bool GetBoolSetting(FName Name, bool defaultVal);                                                                        // [0x3e5a520] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/FSDEngine.MeshCellNoiseProperties
/// Size: 0x001C (0x000000 - 0x00001C)
class FMeshCellNoiseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   CellSize                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     CellOffsetFactor                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     InsideFraction                                              OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/FSDEngine.EmptyBinaryMatProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FEmptyBinaryMatProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EEmptyBinaryComb)                          Result                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FSDEngine.BinaryMatProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FBinaryMatProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EBinaryComb)                               Result                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FSDEngine.BinaryMatPatterns
/// Size: 0x0020 (0x000000 - 0x000020)
class FBinaryMatPatterns : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EPattern)                                  PatternType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               PatternMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FBinaryMatProperties)                      ReplaceWith                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FSDEngine.BinaryTerrainMaterialCombiner
/// Size: 0x0030 (0x000000 - 0x000030)
class FBinaryTerrainMaterialCombiner : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FEmptyBinaryMatProperties)                 IfEmpty                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FBinaryMatProperties)                      IfSolid                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FBinaryMatPatterns>)                Patterns                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGCellNoise
/// Size: 0x00A0 (0x000060 - 0x000100)
class UCSGCellNoise : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMeshCellNoiseProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x60, 28, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FVector)                                   ReciprocalCellSize                                          OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FDeepCSGFloatTree)                         ApplyTree                                                   OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	CMember(TArray<FVector>)                           CellPositions                                               OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FDeepCSGNode>)                      CellLeaves                                                  OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGCellNoiseComponent
/// Size: 0x0050 (0x000200 - 0x000250)
class UCSGCellNoiseComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMeshCellNoiseProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x200, 28, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x220, 48, 0, 0})
};

/// Struct /Script/FSDEngine.CSGChildInstanceProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FCSGChildInstanceProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(class UClass*)                             Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBakeSettings)                             Settings                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/FSDEngine.GeneralMatPropertiesEmpty
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeneralMatPropertiesEmpty : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EGeneralCombEmpty)                         Result                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FSDEngine.GeneralMatProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeneralMatProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EGeneralComb)                              Result                                                      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FSDEngine.GeneralMatPatterns
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeneralMatPatterns : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EGeneralPattern)                           PatternType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               PatternMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGeneralMatProperties)                     ReplaceWith                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FSDEngine.GeneralTerrainMaterialCombiner
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeneralTerrainMaterialCombiner : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGeneralMatPropertiesEmpty)                IfBothEmpty                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGeneralMatPatterns>)               Patterns                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGeneralMatProperties)                     IfBothSolid                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FGeneralMatProperties)                     IfSrcSolid                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FGeneralMatProperties)                     IfDestSolid                                                 OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGTree
/// Size: 0x0048 (0x000000 - 0x000048)
class FDeepCSGTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FSDEngine.CSGChildInstance
/// Size: 0x0160 (0x000060 - 0x0001C0)
class UCSGChildInstance : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FCSGChildInstanceProperties)               Properties                                                  OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FGeneralTerrainMaterialCombiner)           Materials                                                   OFFSET(getStruct<T>, {0x80, 80, 0, 0})
	CMember(class UCSGBase*)                           CSGChildInstanceRoot                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentBakeConfig                                           OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FBox)                                      ChildLocalSpaceBoundingBox                                  OFFSET(getStruct<T>, {0xE0, 28, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0xFC, 28, 0, 0})
	SMember(FDeepCSGFloatTree)                         BoundingTree                                                OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FMatrix)                                   TransformMatInv                                             OFFSET(getStruct<T>, {0x130, 64, 0, 0})
	SMember(FDeepCSGTree)                              TempTree                                                    OFFSET(getStruct<T>, {0x170, 72, 0, 0})
};

/// Class /Script/FSDEngine.CSGChildInstanceComponent
/// Size: 0x0070 (0x000200 - 0x000270)
class UCSGChildInstanceComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FCSGChildInstanceProperties)               Properties                                                  OFFSET(getStruct<T>, {0x200, 32, 0, 0})
	SMember(FGeneralTerrainMaterialCombiner)           Materials                                                   OFFSET(getStruct<T>, {0x220, 80, 0, 0})
};

/// Class /Script/FSDEngine.SimpleMeshWithCachedTree
/// Size: 0x0070 (0x000060 - 0x0000D0)
class USimpleMeshWithCachedTree : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	DMember(bool)                                      InvertCSG                                                   OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/FSDEngine.ConvexNoiseProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FConvexNoiseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     GridSize                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Class /Script/FSDEngine.ConvexMeshWithCachedTree
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UConvexMeshWithCachedTree : public USimpleMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FConvexNoiseProperties)                    Noise                                                       OFFSET(getStruct<T>, {0xD0, 12, 0, 0})
};

/// Struct /Script/FSDEngine.CSGConvexColliderProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FCSGConvexColliderProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UStaticMesh*)                        collider                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGConvexCollider
/// Size: 0x0020 (0x000120 - 0x000140)
class UCSGConvexCollider : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FCSGConvexColliderProperties)              Properties                                                  OFFSET(getStruct<T>, {0x120, 8, 0, 0})
};

/// Class /Script/FSDEngine.SimpleMeshWithCachedTreeComponent
/// Size: 0x0040 (0x000200 - 0x000240)
class USimpleMeshWithCachedTreeComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x200, 48, 0, 0})
	DMember(bool)                                      InvertCSG                                                   OFFSET(get<bool>, {0x230, 1, 0, 0})
};

/// Class /Script/FSDEngine.ConvexMeshWithCachedTreeComponent
/// Size: 0x0018 (0x000238 - 0x000250)
class UConvexMeshWithCachedTreeComponent : public USimpleMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FConvexNoiseProperties)                    Noise                                                       OFFSET(getStruct<T>, {0x238, 12, 0, 0})
};

/// Class /Script/FSDEngine.CSGConvexColliderComponent
/// Size: 0x0008 (0x000248 - 0x000250)
class UCSGConvexColliderComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FCSGConvexColliderProperties)              Properties                                                  OFFSET(getStruct<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGGroup
/// Size: 0x0010 (0x000060 - 0x000070)
class UCSGGroup : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<class UCSGBase*>)                   Children                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGGroupComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class UCSGGroupComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Struct /Script/FSDEngine.MeshLayerProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FMeshLayerProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UTerrainMaterialCore*)               StartMaterial                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBox)                                      BoundingBox                                                 OFFSET(getStruct<T>, {0x8, 28, 0, 0})
};

/// Class /Script/FSDEngine.CSGLayer
/// Size: 0x0140 (0x000070 - 0x0001B0)
class UCSGLayer : public UCSGGroup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMeshLayerProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FGeneralTerrainMaterialCombiner)           Materials                                                   OFFSET(getStruct<T>, {0x98, 80, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0xE8, 28, 0, 0})
	SMember(FDeepCSGFloatTree)                         BoundingTree                                                OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FDeepCSGTree)                              TempTree                                                    OFFSET(getStruct<T>, {0x120, 72, 0, 0})
	SMember(FMatrix)                                   TransformMatInv                                             OFFSET(getStruct<T>, {0x170, 64, 0, 0})
};

/// Class /Script/FSDEngine.CSGLayerComponent
/// Size: 0x0080 (0x000200 - 0x000280)
class UCSGLayerComponent : public UCSGGroupComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FMeshLayerProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FGeneralTerrainMaterialCombiner)           Materials                                                   OFFSET(getStruct<T>, {0x228, 80, 0, 0})
};

/// Struct /Script/FSDEngine.CSGLayers
/// Size: 0x0038 (0x000000 - 0x000038)
class FCSGLayers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Above                                                       OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/FSDEngine.CSGAddMaterialLayersProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FCSGAddMaterialLayersProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FCSGLayers>)                        Layers                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Inner                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Class /Script/FSDEngine.CSGAddMaterialLayers
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UCSGAddMaterialLayers : public UCSGSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FCSGAddMaterialLayersProperties)           Properties                                                  OFFSET(getStruct<T>, {0x68, 64, 0, 0})
};

/// Class /Script/FSDEngine.CSGAddMaterialLayersComponent
/// Size: 0x0040 (0x000200 - 0x000240)
class UCSGAddMaterialLayersComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FCSGAddMaterialLayersProperties)           Properties                                                  OFFSET(getStruct<T>, {0x200, 64, 0, 0})
};

/// Struct /Script/FSDEngine.CSGRandomizeTransformProperties
/// Size: 0x0054 (0x000000 - 0x000054)
class FCSGRandomizeTransformProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 84;

public:
	SMember(FBox)                                      Translation                                                 OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	DMember(float)                                     RotationMinZ                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     RotationMaxZ                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RotationMinY                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     RotationMaxY                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     RotationMinX                                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationMaxX                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   ScaleMin                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   ScaleMax                                                    OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(bool)                                      ScaleAxesIndependent                                        OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      DisableRandomize                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGRandomizeTransform
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UCSGRandomizeTransform : public UCSGSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FCSGRandomizeTransformProperties)          Properties                                                  OFFSET(getStruct<T>, {0x68, 84, 0, 0})
};

/// Class /Script/FSDEngine.CSGRandomizeTransformComponent
/// Size: 0x0060 (0x000200 - 0x000260)
class UCSGRandomizeTransformComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FCSGRandomizeTransformProperties)          Properties                                                  OFFSET(getStruct<T>, {0x200, 84, 0, 0})
};

/// Struct /Script/FSDEngine.CSGRandomDisableProperties
/// Size: 0x0004 (0x000000 - 0x000004)
class FCSGRandomDisableProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     DisableProbability                                          OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGRandomDisable
/// Size: 0x0008 (0x000068 - 0x000070)
class UCSGRandomDisable : public UCSGSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FCSGRandomDisableProperties)               Properties                                                  OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGRandomDisableComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UCSGRandomDisableComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FCSGRandomDisableProperties)               Properties                                                  OFFSET(getStruct<T>, {0x200, 4, 0, 0})
};

/// Struct /Script/FSDEngine.CSGGridDuplicatorProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FCSGGridDuplicatorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   NumA                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumB                                                        OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FVector)                                   DirectionA                                                  OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   DirectionB                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Class /Script/FSDEngine.CSGGridDuplicator
/// Size: 0x0020 (0x000070 - 0x000090)
class UCSGGridDuplicator : public UCSGDuplicateSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FCSGGridDuplicatorProperties)              Properties                                                  OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Class /Script/FSDEngine.CSGGridDuplicatorComponent
/// Size: 0x0020 (0x000200 - 0x000220)
class UCSGGridDuplicatorComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FCSGGridDuplicatorProperties)              Properties                                                  OFFSET(getStruct<T>, {0x200, 32, 0, 0})
};

/// Struct /Script/FSDEngine.CSGCircleDuplicatorProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FCSGCircleDuplicatorProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Num                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGCircleDuplicator
/// Size: 0x0010 (0x000070 - 0x000080)
class UCSGCircleDuplicator : public UCSGDuplicateSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FCSGCircleDuplicatorProperties)            Properties                                                  OFFSET(getStruct<T>, {0x70, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGCircleDuplicatorComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UCSGCircleDuplicatorComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FCSGCircleDuplicatorProperties)            Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Struct /Script/FSDEngine.ChunkId
/// Size: 0x0006 (0x000000 - 0x000006)
class FChunkId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(int16_t)                                   X                                                           OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Y                                                           OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int16_t)                                   Z                                                           OFFSET(get<int16_t>, {0x4, 2, 0, 0})
};

/// Class /Script/FSDEngine.CSGPreviewComponent
/// Size: 0x0098 (0x0001F8 - 0x000290)
class UCSGPreviewComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class ACSGBuilderBase*)                    BaseBuilder                                                 OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentBakeConfig                                           OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(TMap<FChunkId, class UDeepProceduralMeshComponent*>) Meshes                                            OFFSET(get<T>, {0x208, 80, 0, 0})
	DMember(bool)                                      UsePreviewScene                                             OFFSET(get<bool>, {0x258, 1, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 OFFSET(get<int32_t>, {0x284, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGPreviewScene
/// Size: 0x0028 (0x000030 - 0x000058)
class UCSGPreviewScene : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class UClass*)                             Mesh                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FBakeSettings)                             Settings                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(class UTerrainMaterialCore*)               TerrainMaterial                                             OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGPlane
/// Size: 0x0000 (0x000120 - 0x000120)
class UCSGPlane : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FSDEngine.CSGPlaneComponent
/// Size: 0x0008 (0x000248 - 0x000250)
class UCSGPlaneComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
};

/// Struct /Script/FSDEngine.MeshBoxProperties
/// Size: 0x0014 (0x000000 - 0x000014)
class FMeshBoxProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector)                                   HalfSize                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   BevelSegments                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     BevelSize                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGBox
/// Size: 0x0020 (0x000120 - 0x000140)
class UCSGBox : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMeshBoxProperties)                        Properties                                                  OFFSET(getStruct<T>, {0x120, 20, 0, 0})
};

/// Class /Script/FSDEngine.CSGBoxComponent
/// Size: 0x0018 (0x000248 - 0x000260)
class UCSGBoxComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMeshBoxProperties)                        Properties                                                  OFFSET(getStruct<T>, {0x248, 20, 0, 0})
};

/// Struct /Script/FSDEngine.CSGCylinderProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FCSGCylinderProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Sides                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGCylinder
/// Size: 0x0010 (0x000120 - 0x000130)
class UCSGCylinder : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FCSGCylinderProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x120, 12, 0, 0})
};

/// Class /Script/FSDEngine.CSGCylinderComponent
/// Size: 0x0018 (0x000248 - 0x000260)
class UCSGCylinderComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FCSGCylinderProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x248, 12, 0, 0})
};

/// Struct /Script/FSDEngine.CSGConeProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FCSGConeProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RadiusTop                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RadiusBottom                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Sides                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGCone
/// Size: 0x0010 (0x000120 - 0x000130)
class UCSGCone : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FCSGConeProperties)                        Properties                                                  OFFSET(getStruct<T>, {0x120, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGConeComponent
/// Size: 0x0018 (0x000248 - 0x000260)
class UCSGConeComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FCSGConeProperties)                        Properties                                                  OFFSET(getStruct<T>, {0x248, 16, 0, 0})
};

/// Struct /Script/FSDEngine.CSGSphereProperties
/// Size: 0x0014 (0x000000 - 0x000014)
class FCSGSphereProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AngleTop                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngleBottom                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SidesTopBottom                                              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Sides                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGSphere
/// Size: 0x0020 (0x000120 - 0x000140)
class UCSGSphere : public UConvexMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FCSGSphereProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x120, 20, 0, 0})
};

/// Class /Script/FSDEngine.CSGSphereComponent
/// Size: 0x0018 (0x000248 - 0x000260)
class UCSGSphereComponent : public UConvexMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FCSGSphereProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x248, 20, 0, 0})
};

/// Struct /Script/FSDEngine.WarpNoiseProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FWarpNoiseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EFNRotationType3D)                         RotationType3d                                              OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EFNFractalType)                            FractalType                                                 OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(int32_t)                                   Octaves                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Lacunarity                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeightedStrength                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EFNDomainWarpType)                         DomainWarpType                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/FSDEngine.WarpedProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FWarpedProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EPreviewCellSize)                          CellSize                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FWarpNoiseProperties)                      WarpNoise                                                   OFFSET(getStruct<T>, {0x4, 32, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGWarped
/// Size: 0x00E8 (0x000068 - 0x000150)
class UCSGWarped : public UCSGSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FWarpedProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Class /Script/FSDEngine.CSGWarpedComponent
/// Size: 0x0030 (0x000200 - 0x000230)
class UCSGWarpedComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FWarpedProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x200, 40, 0, 0})
};

/// Struct /Script/FSDEngine.SplineWarpProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FSplineWarpProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBox)                                      ElementBox                                                  OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	CMember(ESplineWarpType)                           SplineWarpType                                              OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Class /Script/FSDEngine.CSGSplineWarp
/// Size: 0x00F0 (0x000150 - 0x000240)
class UCSGSplineWarp : public UCSGWarped
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FSplineWarpProperties)                     SplineProperties                                            OFFSET(getStruct<T>, {0x150, 32, 0, 0})
	SMember(FSplineCurves)                             SplineCurves                                                OFFSET(getStruct<T>, {0x170, 112, 0, 0})
	CMember(TArray<FBox>)                              AABBs                                                       OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<float>)                             Keys                                                        OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TArray<FVector4>)                          planes                                                      OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FBox)                                      TotalAABB                                                   OFFSET(getStruct<T>, {0x210, 28, 0, 0})
};

/// Class /Script/FSDEngine.CSGSplineWarpComponent
/// Size: 0x0028 (0x000228 - 0x000250)
class UCSGSplineWarpComponent : public UCSGWarpedComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FSplineWarpProperties)                     SplineProperties                                            OFFSET(getStruct<T>, {0x228, 32, 0, 0})
};

/// Struct /Script/FSDEngine.CSGSDFInstanceProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FCSGSDFInstanceProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UClass*)                             SDF                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EPreviewCellSize)                          CellSize                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FBakeSettings)                             Settings                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Class /Script/FSDEngine.CSGSDFInstance
/// Size: 0x01B0 (0x000060 - 0x000210)
class UCSGSDFInstance : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FCSGSDFInstanceProperties)                 Properties                                                  OFFSET(getStruct<T>, {0x60, 40, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x88, 48, 0, 0})
	CMember(class USDFBase*)                           CSGSDFInstanceRoot                                          OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentBakeConfig                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FBox)                                      ChildLocalSpaceBoundingBox                                  OFFSET(getStruct<T>, {0xC8, 28, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0xE4, 28, 0, 0})
	SMember(FDeepCSGFloatTree)                         BoundingTree                                                OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FMatrix)                                   TransformMatInv                                             OFFSET(getStruct<T>, {0x120, 64, 0, 0})
};

/// Class /Script/FSDEngine.CSGSDFInstanceComponent
/// Size: 0x0060 (0x000200 - 0x000260)
class UCSGSDFInstanceComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FCSGSDFInstanceProperties)                 Properties                                                  OFFSET(getStruct<T>, {0x200, 40, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x228, 48, 0, 0})
};

/// Struct /Script/FSDEngine.SDFModulateLayer
/// Size: 0x0008 (0x000000 - 0x000008)
class FSDFModulateLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     ModulateDistance                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SDFOffset                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FSDEngine.CSGSDFModulatedInstanceProperties
/// Size: 0x0050 (0x000000 - 0x000050)
class FCSGSDFModulatedInstanceProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UClass*)                             SDF                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UClass*)                             ModulateSDF                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(EPreviewCellSize)                          CellSize                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FBakeSettings)                             SDFSettings                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FBakeSettings)                             ModulateSettings                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(ESDFModulateMode)                          ModulateMode                                                OFFSET(get<T>, {0x3C, 1, 0, 0})
	CMember(TArray<FSDFModulateLayer>)                 ModulateLayers                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/FSDEngine.CSGModulatedSDFInstance
/// Size: 0x01B0 (0x000060 - 0x000210)
class UCSGModulatedSDFInstance : public UCSGBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FCSGSDFModulatedInstanceProperties)        Properties                                                  OFFSET(getStruct<T>, {0x60, 80, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	CMember(class USDFBase*)                           CSGSDFInstanceRoot                                          OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentBakeConfig                                           OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class USDFBase*)                           CSGSDFModulatedInstanceRoot                                 OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(class UBakeConfig*)                        CurrentModulatedBakeConfig                                  OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FBox)                                      ChildLocalSpaceBoundingBox                                  OFFSET(getStruct<T>, {0x100, 28, 0, 0})
	SMember(FBox)                                      WorldSpaceBoundingBox                                       OFFSET(getStruct<T>, {0x11C, 28, 0, 0})
	SMember(FDeepCSGFloatTree)                         BoundingTree                                                OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FMatrix)                                   TransformMatInv                                             OFFSET(getStruct<T>, {0x150, 64, 0, 0})
};

/// Class /Script/FSDEngine.CSGModulatedSDFInstanceComponent
/// Size: 0x0080 (0x000200 - 0x000280)
class UCSGModulatedSDFInstanceComponent : public UCSGBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FCSGSDFModulatedInstanceProperties)        Properties                                                  OFFSET(getStruct<T>, {0x200, 80, 0, 0})
	SMember(FBinaryTerrainMaterialCombiner)            Materials                                                   OFFSET(getStruct<T>, {0x250, 48, 0, 0})
};

/// Struct /Script/FSDEngine.VoronoiProperties
/// Size: 0x001C (0x000000 - 0x00001C)
class FVoronoiProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   HalfSize                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      Inverted                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Class /Script/FSDEngine.CSGVoronoi
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UCSGVoronoi : public USimpleMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FVoronoiProperties)                        Properties                                                  OFFSET(getStruct<T>, {0xD0, 28, 0, 0})
};

/// Class /Script/FSDEngine.CSGVoronoiComponent
/// Size: 0x0028 (0x000238 - 0x000260)
class UCSGVoronoiComponent : public USimpleMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FVoronoiProperties)                        Properties                                                  OFFSET(getStruct<T>, {0x238, 28, 0, 0})
};

/// Struct /Script/FSDEngine.CSGSTLProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FCSGSTLProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UStaticMeshCarver*)                  Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGSTL
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UCSGSTL : public USimpleMeshWithCachedTree
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FCSGSTLProperties)                         Properties                                                  OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FSDEngine.CSGSTLComponent
/// Size: 0x0008 (0x000238 - 0x000240)
class UCSGSTLComponent : public USimpleMeshWithCachedTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FCSGSTLProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x238, 8, 0, 0})
};

/// Class /Script/FSDEngine.DeepCSGSection
/// Size: 0x0008 (0x000220 - 0x000228)
class ADeepCSGSection : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(class UDeepProceduralMeshComponent*)       DeepMesh                                                    OFFSET(get<T>, {0x220, 8, 0, 0})
};

/// Class /Script/FSDEngine.DeepProceduralMeshComponent
/// Size: 0x0058 (0x000478 - 0x0004D0)
class UDeepProceduralMeshComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(class UBodySetup*)                         ProcMeshBodySetup                                           OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.DeepProceduralMeshComponent.FindTerrainMaterialFromPhysicalMaterial
	// class UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(class UPhysicalMaterial* Material);                  // [0x3e666a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FSDEngine.SDFBuilder
/// Size: 0x0018 (0x000288 - 0x0002A0)
class ASDFBuilder : public ACSGBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(EPreviewCellSize)                          PreviewSize                                                 OFFSET(get<T>, {0x288, 1, 0, 0})
	CMember(class UTerrainMaterialCore*)               PreviewMaterial                                             OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class USDFUnionOpComponent*)               SDFRoot                                                     OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Struct /Script/FSDEngine.HMMinMaxLevel
/// Size: 0x0010 (0x000000 - 0x000010)
class FHMMinMaxLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Entries                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/FSDEngine.HeightMapWithMinMaxQuadTree
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UHeightMapWithMinMaxQuadTree : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   Status                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<class UTextureRenderTarget2D*>) InputRenderTarget                                       OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<class UTexture*>)           InputTexture                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FHMMinMaxLevel>)                    MinMaxTree                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     MinHeight                                                   OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
	CMember(TArray<float>)                             Heights                                                     OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(int32_t)                                   Dimensions                                                  OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(bool)                                      Initialized                                                 OFFSET(get<bool>, {0xBC, 1, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.HeightMapWithMinMaxQuadTree.Generate
	// void Generate();                                                                                                         // [0x3e66740] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FSDEngine.SDFBaseProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FSDFBaseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Class /Script/FSDEngine.SDFBase
/// Size: 0x0038 (0x000028 - 0x000060)
class USDFBase : public UBuilderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSDFBaseProperties)                        BaseProperties                                              OFFSET(getStruct<T>, {0x28, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/FSDEngine.SDFHeightMaproperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FSDFHeightMaproperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Class /Script/FSDEngine.SDFHeightMap
/// Size: 0x0020 (0x000060 - 0x000080)
class USDFHeightMap : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSDFHeightMaproperties)                    Properties                                                  OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	CMember(class UHeightMapWithMinMaxQuadTree*)       Heightmap                                                   OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFBaseComponent
/// Size: 0x0008 (0x0001F8 - 0x000200)
class USDFBaseComponent : public UCSGBuilderBaseSceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FSDFBaseProperties)                        BaseProperties                                              OFFSET(getStruct<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FSDEngine.SDFHeightMapComponent
/// Size: 0x0020 (0x000200 - 0x000220)
class USDFHeightMapComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FSDFHeightMaproperties)                    Properties                                                  OFFSET(getStruct<T>, {0x200, 12, 0, 0})
	CMember(class UHeightMapWithMinMaxQuadTree*)       Heightmap                                                   OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFSingleChildBase
/// Size: 0x0010 (0x000060 - 0x000070)
class USDFSingleChildBase : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class USDFBase*)                           Child                                                       OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/FSDEngine.FastNoiseProperties
/// Size: 0x002C (0x000000 - 0x00002C)
class FFastNoiseProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EFNNoiseType)                              NoiseType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EFNRotationType3D)                         RotationType3d                                              OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(EFNFractalType)                            FractalType                                                 OFFSET(get<T>, {0x6, 1, 0, 0})
	DMember(int32_t)                                   Octaves                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     Lacunarity                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     WeightedStrength                                            OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PingPongStrength                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(EFNCellularDistanceFunc)                   CellularDistanceFunc                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(EFNCellularReturnType)                     CellularReturnYype                                          OFFSET(get<T>, {0x1D, 1, 0, 0})
	DMember(float)                                     CellularJitterMod                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EFNDomainWarpType)                         DomainWarpType                                              OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     WarpAmplitude                                               OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/FSDEngine.SDFModifierProperties
/// Size: 0x0038 (0x000000 - 0x000038)
class FSDFModifierProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FFastNoiseProperties)                      Noise                                                       OFFSET(getStruct<T>, {0x4, 44, 0, 0})
	DMember(float)                                     NoiseAmplitude                                              OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFModifier
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USDFModifier : public USDFSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSDFModifierProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x68, 56, 0, 0})
};

/// Class /Script/FSDEngine.SDFModifierComponent
/// Size: 0x0040 (0x000200 - 0x000240)
class USDFModifierComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FSDFModifierProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x200, 56, 0, 0})
};

/// Struct /Script/FSDEngine.SDFSmoothingProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FSDFSmoothingProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SmoothingDist                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      SmoothingEnabled                                            OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Class /Script/FSDEngine.SDFUnionOp
/// Size: 0x0020 (0x000060 - 0x000080)
class USDFUnionOp : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(TArray<class USDFBase*>)                   Arguments                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/FSDEngine.SDFUnionOpComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFUnionOpComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFIntersectOp
/// Size: 0x0020 (0x000060 - 0x000080)
class USDFIntersectOp : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(TArray<class USDFBase*>)                   Arguments                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/FSDEngine.SDFIntersectOpComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFIntersectOpComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFSubOp
/// Size: 0x0020 (0x000060 - 0x000080)
class USDFSubOp : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(class USDFBase*)                           A                                                           OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class USDFBase*)                           B                                                           OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFSubOpComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFSubOpComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFSmoothingProperties)                   Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Struct /Script/FSDEngine.SDFOnionProperties
/// Size: 0x0004 (0x000000 - 0x000004)
class FSDFOnionProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFOnion
/// Size: 0x0010 (0x000060 - 0x000070)
class USDFOnion : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSDFOnionProperties)                       Properties                                                  OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	CMember(class USDFBase*)                           Argument                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFOnionComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFOnionComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFOnionProperties)                       Properties                                                  OFFSET(getStruct<T>, {0x200, 4, 0, 0})
};

/// Struct /Script/FSDEngine.SDFRandomizeTransformProperties
/// Size: 0x0054 (0x000000 - 0x000054)
class FSDFRandomizeTransformProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 84;

public:
	SMember(FBox)                                      Translation                                                 OFFSET(getStruct<T>, {0x0, 28, 0, 0})
	DMember(float)                                     RotationMinZ                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     RotationMaxZ                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RotationMinY                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     RotationMaxY                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     RotationMinX                                                OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationMaxX                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   ScaleMin                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   ScaleMax                                                    OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	DMember(bool)                                      ScaleAxesIndependent                                        OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      DisableRandomize                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(int32_t)                                   Seed                                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFRandomizeTransform
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USDFRandomizeTransform : public USDFSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSDFRandomizeTransformProperties)          Properties                                                  OFFSET(getStruct<T>, {0x68, 84, 0, 0})
};

/// Class /Script/FSDEngine.SDFRandomizeTransformComponent
/// Size: 0x0060 (0x000200 - 0x000260)
class USDFRandomizeTransformComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FSDFRandomizeTransformProperties)          Properties                                                  OFFSET(getStruct<T>, {0x200, 84, 0, 0})
};

/// Struct /Script/FSDEngine.SDFRandomDisableProperties
/// Size: 0x0004 (0x000000 - 0x000004)
class FSDFRandomDisableProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     DisableProbability                                          OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFRandomDisable
/// Size: 0x0008 (0x000068 - 0x000070)
class USDFRandomDisable : public USDFSingleChildBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSDFRandomDisableProperties)               Properties                                                  OFFSET(getStruct<T>, {0x68, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFRandomDisableComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFRandomDisableComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFRandomDisableProperties)               Properties                                                  OFFSET(getStruct<T>, {0x200, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFBaseWithTransform
/// Size: 0x00D0 (0x000060 - 0x000130)
class USDFBaseWithTransform : public USDFBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/FSDEngine.SDFBaseWithTransformComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class USDFBaseWithTransformComponent : public USDFBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Struct /Script/FSDEngine.SDFSphereProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FSDFSphereProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     RadiusOverrideName                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFSphere
/// Size: 0x0010 (0x000130 - 0x000140)
class USDFSphere : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSDFSphereProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x130, 12, 0, 0})
};

/// Class /Script/FSDEngine.SDFSphereComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFSphereComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFSphereProperties)                      Properties                                                  OFFSET(getStruct<T>, {0x200, 12, 0, 0})
};

/// Class /Script/FSDEngine.SDFPlane
/// Size: 0x0000 (0x000130 - 0x000130)
class USDFPlane : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/FSDEngine.SDFPlaneComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class USDFPlaneComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Struct /Script/FSDEngine.SDFBoxProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FSDFBoxProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FVector)                                   HalfSize                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Class /Script/FSDEngine.SDFBox
/// Size: 0x0010 (0x000130 - 0x000140)
class USDFBox : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSDFBoxProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x130, 12, 0, 0})
};

/// Class /Script/FSDEngine.SDFBoxComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFBoxComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFBoxProperties)                         Properties                                                  OFFSET(getStruct<T>, {0x200, 12, 0, 0})
};

/// Struct /Script/FSDEngine.SDFCylinderProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FSDFCylinderProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     HalfLength                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFCylinder
/// Size: 0x0010 (0x000130 - 0x000140)
class USDFCylinder : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSDFCylinderProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFCylinderComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFCylinderComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFCylinderProperties)                    Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Struct /Script/FSDEngine.SDFCapsuleProperties
/// Size: 0x0008 (0x000000 - 0x000008)
class FSDFCapsuleProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     HalfLength                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/FSDEngine.SDFCapsule
/// Size: 0x0010 (0x000130 - 0x000140)
class USDFCapsule : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSDFCapsuleProperties)                     Properties                                                  OFFSET(getStruct<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFCapsuleComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFCapsuleComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFCapsuleProperties)                     Properties                                                  OFFSET(getStruct<T>, {0x200, 8, 0, 0})
};

/// Struct /Script/FSDEngine.SDFTorusProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FSDFTorusProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TubeRadius                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FName)                                     SizeOverrideName                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Class /Script/FSDEngine.SDFTorus
/// Size: 0x0010 (0x000130 - 0x000140)
class USDFTorus : public USDFBaseWithTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FSDFTorusProperties)                       Properties                                                  OFFSET(getStruct<T>, {0x130, 16, 0, 0})
};

/// Class /Script/FSDEngine.SDFTorusComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class USDFTorusComponent : public USDFBaseWithTransformComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSDFTorusProperties)                       Properties                                                  OFFSET(getStruct<T>, {0x200, 16, 0, 0})
};

/// Class /Script/FSDEngine.StaticMeshCarver
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UStaticMeshCarver : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FString)                                   Status                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<class UStaticMesh*>)        Mesh                                                        OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FBox)                                      AABB                                                        OFFSET(getStruct<T>, {0x68, 28, 0, 0})
	SMember(FDeepCSGFloatTree)                         BSPTree                                                     OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FDeepCSGFloatTreePacked)                   BSPTreePacked                                               OFFSET(getStruct<T>, {0xA0, 24, 0, 0})


	/// Functions
	// Function /Script/FSDEngine.StaticMeshCarver.Generate
	// void Generate();                                                                                                         // [0x3e66760] Final|Native|Public|BlueprintCallable 
	// Function /Script/FSDEngine.StaticMeshCarver.ExportPreviewMesh
	// void ExportPreviewMesh();                                                                                                // [0xbd29a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FSDEngine.MatrixWithExactSync
/// Size: 0x0040 (0x000000 - 0x000040)
class FMatrixWithExactSync : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Values                                                      OFFSET(get<float>, {0x0, 64, 0, 0})
};

/// Struct /Script/FSDEngine.CarveSplineSegment
/// Size: 0x0034 (0x000000 - 0x000034)
class FCarveSplineSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	SMember(FVector)                                   SplineStart                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   SplineStartTangent                                          OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   SplineEnd                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   SplineEndTangent                                            OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/FSDEngine.ChunkOffset
/// Size: 0x0006 (0x000000 - 0x000006)
class FChunkOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(int16_t)                                   X                                                           OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Y                                                           OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int16_t)                                   Z                                                           OFFSET(get<int16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/FSDEngine.CellId
/// Size: 0x0006 (0x000000 - 0x000006)
class FCellId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(int16_t)                                   X                                                           OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Y                                                           OFFSET(get<int16_t>, {0x2, 2, 0, 0})
	DMember(int16_t)                                   Z                                                           OFFSET(get<int16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/FSDEngine.DeepCSGTreeOperations
/// Size: 0x0001 (0x000000 - 0x000001)
class FDeepCSGTreeOperations : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FSDEngine.DeepCSGUtils
/// Size: 0x0001 (0x000000 - 0x000001)
class FDeepCSGUtils : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FSDEngine.LinearCellId
/// Size: 0x0006 (0x000000 - 0x000006)
class FLinearCellId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/FSDEngine.EncodedChunkId
/// Size: 0x0004 (0x000000 - 0x000004)
class FEncodedChunkId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  ID                                                          OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/FSDEngine.EncodedChunkCellId
/// Size: 0x0008 (0x000000 - 0x000008)
class FEncodedChunkCellId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FEncodedChunkId)                           ChunkId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  cellOffset                                                  OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/FSDEngine.ChunckIDAndOffsetBox
/// Size: 0x0012 (0x000000 - 0x000012)
class FChunckIDAndOffsetBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	SMember(FChunkId)                                  ChunkId                                                     OFFSET(getStruct<T>, {0x0, 6, 0, 0})
	SMember(FChunkOffset)                              minOffset                                                   OFFSET(getStruct<T>, {0x6, 6, 0, 0})
	SMember(FChunkOffset)                              maxOffset                                                   OFFSET(getStruct<T>, {0xC, 6, 0, 0})
};

/// Struct /Script/FSDEngine.ChunckIDAndOffset
/// Size: 0x000C (0x000000 - 0x00000C)
class FChunckIDAndOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FChunkId)                                  ChunkId                                                     OFFSET(getStruct<T>, {0x0, 6, 0, 0})
	SMember(FChunkOffset)                              Offset                                                      OFFSET(getStruct<T>, {0x6, 6, 0, 0})
};

/// Struct /Script/FSDEngine.CellBox
/// Size: 0x000C (0x000000 - 0x00000C)
class FCellBox : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FCellId)                                   Min                                                         OFFSET(getStruct<T>, {0x0, 6, 0, 0})
	SMember(FCellId)                                   Max                                                         OFFSET(getStruct<T>, {0x6, 6, 0, 0})
};

/// Enum /Script/FSDEngine.ECSGModifiers
/// Size: 0x02
enum class ECSGModifiers : uint8_t
{
	ECSGModifiers__AddMaterialLayers                                                 = 0,
	ECSGModifiers__HasCachedTree                                                     = 1
};

/// Enum /Script/FSDEngine.EGeneralComb
/// Size: 0x04
enum class EGeneralComb : uint8_t
{
	EGeneralComb__Empty                                                              = 0,
	EGeneralComb__KeepSrc                                                            = 1,
	EGeneralComb__KeepDest                                                           = 2,
	EGeneralComb__Replace                                                            = 3
};

/// Enum /Script/FSDEngine.EGeneralCombEmpty
/// Size: 0x02
enum class EGeneralCombEmpty : uint8_t
{
	EGeneralCombEmpty__Empty                                                         = 0,
	EGeneralCombEmpty__Replace                                                       = 1
};

/// Enum /Script/FSDEngine.EGeneralPattern
/// Size: 0x02
enum class EGeneralPattern : uint8_t
{
	EGeneralPattern__SrcSpecific                                                     = 0,
	EGeneralPattern__DestSpecific                                                    = 1
};

/// Enum /Script/FSDEngine.EPattern
/// Size: 0x02
enum class EPattern : uint8_t
{
	EPattern__Specific                                                               = 0,
	EPattern__Precious                                                               = 1
};

/// Enum /Script/FSDEngine.EBinaryComb
/// Size: 0x05
enum class EBinaryComb : uint8_t
{
	EBinaryComb__Empty                                                               = 0,
	EBinaryComb__Unchanged                                                           = 1,
	EBinaryComb__Replace                                                             = 2,
	EBinaryComb__Burn                                                                = 3,
	EBinaryComb__BiomeRock                                                           = 4
};

/// Enum /Script/FSDEngine.EEmptyBinaryComb
/// Size: 0x03
enum class EEmptyBinaryComb : uint8_t
{
	EEmptyBinaryComb__Unchanged                                                      = 0,
	EEmptyBinaryComb__Replace                                                        = 1,
	EEmptyBinaryComb__BiomeRock                                                      = 2
};

/// Enum /Script/FSDEngine.EPreviewCellSize
/// Size: 0x05
enum class EPreviewCellSize : uint8_t
{
	EPreviewCellSize__PRV_CELL_SIZE_12                                               = 0,
	EPreviewCellSize__PRV_CELL_SIZE                                                  = 1,
	EPreviewCellSize__PRV_CELL_SIZE3                                                 = 2,
	EPreviewCellSize__PRV_CELL_SIZE4                                                 = 3,
	EPreviewCellSize__PRV_CELL_SIZE5                                                 = 4
};

/// Enum /Script/FSDEngine.ESplineWarpType
/// Size: 0x03
enum class ESplineWarpType : uint8_t
{
	ESplineWarpType__Normal                                                          = 0,
	ESplineWarpType__ForceZUp                                                        = 1,
	ESplineWarpType__StairLike                                                       = 2
};

/// Enum /Script/FSDEngine.ESDFModulateMode
/// Size: 0x03
enum class ESDFModulateMode : uint8_t
{
	ESDFModulateMode__MM_Disabled                                                    = 0,
	ESDFModulateMode__MM_Single                                                      = 1,
	ESDFModulateMode__MM_Loop                                                        = 2
};

/// Enum /Script/FSDEngine.CarveOptionsCellSize
/// Size: 0x04
enum class CarveOptionsCellSize : uint8_t
{
	CarveOptionsCellSize__CARVE_CELL_SIZE                                            = 0,
	CarveOptionsCellSize__CARVE_CELL_SIZE2                                           = 1,
	CarveOptionsCellSize__CARVE_CELL_SIZE3                                           = 2,
	CarveOptionsCellSize__CARVE_CELL_SIZE4                                           = 3
};

/// Enum /Script/FSDEngine.EPreciousMaterialOptions
/// Size: 0x03
enum class EPreciousMaterialOptions : uint8_t
{
	EPreciousMaterialOptions__TurnIntoGems                                           = 0,
	EPreciousMaterialOptions__LeaveUntouched                                         = 1,
	EPreciousMaterialOptions__Ignore                                                 = 2
};

/// Enum /Script/FSDEngine.ECarveFilterType
/// Size: 0x04
enum class ECarveFilterType : uint8_t
{
	ECarveFilterType__ReplaceAll                                                     = 0,
	ECarveFilterType__ReplaceEmpty                                                   = 1,
	ECarveFilterType__ReplaceSolid                                                   = 2,
	ECarveFilterType__ReplaceEphemeral                                               = 3
};

/// Enum /Script/FSDEngine.EPathfinderResult
/// Size: 0x07
enum class EPathfinderResult : uint8_t
{
	EPathfinderResult__Success                                                       = 0,
	EPathfinderResult__Failed_StartingPointNotFound                                  = 1,
	EPathfinderResult__Failed_EndPointNotFound                                       = 2,
	EPathfinderResult__Failed_PointsNotConnected                                     = 3,
	EPathfinderResult__Failed_UsedTooManyNodes                                       = 4,
	EPathfinderResult__Failed_NotReady                                               = 5,
	EPathfinderResult__Failed_UnknownError                                           = 6
};

/// Enum /Script/FSDEngine.PFCollisionType
/// Size: 0x03
enum class PFCollisionType : uint8_t
{
	PFCollisionType__SolidWalkable                                                   = 0,
	PFCollisionType__Block                                                           = 1,
	PFCollisionType__Danger                                                          = 2
};

/// Enum /Script/FSDEngine.DeepPathFinderPreference
/// Size: 0x04
enum class DeepPathFinderPreference : uint8_t
{
	DeepPathFinderPreference__None                                                   = 0,
	DeepPathFinderPreference__Floor                                                  = 1,
	DeepPathFinderPreference__Walls                                                  = 2,
	DeepPathFinderPreference__Ceiling                                                = 3
};

/// Enum /Script/FSDEngine.DeepPathFinderSize
/// Size: 0x04
enum class DeepPathFinderSize : uint8_t
{
	DeepPathFinderSize__Invalid                                                      = 0,
	DeepPathFinderSize__Small                                                        = 3,
	DeepPathFinderSize__Medium                                                       = 2,
	DeepPathFinderSize__Large                                                        = 1
};

/// Enum /Script/FSDEngine.DeepPathFinderType
/// Size: 0x02
enum class DeepPathFinderType : uint8_t
{
	DeepPathFinderType__Walk                                                         = 0,
	DeepPathFinderType__Fly                                                          = 1
};

/// Enum /Script/FSDEngine.EFNDomainWarpType
/// Size: 0x03
enum class EFNDomainWarpType : uint8_t
{
	EFNDomainWarpType__OPENSIMPLEX2                                                  = 0,
	EFNDomainWarpType__OPENSIMPLEX2_REDUCED                                          = 1,
	EFNDomainWarpType__BASICGRID                                                     = 2
};

/// Enum /Script/FSDEngine.EFNCellularReturnType
/// Size: 0x07
enum class EFNCellularReturnType : uint8_t
{
	EFNCellularReturnType__CELLVALUE                                                 = 0,
	EFNCellularReturnType__DISTANCE                                                  = 1,
	EFNCellularReturnType__DISTANCE2                                                 = 2,
	EFNCellularReturnType__DISTANCE2ADD                                              = 3,
	EFNCellularReturnType__DISTANCE2SUB                                              = 4,
	EFNCellularReturnType__DISTANCE2MUL                                              = 5,
	EFNCellularReturnType__DISTANCE2DIV                                              = 6
};

/// Enum /Script/FSDEngine.EFNCellularDistanceFunc
/// Size: 0x04
enum class EFNCellularDistanceFunc : uint8_t
{
	EFNCellularDistanceFunc__EUCLIDEAN                                               = 0,
	EFNCellularDistanceFunc__EUCLIDEANSQ                                             = 1,
	EFNCellularDistanceFunc__MANHATTAN                                               = 2,
	EFNCellularDistanceFunc__HYBRID                                                  = 3
};

/// Enum /Script/FSDEngine.EFNFractalType
/// Size: 0x06
enum class EFNFractalType : uint8_t
{
	EFNFractalType__NONE                                                             = 0,
	EFNFractalType__FBM                                                              = 1,
	EFNFractalType__RIDGED                                                           = 2,
	EFNFractalType__PINGPONG                                                         = 3,
	EFNFractalType__DOMAIN_WARP_PROGRESSIVE                                          = 4,
	EFNFractalType__DOMAIN_WARP_INDEPENDENT                                          = 5
};

/// Enum /Script/FSDEngine.EFNRotationType3D
/// Size: 0x03
enum class EFNRotationType3D : uint8_t
{
	EFNRotationType3D__NONE                                                          = 0,
	EFNRotationType3D__IMPROVE_XY_PLANES                                             = 1,
	EFNRotationType3D__IMPROVE_XZ_PLANES                                             = 2
};

/// Enum /Script/FSDEngine.EFNNoiseType
/// Size: 0x06
enum class EFNNoiseType : uint8_t
{
	EFNNoiseType__OPENSIMPLEX2                                                       = 0,
	EFNNoiseType__OPENSIMPLEX2S                                                      = 1,
	EFNNoiseType__CELLULAR                                                           = 2,
	EFNNoiseType__PERLIN                                                             = 3,
	EFNNoiseType__VALUE_CUBIC                                                        = 4,
	EFNNoiseType__VALUE                                                              = 5
};

