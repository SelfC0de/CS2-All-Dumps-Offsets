// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCSUsrMsg_SurvivalStats
// Module: server.dll
// Proto file: cstrike15_usermessages.proto
#pragma once
#ifndef SDK_PROTO_CCSUSRMSG_SURVIVALSTATS_HPP
#define SDK_PROTO_CCSUSRMSG_SURVIVALSTATS_HPP

namespace sdk::proto {

struct CCSUsrMsg_SurvivalStats_Damage;
struct CCSUsrMsg_SurvivalStats_Fact;
struct CCSUsrMsg_SurvivalStats_Placement;

namespace CCSUsrMsg_SurvivalStats_fields {

    namespace Fact {
        constexpr int type = 1;
        constexpr int display = 2;
        constexpr int value = 3;
        constexpr int interestingness = 4;
    } // namespace Fact

    namespace Placement {
        constexpr int xuid = 1;
        constexpr int teamnumber = 2;
        constexpr int placement = 3;
    } // namespace Placement

    namespace Damage {
        constexpr int xuid = 1;
        constexpr int to = 2;
        constexpr int to_hits = 3;
        constexpr int from = 4;
        constexpr int from_hits = 5;
    } // namespace Damage

    constexpr int xuid = 1;
    constexpr int facts = 2;
    constexpr int users = 3;
    constexpr int damages = 5;
    constexpr int ticknumber = 4;

} // namespace CCSUsrMsg_SurvivalStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCSUSRMSG_SURVIVALSTATS_HPP

