// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: ClientModeShared
// Module: client.dll
// Vtable functions: 41 total, 31 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CLIENTMODESHARED_HPP
#define SDK_RTTI_CLIENTMODESHARED_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct ClientModeShared {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [write] funcs: 0
    uint8_t _pad0010[0x8];
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read] funcs: 20
    uint32_t field_0x001C;                      // 0x001C (4 bytes) [read] funcs: 10, 38
    void* field_0x0020;                         // 0x0020 (8 bytes) [read, ref] funcs: 10, 38, 40
    uint8_t field_0x0024;                       // 0x0024 (1 bytes) [read, compare] funcs: 18
    uint8_t field_0x0025;                       // 0x0025 (1 bytes) [read, write] funcs: 38
    uint8_t _pad0026[0x2];
    uint32_t field_0x0028;                      // 0x0028 (4 bytes) [read, write] funcs: 2, 32
    uint8_t _pad002C[0x4];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read] funcs: 0, 4
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CLIENTMODESHARED_HPP

