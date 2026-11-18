// Auto-generated protobuf field constants — DO NOT EDIT
// Message: MethodOptions
// Module: panorama.dll
// Proto file: google/protobuf/descriptor.proto
// Package: google.protobuf
#pragma once
#ifndef SDK_PROTO_METHODOPTIONS_HPP
#define SDK_PROTO_METHODOPTIONS_HPP

namespace sdk::proto {

struct google_protobuf_UninterpretedOption;

namespace MethodOptions_fields {

    enum class IdempotencyLevel : int {
        IDEMPOTENCY_UNKNOWN = 0,
        NO_SIDE_EFFECTS = 1,
        IDEMPOTENT = 2,
    };

    constexpr int deprecated = 33;
    constexpr int idempotency_level = 34;
    constexpr int uninterpreted_option = 999;

} // namespace MethodOptions_fields

} // namespace sdk::proto

#endif // SDK_PROTO_METHODOPTIONS_HPP

