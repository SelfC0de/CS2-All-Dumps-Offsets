// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamSockets_UDP_ConnectOK
// Module: steamclient64.dll
// Proto file: steamnetworkingsockets_messages_udp.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTOK_HPP
#define SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTOK_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;
struct CMsgSteamDatagramSessionCryptInfoSigned;
struct CMsgSteamNetworkingIdentityLegacyBinary;

namespace CMsgSteamSockets_UDP_ConnectOK_fields {

    constexpr int client_connection_id = 1;
    constexpr int server_connection_id = 5;
    constexpr int your_timestamp = 3;
    constexpr int delay_time_usec = 4;
    constexpr int crypt = 7;
    constexpr int cert = 8;
    constexpr int identity_string = 11;
    constexpr int legacy_server_steam_id = 2;
    constexpr int legacy_identity_binary = 10;

} // namespace CMsgSteamSockets_UDP_ConnectOK_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMSOCKETS_UDP_CONNECTOK_HPP

