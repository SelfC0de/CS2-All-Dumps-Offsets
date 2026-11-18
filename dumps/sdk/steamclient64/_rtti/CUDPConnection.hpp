// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CUDPConnection
// Module: steamclient64.dll
// Vtable functions: 35 total, 28 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CUDPCONNECTION_HPP
#define SDK_RTTI_CUDPCONNECTION_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CUDPConnection {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x4];
    void* field_0x000C;                         // 0x000C (8 bytes) [read, ref, compare] funcs: 20, 28
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, compare] funcs: 14, 15, 18, 28, 29
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read, compare] funcs: 4, 33
    uint64_t field_0x0018;                      // 0x0018 (8 bytes) [read, compare] funcs: 19, 32
    uint8_t field_0x0020;                       // 0x0020 (1 bytes) [read, compare] funcs: 32
    uint8_t _pad0021[0x1];
    uint8_t field_0x0022;                       // 0x0022 (1 bytes) [read, compare] funcs: 5
    uint8_t _pad0023[0x1];
    float field_0x0024[4];                      // 0x0024 (16 bytes) [read, float, ref] funcs: 4, 24
    uint64_t field_0x0034;                      // 0x0034 (8 bytes) [read, float] funcs: 4
    uint8_t _pad003C[0x74];
    uint32_t field_0x00B0;                      // 0x00B0 (4 bytes) [write] funcs: 11
    uint32_t field_0x00B4;                      // 0x00B4 (4 bytes) [read, compare] funcs: 3
    uint8_t _pad00B8[0x8];
    uint64_t field_0x00C0;                      // 0x00C0 (8 bytes) [read] funcs: 7, 12, 29
    uint32_t field_0x00C8;                      // 0x00C8 (4 bytes) [write] funcs: 29
    uint8_t _pad00CC[0x4];
    void* field_0x00D0;                         // 0x00D0 (8 bytes) [ref] funcs: 6, 12
    uint8_t _pad00D8[0x68];
    uint64_t field_0x0140;                      // 0x0140 (8 bytes) [write] funcs: 8
    uint8_t _pad0148[0x58];
    uint64_t field_0x01A0;                      // 0x01A0 (8 bytes) [read] funcs: 8
    uint8_t _pad01A8[0x60];
    uint32_t field_0x0208;                      // 0x0208 (4 bytes) [read] funcs: 10
    uint8_t _pad020C[0x6C];
    void* field_0x0278;                         // 0x0278 (8 bytes) [read, ref] funcs: 27, 34
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CUDPCONNECTION_HPP

