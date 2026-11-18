// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteClientAppStatus
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTECLIENTAPPSTATUS_HPP
#define SDK_PROTO_CMSGREMOTECLIENTAPPSTATUS_HPP

namespace sdk::proto {

struct CMsgRemoteClientAppStatus_AppStatus;

namespace CMsgRemoteClientAppStatus_fields {

    namespace AppStatus {
        constexpr int app_id = 1;
        constexpr int app_install_state = 2;
        constexpr int update_info = 3;
        constexpr int shortcut_info = 4;
        constexpr int vr_not_required = 5;
        constexpr int shader_update_available = 6;
        constexpr int workshop_update_avilable = 7;
        constexpr int download_complete = 8;
        constexpr int cloud_status = 9;
    } // namespace AppStatus

    namespace ShortcutInfo {
        constexpr int name = 1;
        constexpr int icon = 2;
        constexpr int categories = 3;
        constexpr int exepath = 4;
    } // namespace ShortcutInfo

    constexpr int status_updates = 1;

} // namespace CMsgRemoteClientAppStatus_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTECLIENTAPPSTATUS_HPP

