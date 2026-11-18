// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBtNodeConditionInactive
// Module: server.dll
// Vtable functions: 11 total, 10 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBTNODECONDITIONINACTIVE_HPP
#define SDK_RTTI_CBTNODECONDITIONINACTIVE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBtNodeConditionInactive {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [write] funcs: 1
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [write] funcs: 1
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read, write] funcs: 1, 9, 10
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read, compare] funcs: 1, 2, 4, 5, 6
    uint8_t _pad0024[0x4];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read] funcs: 1, 2, 5, 6
    uint8_t _pad0030[0x20];
    uint64_t field_0x0050;                      // 0x0050 (8 bytes) [write] funcs: 1
    uint8_t _pad0058[0x20];
    float field_0x0078;                         // 0x0078 (4 bytes) [read, float] funcs: 10
    uint8_t _pad007C[0x10];
    void* field_0x008C;                         // 0x008C (8 bytes) [ref] funcs: 10
    void* field_0x0094;                         // 0x0094 (8 bytes) [read, write, ref, compare] funcs: 9
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBTNODECONDITIONINACTIVE_HPP

