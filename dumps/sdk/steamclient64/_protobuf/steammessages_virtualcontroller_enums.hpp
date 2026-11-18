// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_virtualcontroller.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_VIRTUALCONTROLLER_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_VIRTUALCONTROLLER_ENUMS_HPP

namespace sdk::proto {

enum class EInputMode : int {
    k_EInputModeUnknown = 0,
    k_EInputModeMouse = 1,
    k_EInputModeController = 2,
    k_EInputModeMouseAndController = 3,
};

enum class EMouseMode : int {
    k_EMouseModeUnknown = 0,
    k_EMouseModeRelativeCursor_OBSOLETE = 1,
    k_EMouseModeAbsoluteCursor = 2,
    k_EMouseModeTouch = 3,
    k_EMouseModeRelative = 4,
};

enum class EControllerElementType : int {
    k_EControllerElementTypeNone = -1,
    k_EControllerElementTypeThumb = 0,
    k_EControllerElementTypeButtonSteam = 1,
    k_EControllerElementTypeJoystickLeft = 2,
    k_EControllerElementTypeButtonJoystickLeft = 3,
    k_EControllerElementTypeJoystickRight = 4,
    k_EControllerElementTypeButtonJoystickRight = 5,
    k_EControllerElementTypeDPad = 6,
    k_EControllerElementTypeButtonA = 7,
    k_EControllerElementTypeButtonB = 8,
    k_EControllerElementTypeButtonX = 9,
    k_EControllerElementTypeButtonY = 10,
    k_EControllerElementTypeButtonSelect = 11,
    k_EControllerElementTypeButtonStart = 12,
    k_EControllerElementTypeButtonTriggerLeft = 13,
    k_EControllerElementTypeButtonTriggerRight = 14,
    k_EControllerElementTypeButtonBumperLeft = 15,
    k_EControllerElementTypeButtonBumperRight = 16,
    k_EControllerElementTypeButtonMacro0 = 17,
    k_EControllerElementTypeButtonMacro1 = 18,
    k_EControllerElementTypeButtonMacro2 = 19,
    k_EControllerElementTypeButtonMacro3 = 20,
    k_EControllerElementTypeButtonMacro4 = 21,
    k_EControllerElementTypeButtonMacro5 = 22,
    k_EControllerElementTypeButtonMacro6 = 23,
    k_EControllerElementTypeButtonMacro7 = 24,
    k_EControllerElementTypeTrackpadCenter = 25,
    k_EControllerElementTypeTrackpadLeft = 26,
    k_EControllerElementTypeTrackpadRight = 27,
    k_EControllerElementTypeKeyboard = 28,
    k_EControllerElementTypeMagnifyingGlass = 29,
    k_EControllerElementTypeButtonMacro1Finger = 30,
    k_EControllerElementTypeButtonMacro2Finger = 31,
    k_EControllerElementTypeRecordInput = 32,
    k_EControllerElementTypePlaybackInput = 33,
    k_EControllerElementTypePaste = 34,
    k_EControllerElementTypeMax = 35,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_VIRTUALCONTROLLER_ENUMS_HPP

