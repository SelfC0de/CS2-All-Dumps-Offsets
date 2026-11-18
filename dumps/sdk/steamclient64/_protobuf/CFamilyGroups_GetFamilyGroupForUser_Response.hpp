// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CFamilyGroups_GetFamilyGroupForUser_Response
// Module: steamclient64.dll
// Proto file: steammessages_familygroups.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CFAMILYGROUPS_GETFAMILYGROUPFORUSER_RESPONSE_HPP
#define SDK_PROTO_CFAMILYGROUPS_GETFAMILYGROUPFORUSER_RESPONSE_HPP

namespace sdk::proto {

struct CFamilyGroups_GetFamilyGroup_Response;
struct FamilyGroupMembership;
struct FamilyGroupPendingInviteForUser;

namespace CFamilyGroups_GetFamilyGroupForUser_Response_fields {

    constexpr int family_groupid = 1;
    constexpr int is_not_member_of_any_group = 2;
    constexpr int latest_time_joined = 3;
    constexpr int latest_joined_family_groupid = 4;
    constexpr int pending_group_invites = 5;
    constexpr int role = 6;
    constexpr int cooldown_seconds_remaining = 7;
    constexpr int family_group = 8;
    constexpr int can_undelete_last_joined_family = 9;
    constexpr int membership_history = 10;

} // namespace CFamilyGroups_GetFamilyGroupForUser_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CFAMILYGROUPS_GETFAMILYGROUPFORUSER_RESPONSE_HPP

