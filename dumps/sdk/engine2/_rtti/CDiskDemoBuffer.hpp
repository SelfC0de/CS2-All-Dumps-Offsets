// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CDiskDemoBuffer
// Module: engine2.dll
// Vtable functions: 15 total, 15 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CDISKDEMOBUFFER_HPP
#define SDK_RTTI_CDISKDEMOBUFFER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CDiskDemoBuffer {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read, write] funcs: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13
    void* field_0x0010;                         // 0x0010 (8 bytes) [ref] funcs: 10, 12
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read] funcs: 0
    uint8_t _pad0018[0x38];
    void* field_0x0050;                         // 0x0050 (8 bytes) [ref] funcs: 10, 12
    uint8_t field_0x0054;                       // 0x0054 (1 bytes) [read] funcs: 10, 12
    uint8_t _pad0055[0x3];
    uint64_t field_0x0058;                      // 0x0058 (8 bytes) [read] funcs: 10
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CDISKDEMOBUFFER_HPP

