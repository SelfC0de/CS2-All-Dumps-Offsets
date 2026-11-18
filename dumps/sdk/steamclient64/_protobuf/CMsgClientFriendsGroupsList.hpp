// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientFriendsGroupsList
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_friends.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTFRIENDSGROUPSLIST_HPP
#define SDK_PROTO_CMSGCLIENTFRIENDSGROUPSLIST_HPP

namespace sdk::proto {

struct CMsgClientFriendsGroupsList_FriendGroup;
struct CMsgClientFriendsGroupsList_FriendGroupsMembership;

namespace CMsgClientFriendsGroupsList_fields {

    namespace FriendGroup {
        constexpr int nGroupID = 1;
        constexpr int strGroupName = 2;
    } // namespace FriendGroup

    namespace FriendGroupsMembership {
        constexpr int ulSteamID = 1;
        constexpr int nGroupID = 2;
    } // namespace FriendGroupsMembership

    constexpr int bremoval = 1;
    constexpr int bincremental = 2;
    constexpr int friendGroups = 3;
    constexpr int memberships = 4;

} // namespace CMsgClientFriendsGroupsList_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTFRIENDSGROUPSLIST_HPP

