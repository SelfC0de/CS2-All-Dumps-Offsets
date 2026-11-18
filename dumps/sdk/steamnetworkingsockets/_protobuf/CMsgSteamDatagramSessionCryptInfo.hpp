// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramSessionCryptInfo
// Module: steamnetworkingsockets.dll
// Proto file: steamnetworkingsockets_messages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMSESSIONCRYPTINFO_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMSESSIONCRYPTINFO_HPP

namespace sdk::proto {

namespace CMsgSteamDatagramSessionCryptInfo_fields {

    enum class EKeyType : int {
        INVALID = 0,
        CURVE25519 = 1,
    };

    constexpr int key_type = 1;
    constexpr int key_data = 2;
    constexpr int nonce = 3;
    constexpr int protocol_version = 4;
    constexpr int ciphers = 5;

} // namespace CMsgSteamDatagramSessionCryptInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMSESSIONCRYPTINFO_HPP

