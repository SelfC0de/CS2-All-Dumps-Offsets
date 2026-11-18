// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSysSessionClient
// Module: matchmaking.dll
// Vtable functions: 10 total, 10 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSYSSESSIONCLIENT_HPP
#define SDK_RTTI_CSYSSESSIONCLIENT_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSysSessionClient {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x40];
    void* field_0x0048;                         // 0x0048 (8 bytes) [ref] funcs: 0
    uint8_t _pad0050[0x18];
    void* field_0x0068;                         // 0x0068 (8 bytes) [ref] funcs: 0
    uint8_t _pad0070[0x18];
    uint64_t field_0x0088;                      // 0x0088 (8 bytes) [read, compare] funcs: 4
    uint8_t _pad0090[0x10];
    uint64_t field_0x00A0;                      // 0x00A0 (8 bytes) [read] funcs: 7, 8
    uint8_t _pad00A8[0x30];
    uint64_t field_0x00D8;                      // 0x00D8 (8 bytes) [read] funcs: 5
    float field_0x00E0;                         // 0x00E0 (4 bytes) [read, float] funcs: 1
    uint8_t _pad00E4[0x4];
    uint32_t field_0x00E8;                      // 0x00E8 (4 bytes) [read, compare] funcs: 1, 2, 5, 6
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSYSSESSIONCLIENT_HPP

