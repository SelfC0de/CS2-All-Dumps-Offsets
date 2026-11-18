// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgGCCStrike15_v2_PremierSeasonSummary
// Module: server.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGGCCSTRIKE15_V2_PREMIERSEASONSUMMARY_HPP
#define SDK_PROTO_CMSGGCCSTRIKE15_V2_PREMIERSEASONSUMMARY_HPP

namespace sdk::proto {

struct CMsgGCCStrike15_v2_PremierSeasonSummary_DataPerMap;
struct CMsgGCCStrike15_v2_PremierSeasonSummary_DataPerWeek;

namespace CMsgGCCStrike15_v2_PremierSeasonSummary_fields {

    namespace DataPerWeek {
        constexpr int week_id = 1;
        constexpr int rank_id = 2;
        constexpr int matches_played = 3;
    } // namespace DataPerWeek

    namespace DataPerMap {
        constexpr int map_id = 1;
        constexpr int wins = 2;
        constexpr int ties = 3;
        constexpr int losses = 4;
        constexpr int rounds = 5;
        constexpr int kills = 6;
        constexpr int headshots = 7;
        constexpr int assists = 8;
        constexpr int deaths = 9;
        constexpr int mvps = 10;
        constexpr int rounds_3k = 11;
        constexpr int rounds_4k = 12;
        constexpr int rounds_5k = 13;
    } // namespace DataPerMap

    constexpr int account_id = 1;
    constexpr int season_id = 2;
    constexpr int data_per_week = 3;
    constexpr int data_per_map = 4;

} // namespace CMsgGCCStrike15_v2_PremierSeasonSummary_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGGCCSTRIKE15_V2_PREMIERSEASONSUMMARY_HPP

