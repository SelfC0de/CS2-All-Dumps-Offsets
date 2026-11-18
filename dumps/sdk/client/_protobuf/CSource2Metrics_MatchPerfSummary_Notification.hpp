// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSource2Metrics_MatchPerfSummary_Notification
// Module: client.dll
// Proto file: source2_steam_stats.proto
#pragma once
#ifndef SDK_PROTO_CSOURCE2METRICS_MATCHPERFSUMMARY_NOTIFICATION_HPP
#define SDK_PROTO_CSOURCE2METRICS_MATCHPERFSUMMARY_NOTIFICATION_HPP

namespace sdk::proto {

struct CMsgSource2VProfLiteReport;
struct CSource2Metrics_MatchPerfSummary_Notification_Client;

namespace CSource2Metrics_MatchPerfSummary_Notification_fields {

    namespace Client {
        constexpr int system_specs = 1;
        constexpr int profile = 2;
        constexpr int build_id = 3;
        constexpr int downstream_flow = 4;
        constexpr int upstream_flow = 5;
        constexpr int steamid = 10;
        constexpr int perf_samples = 11;
    } // namespace Client

    constexpr int appid = 1;
    constexpr int game_mode = 2;
    constexpr int server_build_id = 3;
    constexpr int server_popid = 4;
    constexpr int server_profile = 10;
    constexpr int clients = 11;
    constexpr int map = 20;

} // namespace CSource2Metrics_MatchPerfSummary_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSOURCE2METRICS_MATCHPERFSUMMARY_NOTIFICATION_HPP

