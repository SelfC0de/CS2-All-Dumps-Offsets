// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSVCMsg_GameEvent
// Module: host.dll
// Proto file: networkbasetypes.proto
#pragma once
#ifndef SDK_PROTO_CSVCMSG_GAMEEVENT_HPP
#define SDK_PROTO_CSVCMSG_GAMEEVENT_HPP

namespace sdk::proto {

struct CSVCMsg_GameEvent_key_t;

namespace CSVCMsg_GameEvent_fields {

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

} // namespace CSVCMsg_GameEvent_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSVCMSG_GAMEEVENT_HPP

