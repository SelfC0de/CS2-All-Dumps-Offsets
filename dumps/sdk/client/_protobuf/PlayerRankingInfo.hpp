// Auto-generated protobuf field constants — DO NOT EDIT
// Message: PlayerRankingInfo
// Module: client.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_PLAYERRANKINGINFO_HPP
#define SDK_PROTO_PLAYERRANKINGINFO_HPP

namespace sdk::proto {

struct PlayerRankingInfo_PerMapRank;

namespace PlayerRankingInfo_fields {

    namespace PerMapRank {
        constexpr int map_id = 1;
        constexpr int rank_id = 2;
        constexpr int wins = 3;
    } // namespace PerMapRank

    constexpr int account_id = 1;
    constexpr int rank_id = 2;
    constexpr int wins = 3;
    constexpr int rank_change = 4;
    constexpr int rank_type_id = 6;
    constexpr int tv_control = 7;
    constexpr int rank_window_stats = 8;
    constexpr int leaderboard_name = 9;
    constexpr int rank_if_win = 10;
    constexpr int rank_if_lose = 11;
    constexpr int rank_if_tie = 12;
    constexpr int per_map_rank = 13;
    constexpr int leaderboard_name_status = 14;
    constexpr int highest_rank = 15;
    constexpr int rank_expiry = 16;

} // namespace PlayerRankingInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_PLAYERRANKINGINFO_HPP

