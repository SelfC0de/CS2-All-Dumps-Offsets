// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramP2PSessionRequestBody
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMP2PSESSIONREQUESTBODY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMP2PSESSIONREQUESTBODY_HPP

namespace sdk::proto {

namespace CMsgSteamDatagramP2PSessionRequestBody_fields {

    namespace EncryptedData {
        constexpr int peer_identity_string = 1;
    } // namespace EncryptedData

    constexpr int challenge_time = 1;
    constexpr int challenge = 2;
    constexpr int client_connection_id = 3;
    constexpr int legacy_peer_steam_id = 4;
    constexpr int peer_identity_string = 11;
    constexpr int peer_connection_id = 5;
    constexpr int encrypted_data = 14;
    constexpr int encryption_your_public_key_lead_byte = 15;
    constexpr int encryption_my_ephemeral_public_key = 16;
    constexpr int protocol_version = 8;
    constexpr int network_config_version = 9;
    constexpr int platform = 12;
    constexpr int build = 13;

} // namespace CMsgSteamDatagramP2PSessionRequestBody_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMP2PSESSIONREQUESTBODY_HPP

