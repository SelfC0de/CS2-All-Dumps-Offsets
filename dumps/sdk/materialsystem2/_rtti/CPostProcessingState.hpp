// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CPostProcessingState
// Module: materialsystem2.dll
// Vtable functions: 18 total, 18 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CPOSTPROCESSINGSTATE_HPP
#define SDK_RTTI_CPOSTPROCESSINGSTATE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CPostProcessingState {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x70];
    uint32_t field_0x0078;                      // 0x0078 (4 bytes) [read] funcs: 1, 12
    uint8_t _pad007C[0x14];
    float field_0x0090[4];                      // 0x0090 (16 bytes) [read, write, float] funcs: 13, 14
    float field_0x00A0[4];                      // 0x00A0 (16 bytes) [read, write, float] funcs: 15, 16
    uint8_t _pad00B0[0x8];
    uint8_t field_0x00B8;                       // 0x00B8 (1 bytes) [write] funcs: 2
    uint8_t _pad00B9[0x3];
    uint32_t field_0x00BC;                      // 0x00BC (4 bytes) [read, write] funcs: 13, 14
    uint64_t field_0x00C0;                      // 0x00C0 (8 bytes) [read, compare] funcs: 17
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CPOSTPROCESSINGSTATE_HPP

