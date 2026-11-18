// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientClanState
// Module: steamclient64.dll
// Proto file: steammessages_clientserver.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTCLANSTATE_HPP
#define SDK_PROTO_CMSGCLIENTCLANSTATE_HPP

namespace sdk::proto {

struct CMsgClientClanState_Event;
struct CMsgClientClanState_NameInfo;
struct CMsgClientClanState_UserCounts;

namespace CMsgClientClanState_fields {

    namespace NameInfo {
        constexpr int clan_name = 1;
        constexpr int sha_avatar = 2;
    } // namespace NameInfo

    namespace UserCounts {
        constexpr int members = 1;
        constexpr int online = 2;
        constexpr int chatting = 3;
        constexpr int in_game = 4;
        constexpr int chat_room_members = 5;
    } // namespace UserCounts

    namespace Event {
        constexpr int gid = 1;
        constexpr int event_time = 2;
        constexpr int headline = 3;
        constexpr int game_id = 4;
        constexpr int just_posted = 5;
    } // namespace Event

    constexpr int steamid_clan = 1;
    constexpr int clan_account_flags = 3;
    constexpr int name_info = 4;
    constexpr int user_counts = 5;
    constexpr int events = 6;
    constexpr int announcements = 7;
    constexpr int chat_room_private = 8;

} // namespace CMsgClientClanState_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTCLANSTATE_HPP

