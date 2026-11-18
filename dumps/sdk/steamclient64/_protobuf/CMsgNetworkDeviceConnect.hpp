// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgNetworkDeviceConnect
// Module: steamclient64.dll
// Proto file: steammessages_client_objects.proto
#pragma once
#ifndef SDK_PROTO_CMSGNETWORKDEVICECONNECT_HPP
#define SDK_PROTO_CMSGNETWORKDEVICECONNECT_HPP

namespace sdk::proto {

struct CMsgNetworkDeviceConnect_Credentials;
struct CMsgNetworkDeviceConnect_CustomAP;
struct CMsgNetworkDeviceConnect_KnownAP;
struct CMsgNetworkDeviceConnect_Wireless;
struct CMsgNetworkDeviceIP4Config;
struct CMsgNetworkDeviceIP6Config;

namespace CMsgNetworkDeviceConnect_fields {

    namespace KnownAP {
        constexpr int ap_id = 1;
    } // namespace KnownAP

    namespace CustomAP {
        constexpr int ssid = 1;
        constexpr int esecurity = 2;
    } // namespace CustomAP

    namespace Credentials {
        constexpr int username = 1;
        constexpr int password = 2;
    } // namespace Credentials

    namespace Wireless {
        constexpr int band_filter = 1;
    } // namespace Wireless

    constexpr int device_id = 1;
    constexpr int credentials = 4;
    constexpr int ip4 = 5;
    constexpr int ip6 = 6;
    constexpr int wireless = 7;

    // oneof ap_info
    constexpr int ap_known = 2;
    constexpr int ap_custom = 3;

} // namespace CMsgNetworkDeviceConnect_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGNETWORKDEVICECONNECT_HPP

