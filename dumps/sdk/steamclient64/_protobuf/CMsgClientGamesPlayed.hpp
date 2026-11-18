// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientGamesPlayed
// Module: steamclient64.dll
// Proto file: steammessages_clientserver.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTGAMESPLAYED_HPP
#define SDK_PROTO_CMSGCLIENTGAMESPLAYED_HPP

namespace sdk::proto {

struct CMsgClientGamesPlayed_GamePlayed;

namespace CMsgClientGamesPlayed_fields {

    namespace ProcessInfo {
        constexpr int process_id = 1;
        constexpr int process_id_parent = 2;
        constexpr int parent_is_steam = 3;
    } // namespace ProcessInfo

    namespace GamePlayed {
        constexpr int steam_id_gs = 1;
        constexpr int game_id = 2;
        constexpr int deprecated_game_ip_address = 3;
        constexpr int game_port = 4;
        constexpr int is_secure = 5;
        constexpr int token = 6;
        constexpr int game_extra_info = 7;
        constexpr int game_data_blob = 8;
        constexpr int process_id = 9;
        constexpr int streaming_provider_id = 10;
        constexpr int game_flags = 11;
        constexpr int owner_id = 12;
        constexpr int vr_hmd_vendor = 13;
        constexpr int vr_hmd_model = 14;
        constexpr int launch_option_type = 15;
        constexpr int primary_controller_type = 16;
        constexpr int primary_steam_controller_serial = 17;
        constexpr int total_steam_controller_count = 18;
        constexpr int total_non_steam_controller_count = 19;
        constexpr int controller_workshop_file_id = 20;
        constexpr int launch_source = 21;
        constexpr int vr_hmd_runtime = 22;
        constexpr int game_ip_address = 23;
        constexpr int controller_connection_type = 24;
        constexpr int game_os_platform = 25;
        constexpr int game_build_id = 26;
        constexpr int compat_tool_id = 27;
        constexpr int compat_tool_cmd = 28;
        constexpr int compat_tool_build_id = 29;
        constexpr int beta_name = 30;
        constexpr int dlc_context = 31;
        constexpr int process_id_list = 32;
    } // namespace GamePlayed

    constexpr int games_played = 1;
    constexpr int client_os_type = 2;
    constexpr int cloud_gaming_platform = 3;
    constexpr int recent_reauthentication = 4;

} // namespace CMsgClientGamesPlayed_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTGAMESPLAYED_HPP

