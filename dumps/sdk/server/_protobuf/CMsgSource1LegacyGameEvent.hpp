// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSource1LegacyGameEvent
// Module: server.dll
// Proto file: gameevents.proto
#pragma once
#ifndef SDK_PROTO_CMSGSOURCE1LEGACYGAMEEVENT_HPP
#define SDK_PROTO_CMSGSOURCE1LEGACYGAMEEVENT_HPP

namespace sdk::proto {

struct CMsgSource1LegacyGameEvent_key_t;

namespace CMsgSource1LegacyGameEvent_fields {

    namespace key_t {
        constexpr int type = 1;
        constexpr int val_string = 2;
        constexpr int val_float = 3;
        constexpr int val_long = 4;
        constexpr int val_short = 5;
        constexpr int val_byte = 6;
        constexpr int val_bool = 7;
        constexpr int val_uint64 = 8;
    } // namespace key_t

    constexpr int event_name = 1;
    constexpr int eventid = 2;
    constexpr int keys = 3;
    constexpr int server_tick = 4;
    constexpr int passthrough = 5;

} // namespace CMsgSource1LegacyGameEvent_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSOURCE1LEGACYGAMEEVENT_HPP

