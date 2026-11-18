// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CCvar
// Module: tier0.dll
// Vtable functions: 46 total, 42 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CCVAR_HPP
#define SDK_RTTI_CCVAR_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CCvar {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x50];
    uint16_t field_0x0058;                      // 0x0058 (2 bytes) [read] funcs: 4
    uint8_t _pad005A[0xFA];
    void* field_0x0154;                         // 0x0154 (8 bytes) [ref] funcs: 12, 13, 14, 15, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 30, 33, 34, 36, 38, 40, 41, 42, 43, 44, 45
    uint8_t _pad015C[0x4];
    void* field_0x0160;                         // 0x0160 (8 bytes) [ref] funcs: 32
    uint8_t _pad0168[0x100];
    void* field_0x0268;                         // 0x0268 (8 bytes) [ref] funcs: 3
    uint8_t _pad0270[0x82C];
    uint32_t field_0x0A9C;                      // 0x0A9C (4 bytes) [read] funcs: 35
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CCVAR_HPP

