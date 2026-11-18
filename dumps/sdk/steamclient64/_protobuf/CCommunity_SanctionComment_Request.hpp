// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCommunity_SanctionComment_Request
// Module: steamclient64.dll
// Proto file: steammessages_community.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCOMMUNITY_SANCTIONCOMMENT_REQUEST_HPP
#define SDK_PROTO_CCOMMUNITY_SANCTIONCOMMENT_REQUEST_HPP

namespace sdk::proto {

struct CCommunity_SanctionComment_Request_Sanction;

namespace CCommunity_SanctionComment_Request_fields {

    namespace Sanction {
        constexpr int sanction = 1;
        constexpr int days = 2;
        constexpr int escalate_to = 3;
    } // namespace Sanction

    constexpr int steamid = 1;
    constexpr int comment_thread_id = 2;
    constexpr int gidcomment = 3;
    constexpr int reason = 4;
    constexpr int note = 5;
    constexpr int sanctions = 6;
    constexpr int skip_lock = 7;

} // namespace CCommunity_SanctionComment_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCOMMUNITY_SANCTIONCOMMENT_REQUEST_HPP

