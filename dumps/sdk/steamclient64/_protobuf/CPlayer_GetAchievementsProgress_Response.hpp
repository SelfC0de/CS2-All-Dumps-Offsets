// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetAchievementsProgress_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETACHIEVEMENTSPROGRESS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETACHIEVEMENTSPROGRESS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetAchievementsProgress_Response_AchievementProgress;

namespace CPlayer_GetAchievementsProgress_Response_fields {

    namespace AchievementProgress {
        constexpr int appid = 1;
        constexpr int unlocked = 2;
        constexpr int total = 3;
        constexpr int percentage = 4;
        constexpr int all_unlocked = 5;
        constexpr int cache_time = 6;
        constexpr int vetted = 7;
        constexpr int groups_completed_base = 8;
        constexpr int groups_total_base = 9;
        constexpr int groups_completed_dlc = 10;
        constexpr int groups_total_dlc = 11;
        constexpr int base_game_total = 12;
    } // namespace AchievementProgress

    constexpr int achievement_progress = 1;

} // namespace CPlayer_GetAchievementsProgress_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETACHIEVEMENTSPROGRESS_RESPONSE_HPP

