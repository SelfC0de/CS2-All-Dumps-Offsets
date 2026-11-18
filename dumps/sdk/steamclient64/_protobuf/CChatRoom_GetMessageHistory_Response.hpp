// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CChatRoom_GetMessageHistory_Response
// Module: steamclient64.dll
// Proto file: steammessages_chat.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCHATROOM_GETMESSAGEHISTORY_RESPONSE_HPP
#define SDK_PROTO_CCHATROOM_GETMESSAGEHISTORY_RESPONSE_HPP

namespace sdk::proto {

struct CChatRoom_GetMessageHistory_Response_ChatMessage;

namespace CChatRoom_GetMessageHistory_Response_fields {

    namespace ChatMessage {
        namespace MessageReaction {
            constexpr int reaction_type = 1;
            constexpr int reaction = 2;
            constexpr int num_reactors = 3;
            constexpr int has_user_reacted = 4;
        } // namespace MessageReaction

        constexpr int sender = 1;
        constexpr int server_timestamp = 2;
        constexpr int message = 3;
        constexpr int ordinal = 4;
        constexpr int server_message = 5;
        constexpr int deleted = 6;
        constexpr int reactions = 7;
    } // namespace ChatMessage

    constexpr int messages = 1;
    constexpr int more_available = 4;

} // namespace CChatRoom_GetMessageHistory_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCHATROOM_GETMESSAGEHISTORY_RESPONSE_HPP

