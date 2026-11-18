// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSkeletonInstance
// Module: server.dll
// Vtable functions: 31 total, 30 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSKELETONINSTANCE_HPP
#define SDK_RTTI_CSKELETONINSTANCE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSkeletonInstance {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x8];
    void* field_0x0010;                         // 0x0010 (8 bytes) [ref] funcs: 9
    uint8_t _pad0018[0x18];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read] funcs: 19, 20
    uint64_t field_0x0038;                      // 0x0038 (8 bytes) [read] funcs: 21
    uint8_t _pad0040[0x38];
    uint32_t field_0x0078;                      // 0x0078 (4 bytes) [read] funcs: 22
    uint8_t _pad007C[0x70];
    uint8_t field_0x00EC;                       // 0x00EC (1 bytes) [read, compare] funcs: 20, 21
    uint8_t _pad00ED[0x7];
    uint8_t field_0x00F4;                       // 0x00F4 (1 bytes) [read, compare] funcs: 9
    uint8_t _pad00F5[0x2B];
    void* field_0x0120;                         // 0x0120 (8 bytes) [ref] funcs: 21
    uint8_t _pad0128[0x98];
    uint64_t field_0x01C0;                      // 0x01C0 (8 bytes) [read, compare] funcs: 25, 26
    uint8_t _pad01C8[0x8];
    uint8_t field_0x01D0;                       // 0x01D0 (1 bytes) [read] funcs: 24
    uint8_t _pad01D1[0x1DA];
    uint8_t field_0x03AB;                       // 0x03AB (1 bytes) [write] funcs: 21
    uint8_t _pad03AC[0x5];
    uint8_t field_0x03B1;                       // 0x03B1 (1 bytes) [read, compare] funcs: 20
    uint8_t _pad03B2[0xE];
    void* field_0x03C0;                         // 0x03C0 (8 bytes) [read, ref] funcs: 6, 7, 8, 23
    uint64_t field_0x03C8;                      // 0x03C8 (8 bytes) [read] funcs: 26
    uint64_t field_0x03D0;                      // 0x03D0 (8 bytes) [read, compare] funcs: 14
    uint64_t field_0x03D8;                      // 0x03D8 (8 bytes) [read, compare] funcs: 14
    uint64_t field_0x03E0;                      // 0x03E0 (8 bytes) [read, compare] funcs: 14
    uint64_t field_0x03E8;                      // 0x03E8 (8 bytes) [read] funcs: 10
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSKELETONINSTANCE_HPP

