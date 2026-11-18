// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSchemaType_Atomic
// Module: schemasystem.dll
// Vtable functions: 17 total, 14 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSCHEMATYPE_ATOMIC_HPP
#define SDK_RTTI_CSCHEMATYPE_ATOMIC_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSchemaType_Atomic {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 2
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [read, compare] funcs: 0, 15
    uint8_t field_0x0018;                       // 0x0018 (1 bytes) [read, compare] funcs: 8
    uint8_t _pad0019[0x7];
    void* field_0x0020;                         // 0x0020 (8 bytes) [read, ref, compare] funcs: 0
    uint32_t field_0x0028;                      // 0x0028 (4 bytes) [read, compare] funcs: 9, 12
    uint16_t field_0x002C;                      // 0x002C (2 bytes) [read] funcs: 3
    uint8_t field_0x002E;                       // 0x002E (1 bytes) [read] funcs: 3
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSCHEMATYPE_ATOMIC_HPP

