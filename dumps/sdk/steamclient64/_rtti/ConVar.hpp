// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: ConVar
// Module: steamclient64.dll
// Vtable functions: 35 total, 34 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CONVAR_HPP
#define SDK_RTTI_CONVAR_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct ConVar {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x8];
    uint8_t field_0x0010;                       // 0x0010 (1 bytes) [read, compare] funcs: 9
    uint8_t _pad0011[0x17];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read, compare] funcs: 2, 4, 5
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read, compare] funcs: 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 27, 28, 29, 30, 31, 32
    uint8_t _pad0038[0x8];
    void* field_0x0040;                         // 0x0040 (8 bytes) [ref] funcs: 26
    uint8_t _pad0048[0x18];
    uint64_t field_0x0060;                      // 0x0060 (8 bytes) [read] funcs: 0, 17
    uint8_t _pad0068[0x40];
    uint8_t field_0x00A8;                       // 0x00A8 (1 bytes) [read, compare] funcs: 33
    uint8_t _pad00A9[0x3];
    float field_0x00AC;                         // 0x00AC (4 bytes) [read, float] funcs: 33
    uint8_t _pad00B0[0x8];
    uint8_t field_0x00B8;                       // 0x00B8 (1 bytes) [read] funcs: 18
    uint8_t field_0x00B9;                       // 0x00B9 (1 bytes) [read, compare] funcs: 10, 11, 12, 13, 14, 15, 16
    uint8_t field_0x00BA;                       // 0x00BA (1 bytes) [read, compare] funcs: 21, 25
    uint8_t field_0x00BB;                       // 0x00BB (1 bytes) [read] funcs: 22
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CONVAR_HPP

