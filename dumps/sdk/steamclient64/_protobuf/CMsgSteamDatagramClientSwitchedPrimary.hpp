// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramClientSwitchedPrimary
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP

namespace sdk::proto {

struct CMsgSteamDatagramClientSwitchedPrimary_RouterQuality;

namespace CMsgSteamDatagramClientSwitchedPrimary_fields {

    enum class EMigrateRequest : int {
        k_EMigrateRequest_Unknown = 0,
        k_EMigrateRequest_None = 1,
        k_EMigrateRequest_ObeyedTarget = 2,
        k_EMigrateRequest_ChoseDifferent = 3,
    };

    namespace RouterQuality {
        constexpr int score = 1;
        constexpr int front_ping = 2;
        constexpr int back_ping = 3;
        constexpr int seconds_until_down = 4;
    } // namespace RouterQuality

    constexpr int connection_id = 1;
    constexpr int from_ip = 2;
    constexpr int from_port = 3;
    constexpr int from_router_cluster = 4;
    constexpr int from_active_time = 5;
    constexpr int from_active_packets_recv = 6;
    constexpr int from_dropped_reason = 7;
    constexpr int gap_ms = 8;
    constexpr int from_quality_now = 9;
    constexpr int to_quality_now = 10;
    constexpr int from_quality_then = 11;
    constexpr int to_quality_then = 12;
    constexpr int from_migrate_request = 13;

} // namespace CMsgSteamDatagramClientSwitchedPrimary_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP

