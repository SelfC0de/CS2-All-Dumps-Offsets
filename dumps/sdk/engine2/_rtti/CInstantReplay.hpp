// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CInstantReplay
// Module: engine2.dll
// Vtable functions: 42 total, 28 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CINSTANTREPLAY_HPP
#define SDK_RTTI_CINSTANTREPLAY_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CInstantReplay {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x8];
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read] funcs: 3, 4
    uint8_t _pad0014[0x4];
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read] funcs: 25
    uint8_t _pad001C[0x8];
    uint32_t field_0x0024;                      // 0x0024 (4 bytes) [read] funcs: 2
    uint8_t _pad0028[0x4];
    uint32_t field_0x002C;                      // 0x002C (4 bytes) [read] funcs: 4, 5
    uint32_t field_0x0030;                      // 0x0030 (4 bytes) [read, compare] funcs: 12, 14
    uint8_t _pad0034[0xC];
    uint32_t field_0x0040;                      // 0x0040 (4 bytes) [read, write, compare] funcs: 12, 18, 20
    uint8_t field_0x0044;                       // 0x0044 (1 bytes) [read, compare] funcs: 3, 4, 11, 12, 14, 18, 21, 25
    uint8_t _pad0045[0x3];
    float field_0x0048;                         // 0x0048 (4 bytes) [read, write, float] funcs: 16, 17
    uint8_t _pad004C[0x4];
    uint32_t field_0x0050;                      // 0x0050 (4 bytes) [read, compare] funcs: 4, 18
    uint8_t _pad0054[0x4];
    uint64_t field_0x0058;                      // 0x0058 (8 bytes) [read] funcs: 3, 4
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CINSTANTREPLAY_HPP

