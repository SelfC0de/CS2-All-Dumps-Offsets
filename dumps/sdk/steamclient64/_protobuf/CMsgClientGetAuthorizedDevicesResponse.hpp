// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientGetAuthorizedDevicesResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_2.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTGETAUTHORIZEDDEVICESRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTGETAUTHORIZEDDEVICESRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientGetAuthorizedDevicesResponse_AuthorizedDevice;

namespace CMsgClientGetAuthorizedDevicesResponse_fields {

    namespace AuthorizedDevice {
        constexpr int auth_device_token = 1;
        constexpr int device_name = 2;
        constexpr int last_access_time = 3;
        constexpr int borrower_id = 4;
        constexpr int is_pending = 5;
        constexpr int app_played = 6;
    } // namespace AuthorizedDevice

    constexpr int eresult = 1;
    constexpr int authorized_device = 2;

} // namespace CMsgClientGetAuthorizedDevicesResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTGETAUTHORIZEDDEVICESRESPONSE_HPP

