// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_community.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_COMMUNITY_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_COMMUNITY_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EClanImageGroup : int {
    k_EClanImageGroup_None = 0,
    k_EClanImageGroup_Announcement = 1,
    k_EClanImageGroup_Curator = 2,
};

enum class EClanImageFileType : int {
    k_EClanImageFileType_Unknown = 0,
    k_EClanImageFileType_JPEG = 1,
    k_EClanImageFileType_GIF = 2,
    k_EClanImageFileType_PNG = 3,
    k_EClanImageFileType_MP4 = 4,
    k_EClanImageFileType_WEBM = 5,
    k_EClanImageFileType_VTT = 6,
    k_EClanImageFileType_SRT = 7,
    k_EClanImageFileType_SVG = 8,
    k_EClanImageFileType_XML = 9,
    k_EClanImageFileType_WEBP = 10,
};

enum class EPartnerEventDisplayLocation : int {
    k_EPartnerEventDisplayLocation_Invalid = 0,
    k_EPartnerEventDisplayLocation_AppDetailsSpotlight = 1,
    k_EPartnerEventDisplayLocation_LibraryOverview = 2,
    k_EPartnerEventDisplayLocation_StoreAppPage = 3,
    k_EPartnerEventDisplayLocation_EventScroller = 4,
    k_EPartnerEventDisplayLocation_AppDetailsActivity = 5,
    k_EPartnerEventDisplayLocation_CommunityHub = 6,
    k_EPartnerEventDisplayLocation_StoreFrontPage = 7,
    k_EPartnerEventDisplayLocation_NewsHub = 8,
    k_EPartnerEventDisplayLocation_GamepadHome = 9,
    k_EPartnerEventDisplayLocation_StoreHub = 10,
};

enum class ECommentReportAction : int {
    k_ECommentReportAction_Invalid = 0,
    k_ECommentReportAction_NoAction = 1,
    k_ECommentReportAction_Deleted = 2,
    k_ECommentReportAction_Hidden = 3,
    k_ECommentReportAction_ExternalDelete = 4,
    k_ECommentReportAction_ThreadDeleted = 5,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_COMMUNITY_STEAMCLIENT_ENUMS_HPP

