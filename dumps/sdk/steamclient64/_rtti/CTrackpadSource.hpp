// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CTrackpadSource
// Module: steamclient64.dll
// Vtable functions: 16 total, 15 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CTRACKPADSOURCE_HPP
#define SDK_RTTI_CTRACKPADSOURCE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CTrackpadSource {
    void* vtable;                               // 0x0000 (8 bytes)
    uint16_t field_0x0008;                      // 0x0008 (2 bytes) [write] funcs: 15
    uint16_t field_0x000A;                      // 0x000A (2 bytes) [write] funcs: 15
    uint8_t _pad000C[0x24];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read] funcs: 15
    uint8_t _pad0038[0x48];
    uint64_t field_0x0080;                      // 0x0080 (8 bytes) [read, write, compare] funcs: 1, 7, 8
    void* field_0x0088;                         // 0x0088 (8 bytes) [read, ref] funcs: 14
    uint32_t field_0x0090;                      // 0x0090 (4 bytes) [read] funcs: 4
    uint8_t _pad0094[0x4];
    uint32_t field_0x0098;                      // 0x0098 (4 bytes) [read] funcs: 4, 5
    uint8_t _pad009C[0x4];
    uint64_t field_0x00A0;                      // 0x00A0 (8 bytes) [read, compare] funcs: 6, 7
    uint8_t field_0x00A8;                       // 0x00A8 (1 bytes) [read, compare] funcs: 9
    uint8_t field_0x00A9;                       // 0x00A9 (1 bytes) [read, compare] funcs: 9
    uint8_t field_0x00AA;                       // 0x00AA (1 bytes) [read, compare] funcs: 7
    uint8_t _pad00AB[0x1];
    float field_0x00AC;                         // 0x00AC (4 bytes) [read, write, float] funcs: 3, 15
    float field_0x00B0;                         // 0x00B0 (4 bytes) [write, float] funcs: 3
    uint8_t _pad00B4[0x4];
    uint32_t field_0x00B8;                      // 0x00B8 (4 bytes) [read] funcs: 1
    uint8_t field_0x00BC;                       // 0x00BC (1 bytes) [read, compare] funcs: 9
    uint8_t _pad00BD[0x3];
    uint8_t field_0x00C0;                       // 0x00C0 (1 bytes) [read, compare] funcs: 1, 15
    uint8_t _pad00C1[0x7];
    uint64_t field_0x00C8;                      // 0x00C8 (8 bytes) [write] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CTRACKPADSOURCE_HPP

