// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgGCCStrike15_v2_MatchmakingServerRoundStats
// Module: server.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGGCCSTRIKE15_V2_MATCHMAKINGSERVERROUNDSTATS_HPP
#define SDK_PROTO_CMSGGCCSTRIKE15_V2_MATCHMAKINGSERVERROUNDSTATS_HPP

namespace sdk::proto {

struct CMsgGCCStrike15_v2_MatchmakingGC2ServerConfirm;
struct CMsgGCCStrike15_v2_MatchmakingGC2ServerReserve;
struct CMsgGCCStrike15_v2_MatchmakingServerRoundStats_DropInfo;

namespace CMsgGCCStrike15_v2_MatchmakingServerRoundStats_fields {

    namespace DropInfo {
        constexpr int account_mvp = 1;
    } // namespace DropInfo

    constexpr int reservationid = 1;
    constexpr int reservation = 2;
    constexpr int map = 3;
    constexpr int round = 4;
    constexpr int kills = 5;
    constexpr int assists = 6;
    constexpr int deaths = 7;
    constexpr int scores = 8;
    constexpr int pings = 9;
    constexpr int round_result = 10;
    constexpr int match_result = 11;
    constexpr int team_scores = 12;
    constexpr int confirm = 13;
    constexpr int reservation_stage = 14;
    constexpr int match_duration = 15;
    constexpr int enemy_kills = 16;
    constexpr int enemy_headshots = 17;
    constexpr int enemy_3ks = 18;
    constexpr int enemy_4ks = 19;
    constexpr int enemy_5ks = 20;
    constexpr int mvps = 21;
    constexpr int spectators_count = 22;
    constexpr int spectators_count_tv = 23;
    constexpr int spectators_count_lnk = 24;
    constexpr int enemy_kills_agg = 25;
    constexpr int drop_info = 26;
    constexpr int b_switched_teams = 27;
    constexpr int enemy_2ks = 28;
    constexpr int player_spawned = 29;
    constexpr int team_spawn_count = 30;
    constexpr int max_rounds = 31;
    constexpr int map_id = 32;

} // namespace CMsgGCCStrike15_v2_MatchmakingServerRoundStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGGCCSTRIKE15_V2_MATCHMAKINGSERVERROUNDSTATS_HPP

