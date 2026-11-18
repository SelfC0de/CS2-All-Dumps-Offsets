// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CFriendsMessages_GetActiveMessageSessions_Response
// Module: steamclient64.dll
// Proto file: steammessages_friendmessages.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CFRIENDSMESSAGES_GETACTIVEMESSAGESESSIONS_RESPONSE_HPP
#define SDK_PROTO_CFRIENDSMESSAGES_GETACTIVEMESSAGESESSIONS_RESPONSE_HPP

namespace sdk::proto {

struct CFriendsMessages_GetActiveMessageSessions_Response_FriendMessageSession;

namespace CFriendsMessages_GetActiveMessageSessions_Response_fields {

    namespace FriendMessageSession {
        constexpr int accountid_friend = 1;
        constexpr int last_message = 2;
        constexpr int last_view = 3;
        constexpr int unread_message_count = 4;
        constexpr int notices = 5;
    } // namespace FriendMessageSession

    constexpr int message_sessions = 1;
    constexpr int timestamp = 2;

} // namespace CFriendsMessages_GetActiveMessageSessions_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CFRIENDSMESSAGES_GETACTIVEMESSAGESESSIONS_RESPONSE_HPP

