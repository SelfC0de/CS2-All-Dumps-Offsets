// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramNoConnection
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMNOCONNECTION_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMNOCONNECTION_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;
struct CMsgSteamDatagramP2PRoutingSummary;

namespace CMsgSteamDatagramNoConnection_fields {

    constexpr int to_connection_id = 5;
    constexpr int from_connection_id = 6;
    constexpr int legacy_gameserver_relay_session_id = 2;
    constexpr int to_relay_session_id = 9;
    constexpr int from_relay_session_id = 10;
    constexpr int from_identity_string = 7;
    constexpr int legacy_from_steam_id = 3;
    constexpr int end_to_end = 4;
    constexpr int not_primary_session = 12;
    constexpr int not_primary_transport = 15;
    constexpr int relay_override_active = 17;
    constexpr int quality_relay = 13;
    constexpr int quality_e2e = 14;
    constexpr int p2p_routing_summary = 16;
    constexpr int routing_secret = 11;
    constexpr int dummy_pad = 1023;

} // namespace CMsgSteamDatagramNoConnection_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMNOCONNECTION_HPP

