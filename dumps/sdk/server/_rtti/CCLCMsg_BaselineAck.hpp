// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CCLCMsg_BaselineAck
// Module: server.dll
// Vtable functions: 23 total, 21 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CCLCMSG_BASELINEACK_HPP
#define SDK_RTTI_CCLCMSG_BASELINEACK_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CCLCMsg_BaselineAck {
    void* vtable;                               // 0x0000 (8 bytes)
    void* field_0x0008;                         // 0x0008 (8 bytes) [read, ref] funcs: 0, 20, 22
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, write] funcs: 11, 20
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read, write] funcs: 8, 14
    void* field_0x0018;                         // 0x0018 (8 bytes) [read, ref] funcs: 11, 18
    uint8_t field_0x0020;                       // 0x0020 (1 bytes) [write] funcs: 20
    uint8_t _pad0021[0x3];
    uint32_t field_0x0024;                      // 0x0024 (4 bytes) [write] funcs: 20
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read] funcs: 18
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CCLCMSG_BASELINEACK_HPP

