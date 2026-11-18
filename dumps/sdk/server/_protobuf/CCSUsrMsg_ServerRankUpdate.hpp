// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCSUsrMsg_ServerRankUpdate
// Module: server.dll
// Proto file: cstrike15_usermessages.proto
#pragma once
#ifndef SDK_PROTO_CCSUSRMSG_SERVERRANKUPDATE_HPP
#define SDK_PROTO_CCSUSRMSG_SERVERRANKUPDATE_HPP

namespace sdk::proto {

struct CCSUsrMsg_ServerRankUpdate_RankUpdate;

namespace CCSUsrMsg_ServerRankUpdate_fields {

    namespace RankUpdate {
        constexpr int account_id = 1;
        constexpr int rank_old = 2;
        constexpr int rank_new = 3;
        constexpr int num_wins = 4;
        constexpr int rank_change = 5;
        constexpr int rank_type_id = 6;
    } // namespace RankUpdate

    constexpr int rank_update = 1;

} // namespace CCSUsrMsg_ServerRankUpdate_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCSUSRMSG_SERVERRANKUPDATE_HPP

