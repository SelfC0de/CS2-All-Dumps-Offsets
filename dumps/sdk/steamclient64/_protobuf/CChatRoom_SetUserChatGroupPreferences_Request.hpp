// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CChatRoom_SetUserChatGroupPreferences_Request
// Module: steamclient64.dll
// Proto file: steammessages_chat.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCHATROOM_SETUSERCHATGROUPPREFERENCES_REQUEST_HPP
#define SDK_PROTO_CCHATROOM_SETUSERCHATGROUPPREFERENCES_REQUEST_HPP

namespace sdk::proto {

struct CChatRoom_SetUserChatGroupPreferences_Request_ChatGroupPreferences;
struct CChatRoom_SetUserChatGroupPreferences_Request_ChatRoomPreferences;

namespace CChatRoom_SetUserChatGroupPreferences_Request_fields {

    namespace ChatGroupPreferences {
        constexpr int desktop_notification_level = 1;
        constexpr int mobile_notification_level = 2;
        constexpr int unread_indicator_muted = 3;
        constexpr int direct_messages_allowed = 4;
    } // namespace ChatGroupPreferences

    namespace ChatRoomPreferences {
        constexpr int chat_id = 1;
        constexpr int desktop_notification_level = 2;
        constexpr int mobile_notification_level = 3;
        constexpr int unread_indicator_muted = 4;
    } // namespace ChatRoomPreferences

    constexpr int chat_group_id = 1;
    constexpr int chat_group_preferences = 2;
    constexpr int chat_room_preferences = 3;

} // namespace CChatRoom_SetUserChatGroupPreferences_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCHATROOM_SETUSERCHATGROUPPREFERENCES_REQUEST_HPP

