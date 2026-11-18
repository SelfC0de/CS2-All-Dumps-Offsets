// Auto-generated protobuf field constants — DO NOT EDIT
// Message: PlayerQuestData
// Module: server.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_PLAYERQUESTDATA_HPP
#define SDK_PROTO_PLAYERQUESTDATA_HPP

namespace sdk::proto {

struct CMsgCsgoSteamUserStatChange;
struct MatchEndItemUpdates;
struct PlayerQuestData_QuestItemData;
struct XpProgressData;

namespace PlayerQuestData_fields {

    namespace QuestItemData {
        constexpr int quest_id = 1;
        constexpr int quest_normal_points_earned = 2;
        constexpr int quest_bonus_points_earned = 3;
        constexpr int quest_normal_points_required = 4;
        constexpr int quest_reward_xp = 5;
        constexpr int quest_period = 6;
        constexpr int quest_type = 7;
    } // namespace QuestItemData

    constexpr int quester_account_id = 1;
    constexpr int quest_item_data = 2;
    constexpr int xp_progress_data = 3;
    constexpr int time_played = 4;
    constexpr int mm_game_mode = 5;
    constexpr int item_updates = 6;
    constexpr int operation_points_eligible = 7;
    constexpr int userstatchanges = 8;

} // namespace PlayerQuestData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_PLAYERQUESTDATA_HPP

