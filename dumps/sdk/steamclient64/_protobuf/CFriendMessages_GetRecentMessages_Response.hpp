// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CFriendMessages_GetRecentMessages_Response
// Module: steamclient64.dll
// Proto file: steammessages_friendmessages.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CFRIENDMESSAGES_GETRECENTMESSAGES_RESPONSE_HPP
#define SDK_PROTO_CFRIENDMESSAGES_GETRECENTMESSAGES_RESPONSE_HPP

namespace sdk::proto {

struct CFriendMessages_GetRecentMessages_Response_FriendMessage;

namespace CFriendMessages_GetRecentMessages_Response_fields {

    namespace FriendMessage {
        namespace MessageReaction {
            constexpr int reaction_type = 1;
            constexpr int reaction = 2;
            constexpr int reactors = 3;
        } // namespace MessageReaction

        constexpr int accountid = 1;
        constexpr int timestamp = 2;
        constexpr int message = 3;
        constexpr int ordinal = 4;
        constexpr int reactions = 5;
    } // namespace FriendMessage

    constexpr int messages = 1;
    constexpr int more_available = 4;

} // namespace CFriendMessages_GetRecentMessages_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CFRIENDMESSAGES_GETRECENTMESSAGES_RESPONSE_HPP

