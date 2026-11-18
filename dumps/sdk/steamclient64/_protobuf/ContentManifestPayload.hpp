// Auto-generated protobuf field constants — DO NOT EDIT
// Message: ContentManifestPayload
// Module: steamclient64.dll
// Proto file: content_manifest.proto
#pragma once
#ifndef SDK_PROTO_CONTENTMANIFESTPAYLOAD_HPP
#define SDK_PROTO_CONTENTMANIFESTPAYLOAD_HPP

namespace sdk::proto {

struct ContentManifestPayload_FileMapping;

namespace ContentManifestPayload_fields {

    namespace FileMapping {
        namespace ChunkData {
            constexpr int sha = 1;
            constexpr int crc = 2;
            constexpr int offset = 3;
            constexpr int cb_original = 4;
            constexpr int cb_compressed = 5;
        } // namespace ChunkData

        constexpr int filename = 1;
        constexpr int size = 2;
        constexpr int flags = 3;
        constexpr int sha_filename = 4;
        constexpr int sha_content = 5;
        constexpr int chunks = 6;
        constexpr int linktarget = 7;
    } // namespace FileMapping

    constexpr int mappings = 1;

} // namespace ContentManifestPayload_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CONTENTMANIFESTPAYLOAD_HPP

