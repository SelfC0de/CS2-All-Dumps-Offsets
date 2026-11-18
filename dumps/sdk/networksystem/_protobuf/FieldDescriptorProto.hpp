// Auto-generated protobuf field constants — DO NOT EDIT
// Message: FieldDescriptorProto
// Module: networksystem.dll
// Proto file: google/protobuf/descriptor.proto
// Package: google.protobuf
#pragma once
#ifndef SDK_PROTO_FIELDDESCRIPTORPROTO_HPP
#define SDK_PROTO_FIELDDESCRIPTORPROTO_HPP

namespace sdk::proto {

struct google_protobuf_FieldOptions;

namespace FieldDescriptorProto_fields {

    enum class Type : int {
        TYPE_DOUBLE = 1,
        TYPE_FLOAT = 2,
        TYPE_INT64 = 3,
        TYPE_UINT64 = 4,
        TYPE_INT32 = 5,
        TYPE_FIXED64 = 6,
        TYPE_FIXED32 = 7,
        TYPE_BOOL = 8,
        TYPE_STRING = 9,
        TYPE_GROUP = 10,
        TYPE_MESSAGE = 11,
        TYPE_BYTES = 12,
        TYPE_UINT32 = 13,
        TYPE_ENUM = 14,
        TYPE_SFIXED32 = 15,
        TYPE_SFIXED64 = 16,
        TYPE_SINT32 = 17,
        TYPE_SINT64 = 18,
    };

    enum class Label : int {
        LABEL_OPTIONAL = 1,
        LABEL_REQUIRED = 2,
        LABEL_REPEATED = 3,
    };

    constexpr int name = 1;
    constexpr int number = 3;
    constexpr int label = 4;
    constexpr int type = 5;
    constexpr int type_name = 6;
    constexpr int extendee = 2;
    constexpr int default_value = 7;
    constexpr int oneof_index = 9;
    constexpr int json_name = 10;
    constexpr int options = 8;
    constexpr int proto3_optional = 17;

} // namespace FieldDescriptorProto_fields

} // namespace sdk::proto

#endif // SDK_PROTO_FIELDDESCRIPTORPROTO_HPP

