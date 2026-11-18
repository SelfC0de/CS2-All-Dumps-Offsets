// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CEntitySystem
// Module: client.dll
// Vtable functions: 24 total, 24 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CENTITYSYSTEM_HPP
#define SDK_RTTI_CENTITYSYSTEM_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CEntitySystem {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read, write] funcs: 0, 1, 3, 4, 6, 9
    uint8_t _pad0010[0xC38];
    uint32_t field_0x0C48;                      // 0x0C48 (4 bytes) [read, compare] funcs: 4, 9
    uint8_t _pad0C4C[0x10];
    float field_0x0C5C;                         // 0x0C5C (4 bytes) [read, float] funcs: 21
    uint8_t _pad0C60[0xA8];
    uint64_t field_0x0D08;                      // 0x0D08 (8 bytes) [read] funcs: 21
    uint8_t _pad0D10[0x12B0];
    uint32_t field_0x1FC0;                      // 0x1FC0 (4 bytes) [read, write] funcs: 9
    uint8_t _pad1FC4[0xC];
    float field_0x1FD0[4];                      // 0x1FD0 (16 bytes) [write, float, ref] funcs: 4, 9
    float field_0x1FE0[4];                      // 0x1FE0 (16 bytes) [write, float] funcs: 9
    float field_0x1FF0[4];                      // 0x1FF0 (16 bytes) [write, float] funcs: 9
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CENTITYSYSTEM_HPP

