// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientGetClientDetailsResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_uds.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTGETCLIENTDETAILSRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTGETCLIENTDETAILSRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientGetClientDetailsResponse_Game;

namespace CMsgClientGetClientDetailsResponse_fields {

    namespace Game {
        constexpr int appid = 1;
        constexpr int extra_info = 2;
        constexpr int time_running_sec = 3;
    } // namespace Game

    constexpr int package_version = 1;
    constexpr int os = 2;
    constexpr int machine_name = 3;
    constexpr int ip_public = 4;
    constexpr int ip_private = 5;
    constexpr int games_running = 6;
    constexpr int bytes_available = 7;
    constexpr int protocol_version = 8;
    constexpr int clientcomm_version = 9;
    constexpr int local_users = 10;

} // namespace CMsgClientGetClientDetailsResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTGETCLIENTDETAILSRESPONSE_HPP

