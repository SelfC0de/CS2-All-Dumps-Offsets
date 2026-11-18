// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CPrediction
// Module: client.dll
// Vtable functions: 30 total, 25 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CPREDICTION_HPP
#define SDK_RTTI_CPREDICTION_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CPrediction {
    void* vtable;                               // 0x0000 (8 bytes)
    uint32_t field_0x0008;                      // 0x0008 (4 bytes) [read] funcs: 1
    uint8_t _pad000C[0x4];
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [read] funcs: 1
    uint8_t _pad0018[0x8];
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read, compare] funcs: 1
    uint8_t _pad0024[0x2C];
    uint32_t field_0x0050;                      // 0x0050 (4 bytes) [read] funcs: 4, 27, 28
    uint8_t _pad0054[0x4];
    uint64_t field_0x0058;                      // 0x0058 (8 bytes) [read] funcs: 27
    uint8_t _pad0060[0x70];
    float field_0x00D0;                         // 0x00D0 (4 bytes) [read, float] funcs: 18
    void* field_0x00D4;                         // 0x00D4 (8 bytes) [read, ref, compare] funcs: 17, 20
    uint8_t _pad00DC[0x30];
    uint32_t field_0x010C;                      // 0x010C (4 bytes) [read, compare] funcs: 19
    uint32_t field_0x0110;                      // 0x0110 (4 bytes) [read] funcs: 29
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CPREDICTION_HPP

