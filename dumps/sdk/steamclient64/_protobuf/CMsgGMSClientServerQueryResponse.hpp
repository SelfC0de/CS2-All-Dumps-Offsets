// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgGMSClientServerQueryResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_gameservers.proto
#pragma once
#ifndef SDK_PROTO_CMSGGMSCLIENTSERVERQUERYRESPONSE_HPP
#define SDK_PROTO_CMSGGMSCLIENTSERVERQUERYRESPONSE_HPP

namespace sdk::proto {

struct CMsgGMSClientServerQueryResponse_Server;

namespace CMsgGMSClientServerQueryResponse_fields {

    enum class EFlags : int {
        k_EFlag_HasPassword = 1,
        k_EFlag_Secure = 2,
    };

    namespace Server {
        constexpr int deprecated_server_ip = 1;
        constexpr int query_port = 2;
        constexpr int auth_players = 3;
        constexpr int server_ip = 4;
        constexpr int steam_id = 6;
        constexpr int revision = 7;
        constexpr int players = 8;
        constexpr int game_port = 9;
        constexpr int sdr_popid = 10;
        constexpr int sdr_ping_location = 32;
        constexpr int flags = 11;
        constexpr int app_id = 12;
        constexpr int max_players = 13;
        constexpr int bots = 14;
        constexpr int spectator_port = 15;
        constexpr int gamedir_str = 16;
        constexpr int gamedir_strindex = 17;
        constexpr int map_str = 18;
        constexpr int map_strindex = 19;
        constexpr int name_str = 20;
        constexpr int name_strindex = 21;
        constexpr int game_description_str = 22;
        constexpr int game_description_strindex = 23;
        constexpr int version_str = 24;
        constexpr int version_strindex = 25;
        constexpr int gametype_str = 26;
        constexpr int gametype_strindex = 27;
        constexpr int spectator_name_str = 30;
        constexpr int spectator_name_strindex = 31;
        constexpr int friends = 33;
        constexpr int friends_count = 34;
        constexpr int friends_count_connected = 35;
        constexpr int ping_estimate = 36;
    } // namespace Server

    constexpr int servers = 1;
    constexpr int error = 2;
    constexpr int default_server_data = 3;
    constexpr int server_strings = 4;

} // namespace CMsgGMSClientServerQueryResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGGMSCLIENTSERVERQUERYRESPONSE_HPP

