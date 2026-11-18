// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetUserAchievements_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETUSERACHIEVEMENTS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETUSERACHIEVEMENTS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetUserAchievements_Response_Achievement;
struct CPlayer_GetUserAchievements_Response_Group;

namespace CPlayer_GetUserAchievements_Response_fields {

    namespace Achievement {
        constexpr int internal_key = 1;
        constexpr int unlocked = 2;
        constexpr int unlock_time = 3;
        constexpr int progress_int = 4;
        constexpr int progress_float = 5;
    } // namespace Achievement

    namespace Group {
        constexpr int groupid = 1;
        constexpr int is_achievable = 2;
        constexpr int completed_achievements = 3;
        constexpr int is_completed = 4;
        constexpr int time_completed = 9;
    } // namespace Group

    constexpr int achievements = 1;
    constexpr int schema_version = 2;
    constexpr int schema_hash = 3;
    constexpr int groups = 4;

} // namespace CPlayer_GetUserAchievements_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETUSERACHIEVEMENTS_RESPONSE_HPP

