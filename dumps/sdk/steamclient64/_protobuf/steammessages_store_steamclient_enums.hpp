// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_store.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_STORE_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_STORE_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EStoreDiscoveryQueueType : int {
    k_EStoreDiscoveryQueueTypeNew = 0,
    k_EStoreDiscoveryQueueTypeComingSoon = 1,
    k_EStoreDiscoveryQueueTypeRecommended = 2,
    k_EStoreDiscoveryQueueTypeEveryNewRelease = 3,
    k_EStoreDiscoveryQueueTypeMLRecommender = 5,
    k_EStoreDiscoveryQueueTypeWishlistOnSale = 6,
    k_EStoreDiscoveryQueueTypeDLC = 7,
    k_EStoreDiscoveryQueueTypeDLCOnSale = 8,
    k_EStoreDiscoveryQueueTypeRecommendedComingSoon = 9,
    k_EStoreDiscoveryQueueTypeRecommendedFree = 10,
    k_EStoreDiscoveryQueueTypeRecommendedOnSale = 11,
    k_EStoreDiscoveryQueueTypeRecommendedDemos = 12,
    k_EStoreDiscoveryQueueTypeDLCNewReleases = 13,
    k_EStoreDiscoveryQueueTypeDLCTopSellers = 14,
    k_EStoreDiscoveryQueueTypeDLCUpcoming = 15,
    k_EStoreDiscoveryQueueTypeMAX = 16,
};

enum class EPlaytestStatus : int {
    k_ETesterStatusNone = 0,
    k_ETesterStatusPending = 1,
    k_ETesterStatusInvited = 2,
    k_ETesterStatusGranted = 3,
    k_ETesterStatusExpired = 4,
};

enum class EAppReportType : int {
    k_EAppReportType_Invalid = 0,
    k_EAppReportType_Scam = 1,
    k_EAppReportType_Malware = 2,
    k_EAppReportType_HateSpeech = 3,
    k_EAppReportType_Pornography = 4,
    k_EAppReportType_NonLabeledAdultContent = 5,
    k_EAppReportType_Libelous = 6,
    k_EAppReportType_Offensive = 7,
    k_EAppReportType_ExploitsChildren = 8,
    k_EAppReportType_MtxWithNonSteamWalletPaymentMethods = 9,
    k_EAppReportType_CopyrightViolation = 10,
    k_EAppReportType_ViolatesLaws = 11,
    k_EAppReportType_Other = 12,
    k_EAppReportType_Broken = 13,
    k_EAppReportType_AIContentReport = 14,
};

enum class EUserReviewScorePreference : int {
    k_EUserReviewScorePreference_Unset = 0,
    k_EUserReviewScorePreference_IncludeAll = 1,
    k_EUserReviewScorePreference_ExcludeBombs = 2,
};

enum class EPartnerLinkTrackingBackfillSource : int {
    k_EPartnerLinkTrackingBackfillSource_None = 0,
    k_EPartnerLinkTrackingBackfillSource_Web = 1,
    k_EPartnerLinkTrackingBackfillSource_Mobile = 2,
    k_EPartnerLinkTrackingBackfillSource_Desktop = 3,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_STORE_STEAMCLIENT_ENUMS_HPP

