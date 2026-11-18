// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CStatsService
// Module: engine2.dll
// Vtable functions: 27 total, 21 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSTATSSERVICE_HPP
#define SDK_RTTI_CSTATSSERVICE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CStatsService {
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
    uint8_t _pad0034[0x184];
    uint64_t field_0x01B8;                      // 0x01B8 (8 bytes) [read, float] funcs: 25
    uint64_t field_0x01C0;                      // 0x01C0 (8 bytes) [read, float] funcs: 26
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSTATSSERVICE_HPP

