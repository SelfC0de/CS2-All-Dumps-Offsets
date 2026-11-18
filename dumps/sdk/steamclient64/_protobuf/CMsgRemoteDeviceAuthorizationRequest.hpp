// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteDeviceAuthorizationRequest
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_discovery.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTEDEVICEAUTHORIZATIONREQUEST_HPP
#define SDK_PROTO_CMSGREMOTEDEVICEAUTHORIZATIONREQUEST_HPP

namespace sdk::proto {

namespace CMsgRemoteDeviceAuthorizationRequest_fields {

    enum class EKeyEscrowUsage : int {
        k_EKeyEscrowUsageStreamingDevice = 0,
    };

    namespace CKeyEscrow_Ticket {
        constexpr int password = 1;
        constexpr int identifier = 2;
        constexpr int payload = 3;
        constexpr int timestamp = 4;
        constexpr int usage = 5;
        constexpr int device_name = 6;
        constexpr int device_model = 7;
        constexpr int device_serial = 8;
        constexpr int device_provisioning_id = 9;
    } // namespace CKeyEscrow_Ticket

    constexpr int device_token = 1;
    constexpr int device_name = 2;
    constexpr int encrypted_request = 3;
    constexpr int auth_key = 4;
    constexpr int request_id = 5;

} // namespace CMsgRemoteDeviceAuthorizationRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTEDEVICEAUTHORIZATIONREQUEST_HPP

