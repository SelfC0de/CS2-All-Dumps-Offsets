// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CRecordedInput
// Module: steamclient64.dll
// Proto file: steammessages_remoteplay.proto
#pragma once
#ifndef SDK_PROTO_CRECORDEDINPUT_HPP
#define SDK_PROTO_CRECORDEDINPUT_HPP

namespace sdk::proto {

struct CInputKeyDownMsg;
struct CInputKeyUpMsg;
struct CInputMouseDownMsg;
struct CInputMouseMotionMsg;
struct CInputMouseUpMsg;
struct CInputMouseWheelMsg;
struct CInputTextMsg;
struct CInputTouchFingerDownMsg;
struct CInputTouchFingerMotionMsg;
struct CInputTouchFingerUpMsg;
struct CRemoteHIDMsg;

namespace CRecordedInput_fields {

    constexpr int type = 1;
    constexpr int timestamp = 2;

    // oneof data
    constexpr int finger_down = 3;
    constexpr int finger_motion = 4;
    constexpr int finger_up = 5;
    constexpr int mouse_motion = 6;
    constexpr int mouse_wheel = 7;
    constexpr int mouse_down = 8;
    constexpr int mouse_up = 9;
    constexpr int key_down = 10;
    constexpr int key_up = 11;
    constexpr int text = 12;
    constexpr int hid = 13;

} // namespace CRecordedInput_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CRECORDEDINPUT_HPP

