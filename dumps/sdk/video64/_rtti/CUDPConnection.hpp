// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CUDPConnection
// Module: video64.dll
// Vtable functions: 31 total, 26 analyzed
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
    uint8_t _pad0008[0xC];
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read] funcs: 16, 24
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read, compare] funcs: 12, 13, 14, 24, 25
    uint32_t field_0x001C;                      // 0x001C (4 bytes) [read, compare] funcs: 29
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read, compare] funcs: 15, 28
    uint8_t field_0x0028;                       // 0x0028 (1 bytes) [read, compare] funcs: 28
    uint8_t _pad0029[0x1];
    uint8_t field_0x002A;                       // 0x002A (1 bytes) [read, compare] funcs: 3
    uint8_t _pad002B[0x1];
    void* field_0x002C;                         // 0x002C (8 bytes) [ref] funcs: 20
    uint8_t _pad0034[0x74];
    uint32_t field_0x00A8;                      // 0x00A8 (4 bytes) [write] funcs: 9
    uint8_t _pad00AC[0xC];
    uint64_t field_0x00B8;                      // 0x00B8 (8 bytes) [read] funcs: 5, 10, 25
    uint32_t field_0x00C0;                      // 0x00C0 (4 bytes) [write] funcs: 25
    uint8_t _pad00C4[0x4];
    void* field_0x00C8;                         // 0x00C8 (8 bytes) [ref] funcs: 4, 10
    uint8_t _pad00D0[0x38];
    void* field_0x0108;                         // 0x0108 (8 bytes) [ref] funcs: 25
    uint8_t _pad0110[0xE8];
    uint64_t field_0x01F8;                      // 0x01F8 (8 bytes) [read] funcs: 8
    uint8_t _pad0200[0x8];
    uint32_t field_0x0208;                      // 0x0208 (4 bytes) [read] funcs: 8
    uint8_t _pad020C[0x6C];
    void* field_0x0278;                         // 0x0278 (8 bytes) [read, ref] funcs: 23, 30
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CUDPCONNECTION_HPP

