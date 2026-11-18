// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBidirMsg_PredictionEvent
// Module: networksystem.dll
// Proto file: netmessages.proto
#pragma once
#ifndef SDK_PROTO_CBIDIRMSG_PREDICTIONEVENT_HPP
#define SDK_PROTO_CBIDIRMSG_PREDICTIONEVENT_HPP

namespace sdk::proto {

namespace CBidirMsg_PredictionEvent_fields {

    enum class ESyncType : int {
        ST_Tick = 0,
        ST_UserCmdNum = 1,
    };

    constexpr int event_id = 1;
    constexpr int event_data = 2;
    constexpr int sync_type = 3;
    constexpr int sync_val_uint32 = 4;

} // namespace CBidirMsg_PredictionEvent_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBIDIRMSG_PREDICTIONEVENT_HPP

