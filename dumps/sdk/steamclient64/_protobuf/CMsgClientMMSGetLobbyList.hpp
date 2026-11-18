// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientMMSGetLobbyList
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_mms.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTMMSGETLOBBYLIST_HPP
#define SDK_PROTO_CMSGCLIENTMMSGETLOBBYLIST_HPP

namespace sdk::proto {

struct CMsgClientMMSGetLobbyList_Filter;
struct CMsgIPAddress;

namespace CMsgClientMMSGetLobbyList_fields {

    namespace Filter {
        constexpr int key = 1;
        constexpr int value = 2;
        constexpr int comparision = 3;
        constexpr int filter_type = 4;
    } // namespace Filter

    constexpr int app_id = 1;
    constexpr int num_lobbies_requested = 3;
    constexpr int cell_id = 4;
    constexpr int deprecated_public_ip = 5;
    constexpr int filters = 6;
    constexpr int public_ip = 7;
    constexpr int network_ping_location = 8;

} // namespace CMsgClientMMSGetLobbyList_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTMMSGETLOBBYLIST_HPP

