// Auto-generated from RTTI vtable analysis — DO NOT EDIT
// Class: CEnvelopeAudioProcessor
// Module: soundsystem.dll
// Vtable functions: 16 total, 13 analyzed
// Fields are inferred from member access patterns (no PDB)
// Generated: 2026-11-18T09:20:44
#pragma once
#ifndef SDK_RTTI_CENVELOPEAUDIOPROCESSOR_HPP
#define SDK_RTTI_CENVELOPEAUDIOPROCESSOR_HPP

#include <cstdint>
#include <cstddef>

namespace sdk::rtti {

#pragma pack(push, 1)
struct CEnvelopeAudioProcessor {
    void* vtable;                               // 0x0000 (8 bytes)
    uint64_t field_0x0008;                      // 0x0008 (8 bytes) [read] funcs: 6
    void* field_0x0010;                         // 0x0010 (8 bytes) [ref] funcs: 0
    uint32_t field_0x0018;                      // 0x0018 (4 bytes) [read] funcs: 12
    float field_0x001C;                         // 0x001C (4 bytes) [read, float] funcs: 10
    uint8_t _pad0020[0x1C];
    void* field_0x003C;                         // 0x003C (8 bytes) [ref] funcs: 12
    uint8_t _pad0044[0x40];
    uint8_t field_0x0084;                       // 0x0084 (1 bytes) [read, compare] funcs: 11
    uint8_t field_0x0085;                       // 0x0085 (1 bytes) [read, write, compare] funcs: 8, 11
    uint8_t _pad0086[0x2];
    uint64_t field_0x0088;                      // 0x0088 (8 bytes) [write] funcs: 0
};
#pragma pack(pop)

} // namespace sdk::rtti

#endif // SDK_RTTI_CENVELOPEAUDIOPROCESSOR_HPP

