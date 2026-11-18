// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSerializedSOCache
// Module: server.dll
// Proto file: gcsdk_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSERIALIZEDSOCACHE_HPP
#define SDK_PROTO_CMSGSERIALIZEDSOCACHE_HPP

namespace sdk::proto {

struct CMsgSerializedSOCache_Cache;

namespace CMsgSerializedSOCache_fields {

    namespace TypeCache {
        constexpr int type = 1;
        constexpr int objects = 2;
        constexpr int service_id = 3;
    } // namespace TypeCache

    namespace Cache {
        namespace Version {
            constexpr int service = 1;
            constexpr int version = 2;
        } // namespace Version

        constexpr int type = 1;
        constexpr int id = 2;
        constexpr int versions = 3;
        constexpr int type_caches = 4;
    } // namespace Cache

    constexpr int file_version = 1;
    constexpr int caches = 2;
    constexpr int gc_socache_file_version = 3;

} // namespace CMsgSerializedSOCache_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSERIALIZEDSOCACHE_HPP

