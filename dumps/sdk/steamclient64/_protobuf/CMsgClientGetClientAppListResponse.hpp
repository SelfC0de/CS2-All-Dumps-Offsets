// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientGetClientAppListResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_uds.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTGETCLIENTAPPLISTRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTGETCLIENTAPPLISTRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientGetClientAppListResponse_App;
struct CMsgClientGetClientDetailsResponse;

namespace CMsgClientGetClientAppListResponse_fields {

    namespace App {
        namespace DLC {
            constexpr int appid = 1;
            constexpr int installed = 2;
        } // namespace DLC

        constexpr int appid = 1;
        constexpr int category = 2;
        constexpr int app_type = 10;
        constexpr int favorite = 3;
        constexpr int installed = 4;
        constexpr int auto_update = 5;
        constexpr int bytes_downloaded = 6;
        constexpr int bytes_to_download = 7;
        constexpr int bytes_download_rate = 8;
        constexpr int dlcs = 9;
        constexpr int download_paused = 11;
        constexpr int num_downloading = 12;
        constexpr int changing = 14;
        constexpr int available_on_platform = 15;
        constexpr int bytes_staged = 16;
        constexpr int bytes_to_stage = 17;
        constexpr int bytes_required = 18;
        constexpr int source_buildid = 19;
        constexpr int target_buildid = 20;
        constexpr int estimated_seconds_remaining = 21;
        constexpr int queue_position = 22;
        constexpr int uninstalling = 23;
        constexpr int rt_time_scheduled = 24;
        constexpr int running = 25;
        constexpr int update_percentage = 26;
    } // namespace App

    constexpr int apps = 1;
    constexpr int bytes_available = 2;
    constexpr int client_info = 3;

} // namespace CMsgClientGetClientAppListResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTGETCLIENTAPPLISTRESPONSE_HPP

