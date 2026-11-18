// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientPICSProductInfoRequest
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_appinfo.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTPICSPRODUCTINFOREQUEST_HPP
#define SDK_PROTO_CMSGCLIENTPICSPRODUCTINFOREQUEST_HPP

namespace sdk::proto {

struct CMsgClientPICSProductInfoRequest_AppInfo;
struct CMsgClientPICSProductInfoRequest_PackageInfo;

namespace CMsgClientPICSProductInfoRequest_fields {

    namespace AppInfo {
        constexpr int appid = 1;
        constexpr int access_token = 2;
        constexpr int only_public_obsolete = 3;
    } // namespace AppInfo

    namespace PackageInfo {
        constexpr int packageid = 1;
        constexpr int access_token = 2;
    } // namespace PackageInfo

    constexpr int packages = 1;
    constexpr int apps = 2;
    constexpr int meta_data_only = 3;
    constexpr int num_prev_failed = 4;
    constexpr int OBSOLETE_supports_package_tokens = 5;
    constexpr int sequence_number = 6;
    constexpr int single_response = 7;

} // namespace CMsgClientPICSProductInfoRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTPICSPRODUCTINFOREQUEST_HPP

