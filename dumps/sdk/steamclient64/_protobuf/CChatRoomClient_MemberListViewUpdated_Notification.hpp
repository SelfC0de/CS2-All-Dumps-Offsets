// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CChatRoomClient_MemberListViewUpdated_Notification
// Module: steamclient64.dll
// Proto file: steammessages_chat.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCHATROOMCLIENT_MEMBERLISTVIEWUPDATED_NOTIFICATION_HPP
#define SDK_PROTO_CCHATROOMCLIENT_MEMBERLISTVIEWUPDATED_NOTIFICATION_HPP

namespace sdk::proto {

struct CChatRoomClient_MemberListViewUpdated_Notification_MemberListViewEntry;
struct CChatRoomMemberListView;
struct CChatRoomMemberSummaryCounts;
struct CMsgClientPersonaState_Friend;

namespace CChatRoomClient_MemberListViewUpdated_Notification_fields {

    namespace MemberListViewEntry {
        constexpr int rank = 1;
        constexpr int accountid = 2;
        constexpr int persona = 3;
    } // namespace MemberListViewEntry

    constexpr int chat_group_id = 1;
    constexpr int view_id = 2;
    constexpr int view = 3;
    constexpr int members = 4;
    constexpr int status_flags = 5;
    constexpr int member_summary = 6;
    constexpr int subscribed_personas = 7;

} // namespace CChatRoomClient_MemberListViewUpdated_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCHATROOMCLIENT_MEMBERLISTVIEWUPDATED_NOTIFICATION_HPP

