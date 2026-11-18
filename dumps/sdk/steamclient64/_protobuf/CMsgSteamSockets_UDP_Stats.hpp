// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamSockets_UDP_Stats
// Module: steamclient64.dll
// Proto file: steamnetworkingsockets_messages_udp.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMSOCKETS_UDP_STATS_HPP
#define SDK_PROTO_CMSGSTEAMSOCKETS_UDP_STATS_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;

namespace CMsgSteamSockets_UDP_Stats_fields {

    enum class Flags : int {
        ACK_REQUEST_E2E = 2,
        ACK_REQUEST_IMMEDIATE = 4,
        NOT_PRIMARY_TRANSPORT_E2E = 16,
    };

    constexpr int stats = 1;
    constexpr int flags = 3;

} // namespace CMsgSteamSockets_UDP_Stats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMSOCKETS_UDP_STATS_HPP

