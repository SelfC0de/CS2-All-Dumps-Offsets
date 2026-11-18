// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCredentials_GetSteamGuardDetails_Response
// Module: steamclient64.dll
// Proto file: steammessages_credentials.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCREDENTIALS_GETSTEAMGUARDDETAILS_RESPONSE_HPP
#define SDK_PROTO_CCREDENTIALS_GETSTEAMGUARDDETAILS_RESPONSE_HPP

namespace sdk::proto {

struct CCredentials_GetSteamGuardDetails_Response_SessionData;

namespace CCredentials_GetSteamGuardDetails_Response_fields {

    namespace SessionData {
        constexpr int machine_id = 1;
        constexpr int machine_name_userchosen = 2;
        constexpr int timestamp_machine_steamguard_enabled = 3;
        constexpr int authentication_exists_from_geoloc_before_mintime = 4;
        constexpr int authentication_exists_from_same_ip_before_mintime = 6;
        constexpr int public_ipv4 = 7;
        constexpr int public_ip_address = 8;
    } // namespace SessionData

    constexpr int is_steamguard_enabled = 1;
    constexpr int timestamp_steamguard_enabled = 2;
    constexpr int deprecated_machine_name_userchosen = 4;
    constexpr int deprecated_timestamp_machine_steamguard_enabled = 5;
    constexpr int deprecated_authentication_exists_from_geoloc_before_mintime = 6;
    constexpr int deprecated_machine_id = 7;
    constexpr int session_data = 8;
    constexpr int is_twofactor_enabled = 9;
    constexpr int timestamp_twofactor_enabled = 10;
    constexpr int is_phone_verified = 11;

} // namespace CCredentials_GetSteamGuardDetails_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCREDENTIALS_GETSTEAMGUARDDETAILS_RESPONSE_HPP

