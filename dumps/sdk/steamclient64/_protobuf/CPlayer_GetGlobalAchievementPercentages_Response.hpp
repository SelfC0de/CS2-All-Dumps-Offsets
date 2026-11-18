// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetGlobalAchievementPercentages_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETGLOBALACHIEVEMENTPERCENTAGES_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETGLOBALACHIEVEMENTPERCENTAGES_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetGlobalAchievementPercentages_Response_Achievement;
struct CPlayer_GetGlobalAchievementPercentages_Response_Group;

namespace CPlayer_GetGlobalAchievementPercentages_Response_fields {

    namespace Achievement {
        constexpr int internal_key = 1;
        constexpr int player_percent_unlocked = 2;
    } // namespace Achievement

    namespace Group {
        constexpr int groupid = 1;
        constexpr int player_percent_completed = 2;
    } // namespace Group

    constexpr int achievements = 1;
    constexpr int groups = 2;

} // namespace CPlayer_GetGlobalAchievementPercentages_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETGLOBALACHIEVEMENTPERCENTAGES_RESPONSE_HPP

