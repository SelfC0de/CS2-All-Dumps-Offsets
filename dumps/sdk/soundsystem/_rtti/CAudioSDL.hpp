// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CAudioSDL
// Module: soundsystem.dll
// Vtable functions: 13 total, 13 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CAUDIOSDL_HPP
#define SDK_RTTI_CAUDIOSDL_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CAudioSDL {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x58];
    uint64_t field_0x0060;                      // 0x0060 (8 bytes) [read, compare] funcs: 10
    uint8_t _pad0068[0x220];
    void* field_0x0288;                         // 0x0288 (8 bytes) [ref] funcs: 7
    uint8_t _pad0290[0x214];
    uint8_t field_0x04A4;                       // 0x04A4 (1 bytes) [write] funcs: 6
    uint8_t _pad04A5[0x3];
    uint64_t field_0x04A8;                      // 0x04A8 (8 bytes) [read] funcs: 2, 3, 4
    uint8_t _pad04B0[0x10];
    uint8_t field_0x04C0;                       // 0x04C0 (1 bytes) [read, compare] funcs: 1
    uint8_t _pad04C1[0x3];
    float field_0x04C4;                         // 0x04C4 (4 bytes) [read, float] funcs: 11
    float field_0x04C8[4];                      // 0x04C8 (16 bytes) [read, float] funcs: 12
    void* field_0x04D8;                         // 0x04D8 (8 bytes) [ref] funcs: 8
    uint8_t _pad04E0[0x1F8];
    uint32_t field_0x06D8;                      // 0x06D8 (4 bytes) [read] funcs: 8
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CAUDIOSDL_HPP

