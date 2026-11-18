// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CNetConnection
// Module: video64.dll
// Vtable functions: 31 total, 30 analyzed
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
    uint8_t _pad0008[0xC];
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read] funcs: 24
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read, compare] funcs: 24, 25
    uint8_t _pad001C[0x4];
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read, compare] funcs: 15
    uint8_t _pad0028[0x2];
    uint8_t field_0x002A;                       // 0x002A (1 bytes) [read, compare] funcs: 3
    uint8_t _pad002B[0x1];
    void* field_0x002C;                         // 0x002C (8 bytes) [ref] funcs: 20
    uint8_t _pad0034[0x74];
    uint32_t field_0x00A8;                      // 0x00A8 (4 bytes) [write] funcs: 9
    uint8_t _pad00AC[0xC];
    uint64_t field_0x00B8;                      // 0x00B8 (8 bytes) [read] funcs: 5, 10, 25, 30
    uint32_t field_0x00C0;                      // 0x00C0 (4 bytes) [write] funcs: 25
    uint8_t _pad00C4[0x4];
    void* field_0x00C8;                         // 0x00C8 (8 bytes) [ref] funcs: 4, 10
    uint8_t _pad00D0[0x38];
    void* field_0x0108;                         // 0x0108 (8 bytes) [ref] funcs: 25
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CNETCONNECTION_HPP

