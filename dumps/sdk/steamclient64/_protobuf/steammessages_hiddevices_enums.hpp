// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_hiddevices.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_HIDDEVICES_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_HIDDEVICES_ENUMS_HPP

namespace sdk::proto {

enum class EHIDDeviceLocation : int {
    k_EDeviceLocationLocal = 0,
    k_EDeviceLocationRemote = 2,
    k_EDeviceLocationAny = 3,
};

enum class EHIDDeviceDisconnectMethod : int {
    k_EDeviceDisconnectMethodUnknown = 0,
    k_EDeviceDisconnectMethodBluetooth = 1,
    k_EDeviceDisconnectMethodFeatureReport = 2,
    k_EDeviceDisconnectMethodOutputReport = 3,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_HIDDEVICES_ENUMS_HPP

