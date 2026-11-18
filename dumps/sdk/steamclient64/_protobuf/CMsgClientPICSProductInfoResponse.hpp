// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientPICSProductInfoResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_appinfo.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTPICSPRODUCTINFORESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTPICSPRODUCTINFORESPONSE_HPP

namespace sdk::proto {

struct CMsgClientPICSProductInfoResponse_AppInfo;
struct CMsgClientPICSProductInfoResponse_PackageInfo;

namespace CMsgClientPICSProductInfoResponse_fields {

    namespace AppInfo {
        constexpr int appid = 1;
        constexpr int change_number = 2;
        constexpr int missing_token = 3;
        constexpr int sha = 4;
        constexpr int buffer = 5;
        constexpr int only_public = 6;
        constexpr int size = 7;
    } // namespace AppInfo

    namespace PackageInfo {
        constexpr int packageid = 1;
        constexpr int change_number = 2;
        constexpr int missing_token = 3;
        constexpr int sha = 4;
        constexpr int buffer = 5;
        constexpr int size = 6;
    } // namespace PackageInfo

    constexpr int apps = 1;
    constexpr int unknown_appids = 2;
    constexpr int packages = 3;
    constexpr int unknown_packageids = 4;
    constexpr int meta_data_only = 5;
    constexpr int response_pending = 6;
    constexpr int http_min_size = 7;
    constexpr int http_host = 8;

} // namespace CMsgClientPICSProductInfoResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTPICSPRODUCTINFORESPONSE_HPP

