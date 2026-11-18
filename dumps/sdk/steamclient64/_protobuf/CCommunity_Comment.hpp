// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCommunity_Comment
// Module: steamclient64.dll
// Proto file: steammessages_community.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCOMMUNITY_COMMENT_HPP
#define SDK_PROTO_CCOMMUNITY_COMMENT_HPP

namespace sdk::proto {

struct CCommunity_Comment_Reaction;
struct CMsgIPAddress;

namespace CCommunity_Comment_fields {

    namespace Reaction {
        constexpr int reactionid = 1;
        constexpr int count = 2;
    } // namespace Reaction

    constexpr int gidcomment = 1;
    constexpr int steamid = 2;
    constexpr int timestamp = 3;
    constexpr int text = 4;
    constexpr int upvotes = 5;
    constexpr int hidden = 6;
    constexpr int hidden_by_user = 7;
    constexpr int deleted = 8;
    constexpr int ipaddress = 9;
    constexpr int total_hidden = 10;
    constexpr int upvoted_by_user = 11;
    constexpr int reactions = 12;
    constexpr int gidparentcomment = 13;
    constexpr int delete_reason = 14;

} // namespace CCommunity_Comment_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCOMMUNITY_COMMENT_HPP

