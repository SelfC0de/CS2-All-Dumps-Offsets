// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CChatRoom_GetInviteLinksForGroup_Response
// Module: steamclient64.dll
// Proto file: steammessages_chat.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCHATROOM_GETINVITELINKSFORGROUP_RESPONSE_HPP
#define SDK_PROTO_CCHATROOM_GETINVITELINKSFORGROUP_RESPONSE_HPP

namespace sdk::proto {

struct CChatRoom_GetInviteLinksForGroup_Response_LinkInfo;

namespace CChatRoom_GetInviteLinksForGroup_Response_fields {

    namespace LinkInfo {
        constexpr int invite_code = 1;
        constexpr int steamid_creator = 2;
        constexpr int time_expires = 3;
        constexpr int chat_id = 4;
    } // namespace LinkInfo

    constexpr int invite_links = 1;

} // namespace CChatRoom_GetInviteLinksForGroup_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCHATROOM_GETINVITELINKSFORGROUP_RESPONSE_HPP

