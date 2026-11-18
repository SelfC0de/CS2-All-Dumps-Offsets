// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameServers_QueryByFakeIP_Request
// Module: steamclient64.dll
// Proto file: steammessages_gameservers.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CGAMESERVERS_QUERYBYFAKEIP_REQUEST_HPP
#define SDK_PROTO_CGAMESERVERS_QUERYBYFAKEIP_REQUEST_HPP

namespace sdk::proto {

namespace CGameServers_QueryByFakeIP_Request_fields {

    enum class EQueryType : int {
        Query_Invalid = 0,
        Query_Ping = 1,
        Query_Players = 2,
        Query_Rules = 3,
    };

    constexpr int fake_ip = 1;
    constexpr int fake_port = 2;
    constexpr int app_id = 3;
    constexpr int query_type = 4;

} // namespace CGameServers_QueryByFakeIP_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMESERVERS_QUERYBYFAKEIP_REQUEST_HPP

