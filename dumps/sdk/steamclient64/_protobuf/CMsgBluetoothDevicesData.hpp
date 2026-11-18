// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgBluetoothDevicesData
// Module: steamclient64.dll
// Proto file: steammessages_client_objects.proto
#pragma once
#ifndef SDK_PROTO_CMSGBLUETOOTHDEVICESDATA_HPP
#define SDK_PROTO_CMSGBLUETOOTHDEVICESDATA_HPP

namespace sdk::proto {

struct CMsgBluetoothDevicesData_Adapter;
struct CMsgBluetoothDevicesData_Device;
struct CMsgBluetoothDevicesData_Manager;

namespace CMsgBluetoothDevicesData_fields {

    namespace Adapter {
        constexpr int id = 1;
        constexpr int mac = 2;
        constexpr int name = 3;
        constexpr int is_enabled = 4;
        constexpr int is_discovering = 5;
    } // namespace Adapter

    namespace Device {
        constexpr int id = 1;
        constexpr int adapter_id = 2;
        constexpr int etype = 3;
        constexpr int mac = 4;
        constexpr int name = 5;
        constexpr int is_connected = 6;
        constexpr int is_paired = 7;
        constexpr int strength_raw = 8;
        constexpr int wake_allowed = 9;
        constexpr int wake_allowed_supported = 10;
        constexpr int battery_percent = 11;
    } // namespace Device

    namespace Manager {
        constexpr int is_bluetooth_enabled = 1;
    } // namespace Manager

    constexpr int adapters = 1;
    constexpr int devices = 2;
    constexpr int manager = 3;

} // namespace CMsgBluetoothDevicesData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGBLUETOOTHDEVICESDATA_HPP

