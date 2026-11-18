// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgNetworkDevicesData
// Module: steamclient64.dll
// Proto file: steammessages_client_objects.proto
#pragma once
#ifndef SDK_PROTO_CMSGNETWORKDEVICESDATA_HPP
#define SDK_PROTO_CMSGNETWORKDEVICESDATA_HPP

namespace sdk::proto {

struct CMsgNetworkDevicesData_Device;

namespace CMsgNetworkDevicesData_fields {

    namespace Device {
        namespace Wired {
            constexpr int is_cable_present = 1;
            constexpr int speed_mbit = 2;
            constexpr int friendly_name = 3;
        } // namespace Wired

        namespace Wireless {
            namespace AP {
                constexpr int id = 1;
                constexpr int estrength = 2;
                constexpr int ssid = 3;
                constexpr int is_active = 4;
                constexpr int is_autoconnect = 5;
                constexpr int esecurity = 6;
                constexpr int user_name = 7;
                constexpr int password = 8;
                constexpr int strength_raw = 9;
                constexpr int band_filter = 10;
                constexpr int has_non_6ghz_channel = 11;
                constexpr int is_saved = 12;
            } // namespace AP

            constexpr int aps = 1;
            constexpr int esecurity_supported = 2;
        } // namespace Wireless

        constexpr int id = 1;
        constexpr int etype = 2;
        constexpr int estate = 3;
        constexpr int mac = 4;
        constexpr int vendor = 5;
        constexpr int product = 6;
        constexpr int ip4 = 7;
        constexpr int ip6 = 8;
        constexpr int wired = 9;
        constexpr int wireless = 10;
    } // namespace Device

    constexpr int devices = 1;
    constexpr int is_wifi_enabled = 2;
    constexpr int is_wifi_scanning_enabled = 3;

} // namespace CMsgNetworkDevicesData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGNETWORKDEVICESDATA_HPP

