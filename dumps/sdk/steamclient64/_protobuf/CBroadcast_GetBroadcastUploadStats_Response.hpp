// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBroadcast_GetBroadcastUploadStats_Response
// Module: steamclient64.dll
// Proto file: steammessages_broadcast.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CBROADCAST_GETBROADCASTUPLOADSTATS_RESPONSE_HPP
#define SDK_PROTO_CBROADCAST_GETBROADCASTUPLOADSTATS_RESPONSE_HPP

namespace sdk::proto {

struct CBroadcast_GetBroadcastUploadStats_Response_UploadStats;

namespace CBroadcast_GetBroadcastUploadStats_Response_fields {

    namespace UploadStats {
        constexpr int upload_result = 1;
        constexpr int time_stopped = 2;
        constexpr int seconds_uploaded = 3;
        constexpr int max_viewers = 4;
        constexpr int resolution_x = 5;
        constexpr int resolution_y = 6;
        constexpr int avg_bandwidth = 7;
        constexpr int total_bytes = 8;
        constexpr int app_id = 9;
        constexpr int total_unique_viewers = 10;
        constexpr int total_seconds_watched = 11;
        constexpr int time_started = 12;
        constexpr int upload_id = 13;
        constexpr int local_address = 14;
        constexpr int remote_address = 15;
        constexpr int frames_per_second = 16;
        constexpr int num_representations = 17;
        constexpr int app_name = 18;
        constexpr int is_replay = 19;
        constexpr int session_id = 20;
    } // namespace UploadStats

    constexpr int upload_stats = 1;

} // namespace CBroadcast_GetBroadcastUploadStats_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBROADCAST_GETBROADCASTUPLOADSTATS_RESPONSE_HPP

