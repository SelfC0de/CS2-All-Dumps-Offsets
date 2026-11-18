// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: MessageQueue@talk_base
// Module: steamclient64.dll
// Vtable functions: 12 total, 12 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_MESSAGEQUEUE_TALK_BASE_HPP
#define SDK_RTTI_MESSAGEQUEUE_TALK_BASE_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct MessageQueue_talk_base {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x9];
    uint8_t field_0x0011;                       // 0x0011 (1 bytes) [read, compare] funcs: 2, 6, 7
    uint8_t field_0x0012;                       // 0x0012 (1 bytes) [read, compare] funcs: 4, 5, 8
    uint8_t _pad0013[0x5];
    float field_0x0018[4];                      // 0x0018 (16 bytes) [read, float, compare] funcs: 4, 5, 8
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read] funcs: 8
    uint8_t _pad0024[0x4];
    float field_0x0028[4];                      // 0x0028 (16 bytes) [read, float, compare] funcs: 4, 5, 8
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read] funcs: 8
    uint64_t field_0x0038;                      // 0x0038 (8 bytes) [read, float] funcs: 4, 5
    uint8_t _pad0040[0x10];
    uint64_t field_0x0050;                      // 0x0050 (8 bytes) [read, compare] funcs: 11
    uint8_t _pad0058[0x10];
    void* field_0x0068;                         // 0x0068 (8 bytes) [ref] funcs: 6, 7, 8, 11
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_MESSAGEQUEUE_TALK_BASE_HPP

