// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetGameAchievements_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETGAMEACHIEVEMENTS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETGAMEACHIEVEMENTS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetGameAchievements_Response_Achievement;
struct CPlayer_GetGameAchievements_Response_Group;

namespace CPlayer_GetGameAchievements_Response_fields {

    namespace Achievement {
        constexpr int internal_name = 1;
        constexpr int localized_name = 2;
        constexpr int localized_desc = 3;
        constexpr int icon = 4;
        constexpr int icon_gray = 5;
        constexpr int hidden = 6;
        constexpr int player_percent_unlocked = 7;
        constexpr int internal_key = 8;
        constexpr int min_progress_int = 9;
        constexpr int max_progress_int = 10;
        constexpr int groupid = 11;
        constexpr int archived = 12;
        constexpr int progress_type = 13;
        constexpr int min_progress_float = 14;
        constexpr int max_progress_float = 15;
    } // namespace Achievement

    namespace Group {
        constexpr int groupid = 1;
        constexpr int localized_name = 2;
        constexpr int dlcappid = 3;
        constexpr int archived = 4;
        constexpr int developeronly = 5;
        constexpr int order = 6;
        constexpr int ispublic = 7;
        constexpr int total_achievements = 8;
        constexpr int completion_achievements = 9;
    } // namespace Group

    constexpr int achievements = 1;
    constexpr int schema_version = 2;
    constexpr int groups = 3;
    constexpr int schema_hash = 4;

} // namespace CPlayer_GetGameAchievements_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETGAMEACHIEVEMENTS_RESPONSE_HPP

