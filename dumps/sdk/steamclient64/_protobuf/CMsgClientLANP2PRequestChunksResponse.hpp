// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientLANP2PRequestChunksResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientlanp2p.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTLANP2PREQUESTCHUNKSRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTLANP2PREQUESTCHUNKSRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientLANP2PRequestChunksResponse_ChunkData;

namespace CMsgClientLANP2PRequestChunksResponse_fields {

    namespace ChunkData {
        constexpr int result = 1;
        constexpr int depot_id = 2;
        constexpr int sha = 3;
        constexpr int chunk_data = 4;
        constexpr int encrypted = 5;
        constexpr int compressed = 6;
    } // namespace ChunkData

    constexpr int chunk_responses = 1;

} // namespace CMsgClientLANP2PRequestChunksResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTLANP2PREQUESTCHUNKSRESPONSE_HPP

