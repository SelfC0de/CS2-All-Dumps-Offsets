// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: Thread@talk_base
// Module: steamclient64.dll
// Vtable functions: 15 total, 15 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_THREAD_TALK_BASE_HPP
#define SDK_RTTI_THREAD_TALK_BASE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct Thread_talk_base {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x9];
    uint8_t field_0x0011;                       // 0x0011 (1 bytes) [read, compare] funcs: 2, 6, 7, 14
    uint8_t field_0x0012;                       // 0x0012 (1 bytes) [read, compare] funcs: 4, 5
    uint8_t _pad0013[0x5];
    float field_0x0018[4];                      // 0x0018 (16 bytes) [read, float] funcs: 4, 5
    float field_0x0028[4];                      // 0x0028 (16 bytes) [read, float] funcs: 4, 5
    uint64_t field_0x0038;                      // 0x0038 (8 bytes) [read, float] funcs: 4, 5
    uint8_t _pad0040[0x10];
    uint64_t field_0x0050;                      // 0x0050 (8 bytes) [read, compare] funcs: 11
    uint8_t _pad0058[0x10];
    void* field_0x0068;                         // 0x0068 (8 bytes) [ref] funcs: 6, 7, 8, 11
    uint8_t _pad0070[0x20];
    uint64_t field_0x0090;                      // 0x0090 (8 bytes) [read] funcs: 8, 10
    uint64_t field_0x0098;                      // 0x0098 (8 bytes) [read] funcs: 10
    uint32_t field_0x00A0;                      // 0x00A0 (4 bytes) [read] funcs: 12
    uint8_t field_0x00A4;                       // 0x00A4 (1 bytes) [read, compare] funcs: 1
    uint8_t field_0x00A5;                       // 0x00A5 (1 bytes) [read, compare] funcs: 10
    uint8_t _pad00A6[0x2];
    uint64_t field_0x00A8;                      // 0x00A8 (8 bytes) [read] funcs: 1
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_THREAD_TALK_BASE_HPP

