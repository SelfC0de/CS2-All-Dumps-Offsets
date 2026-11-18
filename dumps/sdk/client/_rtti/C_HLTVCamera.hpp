// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: C_HLTVCamera
// Module: client.dll
// Vtable functions: 10 total, 10 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_C_HLTVCAMERA_HPP
#define SDK_RTTI_C_HLTVCAMERA_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct C_HLTVCamera {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t field_0x0008;                       // 0x0008 (1 bytes) [read, compare] funcs: 0
    uint8_t _pad0009[0x7];
    void* field_0x0010;                         // 0x0010 (8 bytes) [ref] funcs: 0, 2, 3
    uint8_t _pad0018[0x20];
    uint32_t field_0x0038;                      // 0x0038 (4 bytes) [read, write, compare] funcs: 6, 7, 8
    uint32_t field_0x003C;                      // 0x003C (4 bytes) [read] funcs: 5, 9
    uint8_t _pad0040[0x88];
    uint64_t field_0x00C8;                      // 0x00C8 (8 bytes) [write] funcs: 0
    uint8_t _pad00D0[0xA0];
    uint8_t field_0x0170;                       // 0x0170 (1 bytes) [read, compare] funcs: 2, 3
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_C_HLTVCAMERA_HPP

