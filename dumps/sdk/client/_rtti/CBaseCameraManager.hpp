// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBaseCameraManager
// Module: client.dll
// Vtable functions: 51 total, 51 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBASECAMERAMANAGER_HPP
#define SDK_RTTI_CBASECAMERAMANAGER_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBaseCameraManager {
    void* vtable;                               // 0x0000 (8 bytes)
    void* field_0x0008;                         // 0x0008 (8 bytes) [write, ref] funcs: 0, 48
    uint8_t _pad0010[0x8];
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [write] funcs: 1
    uint8_t _pad001C[0x4];
    uint64_t field_0x0020;                      // 0x0020 (8 bytes) [read, compare] funcs: 0, 11, 16, 17, 36, 44, 50
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read, write, compare] funcs: 0, 2, 3, 5, 9, 13, 14, 17, 19, 20, 37, 38, 39, 40, 41, 50
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read, write, compare] funcs: 2, 3, 5, 9, 50
    uint8_t field_0x0038;                       // 0x0038 (1 bytes) [read, compare] funcs: 2, 15
    uint8_t _pad0039[0x3];
    float field_0x003C;                         // 0x003C (4 bytes) [read, write, float] funcs: 2, 9
    float field_0x0040;                         // 0x0040 (4 bytes) [write, float] funcs: 9
    float field_0x0044;                         // 0x0044 (4 bytes) [read, float] funcs: 18
    uint8_t field_0x0048;                       // 0x0048 (1 bytes) [read, compare] funcs: 8
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBASECAMERAMANAGER_HPP

