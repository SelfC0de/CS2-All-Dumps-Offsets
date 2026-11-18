// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCSUsrMsg_RoundEndReportData
// Module: server.dll
// Proto file: cstrike15_usermessages.proto
#pragma once
#ifndef SDK_PROTO_CCSUSRMSG_ROUNDENDREPORTDATA_HPP
#define SDK_PROTO_CCSUSRMSG_ROUNDENDREPORTDATA_HPP

namespace sdk::proto {

struct CCSUsrMsg_RoundEndReportData_InitialConditions;
struct CCSUsrMsg_RoundEndReportData_RerEvent;

namespace CCSUsrMsg_RoundEndReportData_fields {

    namespace RerEvent {
        namespace Victim {
            constexpr int team_number = 1;
            constexpr int playerslot = 2;
            constexpr int xuid = 3;
            constexpr int color = 4;
            constexpr int is_bot = 5;
            constexpr int is_dead = 6;
        } // namespace Victim

        namespace Objective {
            constexpr int type = 1;
        } // namespace Objective

        namespace Damage {
            constexpr int other_playerslot = 1;
            constexpr int other_xuid = 2;
            constexpr int health_removed = 3;
            constexpr int num_hits = 4;
            constexpr int return_health_removed = 5;
            constexpr int return_num_hits = 6;
        } // namespace Damage

        constexpr int timestamp = 1;
        constexpr int terrorist_odds = 2;
        constexpr int ct_alive = 3;
        constexpr int t_alive = 4;
        constexpr int victim_data = 5;
        constexpr int objective_data = 6;
        constexpr int all_damage_data = 7;
    } // namespace RerEvent

    namespace InitialConditions {
        constexpr int ct_equip_value = 1;
        constexpr int t_equip_value = 2;
        constexpr int terrorist_odds = 3;
    } // namespace InitialConditions

    constexpr int init_conditions = 1;
    constexpr int all_rer_event_data = 2;

} // namespace CCSUsrMsg_RoundEndReportData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCSUSRMSG_ROUNDENDREPORTDATA_HPP

