// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsRouterToClient
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOCLIENT_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOCLIENT_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamDatagramConnectionStatsRouterToClient_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int seconds_until_shutdown = 6;
    constexpr int migrate_request_ip = 10;
    constexpr int migrate_request_port = 11;
    constexpr int scoring_penalty_relay_cluster = 12;
    constexpr int ack_relay = 13;
    constexpr int legacy_ack_e2e = 14;
    constexpr int flags = 15;
    constexpr int client_connection_id = 7;
    constexpr int seq_num_r2c = 8;
    constexpr int seq_num_e2e = 9;

} // namespace CMsgSteamDatagramConnectionStatsRouterToClient_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOCLIENT_HPP

