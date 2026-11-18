// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CClientMetrics_GamePerformance_Notification
// Module: steamclient64.dll
// Proto file: steammessages_clientmetrics.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCLIENTMETRICS_GAMEPERFORMANCE_NOTIFICATION_HPP
#define SDK_PROTO_CCLIENTMETRICS_GAMEPERFORMANCE_NOTIFICATION_HPP

namespace sdk::proto {

struct CClientMetrics_GamePerformance_Notification_FrameRate;
struct UserSystemInformation;

namespace CClientMetrics_GamePerformance_Notification_fields {

    namespace FrameRate {
        constexpr int gameid = 1;
        constexpr int frame_rate = 2;
        constexpr int session_seconds = 3;
        constexpr int framegen_frame_rate = 4;
        constexpr int game_settings = 5;
        constexpr int seconds_since_active = 6;
        constexpr int frame_rate_limit = 7;
    } // namespace FrameRate

    constexpr int frame_rates = 2;
    constexpr int system_info = 3;

} // namespace CClientMetrics_GamePerformance_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCLIENTMETRICS_GAMEPERFORMANCE_NOTIFICATION_HPP

