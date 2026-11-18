// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_publishedfile.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_PUBLISHEDFILE_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_PUBLISHEDFILE_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EPublishedFileRevision : int {
    k_EPublishedFileRevision_Default = 0,
    k_EPublishedFileRevision_Latest = 1,
    k_EPublishedFileRevision_ApprovedSnapshot = 2,
    k_EPublishedFileRevision_ApprovedSnapshot_China = 3,
    k_EPublishedFileRevision_RejectedSnapshot = 4,
    k_EPublishedFileRevision_RejectedSnapshot_China = 5,
    k_EPublishedFileRevision_AuthorSnapshot = 6,
};

enum class EPublishedFileForSaleStatus : int {
    k_PFFSS_NotForSale = 0,
    k_PFFSS_PendingApproval = 1,
    k_PFFSS_ApprovedForSale = 2,
    k_PFFSS_RejectedForSale = 3,
    k_PFFSS_NoLongerForSale = 4,
    k_PFFSS_TentativeApproval = 5,
};

enum class EQueryFilesSpecialFilter : int {
    k_EQueryFilesSpecialFilter_None = 0,
    k_EQueryFilesSpecialFilter_AcceptedForUse = 1,
    k_EQueryFilesSpecialFilter_FavoritedByFriends = 2,
    k_EQueryFilesSpecialFilter_CreateByFriends = 3,
    k_EQueryFilesSpecialFilter_CreatedByFollowed = 4,
    k_EQueryFilesSpecialFilter_Reported = 5,
    k_EQueryFilesSpecialFilter_ParentItems = 6,
    k_EQueryFilesSpecialFilter_ParentCollections = 7,
};

enum class EQueryFilesSearchTextTarget : int {
    k_EQueryFilesSearchTextTarget_AllText = 0,
    k_EQueryFilesSearchTextTarget_Title = 1,
    k_EQueryFilesSearchTextTarget_Description = 2,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_PUBLISHEDFILE_STEAMCLIENT_ENUMS_HPP

