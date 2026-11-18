// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameInfo
// Module: animationsystem.dll
// Proto file: demo.proto
#pragma once
#ifndef SDK_PROTO_CGAMEINFO_HPP
#define SDK_PROTO_CGAMEINFO_HPP

namespace sdk::proto {

struct CGameInfo_CCSGameInfo;
struct CGameInfo_CDotaGameInfo;

namespace CGameInfo_fields {

    namespace CDotaGameInfo {
        namespace CPlayerInfo {
            constexpr int hero_name = 1;
            constexpr int player_name = 2;
            constexpr int is_fake_client = 3;
            constexpr int steamid = 4;
            constexpr int game_team = 5;
        } // namespace CPlayerInfo

        namespace CHeroSelectEvent {
            constexpr int is_pick = 1;
            constexpr int team = 2;
            constexpr int hero_id = 3;
        } // namespace CHeroSelectEvent

        constexpr int match_id = 1;
        constexpr int game_mode = 2;
        constexpr int game_winner = 3;
        constexpr int player_info = 4;
        constexpr int leagueid = 5;
        constexpr int picks_bans = 6;
        constexpr int radiant_team_id = 7;
        constexpr int dire_team_id = 8;
        constexpr int radiant_team_tag = 9;
        constexpr int dire_team_tag = 10;
        constexpr int end_time = 11;
    } // namespace CDotaGameInfo

    namespace CCSGameInfo {
        constexpr int round_start_ticks = 1;
    } // namespace CCSGameInfo

    constexpr int dota = 4;
    constexpr int cs = 5;

} // namespace CGameInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMEINFO_HPP

