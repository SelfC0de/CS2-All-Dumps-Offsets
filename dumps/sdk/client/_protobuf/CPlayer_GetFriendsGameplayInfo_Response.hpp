// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetFriendsGameplayInfo_Response
// Module: client.dll
// Proto file: steammessages_player.steamworkssdk.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETFRIENDSGAMEPLAYINFO_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETFRIENDSGAMEPLAYINFO_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetFriendsGameplayInfo_Response_FriendsGameplayInfo;
struct CPlayer_GetFriendsGameplayInfo_Response_OwnGameplayInfo;

namespace CPlayer_GetFriendsGameplayInfo_Response_fields {

    namespace FriendsGameplayInfo {
        constexpr int steamid = 1;
        constexpr int minutes_played = 2;
        constexpr int minutes_played_forever = 3;
    } // namespace FriendsGameplayInfo

    namespace OwnGameplayInfo {
        constexpr int steamid = 1;
        constexpr int minutes_played = 2;
        constexpr int minutes_played_forever = 3;
        constexpr int in_wishlist = 4;
        constexpr int owned = 5;
    } // namespace OwnGameplayInfo

    constexpr int your_info = 1;
    constexpr int in_game = 2;
    constexpr int played_recently = 3;
    constexpr int played_ever = 4;
    constexpr int owns = 5;
    constexpr int in_wishlist = 6;

} // namespace CPlayer_GetFriendsGameplayInfo_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETFRIENDSGAMEPLAYINFO_RESPONSE_HPP

