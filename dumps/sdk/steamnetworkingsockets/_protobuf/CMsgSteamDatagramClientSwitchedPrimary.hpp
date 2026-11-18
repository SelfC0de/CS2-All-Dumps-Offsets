// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramClientSwitchedPrimary
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP

namespace sdk::proto {

struct CMsgSteamDatagramClientSwitchedPrimary_RouterQuality;

namespace CMsgSteamDatagramClientSwitchedPrimary_fields {

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

} // namespace CMsgSteamDatagramClientSwitchedPrimary_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTSWITCHEDPRIMARY_HPP

