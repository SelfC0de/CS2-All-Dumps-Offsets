// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CStdMemAlloc
// Module: tier0_s64.dll
// Vtable functions: 65 total, 39 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSTDMEMALLOC_HPP
#define SDK_RTTI_CSTDMEMALLOC_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CStdMemAlloc {
    void* vtable;                               // 0x0000 (8 bytes)
    uint32_t field_0x0008;                      // 0x0008 (4 bytes) [read, compare] funcs: 1
    uint32_t field_0x000C;                      // 0x000C (4 bytes) [read, write] funcs: 10, 62, 64
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, write] funcs: 10, 62
    uint8_t _pad0014[0x4];
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read] funcs: 33, 36, 37
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read] funcs: 35
    uint8_t _pad0028[0x44];
    uint32_t field_0x006C;                      // 0x006C (4 bytes) [read, compare] funcs: 2, 3, 36, 37
    uint64_t field_0x0070;                      // 0x0070 (8 bytes) [read, compare] funcs: 2, 3, 36, 37
    uint64_t field_0x0078;                      // 0x0078 (8 bytes) [read, compare] funcs: 2, 3, 36, 37
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSTDMEMALLOC_HPP

