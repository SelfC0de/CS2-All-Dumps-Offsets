// Auto-generated protobuf field constants — DO NOT EDIT
// Message: AppUpdateInfo
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient.proto
#pragma once
#ifndef SDK_PROTO_APPUPDATEINFO_HPP
#define SDK_PROTO_APPUPDATEINFO_HPP

namespace sdk::proto {

struct AppStageProgress;

namespace AppUpdateInfo_fields {

    constexpr int time_update_start = 1;
    constexpr int bytes_to_download = 2;
    constexpr int bytes_downloaded = 3;
    constexpr int bytes_to_process = 4;
    constexpr int bytes_processed = 5;
    constexpr int estimated_seconds_remaining = 6;
    constexpr int update_result = 7;
    constexpr int update_state = 8;
    constexpr int download_type = 9;
    constexpr int staging_bytes_staged = 10;
    constexpr int staging_bytes_to_stage = 11;
    constexpr int bytes_to_disc_per_second = 12;
    constexpr int progress_weights = 13;
    constexpr int time_deferred_until = 14;
    constexpr int source_build_id = 15;
    constexpr int target_build_id = 16;

} // namespace AppUpdateInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_APPUPDATEINFO_HPP

