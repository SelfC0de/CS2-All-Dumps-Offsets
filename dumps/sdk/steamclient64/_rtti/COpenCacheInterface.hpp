// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: COpenCacheInterface
// Module: steamclient64.dll
// Vtable functions: 24 total, 21 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_COPENCACHEINTERFACE_HPP
#define SDK_RTTI_COPENCACHEINTERFACE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct COpenCacheInterface {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x10];
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read] funcs: 2, 3, 8, 13, 16, 22
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [write] funcs: 15
    uint32_t field_0x0028;                      // 0x0028 (4 bytes) [write] funcs: 15
    uint8_t field_0x002C;                       // 0x002C (1 bytes) [read, compare] funcs: 9, 10
    uint8_t _pad002D[0x43];
    uint64_t field_0x0070;                      // 0x0070 (8 bytes) [read, write] funcs: 15, 22
    uint8_t _pad0078[0x98];
    uint64_t field_0x0110;                      // 0x0110 (8 bytes) [read] funcs: 12
    uint8_t _pad0118[0x8];
    uint32_t field_0x0120;                      // 0x0120 (4 bytes) [read] funcs: 12
    uint8_t _pad0124[0x4C];
    uint8_t field_0x0170;                       // 0x0170 (1 bytes) [read] funcs: 6
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_COPENCACHEINTERFACE_HPP

