// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CCSObserver_MovementServices
// Module: client.dll
// Vtable functions: 54 total, 43 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CCSOBSERVER_MOVEMENTSERVICES_HPP
#define SDK_RTTI_CCSOBSERVER_MOVEMENTSERVICES_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CCSObserver_MovementServices {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x28];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read, write, compare] funcs: 27
    uint64_t field_0x0038;                      // 0x0038 (8 bytes) [read, compare] funcs: 33, 35, 39, 43, 45
    uint8_t _pad0040[0x16C];
    float field_0x01AC;                         // 0x01AC (4 bytes) [read, write, float] funcs: 9, 39, 43
    uint8_t _pad01B0[0x90];
    uint64_t field_0x0240;                      // 0x0240 (8 bytes) [write, float] funcs: 35
    uint32_t field_0x0248;                      // 0x0248 (4 bytes) [write] funcs: 35
    uint8_t _pad024C[0x4];
    void* field_0x0250;                         // 0x0250 (8 bytes) [ref] funcs: 12
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CCSOBSERVER_MOVEMENTSERVICES_HPP

