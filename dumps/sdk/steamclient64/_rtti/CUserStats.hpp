// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CUserStats
// Module: steamclient64.dll
// Vtable functions: 56 total, 56 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CUSERSTATS_HPP
#define SDK_RTTI_CUSERSTATS_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CUserStats {
    void* vtable;                               // 0x0000 (8 bytes)
    void* field_0x0008;                         // 0x0008 (8 bytes) [read, ref] funcs: 9, 10, 11, 13, 14
    uint8_t _pad0010[0x128];
    uint64_t field_0x0138;                      // 0x0138 (8 bytes) [read, compare] funcs: 19, 28, 29, 34, 37, 38, 39, 47
    uint8_t _pad0140[0x8];
    uint32_t field_0x0148;                      // 0x0148 (4 bytes) [write] funcs: 21
    uint8_t _pad014C[0x24C];
    uint64_t field_0x0398;                      // 0x0398 (8 bytes) [read] funcs: 36
    uint8_t _pad03A0[0x28];
    uint32_t field_0x03C8;                      // 0x03C8 (4 bytes) [read, compare] funcs: 36
    uint8_t _pad03CC[0xC];
    void* field_0x03D8;                         // 0x03D8 (8 bytes) [ref] funcs: 30, 31, 32, 33
    uint8_t _pad03E0[0x10];
    uint32_t field_0x03F0;                      // 0x03F0 (4 bytes) [read] funcs: 30, 31, 32, 33
    uint8_t _pad03F4[0x14];
    uint64_t field_0x0408;                      // 0x0408 (8 bytes) [read] funcs: 30, 31, 32, 33
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CUSERSTATS_HPP

