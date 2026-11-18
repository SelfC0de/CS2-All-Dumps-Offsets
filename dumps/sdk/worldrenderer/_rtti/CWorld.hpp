// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CWorld
// Module: worldrenderer.dll
// Vtable functions: 14 total, 14 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CWORLD_HPP
#define SDK_RTTI_CWORLD_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CWorld {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 12
    uint8_t _pad0010[0xF8];
    uint32_t field_0x0108;                      // 0x0108 (4 bytes) [read, write] funcs: 5
    uint8_t _pad010C[0xC];
    uint64_t field_0x0118;                      // 0x0118 (8 bytes) [read] funcs: 4, 5
    float field_0x0120[4];                      // 0x0120 (16 bytes) [write, float, ref] funcs: 2, 3
    float field_0x0130[4];                      // 0x0130 (16 bytes) [write, float] funcs: 2
    float field_0x0140[4];                      // 0x0140 (16 bytes) [write, float] funcs: 2
    void* field_0x0150;                         // 0x0150 (8 bytes) [ref] funcs: 10
    uint8_t _pad0158[0xC0];
    uint64_t field_0x0218;                      // 0x0218 (8 bytes) [read, write, compare] funcs: 0
    uint8_t _pad0220[0x28];
    uint8_t field_0x0248;                       // 0x0248 (1 bytes) [read] funcs: 0, 8, 9
    uint8_t _pad0249[0x67];
    uint32_t field_0x02B0;                      // 0x02B0 (4 bytes) [write] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CWORLD_HPP

