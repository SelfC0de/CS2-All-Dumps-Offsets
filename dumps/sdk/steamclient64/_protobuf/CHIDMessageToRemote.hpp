// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CHIDMessageToRemote
// Module: steamclient64.dll
// Proto file: steammessages_hiddevices.proto
#pragma once
#ifndef SDK_PROTO_CHIDMESSAGETOREMOTE_HPP
#define SDK_PROTO_CHIDMESSAGETOREMOTE_HPP

namespace sdk::proto {

struct CHIDMessageToRemote_DeviceClose;
struct CHIDMessageToRemote_DeviceDisconnect;
struct CHIDMessageToRemote_DeviceGetFeatureReport;
struct CHIDMessageToRemote_DeviceGetProductString;
struct CHIDMessageToRemote_DeviceGetSerialNumberString;
struct CHIDMessageToRemote_DeviceGetVendorString;
struct CHIDMessageToRemote_DeviceOpen;
struct CHIDMessageToRemote_DeviceRead;
struct CHIDMessageToRemote_DeviceRequestFullReport;
struct CHIDMessageToRemote_DeviceSendFeatureReport;
struct CHIDMessageToRemote_DeviceStartInputReports;
struct CHIDMessageToRemote_DeviceWrite;

namespace CHIDMessageToRemote_fields {

    namespace DeviceOpen {
        constexpr int info = 1;
    } // namespace DeviceOpen

    namespace DeviceClose {
        constexpr int device = 1;
    } // namespace DeviceClose

    namespace DeviceWrite {
        constexpr int device = 1;
        constexpr int data = 2;
    } // namespace DeviceWrite

    namespace DeviceRead {
        constexpr int device = 1;
        constexpr int length = 2;
        constexpr int timeout_ms = 3;
    } // namespace DeviceRead

    namespace DeviceSendFeatureReport {
        constexpr int device = 1;
        constexpr int data = 2;
    } // namespace DeviceSendFeatureReport

    namespace DeviceGetFeatureReport {
        constexpr int device = 1;
        constexpr int report_number = 2;
        constexpr int length = 3;
    } // namespace DeviceGetFeatureReport

    namespace DeviceGetVendorString {
        constexpr int device = 1;
    } // namespace DeviceGetVendorString

    namespace DeviceGetProductString {
        constexpr int device = 1;
    } // namespace DeviceGetProductString

    namespace DeviceGetSerialNumberString {
        constexpr int device = 1;
    } // namespace DeviceGetSerialNumberString

    namespace DeviceStartInputReports {
        constexpr int device = 1;
        constexpr int length = 2;
    } // namespace DeviceStartInputReports

    namespace DeviceRequestFullReport {
        constexpr int device = 1;
    } // namespace DeviceRequestFullReport

    namespace DeviceDisconnect {
        constexpr int device = 1;
        constexpr int disconnectMethod = 2;
        constexpr int data = 3;
    } // namespace DeviceDisconnect

    constexpr int request_id = 1;

    // oneof command
    constexpr int device_open = 2;
    constexpr int device_close = 3;
    constexpr int device_write = 4;
    constexpr int device_read = 5;
    constexpr int device_send_feature_report = 6;
    constexpr int device_get_feature_report = 7;
    constexpr int device_get_vendor_string = 8;
    constexpr int device_get_product_string = 9;
    constexpr int device_get_serial_number_string = 10;
    constexpr int device_start_input_reports = 11;
    constexpr int device_request_full_report = 12;
    constexpr int device_disconnect = 13;

} // namespace CHIDMessageToRemote_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CHIDMESSAGETOREMOTE_HPP

