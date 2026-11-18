// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetTopAchievementsForGames_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETTOPACHIEVEMENTSFORGAMES_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETTOPACHIEVEMENTSFORGAMES_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetTopAchievementsForGames_Response_Game;

namespace CPlayer_GetTopAchievementsForGames_Response_fields {

    namespace Achievement {
        constexpr int statid = 1;
        constexpr int bit = 2;
        constexpr int name = 3;
        constexpr int desc = 4;
        constexpr int icon = 5;
        constexpr int icon_gray = 6;
        constexpr int hidden = 7;
        constexpr int player_percent_unlocked = 8;
    } // namespace Achievement

    namespace Game {
        constexpr int appid = 1;
        constexpr int total_achievements = 2;
        constexpr int achievements = 3;
    } // namespace Game

    constexpr int games = 1;

} // namespace CPlayer_GetTopAchievementsForGames_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETTOPACHIEVEMENTSFORGAMES_RESPONSE_HPP

