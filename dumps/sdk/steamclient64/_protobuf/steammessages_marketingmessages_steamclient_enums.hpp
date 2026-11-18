// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_marketingmessages.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_MARKETINGMESSAGES_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_MARKETINGMESSAGES_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EMarketingMessageType : int {
    k_EMarketingMessageInvalid = 0,
    k_EMarketingMessageNowAvailable = 1,
    k_EMarketingMessageWeekendDeal = 2,
    k_EMarketingMessagePrePurchase = 3,
    k_EMarketingMessagePlayNow = 4,
    k_EMarketingMessagePreloadNow = 5,
    k_EMarketingMessageGeneral = 6,
    k_EMarketingMessageDemoQuit = 7,
    k_EMarketingMessageGifting = 8,
    k_EMarketingMessageEJsKorner = 9,
    k_EMarketingMessageUpdate = 10,
    k_EMarketingMessageMidweekDeal = 11,
    k_EMarketingMessageDailyDeal = 12,
    k_EMarketingMessageNewDLC = 13,
    k_EMarketingMessageFreeWeekend = 14,
    k_EMarketingMessageSalePages = 15,
    k_EMarketingMessagePlaytestAvailable = 16,
    k_EMarketingMessageNewGame = 17,
};

enum class EMarketingMessageVisibility : int {
    k_EMarketingMessageVisibleBeta = 1,
    k_EMarketingMessageVisiblePublic = 2,
    k_EMarketingMessageVisibleApprovedForPublish = 3,
};

enum class EMarketingMessageAssociationType : int {
    k_EMarketingMessageNoAssociation = 0,
    k_EMarketingMessageAppAssociation = 1,
    k_EMarketingMessageSubscriptionAssociation = 2,
    k_EMarketingMessagePublisherAssociation = 3,
    k_EMarketingMessageGenreAssociation = 4,
    k_EMarketingMessageBundleAssociation = 5,
};

enum class EMarketingMessageTemplateType : int {
    k_EMarketingMessageTemplate_Unknown = 0,
    k_EMarketingMessageTemplate_Image = 1,
    k_EMarketingMessageTemplate_Animated = 2,
    k_EMarketingMessageTemplate_Featured_Video = 3,
    k_EMarketingMessageTemplate_DLC_Override = 4,
    k_EMarketingMessageTemplate_Replay = 5,
    k_EMarketingMessageTemplate_Event = 6,
    k_EMarketingMessageTemplate_AutoRender = 7,
    k_EMarketingMessageTemplate_SaleItems = 8,
    k_EMarketingMessageTemplate_MAX = 9,
};

enum class EMarketingMessageClickLocation : int {
    k_EMarketingMessageClickLocation_Unknown = 0,
    k_EMarketingMessageClickLocation_Image = 1,
    k_EMarketingMessageClickLocation_Button = 2,
    k_EMarketingMessageClickLocation_DlcCapsule = 3,
    k_EMarketingMessageClickLocation_HeaderArea = 4,
    k_EMarketingMessageClickLocation_GameCapsule = 5,
    k_EMarketingMessageClickLocation_PartnerEvent = 6,
};

enum class EMarketingMessageLookupType : int {
    k_EMarketingMessageLookupInvalid = 0,
    k_EMarketingMessageLookupByGID = 1,
    k_EMarketingMessageLookupActive = 2,
    k_EMarketingMessageLookupByTitleWithType = 3,
    k_EMarketingMessageLookupByGIDList = 4,
    k_EMarketingMessageLookupByAssociatedID = 5,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_MARKETINGMESSAGES_STEAMCLIENT_ENUMS_HPP

