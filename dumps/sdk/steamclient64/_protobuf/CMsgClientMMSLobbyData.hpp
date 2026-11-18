// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientMMSLobbyData
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_mms.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTMMSLOBBYDATA_HPP
#define SDK_PROTO_CMSGCLIENTMMSLOBBYDATA_HPP

namespace sdk::proto {

struct CMsgClientMMSLobbyData_Member;
struct MMSKeyValuePair;

namespace CMsgClientMMSLobbyData_fields {

    namespace Member {
        constexpr int steam_id = 1;
        constexpr int persona_name = 2;
        constexpr int metadata_kv = 3;
        constexpr int ping_data = 4;
        constexpr int metadata = 5;
    } // namespace Member

    constexpr int app_id = 1;
    constexpr int steam_id_lobby = 2;
    constexpr int num_members = 3;
    constexpr int max_members = 4;
    constexpr int lobby_type = 5;
    constexpr int lobby_flags = 6;
    constexpr int steam_id_owner = 7;
    constexpr int metadata_kv = 8;
    constexpr int members = 9;
    constexpr int lobby_cellid = 10;
    constexpr int owner_should_accept_changes = 11;
    constexpr int metadata = 12;

} // namespace CMsgClientMMSLobbyData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTMMSLOBBYDATA_HPP

