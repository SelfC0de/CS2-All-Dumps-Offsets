// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientLogon
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_login.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTLOGON_HPP
#define SDK_PROTO_CMSGCLIENTLOGON_HPP

namespace sdk::proto {

struct CMsgClientSecret;
struct CMsgIPAddress;

namespace CMsgClientLogon_fields {

    constexpr int protocol_version = 1;
    constexpr int deprecated_obfustucated_private_ip = 2;
    constexpr int cell_id = 3;
    constexpr int last_session_id = 4;
    constexpr int client_package_version = 5;
    constexpr int client_language = 6;
    constexpr int client_os_type = 7;
    constexpr int should_remember_password = 8;
    constexpr int wine_version = 9;
    constexpr int deprecated_10 = 10;
    constexpr int obfuscated_private_ip = 11;
    constexpr int deprecated_public_ip = 20;
    constexpr int qos_level = 21;
    constexpr int client_supplied_steam_id = 22;
    constexpr int public_ip = 23;
    constexpr int machine_id = 30;
    constexpr int launcher_type = 31;
    constexpr int ui_mode = 32;
    constexpr int chat_mode = 33;
    constexpr int steam2_auth_ticket = 41;
    constexpr int email_address = 42;
    constexpr int rtime32_account_creation = 43;
    constexpr int account_name = 50;
    constexpr int password = 51;
    constexpr int game_server_token = 52;
    constexpr int login_key = 60;
    constexpr int was_converted_deprecated_msg = 70;
    constexpr int anon_user_target_account_name = 80;
    constexpr int resolved_user_steam_id = 81;
    constexpr int eresult_sentryfile = 82;
    constexpr int sha_sentryfile = 83;
    constexpr int auth_code = 84;
    constexpr int otp_type = 85;
    constexpr int otp_value = 86;
    constexpr int otp_identifier = 87;
    constexpr int steam2_ticket_request = 88;
    constexpr int sony_psn_ticket = 90;
    constexpr int sony_psn_service_id = 91;
    constexpr int create_new_psn_linked_account_if_needed = 92;
    constexpr int sony_psn_name = 93;
    constexpr int game_server_app_id = 94;
    constexpr int steamguard_dont_remember_computer = 95;
    constexpr int machine_name = 96;
    constexpr int machine_name_userchosen = 97;
    constexpr int country_override = 98;
    constexpr int client_instance_id = 100;
    constexpr int two_factor_code = 101;
    constexpr int supports_rate_limit_response = 102;
    constexpr int web_logon_nonce = 103;
    constexpr int priority_reason = 104;
    constexpr int embedded_client_secret = 105;
    constexpr int disable_partner_autogrants = 106;
    constexpr int access_token = 108;
    constexpr int is_chrome_os = 109;
    constexpr int gaming_device_type = 111;

} // namespace CMsgClientLogon_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTLOGON_HPP

