// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: clientmessages.proto
// Module: client.dll
#pragma once
#ifndef SDK_PROTO_CLIENTMESSAGES_ENUMS_HPP
#define SDK_PROTO_CLIENTMESSAGES_ENUMS_HPP

namespace sdk::proto {

enum class EBaseClientMessages : int {
    CM_CustomGameEvent = 280,
    CM_CustomGameEventBounce = 281,
    CM_ClientUIEvent = 282,
    CM_DevPaletteVisibilityChanged = 283,
    CM_WorldUIControllerHasPanelChanged = 284,
    CM_RotateAnchor = 285,
    CM_MAX_BASE = 300,
};

enum class EClientUIEvent : int {
    EClientUIEvent_Invalid = 0,
    EClientUIEvent_DialogFinished = 1,
    EClientUIEvent_FireOutput = 2,
};

} // namespace sdk::proto

#endif // SDK_PROTO_CLIENTMESSAGES_ENUMS_HPP

