// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsP2PClientToRouter
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PCLIENTTOROUTER_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PCLIENTTOROUTER_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;
struct CMsgSteamDatagramP2PRoutingSummary;

namespace CMsgSteamDatagramConnectionStatsP2PClientToRouter_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
        NOT_PRIMARY_SESSION = 8,
        NOT_PRIMARY_TRANSPORT_E2E = 16,
        CLIENT_RELAY_OVERRIDE = 32,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int p2p_routing_summary = 14;
    constexpr int ack_relay = 3;
    constexpr int legacy_ack_e2e = 4;
    constexpr int flags = 5;
    constexpr int forward_target_relay_routing_token = 6;
    constexpr int forward_target_revision = 7;
    constexpr int routes = 8;
    constexpr int ack_peer_routes_revision = 9;
    constexpr int connection_id = 10;
    constexpr int seq_num_c2r = 11;
    constexpr int seq_num_e2e = 12;

} // namespace CMsgSteamDatagramConnectionStatsP2PClientToRouter_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSP2PCLIENTTOROUTER_HPP

