// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: ConCommand
// Module: steamclient64.dll
// Vtable functions: 14 total, 13 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CONCOMMAND_HPP
#define SDK_RTTI_CONCOMMAND_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct ConCommand {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x8];
    uint8_t field_0x0010;                       // 0x0010 (1 bytes) [read, compare] funcs: 8, 9
    uint8_t _pad0011[0x7];
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read] funcs: 6
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read] funcs: 7
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read, compare] funcs: 2, 4, 5
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read] funcs: 13
    uint8_t _pad0038[0x8];
    uint64_t field_0x0040;                      // 0x0040 (8 bytes) [read, write, compare] funcs: 10, 11
    uint8_t field_0x0048;                       // 0x0048 (1 bytes) [read] funcs: 12
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CONCOMMAND_HPP

