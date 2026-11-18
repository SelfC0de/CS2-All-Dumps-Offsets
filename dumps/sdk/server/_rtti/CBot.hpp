// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBot
// Module: server.dll
// Vtable functions: 26 total, 26 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBOT_HPP
#define SDK_RTTI_CBOT_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBot {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x10];
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read] funcs: 25
    uint8_t _pad0020[0x8];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [write] funcs: 1
    uint8_t _pad0030[0x90];
    uint8_t field_0x00C0;                       // 0x00C0 (1 bytes) [read] funcs: 7
    uint8_t field_0x00C1;                       // 0x00C1 (1 bytes) [read, compare] funcs: 22
    uint8_t _pad00C2[0xE];
    uint64_t field_0x00D0;                      // 0x00D0 (8 bytes) [read, write] funcs: 10, 11, 12, 13, 15, 16, 17, 18, 19, 20, 21, 22
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBOT_HPP

