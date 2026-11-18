// Auto-generated protobuf field constants — DO NOT EDIT
// Message: ContentDeltaChunks
// Module: steamclient64.dll
// Proto file: content_manifest.proto
#pragma once
#ifndef SDK_PROTO_CONTENTDELTACHUNKS_HPP
#define SDK_PROTO_CONTENTDELTACHUNKS_HPP

namespace sdk::proto {

struct ContentDeltaChunks_DeltaChunk;

namespace ContentDeltaChunks_fields {

    namespace DeltaChunk {
        constexpr int sha_source = 1;
        constexpr int sha_target = 2;
        constexpr int size_original = 3;
        constexpr int patch_method = 4;
        constexpr int chunk = 5;
        constexpr int size_delta = 6;
    } // namespace DeltaChunk

    constexpr int depot_id = 1;
    constexpr int manifest_id_source = 2;
    constexpr int manifest_id_target = 3;
    constexpr int deltaChunks = 4;
    constexpr int chunk_data_location = 5;

} // namespace ContentDeltaChunks_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CONTENTDELTACHUNKS_HPP

