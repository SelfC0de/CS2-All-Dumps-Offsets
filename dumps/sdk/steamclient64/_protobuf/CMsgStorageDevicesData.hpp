// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgStorageDevicesData
// Module: steamclient64.dll
// Proto file: steammessages_client_objects.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTORAGEDEVICESDATA_HPP
#define SDK_PROTO_CMSGSTORAGEDEVICESDATA_HPP

namespace sdk::proto {

struct CMsgStorageDevicesData_BlockDevice;
struct CMsgStorageDevicesData_Drive;

namespace CMsgStorageDevicesData_fields {

    namespace Drive {
        constexpr int id = 1;
        constexpr int model = 2;
        constexpr int vendor = 3;
        constexpr int serial = 4;
        constexpr int is_ejectable = 5;
        constexpr int size_bytes = 6;
        constexpr int media_type = 7;
    } // namespace Drive

    namespace BlockDevice {
        constexpr int id = 1;
        constexpr int drive_id = 2;
        constexpr int path = 3;
        constexpr int friendly_path = 4;
        constexpr int label = 5;
        constexpr int size_bytes = 6;
        constexpr int is_formattable = 7;
        constexpr int is_read_only = 8;
        constexpr int is_root_device = 9;
        constexpr int content_type = 10;
        constexpr int filesystem_type = 11;
        constexpr int mount_path = 12;
    } // namespace BlockDevice

    constexpr int drives = 1;
    constexpr int block_devices = 2;
    constexpr int is_unmount_supported = 3;
    constexpr int is_trim_supported = 4;
    constexpr int is_trim_running = 5;

} // namespace CMsgStorageDevicesData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTORAGEDEVICESDATA_HPP

