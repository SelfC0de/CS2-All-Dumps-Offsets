// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CVideoFileStream
// Module: video64.dll
// Vtable functions: 8 total, 8 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CVIDEOFILESTREAM_HPP
#define SDK_RTTI_CVIDEOFILESTREAM_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CVideoFileStream {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [write] funcs: 0
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, compare] funcs: 1
    uint8_t _pad0014[0x4C];
    uint64_t field_0x0060;                      // 0x0060 (8 bytes) [read, write, compare] funcs: 6, 7
    uint8_t _pad0068[0x38];
    uint64_t field_0x00A0;                      // 0x00A0 (8 bytes) [read] funcs: 6
    uint8_t _pad00A8[0x8];
    uint64_t field_0x00B0;                      // 0x00B0 (8 bytes) [read] funcs: 0
    uint8_t _pad00B8[0x8];
    void* field_0x00C0;                         // 0x00C0 (8 bytes) [ref] funcs: 0, 7
    uint8_t _pad00C8[0x28];
    uint64_t field_0x00F0;                      // 0x00F0 (8 bytes) [read] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CVIDEOFILESTREAM_HPP

