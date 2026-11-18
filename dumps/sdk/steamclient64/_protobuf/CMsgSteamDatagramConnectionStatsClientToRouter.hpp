// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionStatsClientToRouter
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSCLIENTTOROUTER_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSCLIENTTOROUTER_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamDatagramConnectionStatsClientToRouter_fields {

    enum class Flags : int {
        ACK_REQUEST_RELAY = 1,
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
        NOT_PRIMARY_SESSION = 8,
        CLIENT_RELAY_OVERRIDE = 32,
    };

    constexpr int quality_relay = 1;
    constexpr int quality_e2e = 2;
    constexpr int ack_relay = 4;
    constexpr int legacy_ack_e2e = 5;
    constexpr int flags = 6;
    constexpr int client_connection_id = 8;
    constexpr int seq_num_c2r = 9;
    constexpr int seq_num_e2e = 10;

} // namespace CMsgSteamDatagramConnectionStatsClientToRouter_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONSTATSCLIENTTOROUTER_HPP

