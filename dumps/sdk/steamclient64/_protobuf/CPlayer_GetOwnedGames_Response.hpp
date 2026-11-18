// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetOwnedGames_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETOWNEDGAMES_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETOWNEDGAMES_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetOwnedGames_Response_Game;

namespace CPlayer_GetOwnedGames_Response_fields {

    namespace Game {
        constexpr int appid = 1;
        constexpr int name = 2;
        constexpr int playtime_2weeks = 3;
        constexpr int playtime_forever = 4;
        constexpr int img_icon_url = 5;
        constexpr int has_community_visible_stats = 7;
        constexpr int playtime_windows_forever = 8;
        constexpr int playtime_mac_forever = 9;
        constexpr int playtime_linux_forever = 10;
        constexpr int playtime_deck_forever = 20;
        constexpr int rtime_last_played = 11;
        constexpr int capsule_filename = 12;
        constexpr int sort_as = 13;
        constexpr int has_workshop = 14;
        constexpr int has_market = 15;
        constexpr int has_dlc = 16;
        constexpr int has_leaderboards = 17;
        constexpr int content_descriptorids = 18;
        constexpr int playtime_disconnected = 19;
        constexpr int family_shared = 21;
    } // namespace Game

    constexpr int game_count = 1;
    constexpr int games = 2;

} // namespace CPlayer_GetOwnedGames_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETOWNEDGAMES_RESPONSE_HPP

