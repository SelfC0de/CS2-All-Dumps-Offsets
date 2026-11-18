// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CVirtualControllerConfig
// Module: steamclient64.dll
// Proto file: steammessages_virtualcontroller.proto
#pragma once
#ifndef SDK_PROTO_CVIRTUALCONTROLLERCONFIG_HPP
#define SDK_PROTO_CVIRTUALCONTROLLERCONFIG_HPP

namespace sdk::proto {

struct CVirtualControllerConfig_ActionSet;

namespace CVirtualControllerConfig_fields {

    namespace Control {
        constexpr int name = 1;
        constexpr int icon = 2;
        constexpr int input_source = 3;
        constexpr int input_mode = 4;
        constexpr int input_element = 5;
        constexpr int output_gamepad = 6;
        constexpr int output_keyboard = 7;
        constexpr int output_mouse = 8;
        constexpr int icon_foreground = 9;
        constexpr int icon_background = 10;
        constexpr int input_toggle = 11;
        constexpr int input_activate_stick_or_trackpad = 12;
        constexpr int activation_type = 13;
        constexpr int long_press_ms = 14;
        constexpr int double_press_ms = 15;
    } // namespace Control

    namespace ActionSet {
        constexpr int id = 1;
        constexpr int parent_id = 2;
        constexpr int name = 3;
        constexpr int controls = 4;
    } // namespace ActionSet

    constexpr int name = 1;
    constexpr int actionsets = 2;
    constexpr int default_mouse_mode = 3;

} // namespace CVirtualControllerConfig_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CVIRTUALCONTROLLERCONFIG_HPP

