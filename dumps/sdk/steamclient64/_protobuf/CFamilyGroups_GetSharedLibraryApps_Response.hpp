// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CFamilyGroups_GetSharedLibraryApps_Response
// Module: steamclient64.dll
// Proto file: steammessages_familygroups.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CFAMILYGROUPS_GETSHAREDLIBRARYAPPS_RESPONSE_HPP
#define SDK_PROTO_CFAMILYGROUPS_GETSHAREDLIBRARYAPPS_RESPONSE_HPP

namespace sdk::proto {

struct CFamilyGroups_GetSharedLibraryApps_Response_SharedApp;

namespace CFamilyGroups_GetSharedLibraryApps_Response_fields {

    namespace SharedApp {
        constexpr int appid = 1;
        constexpr int owner_steamids = 2;
        constexpr int name = 6;
        constexpr int sort_as = 7;
        constexpr int capsule_filename = 8;
        constexpr int img_icon_hash = 9;
        constexpr int exclude_reason = 10;
        constexpr int rt_time_acquired = 11;
        constexpr int rt_last_played = 12;
        constexpr int rt_playtime = 13;
        constexpr int app_type = 14;
        constexpr int content_descriptors = 15;
    } // namespace SharedApp

    constexpr int apps = 1;
    constexpr int owner_steamid = 2;

} // namespace CFamilyGroups_GetSharedLibraryApps_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CFAMILYGROUPS_GETSHAREDLIBRARYAPPS_RESPONSE_HPP

