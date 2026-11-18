// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_base.proto
// Module: video64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_BASE_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_BASE_ENUMS_HPP

namespace sdk::proto {

enum class EBanContentCheckResult : int {
    k_EBanContentCheckResult_NotScanned = 0,
    k_EBanContentCheckResult_Reset = 1,
    k_EBanContentCheckResult_NeedsChecking = 2,
    k_EBanContentCheckResult_VeryUnlikely = 5,
    k_EBanContentCheckResult_Unlikely = 30,
    k_EBanContentCheckResult_Possible = 50,
    k_EBanContentCheckResult_Likely = 75,
    k_EBanContentCheckResult_VeryLikely = 100,
};

enum class EProtoClanEventType : int {
    k_EClanOtherEvent = 1,
    k_EClanGameEvent = 2,
    k_EClanPartyEvent = 3,
    k_EClanMeetingEvent = 4,
    k_EClanSpecialCauseEvent = 5,
    k_EClanMusicAndArtsEvent = 6,
    k_EClanSportsEvent = 7,
    k_EClanTripEvent = 8,
    k_EClanChatEvent = 9,
    k_EClanGameReleaseEvent = 10,
    k_EClanBroadcastEvent = 11,
    k_EClanSmallUpdateEvent = 12,
    k_EClanPreAnnounceMajorUpdateEvent = 13,
    k_EClanMajorUpdateEvent = 14,
    k_EClanDLCReleaseEvent = 15,
    k_EClanFutureReleaseEvent = 16,
    k_EClanESportTournamentStreamEvent = 17,
    k_EClanDevStreamEvent = 18,
    k_EClanFamousStreamEvent = 19,
    k_EClanGameSalesEvent = 20,
    k_EClanGameItemSalesEvent = 21,
    k_EClanInGameBonusXPEvent = 22,
    k_EClanInGameLootEvent = 23,
    k_EClanInGamePerksEvent = 24,
    k_EClanInGameChallengeEvent = 25,
    k_EClanInGameContestEvent = 26,
    k_EClanIRLEvent = 27,
    k_EClanNewsEvent = 28,
    k_EClanBetaReleaseEvent = 29,
    k_EClanInGameContentReleaseEvent = 30,
    k_EClanFreeTrial = 31,
    k_EClanSeasonRelease = 32,
    k_EClanSeasonUpdate = 33,
    k_EClanCrosspostEvent = 34,
    k_EClanInGameEventGeneral = 35,
};

enum class PartnerEventNotificationType : int {
    k_EEventStart = 0,
    k_EEventBroadcastStart = 1,
    k_EEventMatchStart = 2,
    k_EEventPartnerMaxType = 3,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_BASE_ENUMS_HPP

