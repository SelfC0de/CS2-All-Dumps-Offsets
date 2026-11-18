// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectRequest
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTREQUEST_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTREQUEST_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;
struct CMsgSteamDatagramSessionCryptInfoSigned;

namespace CMsgSteamDatagramConnectRequest_fields {

    constexpr int connection_id = 1;
    constexpr int my_timestamp = 4;
    constexpr int ping_est_ms = 5;
    constexpr int virtual_port = 9;
    constexpr int gameserver_relay_session_id = 2;
    constexpr int crypt = 6;
    constexpr int cert = 7;
    constexpr int routing_secret = 10;
    constexpr int legacy_client_steam_id = 3;

} // namespace CMsgSteamDatagramConnectRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTREQUEST_HPP

