// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramGameserverPingRequestEnvelope
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERPINGREQUESTENVELOPE_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERPINGREQUESTENVELOPE_HPP

namespace sdk::proto {

struct CMsgSteamDatagramCertificateSigned;

namespace CMsgSteamDatagramGameserverPingRequestEnvelope_fields {

    constexpr int cert = 6;
    constexpr int signed_data = 7;
    constexpr int signature = 8;
    constexpr int legacy_your_public_ip = 1;
    constexpr int legacy_your_public_port = 5;
    constexpr int legacy_relay_unix_time = 2;
    constexpr int legacy_challenge = 3;
    constexpr int legacy_router_timestamp = 4;
    constexpr int dummy_pad = 1023;

} // namespace CMsgSteamDatagramGameserverPingRequestEnvelope_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMGAMESERVERPINGREQUESTENVELOPE_HPP

