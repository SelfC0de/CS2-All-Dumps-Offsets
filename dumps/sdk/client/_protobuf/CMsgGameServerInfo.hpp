// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgGameServerInfo
// Module: client.dll
// Proto file: base_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGGAMESERVERINFO_HPP
#define SDK_PROTO_CMSGGAMESERVERINFO_HPP

namespace sdk::proto {

namespace CMsgGameServerInfo_fields {

    enum class ServerType : int {
        UNSPECIFIED = 0,
        GAME = 1,
        PROXY = 2,
    };

    constexpr int server_public_ip_addr = 1;
    constexpr int server_private_ip_addr = 2;
    constexpr int server_port = 3;
    constexpr int server_tv_port = 4;
    constexpr int server_key = 5;
    constexpr int server_hibernation = 6;
    constexpr int server_type = 7;
    constexpr int server_region = 8;
    constexpr int server_loadavg = 9;
    constexpr int server_tv_broadcast_time = 10;
    constexpr int server_game_time = 11;
    constexpr int server_relay_connected_steam_id = 12;
    constexpr int relay_slots_max = 13;
    constexpr int relays_connected = 14;
    constexpr int relay_clients_connected = 15;
    constexpr int relayed_game_server_steam_id = 16;
    constexpr int parent_relay_count = 17;
    constexpr int tv_secret_code = 18;

} // namespace CMsgGameServerInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGGAMESERVERINFO_HPP

