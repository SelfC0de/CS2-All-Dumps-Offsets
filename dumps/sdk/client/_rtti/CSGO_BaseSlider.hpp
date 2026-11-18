// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSGO_BaseSlider
// Module: client.dll
// Vtable functions: 91 total, 69 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSGO_BASESLIDER_HPP
#define SDK_RTTI_CSGO_BASESLIDER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSGO_BaseSlider {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 0, 7, 8, 14, 20, 32, 38, 58, 64, 65, 72, 76, 79, 80, 81
    void* field_0x0010;                         // 0x0010 (8 bytes) [read, ref, compare] funcs: 43, 81
    uint8_t _pad0018[0x18];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read, compare] funcs: 31
    uint8_t _pad0038[0x10];
    void* field_0x0048;                         // 0x0048 (8 bytes) [ref] funcs: 62
    uint64_t field_0x0050;                      // 0x0050 (8 bytes) [read] funcs: 84, 85
    float field_0x0058;                         // 0x0058 (4 bytes) [read, float] funcs: 31, 84
    float field_0x005C;                         // 0x005C (4 bytes) [read, float] funcs: 31, 84, 87
    uint8_t _pad0060[0x10];
    uint8_t field_0x0070;                       // 0x0070 (1 bytes) [read, compare] funcs: 31, 86, 87
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSGO_BASESLIDER_HPP

