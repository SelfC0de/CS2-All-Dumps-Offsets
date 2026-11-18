// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CHIDMessageFromRemote
// Module: steamclient64.dll
// Proto file: steammessages_hiddevices.proto
#pragma once
#ifndef SDK_PROTO_CHIDMESSAGEFROMREMOTE_HPP
#define SDK_PROTO_CHIDMESSAGEFROMREMOTE_HPP

namespace sdk::proto {

struct CHIDMessageFromRemote_CloseAllDevices;
struct CHIDMessageFromRemote_CloseDevice;
struct CHIDMessageFromRemote_DeviceInputReports;
struct CHIDMessageFromRemote_RequestResponse;
struct CHIDMessageFromRemote_UpdateDeviceList;

namespace CHIDMessageFromRemote_fields {

    namespace UpdateDeviceList {
        constexpr int devices = 1;
    } // namespace UpdateDeviceList

    namespace RequestResponse {
        constexpr int request_id = 1;
        constexpr int result = 2;
        constexpr int data = 3;
    } // namespace RequestResponse

    namespace DeviceInputReports {
        namespace DeviceInputReport {
            constexpr int device = 1;
            constexpr int reports = 2;
        } // namespace DeviceInputReport

        constexpr int device_reports = 1;
    } // namespace DeviceInputReports

    namespace CloseDevice {
        constexpr int device = 1;
    } // namespace CloseDevice

    namespace CloseAllDevices {
    } // namespace CloseAllDevices


    // oneof command
    constexpr int update_device_list = 1;
    constexpr int response = 2;
    constexpr int reports = 3;
    constexpr int close_device = 4;
    constexpr int close_all_devices = 5;

} // namespace CHIDMessageFromRemote_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CHIDMESSAGEFROMREMOTE_HPP

