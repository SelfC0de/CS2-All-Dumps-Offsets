// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsRouterToServer
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOSERVER_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOSERVER_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamDatagramConnectionStatsRouterToServer_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int ack_relay = 10;
    constexpr int legacy_ack_e2e = 11;
    constexpr int flags = 12;
    constexpr int seq_num_r2s = 5;
    constexpr int seq_num_e2e = 6;
    constexpr int client_identity_string = 15;
    constexpr int legacy_client_steam_id = 7;
    constexpr int relay_session_id = 8;
    constexpr int client_connection_id = 9;
    constexpr int server_connection_id = 13;
    constexpr int routing_secret = 14;

} // namespace CMsgSteamDatagramConnectionStatsRouterToServer_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSROUTERTOSERVER_HPP

