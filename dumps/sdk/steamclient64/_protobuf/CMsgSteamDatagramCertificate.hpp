// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramCertificate
// Module: steamclient64.dll
// Proto file: steamnetworkingsockets_messages_certs.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCERTIFICATE_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCERTIFICATE_HPP

namespace sdk::proto {

struct CMsgSteamNetworkingIdentityLegacyBinary;

namespace CMsgSteamDatagramCertificate_fields {

    enum class EKeyType : int {
        INVALID = 0,
        ED25519 = 1,
    };

    constexpr int key_type = 1;
    constexpr int key_data = 2;
    constexpr int legacy_steam_id = 4;
    constexpr int legacy_identity_binary = 11;
    constexpr int identity_string = 12;
    constexpr int gameserver_datacenter_ids = 5;
    constexpr int time_created = 8;
    constexpr int time_expiry = 9;
    constexpr int app_ids = 10;
    constexpr int ip_addresses = 13;

} // namespace CMsgSteamDatagramCertificate_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCERTIFICATE_HPP

