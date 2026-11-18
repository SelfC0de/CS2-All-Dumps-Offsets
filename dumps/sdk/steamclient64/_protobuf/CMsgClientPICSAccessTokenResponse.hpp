// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientPICSAccessTokenResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_appinfo.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTPICSACCESSTOKENRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTPICSACCESSTOKENRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientPICSAccessTokenResponse_AppToken;
struct CMsgClientPICSAccessTokenResponse_PackageToken;

namespace CMsgClientPICSAccessTokenResponse_fields {

    namespace PackageToken {
        constexpr int packageid = 1;
        constexpr int access_token = 2;
    } // namespace PackageToken

    namespace AppToken {
        constexpr int appid = 1;
        constexpr int access_token = 2;
    } // namespace AppToken

    constexpr int package_access_tokens = 1;
    constexpr int package_denied_tokens = 2;
    constexpr int app_access_tokens = 3;
    constexpr int app_denied_tokens = 4;

} // namespace CMsgClientPICSAccessTokenResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTPICSACCESSTOKENRESPONSE_HPP

