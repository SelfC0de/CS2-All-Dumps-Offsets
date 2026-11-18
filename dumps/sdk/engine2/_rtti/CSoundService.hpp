// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSoundService
// Module: engine2.dll
// Vtable functions: 37 total, 31 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSOUNDSERVICE_HPP
#define SDK_RTTI_CSOUNDSERVICE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSoundService {
    void* vtable;                               // 0x0000 (8 bytes)
    uint32_t field_0x0008;                      // 0x0008 (4 bytes) [read] funcs: 1
    uint8_t _pad000C[0x4];
    uint64_t field_0x0010;                      // 0x0010 (8 bytes) [read] funcs: 1
    uint8_t _pad0018[0x8];
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read, compare] funcs: 1
    uint8_t _pad0024[0x4];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read, write] funcs: 12, 18
    uint8_t field_0x0030;                       // 0x0030 (1 bytes) [read, write] funcs: 16, 17
    uint8_t _pad0031[0x1];
    uint16_t field_0x0032;                      // 0x0032 (2 bytes) [read, write] funcs: 20, 21
    uint8_t _pad0034[0x44];
    float field_0x0078[4];                      // 0x0078 (16 bytes) [read, float] funcs: 28
    uint8_t _pad0088[0x108];
    void* field_0x0190;                         // 0x0190 (8 bytes) [ref] funcs: 25, 26
    uint8_t _pad0198[0x88];
    void* field_0x0220;                         // 0x0220 (8 bytes) [ref] funcs: 30
    uint8_t _pad0228[0x88];
    float field_0x02B0;                         // 0x02B0 (4 bytes) [read, float] funcs: 34
    uint8_t _pad02B4[0x36];
    uint8_t field_0x02EA;                       // 0x02EA (1 bytes) [read] funcs: 27
    uint8_t _pad02EB[0x9];
    uint32_t field_0x02F4;                      // 0x02F4 (4 bytes) [read, compare] funcs: 4, 36
    uint8_t _pad02F8[0x10];
    uint32_t field_0x0308;                      // 0x0308 (4 bytes) [read] funcs: 24
    uint8_t _pad030C[0x4];
    uint64_t field_0x0310;                      // 0x0310 (8 bytes) [read] funcs: 24
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSOUNDSERVICE_HPP

