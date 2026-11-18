// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBaseUserCmdPB
// Module: server.dll
// Proto file: usercmd.proto
#pragma once
#ifndef SDK_PROTO_CBASEUSERCMDPB_HPP
#define SDK_PROTO_CBASEUSERCMDPB_HPP

namespace sdk::proto {

struct CBaseUserCmdExecutionNotes;
struct CInButtonStatePB;
struct CMsgQAngle;
struct CSubtickMoveStep;

namespace CBaseUserCmdPB_fields {

    constexpr int legacy_command_number = 1;
    constexpr int client_tick = 2;
    constexpr int prediction_offset_ticks_x256 = 17;
    constexpr int buttons_pb = 3;
    constexpr int viewangles = 4;
    constexpr int forwardmove = 5;
    constexpr int leftmove = 6;
    constexpr int upmove = 7;
    constexpr int impulse = 8;
    constexpr int weaponselect = 9;
    constexpr int random_seed = 10;
    constexpr int mousedx = 11;
    constexpr int mousedy = 12;
    constexpr int pawn_entity_handle = 14;
    constexpr int subtick_moves = 18;
    constexpr int move_crc = 19;
    constexpr int consumed_server_angle_changes = 20;
    constexpr int cmd_flags = 21;
    constexpr int execution_notes = 22;

} // namespace CBaseUserCmdPB_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBASEUSERCMDPB_HPP

