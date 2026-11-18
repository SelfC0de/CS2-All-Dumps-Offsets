// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CInstallScriptParser
// Module: steamclient64.dll
// Vtable functions: 5 total, 5 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CINSTALLSCRIPTPARSER_HPP
#define SDK_RTTI_CINSTALLSCRIPTPARSER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CInstallScriptParser {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x20];
    uint32_t field_0x0028;                      // 0x0028 (4 bytes) [read] funcs: 2
    uint8_t _pad002C[0x46];
    uint8_t field_0x0072;                       // 0x0072 (1 bytes) [read, compare] funcs: 1, 2
    uint8_t field_0x0073;                       // 0x0073 (1 bytes) [write] funcs: 1
    uint8_t _pad0074[0xC];
    uint64_t field_0x0080;                      // 0x0080 (8 bytes) [write] funcs: 1
    uint8_t _pad0088[0x18];
    uint64_t field_0x00A0;                      // 0x00A0 (8 bytes) [read, write, compare] funcs: 1, 2, 3
    uint64_t field_0x00A8;                      // 0x00A8 (8 bytes) [write] funcs: 3
    uint8_t _pad00B0[0x8];
    void* field_0x00B8;                         // 0x00B8 (8 bytes) [ref] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CINSTALLSCRIPTPARSER_HPP

