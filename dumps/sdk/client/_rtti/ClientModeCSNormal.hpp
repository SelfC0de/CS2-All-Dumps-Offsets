// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: ClientModeCSNormal
// Module: client.dll
// Vtable functions: 42 total, 34 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CLIENTMODECSNORMAL_HPP
#define SDK_RTTI_CLIENTMODECSNORMAL_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct ClientModeCSNormal {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x10];
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read] funcs: 20
    uint32_t field_0x001C;                      // 0x001C (4 bytes) [read] funcs: 10
    void* field_0x0020;                         // 0x0020 (8 bytes) [read, ref] funcs: 10, 40
    uint8_t field_0x0024;                       // 0x0024 (1 bytes) [read, compare] funcs: 18
    uint8_t _pad0025[0x3];
    uint32_t field_0x0028;                      // 0x0028 (4 bytes) [read] funcs: 32
    uint8_t _pad002C[0x44];
    uint64_t field_0x0070;                      // 0x0070 (8 bytes) [read] funcs: 4
    uint8_t _pad0078[0xA0];
    void* field_0x0118;                         // 0x0118 (8 bytes) [ref] funcs: 25
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CLIENTMODECSNORMAL_HPP

