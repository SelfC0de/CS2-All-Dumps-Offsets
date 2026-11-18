// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBtDecoratorMemory
// Module: server.dll
// Vtable functions: 10 total, 9 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBTDECORATORMEMORY_HPP
#define SDK_RTTI_CBTDECORATORMEMORY_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBtDecoratorMemory {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [write] funcs: 1
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [write] funcs: 1
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [write] funcs: 1
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read, compare] funcs: 1, 4, 5, 6
    uint8_t _pad0024[0x4];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read] funcs: 1, 5, 6
    uint8_t _pad0030[0x20];
    uint64_t field_0x0050;                      // 0x0050 (8 bytes) [write] funcs: 1
    uint8_t _pad0058[0x10];
    void* field_0x0068;                         // 0x0068 (8 bytes) [read, ref, compare] funcs: 2, 7
    uint8_t _pad0070[0x10];
    void* field_0x0080;                         // 0x0080 (8 bytes) [ref] funcs: 7
    void* field_0x0088;                         // 0x0088 (8 bytes) [read, ref] funcs: 2, 7
    uint64_t field_0x0090;                      // 0x0090 (8 bytes) [read] funcs: 3
    uint8_t _pad0098[0x8];
    void* field_0x00A0;                         // 0x00A0 (8 bytes) [ref] funcs: 7
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBTDECORATORMEMORY_HPP

