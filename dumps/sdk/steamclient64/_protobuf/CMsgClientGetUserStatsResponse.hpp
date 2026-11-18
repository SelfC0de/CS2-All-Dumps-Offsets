// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientGetUserStatsResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_userstats.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTGETUSERSTATSRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTGETUSERSTATSRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientGetUserStatsResponse_Achievement_Blocks;
struct CMsgClientGetUserStatsResponse_Stats;

namespace CMsgClientGetUserStatsResponse_fields {

    namespace Stats {
        constexpr int stat_id = 1;
        constexpr int stat_value = 2;
    } // namespace Stats

    namespace Achievement_Blocks {
        constexpr int achievement_id = 1;
        constexpr int unlock_time = 2;
    } // namespace Achievement_Blocks

    constexpr int game_id = 1;
    constexpr int eresult = 2;
    constexpr int crc_stats = 3;
    constexpr int schema = 4;
    constexpr int stats = 5;
    constexpr int achievement_blocks = 6;

} // namespace CMsgClientGetUserStatsResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTGETUSERSTATSRESPONSE_HPP

