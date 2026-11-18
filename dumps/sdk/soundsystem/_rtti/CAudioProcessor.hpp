// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CAudioProcessor
// Module: soundsystem.dll
// Vtable functions: 16 total, 13 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CAUDIOPROCESSOR_HPP
#define SDK_RTTI_CAUDIOPROCESSOR_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CAudioProcessor {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 6
    uint8_t _pad0010[0x8];
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read] funcs: 12
    float field_0x001C;                         // 0x001C (4 bytes) [read, float] funcs: 10
    uint8_t _pad0020[0x14];
    uint32_t field_0x0034;                      // 0x0034 (4 bytes) [read, compare] funcs: 1
    uint8_t _pad0038[0x4];
    void* field_0x003C;                         // 0x003C (8 bytes) [ref] funcs: 12
    uint8_t _pad0044[0x40];
    uint8_t field_0x0084;                       // 0x0084 (1 bytes) [read, compare] funcs: 11
    uint8_t field_0x0085;                       // 0x0085 (1 bytes) [read, write, compare] funcs: 8, 11
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CAUDIOPROCESSOR_HPP

