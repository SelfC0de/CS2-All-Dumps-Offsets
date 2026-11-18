// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramConnectOK
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTOK_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTOK_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;
struct CMsgSteamDatagramSessionCryptInfoSigned;

namespace CMsgSteamDatagramConnectOK_fields {

    constexpr int client_connection_id = 1;
    constexpr int server_connection_id = 7;
    constexpr int your_timestamp = 3;
    constexpr int delay_time_usec = 4;
    constexpr int gameserver_relay_session_id = 2;
    constexpr int crypt = 5;
    constexpr int cert = 6;

} // namespace CMsgSteamDatagramConnectOK_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCONNECTOK_HPP

