// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_storebrowse.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_STOREBROWSE_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_STOREBROWSE_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EStoreItemType : int {
    k_EStoreItemType_Invalid = -1,
    k_EStoreItemType_App = 0,
    k_EStoreItemType_Package = 1,
    k_EStoreItemType_Bundle = 2,
    k_EStoreItemType_Mtx = 3,
    k_EStoreItemType_Tag = 4,
    k_EStoreItemType_Creator = 5,
    k_EStoreItemType_HubCategory = 6,
    k_EStoreItemType_SalePage = 7,
};

enum class EStoreAppType : int {
    k_EStoreAppType_Game = 0,
    k_EStoreAppType_Demo = 1,
    k_EStoreAppType_Mod = 2,
    k_EStoreAppType_Movie = 3,
    k_EStoreAppType_DLC = 4,
    k_EStoreAppType_Guide = 5,
    k_EStoreAppType_Software = 6,
    k_EStoreAppType_Video = 7,
    k_EStoreAppType_Series = 8,
    k_EStoreAppType_Episode = 9,
    k_EStoreAppType_Hardware = 10,
    k_EStoreAppType_Music = 11,
    k_EStoreAppType_Beta = 12,
    k_EStoreAppType_Tool = 13,
    k_EStoreAppType_Advertising = 14,
};

enum class EUserReviewScore : int {
    k_EUserReviewScore_None = 0,
    k_EUserReviewScore_OverwhelminglyNegative = 1,
    k_EUserReviewScore_VeryNegative = 2,
    k_EUserReviewScore_Negative = 3,
    k_EUserReviewScore_MostlyNegative = 4,
    k_EUserReviewScore_Mixed = 5,
    k_EUserReviewScore_MostlyPositive = 6,
    k_EUserReviewScore_Positive = 7,
    k_EUserReviewScore_VeryPositive = 8,
    k_EUserReviewScore_OverwhelminglyPositive = 9,
};

enum class ETrailerCategory : int {
    k_ETrailerCategory_Invalid = 0,
    k_ETrailerCategory_Gameplay = 1,
    k_ETrailerCategory_Teaser = 2,
    k_ETrailerCategory_Cinematic = 3,
    k_ETrailerCategory_Update = 4,
    k_ETrailerCategory_Accolades = 5,
    k_ETrailerCategory_Interview = 6,
};

enum class EStoreBrowseFilterFailure : int {
    k_EStoreBrowseFilterFailure_None = 0,
    k_EStoreBrowseFilterFailure_Redundant = 10,
    k_EStoreBrowseFilterFailure_NotPreferred = 20,
    k_EStoreBrowseFilterFailure_NotInterested = 30,
    k_EStoreBrowseFilterFailure_UnwantedContent = 40,
    k_EStoreBrowseFilterFailure_Unavailable = 50,
};

enum class EStoreLinkType : int {
    k_EStoreLinkType_None = 0,
    k_EStoreLinkType_YouTube = 1,
    k_EStoreLinkType_Facebook = 2,
    k_EStoreLinkType_Twitter = 3,
    k_EStoreLinkType_Twitch = 4,
    k_EStoreLinkType_Discord = 5,
    k_EStoreLinkType_QQ = 6,
    k_EStoreLinkType_VK = 7,
    k_EStoreLinkType_Bilibili = 8,
    k_EStoreLinkType_Weibo = 9,
    k_EStoreLinkType_Reddit = 10,
    k_EStoreLinkType_Instagram = 11,
    k_EStoreLinkType_Tumblr = 12,
    k_EStoreLinkType_Tieba = 13,
    k_EStoreLinkType_Tiktok = 14,
    k_EStoreLinkType_Telegram = 15,
    k_EStoreLinkType_LinkedIn = 16,
    k_EStoreLinkType_WeChat = 17,
    k_EStoreLinkType_QQLink = 18,
    k_EStoreLinkType_Douyin = 19,
    k_EStoreLinkType_Bluesky = 20,
    k_EStoreLinkType_Mastodon = 21,
    k_EStoreLinkType_Threads = 22,
    k_EStoreLinkType_QQChannel = 23,
    k_EStoreLinkType_RedNote = 24,
    k_EStoreLinkType_MAX = 25,
};

enum class EStoreAppDocumentType : int {
    k_EStoreAppDocumentType_None = 0,
    k_EStoreAppDocumentType_Manual = 1,
    k_EStoreAppDocumentType_QuickRef = 2,
    k_EStoreAppDocumentType_Map = 3,
    k_EStoreAppDocumentType_GettingStarted = 4,
    k_EStoreAppDocumentType_ReadMe = 5,
    k_EStoreAppDocumentType_TechTree = 6,
    k_EStoreAppDocumentType_Keybindings = 7,
    k_EStoreAppDocumentType_Warranty = 8,
    k_EStoreAppDocumentType_MAX = 9,
};

enum class EStoreCategoryType : int {
    k_EStoreCategoryType_Category = 0,
    k_EStoreCategoryType_SupportedPlayers = 1,
    k_EStoreCategoryType_Feature = 2,
    k_EStoreCategoryType_ControllerSupport = 3,
    k_EStoreCategoryType_CloudGaming = 4,
    k_EStoreCategoryType_MAX = 5,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_STOREBROWSE_STEAMCLIENT_ENUMS_HPP

