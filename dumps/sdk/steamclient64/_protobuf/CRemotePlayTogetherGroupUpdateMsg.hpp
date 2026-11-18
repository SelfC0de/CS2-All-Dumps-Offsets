// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CRemotePlayTogetherGroupUpdateMsg
// Module: steamclient64.dll
// Proto file: steammessages_remoteplay.proto
#pragma once
#ifndef SDK_PROTO_CREMOTEPLAYTOGETHERGROUPUPDATEMSG_HPP
#define SDK_PROTO_CREMOTEPLAYTOGETHERGROUPUPDATEMSG_HPP

namespace sdk::proto {

struct CRemotePlayTogetherGroupUpdateMsg_Player;

namespace CRemotePlayTogetherGroupUpdateMsg_fields {

    namespace Player {
        constexpr int accountid = 1;
        constexpr int guestid = 2;
        constexpr int keyboard_enabled = 3;
        constexpr int mouse_enabled = 4;
        constexpr int controller_enabled = 5;
        constexpr int controller_slots = 6;
        constexpr int avatar_hash = 7;
    } // namespace Player

    constexpr int players = 1;
    constexpr int player_index = 2;
    constexpr int miniprofile_location = 3;
    constexpr int game_name = 4;
    constexpr int avatar_location = 5;
    constexpr int direct_input = 6;

} // namespace CRemotePlayTogetherGroupUpdateMsg_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CREMOTEPLAYTOGETHERGROUPUPDATEMSG_HPP

