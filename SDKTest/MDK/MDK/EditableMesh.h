
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCollectionEngine
/// dependency: MeshDescription

/// Class /Script/EditableMesh.EditableMeshAdapter
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshAdapter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EditableMesh.EditableGeometryCollectionAdapter
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(class UGeometryCollection*)                GeometryCollection                                          OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UGeometryCollection*)                OriginalGeometryCollection                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   GeometryCollectionLODIndex                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/EditableMesh.EditableMesh
/// Size: 0x06E0 (0x000028 - 0x000708)
class UEditableMesh : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	CMember(TArray<class UEditableMeshAdapter*>)       Adapters                                                    OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(int32_t)                                   TextureCoordinateCount                                      OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})
	DMember(int32_t)                                   PendingCompactCounter                                       OFFSET(get<int32_t>, {0x51C, 4, 0, 0})
	DMember(int32_t)                                   SubdivisionCount                                            OFFSET(get<int32_t>, {0x520, 4, 0, 0})


	/// Functions
	// Function /Script/EditableMesh.EditableMesh.WeldVertices
	// void WeldVertices(TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);                                              // [0x12c9d30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemoveVertex
	// void TryToRemoveVertex(FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);                           // [0x12c9c00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TryToRemovePolygonEdge
	// void TryToRemovePolygonEdge(FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);                      // [0x12c9ad0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TriangulatePolygons
	// void TriangulatePolygons(TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);                    // [0x12c99b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.TessellatePolygons
	// void TessellatePolygons(TArray<FPolygonID>& PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs); // [0x12c9850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.StartModification
	// void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);              // [0x12c9780] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygons
	// void SplitPolygons(TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);                            // [0x12c9640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitPolygonalMesh
	// void SplitPolygonalMesh(FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs); // [0x12c9470] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SplitEdge
	// void SplitEdge(FEdgeID EdgeID, TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);                               // [0x12c9310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesCornerSharpness
	// void SetVerticesCornerSharpness(TArray<FVertexID>& VertexIDs, TArray<float>& VerticesNewCornerSharpness);                // [0x12c91f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVerticesAttributes
	// void SetVerticesAttributes(TArray<FAttributesForVertex>& AttributesForVertices);                                         // [0x12c9120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetVertexInstancesAttributes
	// void SetVertexInstancesAttributes(TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);                   // [0x12c9050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetTextureCoordinateCount
	// void SetTextureCoordinateCount(int32_t NumTexCoords);                                                                    // [0x12c8fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetSubdivisionCount
	// void SetSubdivisionCount(int32_t NewSubdivisionCount);                                                                   // [0x12c8f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetPolygonsVertexAttributes
	// void SetPolygonsVertexAttributes(TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);                      // [0x12c8da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardnessAutomatically
	// void SetEdgesHardnessAutomatically(TArray<FEdgeID>& EdgeIDs, float MaxDotProductForSoftEdge);                            // [0x12c8ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesHardness
	// void SetEdgesHardness(TArray<FEdgeID>& EdgeIDs, TArray<bool>& EdgesNewIsHard);                                           // [0x12c8b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesCreaseSharpness
	// void SetEdgesCreaseSharpness(TArray<FEdgeID>& EdgeIDs, TArray<float>& EdgesNewCreaseSharpness);                          // [0x12c8a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetEdgesAttributes
	// void SetEdgesAttributes(TArray<FAttributesForEdge>& AttributesForEdges);                                                 // [0x12c8990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowUndo
	// void SetAllowUndo(bool bInAllowUndo);                                                                                    // [0x12c8900] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowSpatialDatabase
	// void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);                                                              // [0x12c8870] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SetAllowCompact
	// void SetAllowCompact(bool bInAllowCompact);                                                                              // [0x12c87e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(FPlane& InPlane, TArray<FPolygonID>& OutPolygons);     // [0x12c86e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
	// void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(FVector LineSegmentStart, FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons); // [0x12c8590] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.SearchSpatialDatabaseForPolygonsInVolume
	// void SearchSpatialDatabaseForPolygonsInVolume(TArray<FPlane>& planes, TArray<FPolygonID>& OutPolygons);                  // [0x12c8470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.RevertInstance
	// class UEditableMesh* RevertInstance();                                                                                   // [0xbd27d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Revert
	// void Revert();                                                                                                           // [0xbd29a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.RebuildRenderMesh
	// void RebuildRenderMesh();                                                                                                // [0x12c8450] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.QuadrangulateMesh
	// void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);                                                            // [0x12c83a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.PropagateInstanceChanges
	// void PropagateInstanceChanges();                                                                                         // [0xbd29a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MoveVertices
	// void MoveVertices(TArray<FVertexToMove>& VerticesToMove);                                                                // [0x12c82f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.MakeVertexID
	// FVertexID MakeVertexID(int32_t VertexIndex);                                                                             // [0x12c8270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonID
	// FPolygonID MakePolygonID(int32_t PolygonIndex);                                                                          // [0x12c8270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakePolygonGroupID
	// FPolygonGroupID MakePolygonGroupID(int32_t PolygonGroupIndex);                                                           // [0x12c8270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.MakeEdgeID
	// FEdgeID MakeEdgeID(int32_t EdgeIndex);                                                                                   // [0x12c8270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.IsValidVertex
	// bool IsValidVertex(FVertexID VertexID);                                                                                  // [0x12c81e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygonGroup
	// bool IsValidPolygonGroup(FPolygonGroupID PolygonGroupID);                                                                // [0x12c8150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidPolygon
	// bool IsValidPolygon(FPolygonID PolygonID);                                                                               // [0x12c80c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsValidEdge
	// bool IsValidEdge(FEdgeID EdgeID);                                                                                        // [0x12c8030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsUndoAllowed
	// bool IsUndoAllowed();                                                                                                    // [0x12c8010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsSpatialDatabaseAllowed
	// bool IsSpatialDatabaseAllowed();                                                                                         // [0x12c7ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsPreviewingSubdivisions
	// bool IsPreviewingSubdivisions();                                                                                         // [0x12c7fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsOrphanedVertex
	// bool IsOrphanedVertex(FVertexID VertexID);                                                                               // [0x12c7f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCompactAllowed
	// bool IsCompactAllowed();                                                                                                 // [0x12c7f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommittedAsInstance
	// bool IsCommittedAsInstance();                                                                                            // [0x12c7ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsCommitted
	// bool IsCommitted();                                                                                                      // [0x12c7eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.IsBeingModified
	// bool IsBeingModified();                                                                                                  // [0x1153030] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.InvalidVertexID
	// FVertexID InvalidVertexID();                                                                                             // [0x12c7e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonID
	// FPolygonID InvalidPolygonID();                                                                                           // [0x12c7e70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidPolygonGroupID
	// FPolygonGroupID InvalidPolygonGroupID();                                                                                 // [0x12c7e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InvalidEdgeID
	// FEdgeID InvalidEdgeID();                                                                                                 // [0x12c7e30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EditableMesh.EditableMesh.InsetPolygons
	// void InsetPolygons(TArray<FPolygonID>& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0x12c7bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InsertEdgeLoop
	// void InsertEdgeLoop(FEdgeID EdgeID, TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);                              // [0x12c7a90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.InitializeAdapters
	// void InitializeAdapters();                                                                                               // [0x12c7a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.GetVertexPairEdge
	// FEdgeID GetVertexPairEdge(FVertexID VertexID, FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed);                  // [0x12c7940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceVertex
	// FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID);                                                   // [0x12c78a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceCount
	// int32_t GetVertexInstanceCount();                                                                                        // [0x12c7870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygons
	// void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs); // [0x12c7780] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygonCount
	// int32_t GetVertexInstanceConnectedPolygonCount(FVertexInstanceID VertexInstanceID);                                      // [0x12c76f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexInstanceConnectedPolygon
	// FPolygonID GetVertexInstanceConnectedPolygon(FVertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber);        // [0x12c7610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexCount
	// int32_t GetVertexCount();                                                                                                // [0x12c75e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedPolygons
	// void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs);                         // [0x12c74f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdges
	// void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs);                                  // [0x12c7400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdgeCount
	// int32_t GetVertexConnectedEdgeCount(FVertexID VertexID);                                                                 // [0x12c7370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexConnectedEdge
	// FEdgeID GetVertexConnectedEdge(FVertexID VertexID, int32_t ConnectedEdgeNumber);                                         // [0x12c7290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetVertexAdjacentVertices
	// void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs);                             // [0x12c71a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetTextureCoordinateCount
	// int32_t GetTextureCoordinateCount();                                                                                     // [0x12c7170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionLimitData
	// FSubdivisionLimitData GetSubdivisionLimitData();                                                                         // [0x12c7130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetSubdivisionCount
	// int32_t GetSubdivisionCount();                                                                                           // [0x12c7100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangleCount
	// int32_t GetPolygonTriangulatedTriangleCount(FPolygonID PolygonID);                                                       // [0x12c7070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonTriangulatedTriangle
	// FTriangleID GetPolygonTriangulatedTriangle(FPolygonID PolygonID, int32_t PolygonTriangleNumber);                         // [0x12c6f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertices
	// void GetPolygonPerimeterVertices(FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs);                 // [0x12c6ea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstances
	// void GetPolygonPerimeterVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs); // [0x12c6db0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexInstance
	// FVertexInstanceID GetPolygonPerimeterVertexInstance(FPolygonID PolygonID, int32_t PolygonVertexNumber);                  // [0x12c6cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertexCount
	// int32_t GetPolygonPerimeterVertexCount(FPolygonID PolygonID);                                                            // [0x12c6a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterVertex
	// FVertexID GetPolygonPerimeterVertex(FPolygonID PolygonID, int32_t PolygonVertexNumber);                                  // [0x12c6bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdges
	// void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs);                        // [0x12c6b00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdgeCount
	// int32_t GetPolygonPerimeterEdgeCount(FPolygonID PolygonID);                                                              // [0x12c6a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonPerimeterEdge
	// FEdgeID GetPolygonPerimeterEdge(FPolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon); // [0x12c6940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonInGroup
	// FPolygonID GetPolygonInGroup(FPolygonGroupID PolygonGroupID, int32_t PolygonNumber);                                     // [0x12c6860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonGroupCount
	// int32_t GetPolygonGroupCount();                                                                                          // [0x12c6830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCountInGroup
	// int32_t GetPolygonCountInGroup(FPolygonGroupID PolygonGroupID);                                                          // [0x12c67a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonCount
	// int32_t GetPolygonCount();                                                                                               // [0x12c6770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetPolygonAdjacentPolygons
	// void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons);                          // [0x12c6680] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetGroupForPolygon
	// FPolygonGroupID GetGroupForPolygon(FPolygonID PolygonID);                                                                // [0x12c65e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetFirstValidPolygonGroup
	// FPolygonGroupID GetFirstValidPolygonGroup();                                                                             // [0x12c65a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertices
	// void GetEdgeVertices(FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1);                          // [0x12c6470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeVertex
	// FVertexID GetEdgeVertex(FEdgeID EdgeID, int32_t EdgeVertexNumber);                                                       // [0x12c6390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeThatConnectsVertices
	// FEdgeID GetEdgeThatConnectsVertices(FVertexID VertexID0, FVertexID VertexID1);                                           // [0x12c62b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeLoopElements
	// void GetEdgeLoopElements(FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs);                                                  // [0x12c61c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeCount
	// int32_t GetEdgeCount();                                                                                                  // [0x12c6190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygons
	// void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs);                               // [0x12c60a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygonCount
	// int32_t GetEdgeConnectedPolygonCount(FEdgeID EdgeID);                                                                    // [0x12c6010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GetEdgeConnectedPolygon
	// FPolygonID GetEdgeConnectedPolygon(FEdgeID EdgeID, int32_t ConnectedPolygonNumber);                                      // [0x12c5f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.GeneratePolygonTangentsAndNormals
	// void GeneratePolygonTangentsAndNormals(TArray<FPolygonID>& PolygonIDs);                                                  // [0x12c5e80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FlipPolygons
	// void FlipPolygons(TArray<FPolygonID>& PolygonIDs);                                                                       // [0x12c5dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterVertexNumberForVertex
	// int32_t FindPolygonPerimeterVertexNumberForVertex(FPolygonID PolygonID, FVertexID VertexID);                             // [0x12c5cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonPerimeterEdgeNumberForVertices
	// int32_t FindPolygonPerimeterEdgeNumberForVertices(FPolygonID PolygonID, FVertexID EdgeVertexID0, FVertexID EdgeVertexID1); // [0x12c5bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.FindPolygonLoop
	// void FindPolygonLoop(FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit); // [0x12c59b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ExtrudePolygons
	// void ExtrudePolygons(TArray<FPolygonID>& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons); // [0x12c57f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendVertices
	// void ExtendVertices(TArray<FVertexID>& VertexIDs, bool bOnlyExtendClosestEdge, FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs); // [0x12c5640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ExtendEdges
	// void ExtendEdges(TArray<FEdgeID>& EdgeIDs, bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);                 // [0x12c54e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.EndModification
	// void EndModification(bool bFromUndo);                                                                                    // [0x12c5450] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexInstances
	// void DeleteVertexInstances(TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);          // [0x12c5350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteVertexAndConnectedEdgesAndPolygons
	// void DeleteVertexAndConnectedEdgesAndPolygons(FVertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x12c5180] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygons
	// void DeletePolygons(TArray<FPolygonID>& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x12c4f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeletePolygonGroups
	// void DeletePolygonGroups(TArray<FPolygonGroupID>& PolygonGroupIDs);                                                      // [0x12c4ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteOrphanVertices
	// void DeleteOrphanVertices(TArray<FVertexID>& VertexIDsToDelete);                                                         // [0x12c4e20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdges
	// void DeleteEdges(TArray<FEdgeID>& EdgeIDsToDelete, bool bDeleteOrphanedVertices);                                        // [0x12c4d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.DeleteEdgeAndConnectedPolygons
	// void DeleteEdgeAndConnectedPolygons(FEdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups); // [0x12c4b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertices
	// void CreateVertices(TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                      // [0x12c4a10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateVertexInstances
	// void CreateVertexInstances(TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs); // [0x12c48d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygons
	// void CreatePolygons(TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs); // [0x12c4700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreatePolygonGroups
	// void CreatePolygonGroups(TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs); // [0x12c45c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateMissingPolygonPerimeterEdges
	// void CreateMissingPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);                           // [0x12c44d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEmptyVertexRange
	// void CreateEmptyVertexRange(int32_t NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);                            // [0x12c43e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.CreateEdges
	// void CreateEdges(TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);                                  // [0x12c42a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonsSharedEdges
	// void ComputePolygonsSharedEdges(TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs);                      // [0x12c4180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonPlane
	// FPlane ComputePolygonPlane(FPolygonID PolygonID);                                                                        // [0x12c40e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonNormal
	// FVector ComputePolygonNormal(FPolygonID PolygonID);                                                                      // [0x12c4040] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputePolygonCenter
	// FVector ComputePolygonCenter(FPolygonID PolygonID);                                                                      // [0x12c3fa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBoxAndSphere
	// FBoxSphereBounds ComputeBoundingBoxAndSphere();                                                                          // [0x12c3f50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.ComputeBoundingBox
	// FBox ComputeBoundingBox();                                                                                               // [0x12c3f00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EditableMesh.EditableMesh.CommitInstance
	// class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);                                   // [0x12c3e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.Commit
	// void Commit();                                                                                                           // [0x12c3e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.ChangePolygonsVertexInstances
	// void ChangePolygonsVertexInstances(TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);                // [0x12c3d20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.BevelPolygons
	// void BevelPolygons(TArray<FPolygonID>& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs); // [0x12c3b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AssignPolygonsToPolygonGroups
	// void AssignPolygonsToPolygonGroups(TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups); // [0x12c3a30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EditableMesh.EditableMesh.AnyChangesToUndo
	// bool AnyChangesToUndo();                                                                                                 // [0x12c3a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EditableMesh.EditableMeshFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableMeshFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EditableMesh.EditableMeshFactory.MakeEditableMesh
	// class UEditableMesh* MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent, int32_t LODIndex);                  // [0x12cd440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/EditableMesh.EditableStaticMeshAdapter
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(class UStaticMesh*)                        StaticMesh                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UStaticMesh*)                        OriginalStaticMesh                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   StaticMeshLODIndex                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/EditableMesh.AdaptorPolygon2Group
/// Size: 0x0048 (0x000000 - 0x000048)
class FAdaptorPolygon2Group : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RenderingSectionIndex                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangles                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EditableMesh.AdaptorTriangleID
/// Size: 0x0000 (0x000004 - 0x000004)
class FAdaptorTriangleID : public FElementID
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/EditableMesh.AdaptorPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
class FAdaptorPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAdaptorTriangleID>)                TriangulatedPolygonTriangleIndices                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonGroupForPolygon
/// Size: 0x0008 (0x000000 - 0x000008)
class FPolygonGroupForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.MeshElementAttributeValue
/// Size: 0x0050 (0x000000 - 0x000050)
class FMeshElementAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/EditableMesh.MeshElementAttributeData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMeshElementAttributeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     AttributeName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   AttributeIndex                                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FMeshElementAttributeValue)                AttributeValue                                              OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/EditableMesh.MeshElementAttributeList
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshElementAttributeList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMeshElementAttributeData>)         Attributes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonGroupToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
class FPolygonGroupToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMeshElementAttributeList)                 PolygonGroupAttributes                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FPolygonGroupID)                           OriginalPolygonGroupID                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexToMove
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexToMove : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   NewVertexPosition                                           OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/EditableMesh.VertexIndexAndInstanceID
/// Size: 0x0008 (0x000000 - 0x000008)
class FVertexIndexAndInstanceID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ContourIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexInstancesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexInstancesForPolygonHole : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVertexIndexAndInstanceID>)         VertexIndicesAndInstanceIDs                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.ChangeVertexInstancesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
class FChangeVertexInstancesForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexIndexAndInstanceID>)         PerimeterVertexIndicesAndInstanceIDs                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVertexInstancesForPolygonHole>)    VertexIndicesAndInstanceIDsForEachHole                      OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygonHole
/// Size: 0x0010 (0x000000 - 0x000010)
class FVertexAttributesForPolygonHole : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMeshElementAttributeList>)         VertexAttributeList                                         OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAttributesForPolygon
/// Size: 0x0028 (0x000000 - 0x000028)
class FVertexAttributesForPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMeshElementAttributeList>)         PerimeterVertexAttributeLists                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVertexAttributesForPolygonHole>)   VertexAttributeListsForEachHole                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForEdge
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FEdgeID)                                   EdgeID                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 EdgeAttributes                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForVertexInstance
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForVertexInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexInstanceAttributes                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.AttributesForVertex
/// Size: 0x0018 (0x000000 - 0x000018)
class FAttributesForVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexAttributes                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FVertexPair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FVertexID)                                 VertexID0                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID1                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonToSplit
/// Size: 0x0018 (0x000000 - 0x000018)
class FPolygonToSplit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonID)                                PolygonID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexPair>)                       VertexPairsToSplitAt                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.VertexAndAttributes
/// Size: 0x0018 (0x000000 - 0x000018)
class FVertexAndAttributes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVertexInstanceID)                         VertexInstanceID                                            OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 PolygonVertexAttributes                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EditableMesh.PolygonToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FPolygonToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FVertexAndAttributes>)              PerimeterVertices                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FPolygonID)                                OriginalPolygonID                                           OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(EPolygonEdgeHardness)                      PolygonEdgeHardness                                         OFFSET(get<T>, {0x1C, 1, 0, 0})
};

/// Struct /Script/EditableMesh.EdgeToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FEdgeToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVertexID)                                 VertexID0                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVertexID)                                 VertexID1                                                   OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 EdgeAttributes                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FEdgeID)                                   OriginalEdgeID                                              OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexInstanceToCreate
/// Size: 0x0020 (0x000000 - 0x000020)
class FVertexInstanceToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVertexID)                                 VertexID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMeshElementAttributeList)                 VertexInstanceAttributes                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FVertexInstanceID)                         OriginalVertexInstanceID                                    OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/EditableMesh.VertexToCreate
/// Size: 0x0018 (0x000000 - 0x000018)
class FVertexToCreate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMeshElementAttributeList)                 VertexAttributes                                            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FVertexID)                                 OriginalVertexID                                            OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedQuadVertex
/// Size: 0x0034 (0x000000 - 0x000034)
class FSubdividedQuadVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(int32_t)                                   VertexPositionIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 TextureCoordinate0                                          OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FVector2D)                                 TextureCoordinate1                                          OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FVector)                                   VertexNormal                                                OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   VertexTangent                                               OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     VertexBinormalSign                                          OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedQuad
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSubdividedQuad : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSubdividedQuadVertex)                     QuadVertex0                                                 OFFSET(getStruct<T>, {0x0, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex1                                                 OFFSET(getStruct<T>, {0x34, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex2                                                 OFFSET(getStruct<T>, {0x68, 52, 0, 0})
	SMember(FSubdividedQuadVertex)                     QuadVertex3                                                 OFFSET(getStruct<T>, {0x9C, 52, 0, 0})
};

/// Struct /Script/EditableMesh.SubdivisionLimitSection
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubdivisionLimitSection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSubdividedQuad>)                   SubdividedQuads                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EditableMesh.SubdividedWireEdge
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubdividedWireEdge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   EdgeVertex0PositionIndex                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   EdgeVertex1PositionIndex                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/EditableMesh.SubdivisionLimitData
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubdivisionLimitData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           VertexPositions                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FSubdivisionLimitSection>)          Sections                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FSubdividedWireEdge>)               SubdividedWireEdges                                         OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/EditableMesh.RenderingPolygonGroup
/// Size: 0x0048 (0x000000 - 0x000048)
class FRenderingPolygonGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RenderingSectionIndex                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTriangles                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EditableMesh.RenderingPolygon
/// Size: 0x0018 (0x000000 - 0x000018)
class FRenderingPolygon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FPolygonGroupID)                           PolygonGroupID                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FTriangleID>)                       TriangulatedPolygonTriangleIndices                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/EditableMesh.ETriangleTessellationMode
/// Size: 0x02
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles                                        = 0,
	ETriangleTessellationMode__FourTriangles                                         = 1
};

/// Enum /Script/EditableMesh.EInsetPolygonsMode
/// Size: 0x03
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All                                                          = 0,
	EInsetPolygonsMode__CenterPolygonOnly                                            = 1,
	EInsetPolygonsMode__SidePolygonsOnly                                             = 2
};

/// Enum /Script/EditableMesh.EPolygonEdgeHardness
/// Size: 0x04
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft                                               = 0,
	EPolygonEdgeHardness__NewEdgesHard                                               = 1,
	EPolygonEdgeHardness__AllEdgesSoft                                               = 2,
	EPolygonEdgeHardness__AllEdgesHard                                               = 3
};

/// Enum /Script/EditableMesh.EMeshElementAttributeType
/// Size: 0x08
enum class EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None                                                  = 0,
	EMeshElementAttributeType__FVector4                                              = 1,
	EMeshElementAttributeType__FVector                                               = 2,
	EMeshElementAttributeType__FVector2D                                             = 3,
	EMeshElementAttributeType__Float                                                 = 4,
	EMeshElementAttributeType__Int                                                   = 5,
	EMeshElementAttributeType__Bool                                                  = 6,
	EMeshElementAttributeType__FName                                                 = 7
};

/// Enum /Script/EditableMesh.EMeshTopologyChange
/// Size: 0x02
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange                                            = 0,
	EMeshTopologyChange__TopologyChange                                              = 1
};

/// Enum /Script/EditableMesh.EMeshModificationType
/// Size: 0x03
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim                                              = 0,
	EMeshModificationType__Interim                                                   = 1,
	EMeshModificationType__Final                                                     = 2
};

