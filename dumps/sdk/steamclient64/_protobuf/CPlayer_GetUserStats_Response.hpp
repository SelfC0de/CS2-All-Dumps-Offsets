// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetUserStats_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETUSERSTATS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETUSERSTATS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetUserStats_Response_Stats;

namespace CPlayer_GetUserStats_Response_fields {

    namespace Unlock_Time {
        constexpr int achievement_bit = 1;
        constexpr int unlock_time = 2;
    } // namespace Unlock_Time

    namespace Stats {
        constexpr int stat_id = 1;
        constexpr int stat_value = 2;
        constexpr int unlock_times = 3;
    } // namespace Stats

    constexpr int sha_schema = 1;
    constexpr int crc_stats = 2;
    constexpr int schema = 3;
    constexpr int stats = 4;
    constexpr int crc_schema = 5;

} // namespace CPlayer_GetUserStats_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETUSERSTATS_RESPONSE_HPP

