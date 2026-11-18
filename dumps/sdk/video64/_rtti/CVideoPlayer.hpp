// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CVideoPlayer
// Module: video64.dll
// Vtable functions: 25 total, 25 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CVIDEOPLAYER_HPP
#define SDK_RTTI_CVIDEOPLAYER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CVideoPlayer {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x18];
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read] funcs: 1, 2, 3, 4, 10, 11, 12, 13, 14
    uint8_t _pad0024[0x14];
    void* field_0x0038;                         // 0x0038 (8 bytes) [ref] funcs: 17, 18, 19, 21, 22, 23
    uint8_t _pad0040[0x88];
    uint32_t field_0x00C8;                      // 0x00C8 (4 bytes) [read] funcs: 15
    uint8_t _pad00CC[0x4];
    uint64_t field_0x00D0;                      // 0x00D0 (8 bytes) [read] funcs: 16, 17, 19, 21, 22, 23
    uint32_t field_0x00D8;                      // 0x00D8 (4 bytes) [write] funcs: 24
    uint8_t _pad00DC[0x8];
    float field_0x00E4;                         // 0x00E4 (4 bytes) [write, float] funcs: 6
    uint8_t _pad00E8[0x155];
    uint8_t field_0x023D;                       // 0x023D (1 bytes) [read, compare] funcs: 18
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CVIDEOPLAYER_HPP

