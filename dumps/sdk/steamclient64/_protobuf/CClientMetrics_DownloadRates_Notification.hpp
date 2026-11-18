// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CClientMetrics_DownloadRates_Notification
// Module: steamclient64.dll
// Proto file: steammessages_clientmetrics.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCLIENTMETRICS_DOWNLOADRATES_NOTIFICATION_HPP
#define SDK_PROTO_CCLIENTMETRICS_DOWNLOADRATES_NOTIFICATION_HPP

namespace sdk::proto {

struct CClientMetrics_DownloadRates_Notification_StatsInfo;

namespace CClientMetrics_DownloadRates_Notification_fields {

    namespace StatsInfo {
        constexpr int source_type = 1;
        constexpr int source_id = 2;
        constexpr int bytes = 3;
        constexpr int host_name = 4;
        constexpr int microseconds = 5;
        constexpr int used_ipv6 = 6;
        constexpr int proxied = 7;
        constexpr int used_http2 = 8;
        constexpr int cache_hits = 9;
        constexpr int cache_misses = 10;
        constexpr int hit_bytes = 11;
        constexpr int miss_bytes = 12;
        constexpr int chunks_scored = 13;
        constexpr int sum_chunk_scores = 14;
    } // namespace StatsInfo

    constexpr int cell_id = 1;
    constexpr int stats = 2;
    constexpr int throttling_kbps = 3;
    constexpr int os_type = 4;
    constexpr int device_type = 5;

} // namespace CClientMetrics_DownloadRates_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCLIENTMETRICS_DOWNLOADRATES_NOTIFICATION_HPP

