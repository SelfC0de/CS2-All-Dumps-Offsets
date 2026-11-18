// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CSVCMsg_ServerInfo
// Module: networksystem.dll
// Vtable functions: 23 total, 21 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CSVCMSG_SERVERINFO_HPP
#define SDK_RTTI_CSVCMSG_SERVERINFO_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CSVCMsg_ServerInfo {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x8];
    uint32_t field_0x0010;                      // 0x0010 (4 bytes) [read, write] funcs: 3, 7, 11, 18
    uint32_t field_0x0014;                      // 0x0014 (4 bytes) [read, write] funcs: 8, 14
    void* field_0x0018;                         // 0x0018 (8 bytes) [write, ref] funcs: 18, 20, 22
    uint32_t field_0x001C;                      // 0x001C (4 bytes) [write] funcs: 22
    uint8_t _pad0020[0x8];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read] funcs: 20
    uint8_t _pad0030[0x20];
    uint32_t field_0x0050;                      // 0x0050 (4 bytes) [read] funcs: 11
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CSVCMSG_SERVERINFO_HPP

