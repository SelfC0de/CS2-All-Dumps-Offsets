// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamSockets_UDP_ConnectRequest
// Module: steamnetworkingsockets.dll
// Proto file: steamnetworkingsockets_messages_udp.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTREQUEST_HPP
#define SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTREQUEST_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;
struct CMsgSteamDatagramSessionCryptInfoSigned;
struct CMsgSteamNetworkingIdentityLegacyBinary;

namespace CMsgSteamSockets_UDP_ConnectRequest_fields {

    constexpr int client_connection_id = 1;
    constexpr int challenge = 2;
    constexpr int my_timestamp = 5;
    constexpr int ping_est_ms = 6;
    constexpr int crypt = 7;
    constexpr int cert = 4;
    constexpr int legacy_protocol_version = 8;
    constexpr int identity_string = 10;
    constexpr int legacy_client_steam_id = 3;
    constexpr int legacy_identity_binary = 9;

} // namespace CMsgSteamSockets_UDP_ConnectRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTREQUEST_HPP

