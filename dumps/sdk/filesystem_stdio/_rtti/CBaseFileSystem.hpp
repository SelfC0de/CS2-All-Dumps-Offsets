// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBaseFileSystem
// Module: filesystem_stdio.dll
// Vtable functions: 128 total, 122 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBASEFILESYSTEM_HPP
#define SDK_RTTI_CBASEFILESYSTEM_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBaseFileSystem {
    void* vtable;                               // 0x0000 (8 bytes)
    uint32_t field_0x0008;                      // 0x0008 (4 bytes) [read] funcs: 1
    uint8_t _pad000C[0x4];
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [read] funcs: 1
    uint8_t _pad0018[0x8];
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read, compare] funcs: 1, 30
    uint8_t field_0x0028;                       // 0x0028 (1 bytes) [read, write, compare] funcs: 107, 108
    uint8_t _pad0029[0x7];
    void* field_0x0030;                         // 0x0030 (8 bytes) [ref] funcs: 88, 94, 97, 106
    uint8_t _pad0038[0x30];
    uint32_t field_0x0068;                      // 0x0068 (4 bytes) [read, compare] funcs: 34, 36, 37
    uint8_t _pad006C[0xB0];
    void* field_0x011C;                         // 0x011C (8 bytes) [ref] funcs: 74
    uint8_t _pad0124[0x4C];
    uint32_t field_0x0170;                      // 0x0170 (4 bytes) [read, write] funcs: 70, 73
    uint8_t _pad0174[0x4];
    uint64_t field_0x0178;                      // 0x0178 (8 bytes) [write] funcs: 72
    uint8_t _pad0180[0x48];
    uint8_t field_0x01C8;                       // 0x01C8 (1 bytes) [read, compare] funcs: 34, 37, 109
    uint8_t field_0x01C9;                       // 0x01C9 (1 bytes) [read, write] funcs: 92, 93
    uint8_t _pad01CA[0xF];
    uint8_t field_0x01D9;                       // 0x01D9 (1 bytes) [read, compare] funcs: 110
    uint8_t _pad01DA[0x16];
    void* field_0x01F0;                         // 0x01F0 (8 bytes) [ref] funcs: 111
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBASEFILESYSTEM_HPP

