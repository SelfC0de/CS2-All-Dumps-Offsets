// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CRemotePlayTogether_Notification
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_service_messages.proto
#pragma once
#ifndef SDK_PROTO_CREMOTEPLAYTOGETHER_NOTIFICATION_HPP
#define SDK_PROTO_CREMOTEPLAYTOGETHER_NOTIFICATION_HPP

namespace sdk::proto {

struct CRemotePlayTogether_Notification_GroupUpdated;

namespace CRemotePlayTogether_Notification_fields {

    namespace Player {
        constexpr int steamid = 1;
        constexpr int guestid = 2;
        constexpr int avatar_hash = 3;
        constexpr int keyboard_enabled = 4;
        constexpr int mouse_enabled = 5;
        constexpr int controller_enabled = 6;
    } // namespace Player

    namespace ControllerSlot_obsolete {
        constexpr int slotid = 1;
        constexpr int steamid = 2;
    } // namespace ControllerSlot_obsolete

    namespace ControllerSlot {
        constexpr int slotid = 1;
        constexpr int player = 2;
        constexpr int controller_type = 3;
    } // namespace ControllerSlot

    namespace GroupUpdated {
        constexpr int host_steamid = 1;
        constexpr int host_clientid = 2;
        constexpr int players_obsolete = 3;
        constexpr int host_gameid = 4;
        constexpr int controller_slots_obsolete = 5;
        constexpr int has_new_players = 6;
        constexpr int player_slots = 7;
        constexpr int controller_slots = 8;
    } // namespace GroupUpdated

    constexpr int steamid = 1;

    // oneof Message
    constexpr int group_updated = 2;

} // namespace CRemotePlayTogether_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CREMOTEPLAYTOGETHER_NOTIFICATION_HPP

