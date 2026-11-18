// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: Instance@RadeonRays
// Module: phonon.dll
// Vtable functions: 12 total, 11 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_INSTANCE_RADEONRAYS_HPP
#define SDK_RTTI_INSTANCE_RADEONRAYS_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct Instance_RadeonRays {
    void* vtable;                               // 0x0000 (8 bytes)
    void* field_0x0008;                         // 0x0008 (8 bytes) [ref] funcs: 1
    void* field_0x000C;                         // 0x000C (8 bytes) [ref] funcs: 2
    uint8_t _pad0014[0x74];
    float field_0x0088[4];                      // 0x0088 (16 bytes) [read, write, float] funcs: 3, 4
    float field_0x0098[4];                      // 0x0098 (16 bytes) [read, write, float] funcs: 5, 6
    uint32_t field_0x00A8;                      // 0x00A8 (4 bytes) [read, write] funcs: 9, 10
    uint32_t field_0x00AC;                      // 0x00AC (4 bytes) [read, write] funcs: 7, 8
    uint32_t field_0x00B0;                      // 0x00B0 (4 bytes) [write] funcs: 3, 5, 7, 9
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_INSTANCE_RADEONRAYS_HPP

