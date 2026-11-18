// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CFamilyGroupsClient_NotifyRunningApps_Notification
// Module: steamclient64.dll
// Proto file: steammessages_familygroups.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CFAMILYGROUPSCLIENT_NOTIFYRUNNINGAPPS_NOTIFICATION_HPP
#define SDK_PROTO_CFAMILYGROUPSCLIENT_NOTIFYRUNNINGAPPS_NOTIFICATION_HPP

namespace sdk::proto {

struct CFamilyGroupsClient_NotifyRunningApps_Notification_RunningApp;

namespace CFamilyGroupsClient_NotifyRunningApps_Notification_fields {

    namespace PlayingMember {
        constexpr int member_steamid = 1;
        constexpr int owner_steamid = 2;
    } // namespace PlayingMember

    namespace RunningApp {
        constexpr int appid = 1;
        constexpr int playing_members = 3;
    } // namespace RunningApp

    constexpr int family_groupid = 1;
    constexpr int running_apps = 2;

} // namespace CFamilyGroupsClient_NotifyRunningApps_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CFAMILYGROUPSCLIENT_NOTIFYRUNNINGAPPS_NOTIFICATION_HPP

