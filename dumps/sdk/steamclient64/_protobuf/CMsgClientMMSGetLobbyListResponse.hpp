// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientMMSGetLobbyListResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_mms.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTMMSGETLOBBYLISTRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTMMSGETLOBBYLISTRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientMMSGetLobbyListResponse_Lobby;

namespace CMsgClientMMSGetLobbyListResponse_fields {

    namespace Lobby {
        constexpr int steam_id = 1;
        constexpr int max_members = 2;
        constexpr int lobby_type = 3;
        constexpr int lobby_flags = 4;
        constexpr int metadata_kv = 5;
        constexpr int num_members = 6;
        constexpr int distance = 7;
        constexpr int weight = 8;
        constexpr int ping = 9;
        constexpr int missing_ping = 10;
        constexpr int metadata = 11;
    } // namespace Lobby

    constexpr int app_id = 1;
    constexpr int eresult = 3;
    constexpr int lobbies = 4;

} // namespace CMsgClientMMSGetLobbyListResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTMMSGETLOBBYLISTRESPONSE_HPP

