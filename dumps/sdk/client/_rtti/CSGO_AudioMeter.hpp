// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSGO_AudioMeter
// Module: client.dll
// Vtable functions: 85 total, 63 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSGO_AUDIOMETER_HPP
#define SDK_RTTI_CSGO_AUDIOMETER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSGO_AudioMeter {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 0, 7, 8, 14, 20, 32, 38, 58, 64, 65, 72, 76, 79, 80, 81
    void* field_0x0010;                         // 0x0010 (8 bytes) [read, ref, compare] funcs: 43, 81
    uint8_t _pad0018[0x8];
    void* field_0x0020;                         // 0x0020 (8 bytes) [ref] funcs: 55, 56, 62
    uint8_t _pad0028[0x8];
    uint8_t field_0x0030;                       // 0x0030 (1 bytes) [read, compare] funcs: 55, 56, 62, 84
    uint8_t field_0x0031;                       // 0x0031 (1 bytes) [read, compare] funcs: 4
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSGO_AUDIOMETER_HPP

