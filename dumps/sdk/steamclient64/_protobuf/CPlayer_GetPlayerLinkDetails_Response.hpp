// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetPlayerLinkDetails_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETPLAYERLINKDETAILS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETPLAYERLINKDETAILS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetPlayerLinkDetails_Response_PlayerLinkDetails;

namespace CPlayer_GetPlayerLinkDetails_Response_fields {

    namespace PlayerLinkDetails {
        namespace AccountPublicData {
            constexpr int steamid = 1;
            constexpr int visibility_state = 2;
            constexpr int privacy_state = 3;
            constexpr int profile_state = 4;
            constexpr int ban_expires_time = 7;
            constexpr int account_flags = 8;
            constexpr int sha_digest_avatar = 9;
            constexpr int persona_name = 10;
            constexpr int profile_url = 11;
            constexpr int content_country_restricted = 12;
        } // namespace AccountPublicData

        namespace AccountPrivateData {
            constexpr int persona_state = 1;
            constexpr int persona_state_flags = 2;
            constexpr int time_created = 3;
            constexpr int game_id = 4;
            constexpr int game_server_steam_id = 5;
            constexpr int game_server_ip_address = 6;
            constexpr int game_server_port = 7;
            constexpr int game_extra_info = 8;
            constexpr int account_name = 9;
            constexpr int lobby_steam_id = 10;
            constexpr int rich_presence_kv = 11;
            constexpr int broadcast_session_id = 12;
            constexpr int watching_broadcast_accountid = 13;
            constexpr int watching_broadcast_appid = 14;
            constexpr int watching_broadcast_viewers = 15;
            constexpr int watching_broadcast_title = 16;
            constexpr int last_logoff_time = 17;
            constexpr int last_seen_online = 18;
            constexpr int game_os_type = 19;
            constexpr int game_device_type = 20;
            constexpr int game_device_name = 21;
            constexpr int game_is_private = 22;
        } // namespace AccountPrivateData

        constexpr int public_data = 1;
        constexpr int private_data = 2;
    } // namespace PlayerLinkDetails

    constexpr int accounts = 1;

} // namespace CPlayer_GetPlayerLinkDetails_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETPLAYERLINKDETAILS_RESPONSE_HPP

