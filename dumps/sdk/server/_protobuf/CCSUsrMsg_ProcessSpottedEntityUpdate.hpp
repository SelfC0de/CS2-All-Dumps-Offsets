// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCSUsrMsg_ProcessSpottedEntityUpdate
// Module: server.dll
// Proto file: cstrike15_usermessages.proto
#pragma once
#ifndef SDK_PROTO_CCSUSRMSG_PROCESSSPOTTEDENTITYUPDATE_HPP
#define SDK_PROTO_CCSUSRMSG_PROCESSSPOTTEDENTITYUPDATE_HPP

namespace sdk::proto {

struct CCSUsrMsg_ProcessSpottedEntityUpdate_SpottedEntityUpdate;

namespace CCSUsrMsg_ProcessSpottedEntityUpdate_fields {

    namespace SpottedEntityUpdate {
        constexpr int entity_idx = 1;
        constexpr int class_id = 2;
        constexpr int origin_x = 3;
        constexpr int origin_y = 4;
        constexpr int origin_z = 5;
        constexpr int angle_y = 6;
        constexpr int defuser = 7;
        constexpr int player_has_defuser = 8;
        constexpr int player_has_c4 = 9;
    } // namespace SpottedEntityUpdate

    constexpr int new_update = 1;
    constexpr int entity_updates = 2;

} // namespace CCSUsrMsg_ProcessSpottedEntityUpdate_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCSUSRMSG_PROCESSSPOTTEDENTITYUPDATE_HPP

