
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/CharacterStructure/Forge/ABP_Forge.ABP_Forge_C
/// Size: 0x00D8 (0x0002B8 - 0x000390)
class UABP_Forge_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          OFFSET(getStruct<T>, {0x2C8, 48, 0, 0})
	SMember(FAnimNode_SequenceEvaluator)               AnimGraphNode_SequenceEvaluator                             OFFSET(getStruct<T>, {0x2F8, 80, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot                                          OFFSET(getStruct<T>, {0x348, 72, 0, 0})


	/// Functions
	// Function /Game/CharacterStructure/Forge/ABP_Forge.ABP_Forge_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0x1d6f900] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/CharacterStructure/Forge/ABP_Forge.ABP_Forge_C.ExecuteUbergraph_ABP_Forge
	// void ExecuteUbergraph_ABP_Forge(int32_t EntryPoint);                                                                     // [0x1d6f900] Final                
};

