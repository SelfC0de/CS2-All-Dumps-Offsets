// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CLuaDbg
// Module: vscript.dll
// Vtable functions: 15 total, 15 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CLUADBG_HPP
#define SDK_RTTI_CLUADBG_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CLuaDbg {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x20];
    void* field_0x0028;                         // 0x0028 (8 bytes) [ref] funcs: 13
    uint8_t _pad0030[0x58];
    uint64_t field_0x0088;                      // 0x0088 (8 bytes) [read, compare] funcs: 1, 2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14
    void* field_0x0090;                         // 0x0090 (8 bytes) [read, ref] funcs: 0, 3
    uint64_t field_0x0098;                      // 0x0098 (8 bytes) [read] funcs: 6
    uint64_t field_0x00A0;                      // 0x00A0 (8 bytes) [read, compare] funcs: 1, 5, 7, 8, 9, 10, 11, 12, 13, 14
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CLUADBG_HPP

