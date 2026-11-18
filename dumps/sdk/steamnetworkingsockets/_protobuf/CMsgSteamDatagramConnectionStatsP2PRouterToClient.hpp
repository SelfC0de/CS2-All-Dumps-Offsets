// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsP2PRouterToClient
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PROUTERTOCLIENT_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PROUTERTOCLIENT_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamDatagramConnectionStatsP2PRouterToClient_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
        NOT_PRIMARY_TRANSPORT_E2E = 16,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int seconds_until_shutdown = 3;
    constexpr int migrate_request_ip = 4;
    constexpr int migrate_request_port = 5;
    constexpr int scoring_penalty_relay_cluster = 6;
    constexpr int ack_relay = 7;
    constexpr int legacy_ack_e2e = 8;
    constexpr int flags = 9;
    constexpr int ack_forward_target_revision = 10;
    constexpr int routes = 11;
    constexpr int ack_peer_routes_revision = 12;
    constexpr int connection_id = 13;
    constexpr int seq_num_r2c = 14;
    constexpr int seq_num_e2e = 15;

} // namespace CMsgSteamDatagramConnectionStatsP2PRouterToClient_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PROUTERTOCLIENT_HPP

