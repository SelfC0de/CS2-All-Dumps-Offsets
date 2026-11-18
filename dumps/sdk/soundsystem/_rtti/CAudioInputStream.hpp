// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CAudioInputStream
// Module: soundsystem.dll
// Vtable functions: 7 total, 7 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CAUDIOINPUTSTREAM_HPP
#define SDK_RTTI_CAUDIOINPUTSTREAM_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CAudioInputStream {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 2, 3, 6
    uint8_t _pad0010[0x50];
    uint64_t field_0x0060;                      // 0x0060 (8 bytes) [read, compare] funcs: 2, 5
    uint32_t field_0x0068;                      // 0x0068 (4 bytes) [read] funcs: 3
    uint8_t _pad006C[0x8];
    void* field_0x0074;                         // 0x0074 (8 bytes) [ref] funcs: 4
    uint32_t field_0x007C;                      // 0x007C (4 bytes) [read, compare] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CAUDIOINPUTSTREAM_HPP

