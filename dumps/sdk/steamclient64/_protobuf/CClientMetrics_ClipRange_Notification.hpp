// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CClientMetrics_ClipRange_Notification
// Module: steamclient64.dll
// Proto file: steammessages_clientmetrics.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCLIENTMETRICS_CLIPRANGE_NOTIFICATION_HPP
#define SDK_PROTO_CCLIENTMETRICS_CLIPRANGE_NOTIFICATION_HPP

namespace sdk::proto {

struct CClientMetrics_ClipRange_Notification_RelativeRangeEdge;

namespace CClientMetrics_ClipRange_Notification_fields {

    namespace RelativeRangeEdge {
        constexpr int original_range_method = 1;
        constexpr int latest_range_method = 2;
        constexpr int delta_ms = 3;
    } // namespace RelativeRangeEdge

    constexpr int original_range_method = 1;
    constexpr int start = 2;
    constexpr int end = 3;
    constexpr int seconds = 4;
    constexpr int gameid = 5;

} // namespace CClientMetrics_ClipRange_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCLIENTMETRICS_CLIPRANGE_NOTIFICATION_HPP

