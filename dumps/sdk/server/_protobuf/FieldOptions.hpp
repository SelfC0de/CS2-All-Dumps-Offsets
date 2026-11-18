// Auto-generated protobuf field constants — DO NOT EDIT
// Message: FieldOptions
// Module: server.dll
// Proto file: google/protobuf/descriptor.proto
// Package: google.protobuf
#pragma once
#ifndef SDK_PROTO_FIELDOPTIONS_HPP
#define SDK_PROTO_FIELDOPTIONS_HPP

namespace sdk::proto {

struct google_protobuf_UninterpretedOption;

namespace FieldOptions_fields {

    enum class CType : int {
        STRING = 0,
        CORD = 1,
        STRING_PIECE = 2,
    };

    enum class JSType : int {
        JS_NORMAL = 0,
        JS_STRING = 1,
        JS_NUMBER = 2,
    };

    constexpr int ctype = 1;
    constexpr int packed = 2;
    constexpr int jstype = 6;
    constexpr int lazy = 5;
    constexpr int unverified_lazy = 15;
    constexpr int deprecated = 3;
    constexpr int weak = 10;
    constexpr int boxed_type = 20;
    constexpr int synthetic_default = 21;
    constexpr int uninterpreted_option = 999;

} // namespace FieldOptions_fields

} // namespace sdk::proto

#endif // SDK_PROTO_FIELDOPTIONS_HPP

