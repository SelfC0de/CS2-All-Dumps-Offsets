// Auto-generated protobuf field constants — DO NOT EDIT
// Message: ScoreLeaderboardData
// Module: client.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_SCORELEADERBOARDDATA_HPP
#define SDK_PROTO_SCORELEADERBOARDDATA_HPP

namespace sdk::proto {

struct ScoreLeaderboardData_AccountEntries;
struct ScoreLeaderboardData_Entry;

namespace ScoreLeaderboardData_fields {

    namespace Entry {
        constexpr int tag = 1;
        constexpr int val = 2;
    } // namespace Entry

    namespace AccountEntries {
        constexpr int accountid = 1;
        constexpr int entries = 2;
    } // namespace AccountEntries

    constexpr int quest_id = 1;
    constexpr int score = 2;
    constexpr int accountentries = 3;
    constexpr int matchentries = 5;
    constexpr int leaderboard_name = 6;

} // namespace ScoreLeaderboardData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_SCORELEADERBOARDDATA_HPP

