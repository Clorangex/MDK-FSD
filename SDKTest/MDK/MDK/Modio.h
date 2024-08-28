
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/Modio.ModioCommonTypesLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioCommonTypesLibrary.SetSessionIdentifier
	// FModioInitializeOptions SetSessionIdentifier(FModioInitializeOptions& options, FString SessionIdentifier);               // [0xf15ca0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.SetPortal
	// FModioInitializeOptions SetPortal(FModioInitializeOptions& options, EModioPortal PortalToUse);                           // [0xf15b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.NotEqualTo
	// bool NotEqualTo(FModioModID& A, FModioModID& B);                                                                         // [0xf13be0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeInitializeOptions
	// FModioInitializeOptions MakeInitializeOptions(int64_t GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse); // [0xf12ca0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeGameId
	// FModioGameID MakeGameId(int64_t GameId);                                                                                 // [0xf12c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeAuthParams
	// FModioAuthenticationParams MakeAuthParams(FString AuthToken, FString EmailAddress, bool bHasAcceptedTOS);                // [0xf129c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.MakeApiKey
	// FModioApiKey MakeApiKey(FString ApiKey);                                                                                 // [0xf12890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.GetRawValueFromModID
	// int64_t GetRawValueFromModID(FModioModID& In);                                                                           // [0xf12220] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.EqualTo
	// bool EqualTo(FModioModID& A, FModioModID& B);                                                                            // [0xf11d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_UserIDToString
	// FString Conv_UserIDToString(FModioUserID UserId);                                                                        // [0xf11c30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_StringToEmailAuthCode
	// FModioEmailAuthCode Conv_StringToEmailAuthCode(FString AuthCode);                                                        // [0xf11b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_StringToEmailAddress
	// FModioEmailAddress Conv_StringToEmailAddress(FString Email);                                                             // [0xf11b50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_ModIDToString
	// FString Conv_ModIDToString(FModioModID ModId);                                                                           // [0xf11a80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_GameIDToString
	// FString Conv_GameIDToString(FModioGameID GameId);                                                                        // [0xf119b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_FileMetadataIDToString
	// FString Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);                                                // [0xf118e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_EmailAuthCodeToString
	// FString Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);                                                   // [0xf117b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_EmailAddressToString
	// FString Conv_EmailAddressToString(FModioEmailAddress EmailAddress);                                                      // [0xf11680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioCommonTypesLibrary.Conv_ApiKeyToString
	// FString Conv_ApiKeyToString(FModioApiKey ApiKey);                                                                        // [0xf11550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioCreateModLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioCreateModLibrary.SetVersionString
	// void SetVersionString(FModioCreateModFileParams& In, FString Version);                                                   // [0xf16270] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetTags
	// void SetTags(FModioCreateModParams& In, TArray<FString>& Tags);                                                          // [0xf16020] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetModfilePlatforms
	// void SetModfilePlatforms(FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);                       // [0xf15570] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetModFileMetadataBlob
	// void SetModFileMetadataBlob(FModioCreateModFileParams& In, FString MetadataBlob);                                        // [0xf153a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetMetadataBlob
	// void SetMetadataBlob(FModioCreateModParams& In, FString MetadataBlob);                                                   // [0xf14f30] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetMarkAsActiveRelease
	// void SetMarkAsActiveRelease(FModioCreateModFileParams& In, bool bMarkAsActiveRelease);                                   // [0xf14bf0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetInitialVisibility
	// void SetInitialVisibility(FModioCreateModParams& In, bool InitialVisibility);                                            // [0xf149e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetHomepageURL
	// void SetHomepageURL(FModioCreateModParams& In, FString HomepageURL);                                                     // [0xf14570] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetDescription
	// void SetDescription(FModioCreateModParams& In, FString Description);                                                     // [0xf14100] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioCreateModLibrary.SetChangelogString
	// void SetChangelogString(FModioCreateModFileParams& In, FString Changelog);                                               // [0xf13f30] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Modio.ModioEditModLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioEditModLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioEditModLibrary.SetVisibility
	// void SetVisibility(FModioEditModParams& In, bool Visibility);                                                            // [0xf16440] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetSummary
	// void SetSummary(FModioEditModParams& In, FString Summary);                                                               // [0xf15e20] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetNamePath
	// void SetNamePath(FModioEditModParams& In, FString NamePath);                                                             // [0xf15910] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetName
	// void SetName(FModioEditModParams& In, FString Name);                                                                     // [0xf15710] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetMetadataBlob
	// void SetMetadataBlob(FModioEditModParams& In, FString MetadataBlob);                                                     // [0xf151a0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetMaturityFlags
	// void SetMaturityFlags(FModioEditModParams& In, EModioMaturityFlags MaturityFlags);                                       // [0xf14d80] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetHomepageURL
	// void SetHomepageURL(FModioEditModParams& In, FString HomepageURL);                                                       // [0xf147e0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioEditModLibrary.SetDescription
	// void SetDescription(FModioEditModParams& In, FString Description);                                                       // [0xf14370] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Modio.ModioErrorCodeLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioErrorCodeLibrary.IsError
	// bool IsError(FModioErrorCode& Error);                                                                                    // [0xf125c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioErrorCodeLibrary.GetValue
	// int32_t GetValue(FModioErrorCode& Error);                                                                                // [0xf122c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioErrorCodeLibrary.GetMessage
	// FString GetMessage(FModioErrorCode& Error);                                                                              // [0xf12140] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioErrorConditionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioErrorConditionLibrary.ErrorCodeMatches
	// bool ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);                                        // [0xf11df0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioExampleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioExampleLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioExampleLibrary.ListUserSubscriptionAsync
	// void ListUserSubscriptionAsync(FModioFilterParams& FilterParams, FDelegateProperty Callback);                            // [0xf12660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioExampleLibrary.GetLogoThumbnailSize
	// EModioLogoSize GetLogoThumbnailSize();                                                                                   // [0xf12110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioExampleLibrary.GetLogoFullSize
	// EModioLogoSize GetLogoFullSize();                                                                                        // [0xf12110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioExampleLibrary.GetAvatarThumbnailSize
	// EModioAvatarSize GetAvatarThumbnailSize();                                                                               // [0xf12110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioFilterParamsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioFilterParamsLibrary.WithTags
	// FModioFilterParams WithTags(FModioFilterParams& Filter, TArray<FString>& NewTags);                                       // [0xf16a80] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithTag
	// FModioFilterParams WithTag(FModioFilterParams& Filter, FString Tag);                                                     // [0xf16850] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithoutTags
	// FModioFilterParams WithoutTags(FModioFilterParams& Filter, TArray<FString>& NewTags);                                    // [0xf16f10] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.WithoutTag
	// FModioFilterParams WithoutTag(FModioFilterParams& Filter, FString Tag);                                                  // [0xf16ce0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.SortBy
	// FModioFilterParams SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);     // [0xf165f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.PagedResults
	// FModioFilterParams PagedResults(FModioFilterParams& Filter, int64_t PageNumber, int64_t PageSize);                       // [0xf13cd0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.NameContainsStrings
	// FModioFilterParams NameContainsStrings(FModioFilterParams& Filter, TArray<FString>& SearchStrings);                      // [0xf13980] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.NameContains
	// FModioFilterParams NameContains(FModioFilterParams& Filter, FString SearchString);                                       // [0xf13750] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MetadataLike
	// FModioFilterParams MetadataLike(FModioFilterParams& Filter, FString SearchString);                                       // [0xf134d0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MatchingIDs
	// FModioFilterParams MatchingIDs(FModioFilterParams& Filter, TArray<FModioModID>& IDs);                                    // [0xf13290] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MarkedLiveBefore
	// FModioFilterParams MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);                                   // [0xf13070] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.MarkedLiveAfter
	// FModioFilterParams MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);                                     // [0xf12e50] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.IndexedResults
	// FModioFilterParams IndexedResults(FModioFilterParams& Filter, int64_t StartIndex, int64_t ResultCount);                  // [0xf12360] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioFilterParamsLibrary.ExcludingIDs
	// FModioFilterParams ExcludingIDs(FModioFilterParams& Filter, TArray<FModioModID>& IDs);                                   // [0xf11ed0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioImageLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioImageLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioImageLibrary.LoadAsync
	// void LoadAsync(FModioImageWrapper& Image, FDelegateProperty OnImageLoaded);                                              // [0xf1c700] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioImageLibrary.GetTexture
	// class UTexture2DDynamic* GetTexture(FModioImageWrapper& Image);                                                          // [0xf1b0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetState
	// EModioImageState GetState(FModioImageWrapper& Image);                                                                    // [0xf1ae40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetLogoSize
	// FVector2D GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);                                                    // [0xf1a330] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetGallerySize
	// FVector2D GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);                                   // [0xf1a160] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioImageLibrary.GetAvatarSize
	// FVector2D GetAvatarSize(class UTexture* avatar, EModioAvatarSize AvatarSize);                                            // [0xf19fb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModCollectionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioModCollectionLibrary.GetPath
	// FString GetPath(FModioModCollectionEntry& entry);                                                                        // [0xf1ad20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetModState
	// EModioModState GetModState(FModioModCollectionEntry& entry);                                                             // [0xf1a500] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetModProfile
	// FModioModInfo GetModProfile(FModioModCollectionEntry& entry);                                                            // [0xf1a400] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModCollectionLibrary.GetID
	// FModioModID GetID(FModioModCollectionEntry& entry);                                                                      // [0xf1a230] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModDependenciesLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioModDependenciesLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModDependencyList& ModTags);                                                      // [0xf1a890] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModDependenciesLibrary.GetDependencies
	// TArray<FModioModDependency> GetDependencies(FModioModDependencyList& ModTags);                                           // [0xf1a080] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModInfoListLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioModInfoListLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModInfoList& ModInfoList);                                                        // [0xf1a970] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModInfoListLibrary.GetMods
	// TArray<FModioModInfo> GetMods(FModioModInfoList& ModInfoList);                                                           // [0xf1a600] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioModTagOptionsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioModTagOptionsLibrary.GetTags
	// TArray<FModioModTagInfo> GetTags(FModioModTagOptions& ModTags);                                                          // [0xf1aef0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioModTagOptionsLibrary.GetPagedResult
	// FModioPagedResult GetPagedResult(FModioModTagOptions& ModTags);                                                          // [0xf1ac00] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioOptionalLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalUser
	// bool IsSet_ModioOptionalUser(FModioOptionalUser& OptionalUser);                                                          // [0xf1c620] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalTerms
	// bool IsSet_ModioOptionalTerms(FModioOptionalTerms& OptionalTerms);                                                       // [0xf1c540] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModTagOptions
	// bool IsSet_ModioOptionalModTagOptions(FModioOptionalModTagOptions& OptionalModTagOptions);                               // [0xf1c470] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModProgressInfo
	// bool IsSet_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo& OptionalModProgressInfo);                         // [0xf1c3c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfoList
	// bool IsSet_ModioOptionalModInfoList(FModioOptionalModInfoList& OptionalModInfoList);                                     // [0xf1c2f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModInfo
	// bool IsSet_ModioOptionalModInfo(FModioOptionalModInfo& OptionalModInfo);                                                 // [0xf1c210] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModID
	// bool IsSet_ModioOptionalModID(FModioOptionalModID& OptionalID);                                                          // [0xf1c160] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalModDependencyList
	// bool IsSet_ModioOptionalModDependencyList(FModioOptionalModDependencyList& OptionalDependencyList);                      // [0xf1c090] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.IsSet_ModioOptionalImage
	// bool IsSet_ModioOptionalImage(FModioOptionalImage& OptionalImage);                                                       // [0xf1bfc0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalUser
	// bool GetValue_ModioOptionalUser(FModioOptionalUser& OptionalUser, FModioUser& User);                                     // [0xf1be40] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalTerms
	// bool GetValue_ModioOptionalTerms(FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);                                // [0xf1bc10] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModTagOptions
	// bool GetValue_ModioOptionalModTagOptions(FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions); // [0xf1ba70] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModProgressInfo
	// bool GetValue_ModioOptionalModProgressInfo(FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo); // [0xf1b950] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfoList
	// bool GetValue_ModioOptionalModInfoList(FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);  // [0xf1b640] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModInfo
	// bool GetValue_ModioOptionalModInfo(FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);                      // [0xf1b4f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModID
	// bool GetValue_ModioOptionalModID(FModioOptionalModID& OptionalID, FModioModID& ID);                                      // [0xf1b3f0] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalModDependencyList
	// bool GetValue_ModioOptionalModDependencyList(FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList); // [0xf1b290] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioOptionalLibrary.GetValue_ModioOptionalImage
	// bool GetValue_ModioOptionalImage(FModioOptionalImage& OptionalImage, FModioImageWrapper& Image);                         // [0xf1b160] Final|Native|Static|Private|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioPopupBase
/// Size: 0x0000 (0x000260 - 0x000260)
class UModioPopupBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/Modio.ModioPopupContainer
/// Size: 0x0020 (0x000260 - 0x000280)
class UModioPopupContainer : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TArray<class UModioPopupBase*>)            PopupStack                                                  OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<class UModioPopupBase*>)            PopupCache                                                  OFFSET(get<T>, {0x270, 16, 0, 0})


	/// Functions
	// Function /Script/Modio.ModioPopupContainer.PushPopup
	// class UModioPopupBase* PushPopup(class UClass* PopupClass);                                                              // [0xf220f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Modio.ModioPopupContainer.PopPopup
	// class UModioPopupBase* PopPopup(class UClass* PopupClass);                                                               // [0xf21fa0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioReportLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioReportLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioReportLibrary.MakeReportForUser
	// FModioReportParams MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0xf21bd0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioReportLibrary.MakeReportForMod
	// FModioReportParams MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0xf218d0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioReportLibrary.MakeReportForGame
	// FModioReportParams MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact); // [0xf215d0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioSDKLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioSDKLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioSDKLibrary.Pct_Int64Int64
	// float Pct_Int64Int64(int64_t Dividend, int64_t Divisor);                                                                 // [0xf21ed0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.IsValidSecurityCodeFormat
	// bool IsValidSecurityCodeFormat(FString String);                                                                          // [0xf1f1f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.IsValidEmailAddressFormat
	// bool IsValidEmailAddressFormat(FString String);                                                                          // [0xf1f150] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectInitializeOptionsForSessionId
	// FModioInitializeOptions GetProjectInitializeOptionsForSessionId(FString sessionId);                                      // [0xf1eff0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectInitializeOptions
	// FModioInitializeOptions GetProjectInitializeOptions();                                                                   // [0xf1ef70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectGameId
	// FModioGameID GetProjectGameId();                                                                                         // [0xf1ef30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectEnvironment
	// EModioEnvironment GetProjectEnvironment();                                                                               // [0xf1ef00] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.GetProjectApiKey
	// FModioApiKey GetProjectApiKey();                                                                                         // [0xf1ee80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Filesize_ToString
	// FText Filesize_ToString(int64_t Filesize, int32_t MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit);                         // [0xf1ec20] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Conv_Int64ToText
	// FText Conv_Int64ToText(int64_t Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // [0xf1e9e0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSDKLibrary.Conv_Int64ToString
	// FString Conv_Int64ToString(int64_t inInt);                                                                               // [0xf1e910] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Modio.ModioSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UModioSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int64_t)                                   GameId                                                      OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	SMember(FString)                                   ApiKey                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(EModioEnvironment)                         Environment                                                 OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EModioLogLevel)                            LogLevel                                                    OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(EModioPortal)                              DefaultPortal                                               OFFSET(get<T>, {0x42, 1, 0, 0})
};

/// Class /Script/Modio.ModioSubsystem
/// Size: 0x0140 (0x000030 - 0x000170)
class UModioSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:


	/// Functions
	// Function /Script/Modio.ModioSubsystem.SetLogLevel
	// void SetLogLevel(EModioLogLevel UnrealLogLevel);                                                                         // [0xf22380] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.RunPendingHandlers
	// void RunPendingHandlers();                                                                                               // [0xf22360] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.QueryUserSubscriptions
	// TMap<FModioModID, FModioModCollectionEntry> QueryUserSubscriptions();                                                    // [0xf22320] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.QueryUserInstallations
	// TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallations(bool bIncludeOutdatedMods);                           // [0xf22280] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.QuerySystemInstallations
	// TMap<FModioModID, FModioModCollectionEntry> QuerySystemInstallations();                                                  // [0xf22190] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.PrioritizeTransferForMod
	// FModioErrorCode PrioritizeTransferForMod(FModioModID ModToPrioritize);                                                   // [0xf22040] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_VerifyUserAuthenticationAsync
	// void K2_VerifyUserAuthenticationAsync(FDelegateProperty Callback);                                                       // [0xf21530] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_UnsubscribeFromModAsync
	// void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FDelegateProperty OnUnsubscribeComplete);              // [0xf21440] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubscribeToModAsync
	// void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, FDelegateProperty OnSubscribeComplete);                        // [0xf21350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitNewModFileForMod
	// void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);                                       // [0xf210d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitNewModAsync
	// void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FDelegateProperty Callback);     // [0xf20e40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitModRatingAsync
	// void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FDelegateProperty Callback);                          // [0xf20d10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_SubmitModChangesAsync
	// void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FDelegateProperty Callback);                  // [0xf20a20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ShutdownAsync
	// void K2_ShutdownAsync(FDelegateProperty OnShutdownComplete);                                                             // [0xf20980] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_RequestEmailAuthCodeAsync
	// void K2_RequestEmailAuthCodeAsync(FModioEmailAddress& EmailAddress, FDelegateProperty Callback);                         // [0xf20870] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ReportContentAsync
	// void K2_ReportContentAsync(FModioReportParams Report, FDelegateProperty Callback);                                       // [0xf206d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_QueryUserProfile
	// FModioOptionalUser K2_QueryUserProfile();                                                                                // [0xf205d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.K2_QueryCurrentModUpdate
	// FModioOptionalModProgressInfo K2_QueryCurrentModUpdate();                                                                // [0xf20550] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioSubsystem.K2_ListAllModsAsync
	// void K2_ListAllModsAsync(FModioFilterParams& Filter, FDelegateProperty Callback);                                        // [0xf20320] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_InitializeAsync
	// void K2_InitializeAsync(FModioInitializeOptions& InitializeOptions, FDelegateProperty OnInitComplete);                   // [0xf201c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetUserMediaAvatarAsync
	// void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FDelegateProperty Callback);                                // [0xf200d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetTermsOfUseAsync
	// void K2_GetTermsOfUseAsync(EModioAuthenticationProvider Provider, EModioLanguage Locale, FDelegateProperty Callback);    // [0xf1ffa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModTagOptionsAsync
	// void K2_GetModTagOptionsAsync(FDelegateProperty Callback);                                                               // [0xf1ff00] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaLogoAsync
	// void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FDelegateProperty Callback);                    // [0xf1fdd0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaGalleryImageAsync
	// void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32_t Index, FDelegateProperty Callback); // [0xf1fc40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModMediaAvatarAsync
	// void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FDelegateProperty Callback);              // [0xf1fb10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModInfoAsync
	// void K2_GetModInfoAsync(FModioModID ModId, FDelegateProperty Callback);                                                  // [0xf1fa20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModDependenciesAsync
	// void K2_GetModDependenciesAsync(FModioModID ModId, FDelegateProperty Callback);                                          // [0xf1f930] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_GetModCreationHandle
	// FModioModCreationHandle K2_GetModCreationHandle();                                                                       // [0xf1f8f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ForceUninstallModAsync
	// void K2_ForceUninstallModAsync(FModioModID ModToRemove, FDelegateProperty Callback);                                     // [0xf1f800] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_FetchExternalUpdatesAsync
	// void K2_FetchExternalUpdatesAsync(FDelegateProperty OnFetchDone);                                                        // [0xf1f760] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_EnableModManagement
	// FModioErrorCode K2_EnableModManagement(FDelegateProperty Callback);                                                      // [0xf1f690] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ClearUserDataAsync
	// void K2_ClearUserDataAsync(FDelegateProperty Callback);                                                                  // [0xf1f5f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_AuthenticateUserExternalAsync
	// void K2_AuthenticateUserExternalAsync(FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FDelegateProperty Callback); // [0xf1f490] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_AuthenticateUserEmailAsync
	// void K2_AuthenticateUserEmailAsync(FModioEmailAuthCode& AuthenticationCode, FDelegateProperty Callback);                 // [0xf1f380] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.K2_ArchiveModAsync
	// void K2_ArchiveModAsync(FModioModID Mod, FDelegateProperty Callback);                                                    // [0xf1f290] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.IsModManagementBusy
	// bool IsModManagementBusy();                                                                                              // [0xf1f120] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.GetLastValidationError
	// TArray<FModioValidationError> GetLastValidationError();                                                                  // [0xf1ed80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Modio.ModioSubsystem.DisableModManagement
	// void DisableModManagement();                                                                                             // [0xf1ec00] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Modio.ModioTestSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioTestSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Modio.ModioUnsigned64Library
/// Size: 0x0000 (0x000028 - 0x000028)
class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Modio.ModioUnsigned64Library.Subtract
	// FModioUnsigned64 Subtract(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                 // [0xf23a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Percentage_Unsigned64
	// float Percentage_Unsigned64(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                               // [0xf23940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.NotEqualTo
	// bool NotEqualTo(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                           // [0xf23860] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.MakeFromComponents
	// FModioUnsigned64 MakeFromComponents(int32_t& High, int32_t& Low);                                                        // [0xf23770] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.LessThan
	// bool LessThan(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                             // [0xf23690] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.GreaterThan
	// bool GreaterThan(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                          // [0xf235b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.EqualTo
	// bool EqualTo(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                              // [0xf234d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.DivideToFloat
	// float DivideToFloat(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                       // [0xf233a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.DivideFloat
	// float DivideFloat(FModioUnsigned64& LHS, float RHS);                                                                     // [0xf23290] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Divide
	// FModioUnsigned64 Divide(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                   // [0xf231a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Conv_FModioUnsigned64ToFloat
	// float Conv_FModioUnsigned64ToFloat(FModioUnsigned64& In);                                                                // [0xf230e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.BreakToComponents
	// void BreakToComponents(FModioUnsigned64& In, int32_t& High, int32_t& Low);                                               // [0xf22fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Modio.ModioUnsigned64Library.Add
	// FModioUnsigned64 Add(FModioUnsigned64& LHS, FModioUnsigned64& RHS);                                                      // [0xf22ec0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Modio.ModioYoutubeURLList
/// Size: 0x0001 (0x000000 - 0x000001)
class FModioYoutubeURLList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Modio.ModioSketchfabURLList
/// Size: 0x0001 (0x000000 - 0x000001)
class FModioSketchfabURLList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Modio.ModioPagedResult
/// Size: 0x0014 (0x000000 - 0x000014)
class FModioPagedResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   PageIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PageSize                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   PageCount                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TotalResultCount                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ResultCount                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Modio.ModioModID
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioModID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioUserID
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioUserID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioUser
/// Size: 0x0030 (0x000000 - 0x000030)
class FModioUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FModioUserID)                              UserId                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Username                                                    OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FDateTime)                                 DateOnline                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FString)                                   ProfileUrl                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Modio.ModioFileMetadataID
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioFileMetadataID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioFileMetadata
/// Size: 0x0068 (0x000000 - 0x000068)
class FModioFileMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FModioFileMetadataID)                      MetadataId                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FModioModID)                               ModId                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 DateAdded                                                   OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(EModioVirusScanStatus)                     CurrentVirusScanStatus                                      OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EModioVirusStatus)                         CurrentVirusStatus                                          OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(int64_t)                                   Filesize                                                    OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Changelog                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   MetadataBlob                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/Modio.ModioMetadata
/// Size: 0x0020 (0x000000 - 0x000020)
class FModioMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Modio.ModioModTag
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioModTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Tag                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Modio.ModioModStats
/// Size: 0x0058 (0x000000 - 0x000058)
class FModioModStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int64_t)                                   PopularityRankPosition                                      OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   PopularityRankTotalMods                                     OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   DownloadsTotal                                              OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   SubscribersTotal                                            OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   RatingTotal                                                 OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   RatingPositive                                              OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   RatingNegative                                              OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   RatingPercentagePositive                                    OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(float)                                     RatingWeightedAggregate                                     OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FString)                                   RatingDisplayText                                           OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Modio.ModioModInfo
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FModioModInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FModioModID)                               ModId                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   ProfileName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ProfileSummary                                              OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ProfileDescription                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ProfileDescriptionPlaintext                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   ProfileUrl                                                  OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FModioUser)                                ProfileSubmittedBy                                          OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FDateTime)                                 ProfileDateAdded                                            OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FDateTime)                                 ProfileDateUpdated                                          OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	SMember(FDateTime)                                 ProfileDateLive                                             OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	CMember(EModioMaturityFlags)                       ProfileMaturityOption                                       OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0xA1, 1, 0, 0})
	SMember(FString)                                   MetadataBlob                                                OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FModioFileMetadata)                        FileInfo                                                    OFFSET(getStruct<T>, {0xB8, 104, 0, 0})
	CMember(TArray<FModioMetadata>)                    MetadataKvp                                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FModioModTag>)                      Tags                                                        OFFSET(get<T>, {0x130, 16, 0, 0})
	DMember(int32_t)                                   NumGalleryImages                                            OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	SMember(FModioYoutubeURLList)                      YoutubeURLs                                                 OFFSET(getStruct<T>, {0x148, 1, 0, 0})
	SMember(FModioSketchfabURLList)                    SketchfabURLs                                               OFFSET(getStruct<T>, {0x158, 1, 0, 0})
	SMember(FModioModStats)                            Stats                                                       OFFSET(getStruct<T>, {0x168, 88, 0, 0})
};

/// Struct /Script/Modio.ModioModInfoList
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioModInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FModioPagedResult)                         PagedResult                                                 OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TArray<FModioModInfo>)                     InternalList                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Modio.ModioModTagInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioModTagInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   TagGroupName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           TagGroupValues                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bAllowMultipleSelection                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/Modio.ModioModTagOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioModTagOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FModioPagedResult)                         PagedResult                                                 OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TArray<FModioModTagInfo>)                  InternalList                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Modio.ModioErrorCode
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioErrorCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioModManagementEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FModioModManagementEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FModioModID)                               ID                                                          OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EModioModManagementEventType)              Event                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FModioErrorCode)                           Status                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Modio.ModioOptionalModInfoList
/// Size: 0x0030 (0x000000 - 0x000030)
class FModioOptionalModInfoList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Modio.ModioOptionalModInfo
/// Size: 0x01C8 (0x000000 - 0x0001C8)
class FModioOptionalModInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
};

/// Struct /Script/Modio.ModioOptionalImage
/// Size: 0x0018 (0x000000 - 0x000018)
class FModioOptionalImage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Modio.ModioOptionalModTagOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FModioOptionalModTagOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Modio.ModioOptionalTerms
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FModioOptionalTerms : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Struct /Script/Modio.ModioOptionalModDependencyList
/// Size: 0x0030 (0x000000 - 0x000030)
class FModioOptionalModDependencyList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Modio.ModioOptionalModID
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioOptionalModID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/Modio.ModioAuthenticationParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioAuthenticationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AuthToken                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UserEmail                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bUserHasAcceptedTerms                                       OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/Modio.ModioEmailAuthCode
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioEmailAuthCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/Modio.ModioEmailAddress
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioEmailAddress : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/Modio.ModioApiKey
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioApiKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ApiKey                                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Modio.ModioGameID
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioGameID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   GameId                                                      OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/Modio.ModioCreateModFileParams
/// Size: 0x0078 (0x000000 - 0x000078)
class FModioCreateModFileParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   PathToModRootDirectory                                      OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Modio.ModioCreateModParams
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FModioCreateModParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FString)                                   PathToLogoFile                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Summary                                                     OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Modio.ModioEditModParams
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FModioEditModParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/Modio.ModioFilterParams
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FModioFilterParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/Modio.ModioImageWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
class FModioImageWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   ImagePath                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Modio.ModioInitializeOptions
/// Size: 0x0038 (0x000000 - 0x000038)
class FModioInitializeOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FModioGameID)                              GameId                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FModioApiKey)                              ApiKey                                                      OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(EModioEnvironment)                         GameEnvironment                                             OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EModioPortal)                              PortalInUse                                                 OFFSET(get<T>, {0x19, 1, 0, 0})
};

/// Struct /Script/Modio.ModioModCollectionEntry
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FModioModCollectionEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Struct /Script/Modio.ModioModCreationHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioModCreationHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioModDependency
/// Size: 0x0018 (0x000000 - 0x000018)
class FModioModDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FModioModID)                               ModId                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   ModName                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Modio.ModioModDependencyList
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioModDependencyList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FModioPagedResult)                         PagedResult                                                 OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	CMember(TArray<FModioModDependency>)               InternalList                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Modio.ModioOptionalModProgressInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FModioOptionalModProgressInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/Modio.ModioUnsigned64
/// Size: 0x0008 (0x000000 - 0x000008)
class FModioUnsigned64 : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Modio.ModioModProgressInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioModProgressInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FModioUnsigned64)                          TotalDownloadSize                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FModioUnsigned64)                          CurrentlyDownloadedBytes                                    OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FModioUnsigned64)                          TotalExtractedSizeOnDisk                                    OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FModioUnsigned64)                          CurrentlyExtractedBytes                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FModioModID)                               ID                                                          OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/Modio.ModioReportParams
/// Size: 0x0058 (0x000000 - 0x000058)
class FModioReportParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/Modio.ModioLink
/// Size: 0x0028 (0x000000 - 0x000028)
class FModioLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Text                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bRequired                                                   OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/Modio.ModioTerms
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FModioTerms : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   AgreeButtonText                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DisagreeButtonText                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FModioLink)                                WebsiteLink                                                 OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	SMember(FModioLink)                                TermsLink                                                   OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	SMember(FModioLink)                                PrivacyLink                                                 OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FModioLink)                                ManageLink                                                  OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Struct /Script/Modio.ModioOptionalUser
/// Size: 0x0038 (0x000000 - 0x000038)
class FModioOptionalUser : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/Modio.ModioValidationError
/// Size: 0x0020 (0x000000 - 0x000020)
class FModioValidationError : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FieldName                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ValidationFailureDescription                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/Modio.EModioVirusStatus
/// Size: 0x02
enum class EModioVirusStatus : uint8_t
{
	EModioVirusStatus__NoThreat                                                      = 0,
	EModioVirusStatus__Malicious                                                     = 1
};

/// Enum /Script/Modio.EModioVirusScanStatus
/// Size: 0x06
enum class EModioVirusScanStatus : uint8_t
{
	EModioVirusScanStatus__NotScanned                                                = 0,
	EModioVirusScanStatus__ScanComplete                                              = 1,
	EModioVirusScanStatus__InProgress                                                = 2,
	EModioVirusScanStatus__TooLargeToScan                                            = 3,
	EModioVirusScanStatus__FileNotFound                                              = 4,
	EModioVirusScanStatus__ErrorScanning                                             = 5
};

/// Enum /Script/Modio.EModioMaturityFlags
/// Size: 0x05
enum class EModioMaturityFlags : uint8_t
{
	EModioMaturityFlags__None                                                        = 0,
	EModioMaturityFlags__Alcohol                                                     = 1,
	EModioMaturityFlags__Drugs                                                       = 2,
	EModioMaturityFlags__Violence                                                    = 4,
	EModioMaturityFlags__Explicit                                                    = 8
};

/// Enum /Script/Modio.EModioModManagementEventType
/// Size: 0x08
enum class EModioModManagementEventType : uint8_t
{
	EModioModManagementEventType__Installed                                          = 0,
	EModioModManagementEventType__Uninstalled                                        = 1,
	EModioModManagementEventType__Updated                                            = 2,
	EModioModManagementEventType__Uploaded                                           = 3,
	EModioModManagementEventType__BeginInstall                                       = 4,
	EModioModManagementEventType__BeginUninstall                                     = 5,
	EModioModManagementEventType__BeginUpdate                                        = 6,
	EModioModManagementEventType__BeginUpload                                        = 7
};

/// Enum /Script/Modio.EModioAuthenticationProvider
/// Size: 0x06
enum class EModioAuthenticationProvider : uint8_t
{
	EModioAuthenticationProvider__XboxLive                                           = 0,
	EModioAuthenticationProvider__Steam                                              = 1,
	EModioAuthenticationProvider__GoG                                                = 2,
	EModioAuthenticationProvider__Itch                                               = 3,
	EModioAuthenticationProvider__Switch                                             = 4,
	EModioAuthenticationProvider__Discord                                            = 5
};

/// Enum /Script/Modio.EModioLanguage
/// Size: 0x15
enum class EModioLanguage : uint8_t
{
	EModioLanguage__English                                                          = 0,
	EModioLanguage__Bulgarian                                                        = 1,
	EModioLanguage__French                                                           = 2,
	EModioLanguage__German                                                           = 3,
	EModioLanguage__Italian                                                          = 4,
	EModioLanguage__Polish                                                           = 5,
	EModioLanguage__Portuguese                                                       = 6,
	EModioLanguage__Hungarian                                                        = 7,
	EModioLanguage__Japanese                                                         = 8,
	EModioLanguage__Korean                                                           = 9,
	EModioLanguage__Russian                                                          = 10,
	EModioLanguage__Spanish                                                          = 11,
	EModioLanguage__Thai                                                             = 12,
	EModioLanguage__ChineseSimplified                                                = 13,
	EModioLanguage__ChineseTraditional                                               = 14
};

/// Enum /Script/Modio.EModioLogLevel
/// Size: 0x04
enum class EModioLogLevel : uint8_t
{
	EModioLogLevel__Trace                                                            = 0,
	EModioLogLevel__Info                                                             = 1,
	EModioLogLevel__Warning                                                          = 2,
	EModioLogLevel__Error                                                            = 3
};

/// Enum /Script/Modio.EModioGallerySize
/// Size: 0x02
enum class EModioGallerySize : uint8_t
{
	EModioGallerySize__Original                                                      = 0,
	EModioGallerySize__Thumb320                                                      = 1
};

/// Enum /Script/Modio.EModioAvatarSize
/// Size: 0x03
enum class EModioAvatarSize : uint8_t
{
	EModioAvatarSize__Original                                                       = 0,
	EModioAvatarSize__Thumb50                                                        = 1,
	EModioAvatarSize__Thumb100                                                       = 2
};

/// Enum /Script/Modio.EModioLogoSize
/// Size: 0x04
enum class EModioLogoSize : uint8_t
{
	EModioLogoSize__Original                                                         = 0,
	EModioLogoSize__Thumb320                                                         = 1,
	EModioLogoSize__Thumb640                                                         = 2,
	EModioLogoSize__Thumb1280                                                        = 3
};

/// Enum /Script/Modio.EModioModfilePlatform
/// Size: 0x11
enum class EModioModfilePlatform : uint8_t
{
	EModioModfilePlatform__Windows                                                   = 0,
	EModioModfilePlatform__Mac                                                       = 1,
	EModioModfilePlatform__Linux                                                     = 2,
	EModioModfilePlatform__Android                                                   = 3,
	EModioModfilePlatform__iOS                                                       = 4,
	EModioModfilePlatform__XboxOne                                                   = 5,
	EModioModfilePlatform__XboxSeriesX                                               = 6,
	EModioModfilePlatform__PS4                                                       = 7,
	EModioModfilePlatform__PS5                                                       = 8,
	EModioModfilePlatform__Switch                                                    = 9,
	EModioModfilePlatform__Oculus                                                    = 10
};

/// Enum /Script/Modio.EModioPortal
/// Size: 0x10
enum class EModioPortal : uint8_t
{
	EModioPortal__None                                                               = 0,
	EModioPortal__Apple                                                              = 1,
	EModioPortal__EpicGamesStore                                                     = 2,
	EModioPortal__GOG                                                                = 3,
	EModioPortal__Google                                                             = 4,
	EModioPortal__Itchio                                                             = 5,
	EModioPortal__Nintendo                                                           = 6,
	EModioPortal__PSN                                                                = 7,
	EModioPortal__Steam                                                              = 8,
	EModioPortal__XboxLive                                                           = 9
};

/// Enum /Script/Modio.EModioEnvironment
/// Size: 0x02
enum class EModioEnvironment : uint8_t
{
	EModioEnvironment__Test                                                          = 0,
	EModioEnvironment__Live                                                          = 1
};

/// Enum /Script/Modio.EModioErrorCondition
/// Size: 0x13
enum class EModioErrorCondition : uint8_t
{
	EModioErrorCondition__NoError                                                    = 0,
	EModioErrorCondition__NetworkError                                               = 2,
	EModioErrorCondition__ConfigurationError                                         = 3,
	EModioErrorCondition__InvalidArgsError                                           = 4,
	EModioErrorCondition__FilesystemError                                            = 5,
	EModioErrorCondition__InternalError                                              = 6,
	EModioErrorCondition__EntityNotFoundError                                        = 12,
	EModioErrorCondition__UserTermsOfUseError                                        = 13,
	EModioErrorCondition__SubmitReportError                                          = 14,
	EModioErrorCondition__UserNotAuthenticatedError                                  = 15,
	EModioErrorCondition__SDKNotInitialized                                          = 16,
	EModioErrorCondition__UserAlreadyAuthenticatedError                              = 17,
	EModioErrorCondition__SystemError                                                = 18
};

/// Enum /Script/Modio.EModioSortDirection
/// Size: 0x02
enum class EModioSortDirection : uint8_t
{
	EModioSortDirection__Ascending                                                   = 0,
	EModioSortDirection__Descending                                                  = 1
};

/// Enum /Script/Modio.EModioSortFieldType
/// Size: 0x07
enum class EModioSortFieldType : uint8_t
{
	EModioSortFieldType__ID                                                          = 0,
	EModioSortFieldType__DownloadsToday                                              = 1,
	EModioSortFieldType__SubscriberCount                                             = 2,
	EModioSortFieldType__Rating                                                      = 3,
	EModioSortFieldType__DateMarkedLive                                              = 4,
	EModioSortFieldType__DateUpdated                                                 = 5,
	EModioSortFieldType__DownloadsTotal                                              = 6
};

/// Enum /Script/Modio.EModioImageState
/// Size: 0x04
enum class EModioImageState : uint8_t
{
	EModioImageState__OnDisc                                                         = 0,
	EModioImageState__LoadingIntoMemory                                              = 1,
	EModioImageState__InMemory                                                       = 2,
	EModioImageState__Corrupted                                                      = 3
};

/// Enum /Script/Modio.EModioModState
/// Size: 0x06
enum class EModioModState : uint8_t
{
	EModioModState__InstallationPending                                              = 0,
	EModioModState__Installed                                                        = 1,
	EModioModState__UpdatePending                                                    = 2,
	EModioModState__Downloading                                                      = 3,
	EModioModState__Extracting                                                       = 4,
	EModioModState__UninstallPending                                                 = 5
};

/// Enum /Script/Modio.EModioRating
/// Size: 0x03
enum class EModioRating : uint8_t
{
	EModioRating__Neutral                                                            = 0,
	EModioRating__Positive                                                           = 1,
	EModioRating__Negative                                                           = 2
};

/// Enum /Script/Modio.EModioReportType
/// Size: 0x08
enum class EModioReportType : uint8_t
{
	EModioReportType__Generic                                                        = 0,
	EModioReportType__DMCA                                                           = 1,
	EModioReportType__NotWorking                                                     = 2,
	EModioReportType__RudeContent                                                    = 3,
	EModioReportType__IllegalContent                                                 = 4,
	EModioReportType__StolenContent                                                  = 5,
	EModioReportType__FalseInformation                                               = 6,
	EModioReportType__Other                                                          = 7
};

/// Enum /Script/Modio.EFileSizeUnit
/// Size: 0x05
enum class EFileSizeUnit : uint32_t
{
	Largest                                                                          = 0,
	B                                                                                = 1,
	KB                                                                               = 1024,
	MB                                                                               = 1048576,
	GB                                                                               = 1073741824
};

