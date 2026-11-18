// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientLogonResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_login.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTLOGONRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTLOGONRESPONSE_HPP

namespace sdk::proto {

struct CMsgIPAddress;

namespace CMsgClientLogonResponse_fields {

    constexpr int eresult = 1;
    constexpr int legacy_out_of_game_heartbeat_seconds = 2;
    constexpr int heartbeat_seconds = 3;
    constexpr int deprecated_public_ip = 4;
    constexpr int rtime32_server_time = 5;
    constexpr int account_flags = 6;
    constexpr int cell_id = 7;
    constexpr int email_domain = 8;
    constexpr int steam2_ticket = 9;
    constexpr int eresult_extended = 10;
    constexpr int cell_id_ping_threshold = 12;
    constexpr int deprecated_use_pics = 13;
    constexpr int vanity_url = 14;
    constexpr int public_ip = 15;
    constexpr int user_country = 16;
    constexpr int client_supplied_steamid = 20;
    constexpr int ip_country_code = 21;
    constexpr int parental_settings = 22;
    constexpr int parental_setting_signature = 23;
    constexpr int count_loginfailures_to_migrate = 24;
    constexpr int count_disconnects_to_migrate = 25;
    constexpr int ogs_data_report_time_window = 26;
    constexpr int client_instance_id = 27;
    constexpr int force_client_update_check = 28;
    constexpr int agreement_session_url = 29;
    constexpr int token_id = 30;
    constexpr int family_group_id = 31;

} // namespace CMsgClientLogonResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTLOGONRESPONSE_HPP

