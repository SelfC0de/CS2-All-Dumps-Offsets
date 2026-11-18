// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsServerToRouter
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSSERVERTOROUTER_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSSERVERTOROUTER_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamDatagramConnectionStatsServerToRouter_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int ack_relay = 8;
    constexpr int legacy_ack_e2e = 9;
    constexpr int flags = 10;
    constexpr int seq_num_s2r = 3;
    constexpr int seq_num_e2e = 4;
    constexpr int relay_session_id = 6;
    constexpr int client_connection_id = 7;
    constexpr int server_connection_id = 11;

} // namespace CMsgSteamDatagramConnectionStatsServerToRouter_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSSERVERTOROUTER_HPP

