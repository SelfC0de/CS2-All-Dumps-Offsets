// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CBtDecoratorTryLock
// Module: server.dll
// Vtable functions: 10 total, 9 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CBTDECORATORTRYLOCK_HPP
#define SDK_RTTI_CBTDECORATORTRYLOCK_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CBtDecoratorTryLock {
    void* vtable;                               // 0x0000 (8 bytes)
    uint8_t _pad0008[0x18];
    uint32_t field_0x0020;                      // 0x0020 (4 bytes) [read, compare] funcs: 2, 5, 6
    uint8_t _pad0024[0x4];
    uint64_t field_0x0028;                      // 0x0028 (8 bytes) [read] funcs: 2, 6
    uint8_t _pad0030[0x28];
    uint64_t field_0x0058;                      // 0x0058 (8 bytes) [read] funcs: 2
    uint8_t field_0x0060;                       // 0x0060 (1 bytes) [read, compare] funcs: 5, 6
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CBTDECORATORTRYLOCK_HPP

