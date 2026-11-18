// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CPlayer_MovementServices
// Module: server.dll
// Vtable functions: 51 total, 40 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CPLAYER_MOVEMENTSERVICES_HPP
#define SDK_RTTI_CPLAYER_MOVEMENTSERVICES_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CPlayer_MovementServices {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x28];
    uint64_t field_0x0030;                      // 0x0030 (8 bytes) [read, write, compare] funcs: 20
    uint64_t field_0x0038;                      // 0x0038 (8 bytes) [read, compare] funcs: 29, 38, 40, 49
    uint8_t _pad0040[0x16C];
    float field_0x01AC;                         // 0x01AC (4 bytes) [read, float] funcs: 8
    uint8_t _pad01B0[0x10];
    uint32_t field_0x01C0;                      // 0x01C0 (4 bytes) [write] funcs: 38
    float field_0x01C4;                         // 0x01C4 (4 bytes) [write, float] funcs: 38
    float field_0x01C8;                         // 0x01C8 (4 bytes) [write, float] funcs: 38
    uint64_t field_0x01CC;                      // 0x01CC (8 bytes) [write, float] funcs: 38
    uint32_t field_0x01D4;                      // 0x01D4 (4 bytes) [write] funcs: 38
    uint8_t _pad01D8[0x78];
    void* field_0x0250;                         // 0x0250 (8 bytes) [ref] funcs: 11
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CPLAYER_MOVEMENTSERVICES_HPP

