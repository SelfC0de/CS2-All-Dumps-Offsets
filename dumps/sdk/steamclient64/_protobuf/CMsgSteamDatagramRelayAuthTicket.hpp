// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramRelayAuthTicket
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_auth.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMRELAYAUTHTICKET_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMRELAYAUTHTICKET_HPP

namespace sdk::proto {

struct CMsgSteamDatagramRelayAuthTicket_ExtraField;

namespace CMsgSteamDatagramRelayAuthTicket_fields {

    namespace ExtraField {
        constexpr int name = 1;
        constexpr int string_value = 2;
        constexpr int int64_value = 3;
        constexpr int fixed64_value = 5;
    } // namespace ExtraField

    constexpr int time_expiry = 1;
    constexpr int authorized_client_identity_string = 14;
    constexpr int gameserver_identity_string = 15;
    constexpr int authorized_public_ip = 3;
    constexpr int gameserver_address = 11;
    constexpr int app_id = 7;
    constexpr int virtual_port = 10;
    constexpr int extra_fields = 8;
    constexpr int legacy_authorized_steam_id = 2;
    constexpr int legacy_gameserver_steam_id = 4;
    constexpr int legacy_gameserver_pop_id = 9;
    constexpr int legacy_authorized_client_identity_binary = 12;
    constexpr int legacy_gameserver_identity_binary = 13;

} // namespace CMsgSteamDatagramRelayAuthTicket_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMRELAYAUTHTICKET_HPP

