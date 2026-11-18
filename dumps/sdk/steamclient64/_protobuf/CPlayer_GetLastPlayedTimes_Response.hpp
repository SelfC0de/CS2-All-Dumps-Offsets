// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetLastPlayedTimes_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETLASTPLAYEDTIMES_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETLASTPLAYEDTIMES_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetLastPlayedTimes_Response_Game;

namespace CPlayer_GetLastPlayedTimes_Response_fields {

    namespace Game {
        constexpr int appid = 1;
        constexpr int last_playtime = 2;
        constexpr int playtime_2weeks = 3;
        constexpr int playtime_forever = 4;
        constexpr int first_playtime = 5;
        constexpr int playtime_windows_forever = 6;
        constexpr int playtime_mac_forever = 7;
        constexpr int playtime_linux_forever = 8;
        constexpr int playtime_deck_forever = 16;
        constexpr int first_windows_playtime = 9;
        constexpr int first_mac_playtime = 10;
        constexpr int first_linux_playtime = 11;
        constexpr int first_deck_playtime = 17;
        constexpr int last_windows_playtime = 12;
        constexpr int last_mac_playtime = 13;
        constexpr int last_linux_playtime = 14;
        constexpr int last_deck_playtime = 18;
        constexpr int playtime_disconnected = 15;
    } // namespace Game

    constexpr int games = 1;

} // namespace CPlayer_GetLastPlayedTimes_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETLASTPLAYEDTIMES_RESPONSE_HPP

