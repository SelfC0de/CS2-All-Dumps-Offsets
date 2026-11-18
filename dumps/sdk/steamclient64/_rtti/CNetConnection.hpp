// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CNetConnection
// Module: steamclient64.dll
// Vtable functions: 35 total, 32 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CNETCONNECTION_HPP
#define SDK_RTTI_CNETCONNECTION_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CNetConnection {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x4];
    uint32_t field_0x000C;                      // 0x000C (4 bytes) [read] funcs: 28
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, compare] funcs: 28, 29
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read, compare] funcs: 4
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read, compare] funcs: 19
    uint8_t _pad0020[0x2];
    uint8_t field_0x0022;                       // 0x0022 (1 bytes) [read, compare] funcs: 5
    uint8_t _pad0023[0x1];
    float field_0x0024[4];                      // 0x0024 (16 bytes) [read, float, ref] funcs: 4, 24
    uint64_t field_0x0034;                      // 0x0034 (8 bytes) [read, float] funcs: 4
    uint8_t _pad003C[0x24];
    uint32_t field_0x0060;                      // 0x0060 (4 bytes) [read] funcs: 8
    uint8_t _pad0064[0x1C];
    uint64_t field_0x0080;                      // 0x0080 (8 bytes) [read] funcs: 8
    uint8_t _pad0088[0x28];
    uint32_t field_0x00B0;                      // 0x00B0 (4 bytes) [write] funcs: 11
    uint32_t field_0x00B4;                      // 0x00B4 (4 bytes) [read, compare] funcs: 3
    uint8_t _pad00B8[0x8];
    void* field_0x00C0;                         // 0x00C0 (8 bytes) [read, ref] funcs: 7, 12, 29, 34
    uint32_t field_0x00C8;                      // 0x00C8 (4 bytes) [write] funcs: 29
    uint8_t _pad00CC[0x4];
    void* field_0x00D0;                         // 0x00D0 (8 bytes) [ref] funcs: 6, 12
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CNETCONNECTION_HPP

