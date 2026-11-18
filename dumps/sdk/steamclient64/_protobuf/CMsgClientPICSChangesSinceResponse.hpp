// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientPICSChangesSinceResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_appinfo.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTPICSCHANGESSINCERESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTPICSCHANGESSINCERESPONSE_HPP

namespace sdk::proto {

struct CMsgClientPICSChangesSinceResponse_AppChange;
struct CMsgClientPICSChangesSinceResponse_PackageChange;

namespace CMsgClientPICSChangesSinceResponse_fields {

    namespace PackageChange {
        constexpr int packageid = 1;
        constexpr int change_number = 2;
        constexpr int needs_token = 3;
    } // namespace PackageChange

    namespace AppChange {
        constexpr int appid = 1;
        constexpr int change_number = 2;
        constexpr int needs_token = 3;
    } // namespace AppChange

    constexpr int current_change_number = 1;
    constexpr int since_change_number = 2;
    constexpr int force_full_update = 3;
    constexpr int package_changes = 4;
    constexpr int app_changes = 5;
    constexpr int force_full_app_update = 6;
    constexpr int force_full_package_update = 7;

} // namespace CMsgClientPICSChangesSinceResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTPICSCHANGESSINCERESPONSE_HPP

