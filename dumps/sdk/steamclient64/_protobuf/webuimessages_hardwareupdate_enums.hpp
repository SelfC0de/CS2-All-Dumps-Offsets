// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: webuimessages_hardwareupdate.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_WEBUIMESSAGES_HARDWAREUPDATE_ENUMS_HPP
#define SDK_PROTO_WEBUIMESSAGES_HARDWAREUPDATE_ENUMS_HPP

namespace sdk::proto {

enum class EHardwareUpdateDeviceType : int {
    Triton_BL = 0,
    Proteus_BL = 1,
    Triton_USB = 2,
    Triton_BLE = 3,
    Triton_ESB = 4,
    Proteus_USB = 5,
    Nereid_USB = 6,
};

enum class EHardwareUpdatePriority : int {
    Low = 0,
    Normal = 1,
    Suggested = 2,
    Required = 3,
};

} // namespace sdk::proto

#endif // SDK_PROTO_WEBUIMESSAGES_HARDWAREUPDATE_ENUMS_HPP

