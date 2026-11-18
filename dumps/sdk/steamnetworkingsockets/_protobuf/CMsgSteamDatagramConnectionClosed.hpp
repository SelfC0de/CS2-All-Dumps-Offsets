// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectionClosed
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONCLOSED_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONCLOSED_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;
struct CMsgSteamDatagramP2PRoutingSummary;
struct CMsgSteamNetworkingIdentityLegacyBinary;

namespace CMsgSteamDatagramConnectionClosed_fields {

    enum class ERelayMode : int {
        None = 0,
        EndToEnd = 1,
        ClosedByPeer = 2,
    };

    constexpr int to_connection_id = 7;
    constexpr int from_connection_id = 8;
    constexpr int from_identity_string = 15;
    constexpr int legacy_from_identity_binary = 13;
    constexpr int legacy_from_steam_id = 3;
    constexpr int legacy_gameserver_relay_session_id = 2;
    constexpr int to_relay_session_id = 9;
    constexpr int from_relay_session_id = 10;
    constexpr int forward_target_relay_routing_token = 11;
    constexpr int forward_target_revision = 12;
    constexpr int relay_mode = 4;
    constexpr int debug = 5;
    constexpr int reason_code = 6;
    constexpr int routing_secret = 14;
    constexpr int not_primary_session = 16;
    constexpr int not_primary_transport = 19;
    constexpr int relay_override_active = 22;
    constexpr int quality_relay = 17;
    constexpr int quality_e2e = 18;
    constexpr int p2p_routing_summary = 21;

} // namespace CMsgSteamDatagramConnectionClosed_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTIONCLOSED_HPP

