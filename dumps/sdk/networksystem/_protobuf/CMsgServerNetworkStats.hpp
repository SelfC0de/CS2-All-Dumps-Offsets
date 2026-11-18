// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgServerNetworkStats
// Module: networksystem.dll
// Proto file: netmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSERVERNETWORKSTATS_HPP
#define SDK_PROTO_CMSGSERVERNETWORKSTATS_HPP

namespace sdk::proto {

struct CMsgServerNetworkStats_Player;
struct CMsgServerNetworkStats_Port;

namespace CMsgServerNetworkStats_fields {

    namespace Port {
        constexpr int port = 1;
        constexpr int name = 2;
    } // namespace Port

    namespace Player {
        constexpr int steamid = 1;
        constexpr int remote_addr = 2;
        constexpr int ping_avg_ms = 4;
        constexpr int packet_loss_pct = 5;
        constexpr int is_bot = 6;
        constexpr int loss_in = 7;
        constexpr int loss_out = 8;
        constexpr int engine_latency_ms = 9;
    } // namespace Player

    constexpr int dedicated = 1;
    constexpr int cpu_usage = 2;
    constexpr int memory_used_mb = 3;
    constexpr int memory_free_mb = 4;
    constexpr int uptime = 5;
    constexpr int spawn_count = 6;
    constexpr int num_clients = 8;
    constexpr int num_bots = 9;
    constexpr int num_spectators = 10;
    constexpr int num_tv_relays = 11;
    constexpr int fps = 12;
    constexpr int ports = 17;
    constexpr int avg_ping_ms = 18;
    constexpr int avg_engine_latency_out = 19;
    constexpr int avg_packets_out = 20;
    constexpr int avg_packets_in = 21;
    constexpr int avg_loss_out = 22;
    constexpr int avg_loss_in = 23;
    constexpr int avg_data_out = 24;
    constexpr int avg_data_in = 25;
    constexpr int total_data_in = 26;
    constexpr int total_packets_in = 27;
    constexpr int total_data_out = 28;
    constexpr int total_packets_out = 29;
    constexpr int players = 30;

} // namespace CMsgServerNetworkStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSERVERNETWORKSTATS_HPP

