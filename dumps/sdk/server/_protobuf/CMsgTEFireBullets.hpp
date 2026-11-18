// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgTEFireBullets
// Module: server.dll
// Proto file: cs_gameevents.proto
#pragma once
#ifndef SDK_PROTO_CMSGTEFIREBULLETS_HPP
#define SDK_PROTO_CMSGTEFIREBULLETS_HPP

namespace sdk::proto {

struct CMsgQAngle;
struct CMsgTEFireBullets_Extra;
struct CMsgVector;

namespace CMsgTEFireBullets_fields {

    namespace Extra {
        constexpr int aim_punch = 1;
        constexpr int attack_tick_count = 2;
        constexpr int attack_tick_frac = 3;
        constexpr int render_tick_count = 4;
        constexpr int render_tick_frac = 5;
        constexpr int inaccuracy_move = 6;
        constexpr int inaccuracy_air = 7;
        constexpr int type = 8;
    } // namespace Extra

    constexpr int origin = 1;
    constexpr int angles = 2;
    constexpr int weapon_id = 3;
    constexpr int mode = 4;
    constexpr int seed = 5;
    constexpr int player = 6;
    constexpr int inaccuracy = 7;
    constexpr int recoil_index = 8;
    constexpr int spread = 9;
    constexpr int sound_type = 10;
    constexpr int item_def_index = 11;
    constexpr int sound_dsp_effect = 12;
    constexpr int ent_origin = 13;
    constexpr int num_bullets_remaining = 14;
    constexpr int attack_type = 15;
    constexpr int player_inair = 17;
    constexpr int player_scoped = 18;
    constexpr int tick = 19;
    constexpr int extra = 16;

} // namespace CMsgTEFireBullets_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGTEFIREBULLETS_HPP

