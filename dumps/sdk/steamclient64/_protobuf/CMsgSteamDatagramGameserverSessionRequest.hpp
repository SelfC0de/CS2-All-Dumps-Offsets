// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramGameserverSessionRequest
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERSESSIONREQUEST_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERSESSIONREQUEST_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;

namespace CMsgSteamDatagramGameserverSessionRequest_fields {

    constexpr int ticket = 1;
    constexpr int challenge_time = 3;
    constexpr int challenge = 4;
    constexpr int client_connection_id = 5;
    constexpr int server_connection_id = 8;
    constexpr int network_config_version = 6;
    constexpr int protocol_version = 7;
    constexpr int platform = 9;
    constexpr int build = 10;
    constexpr int dev_gameserver_identity = 100;
    constexpr int dev_client_cert = 101;

} // namespace CMsgSteamDatagramGameserverSessionRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERSESSIONREQUEST_HPP

