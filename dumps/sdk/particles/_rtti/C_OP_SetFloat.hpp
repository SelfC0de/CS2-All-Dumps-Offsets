// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: C_OP_SetFloat
// Module: particles.dll
// Vtable functions: 38 total, 25 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_C_OP_SETFLOAT_HPP
#define SDK_RTTI_C_OP_SETFLOAT_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct C_OP_SetFloat {
    void* vtable;                               // 0x0000 (8 bytes)
    void* field_0x0008;                         // 0x0008 (8 bytes) [read, ref] funcs: 10
    uint8_t _pad0010[0x1D0];
    void* field_0x01E0;                         // 0x01E0 (8 bytes) [ref] funcs: 27
    uint8_t _pad01E8[0x170];
    uint32_t field_0x0358;                      // 0x0358 (4 bytes) [read] funcs: 6, 27, 30
    uint32_t field_0x035C;                      // 0x035C (4 bytes) [read] funcs: 27, 32
    void* field_0x0360;                         // 0x0360 (8 bytes) [ref] funcs: 27
    uint8_t _pad0368[0x28];
    void* field_0x0390;                         // 0x0390 (8 bytes) [ref] funcs: 4
    uint8_t _pad0398[0x58];
    void* field_0x03F0;                         // 0x03F0 (8 bytes) [ref] funcs: 4
    uint8_t _pad03F8[0xE8];
    float field_0x04E0[4];                      // 0x04E0 (16 bytes) [read, float] funcs: 27
    float field_0x04F0[4];                      // 0x04F0 (16 bytes) [read, float] funcs: 27
    float field_0x0500;                         // 0x0500 (4 bytes) [read, float] funcs: 27
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_C_OP_SETFLOAT_HPP

