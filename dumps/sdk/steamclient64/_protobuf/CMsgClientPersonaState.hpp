// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientPersonaState
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_friends.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTPERSONASTATE_HPP
#define SDK_PROTO_CMSGCLIENTPERSONASTATE_HPP

namespace sdk::proto {

struct CMsgClientPersonaState_Friend;

namespace CMsgClientPersonaState_fields {

    namespace Friend {
        namespace ClanData {
            constexpr int ogg_app_id = 1;
            constexpr int chat_group_id = 2;
        } // namespace ClanData

        namespace KV {
            constexpr int key = 1;
            constexpr int value = 2;
        } // namespace KV

        namespace OtherGameData {
            constexpr int gameid = 1;
            constexpr int rich_presence = 2;
        } // namespace OtherGameData

        constexpr int friendid = 1;
        constexpr int persona_state = 2;
        constexpr int game_played_app_id = 3;
        constexpr int game_server_ip = 4;
        constexpr int game_server_port = 5;
        constexpr int persona_state_flags = 6;
        constexpr int online_session_instances = 7;
        constexpr int persona_set_by_user = 10;
        constexpr int player_name = 15;
        constexpr int query_port = 20;
        constexpr int steamid_source = 25;
        constexpr int avatar_hash = 31;
        constexpr int last_logoff = 45;
        constexpr int last_logon = 46;
        constexpr int last_seen_online = 47;
        constexpr int clan_rank = 50;
        constexpr int game_name = 55;
        constexpr int gameid = 56;
        constexpr int game_data_blob = 60;
        constexpr int clan_data = 64;
        constexpr int clan_tag = 65;
        constexpr int rich_presence = 71;
        constexpr int broadcast_id = 72;
        constexpr int game_lobby_id = 73;
        constexpr int watching_broadcast_accountid = 74;
        constexpr int watching_broadcast_appid = 75;
        constexpr int watching_broadcast_viewers = 76;
        constexpr int watching_broadcast_title = 77;
        constexpr int is_community_banned = 78;
        constexpr int player_name_pending_review = 79;
        constexpr int avatar_pending_review = 80;
        constexpr int on_steam_deck = 81;
        constexpr int other_game_data = 82;
        constexpr int gaming_device_type = 83;
    } // namespace Friend

    constexpr int status_flags = 1;
    constexpr int friends = 2;

} // namespace CMsgClientPersonaState_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTPERSONASTATE_HPP

