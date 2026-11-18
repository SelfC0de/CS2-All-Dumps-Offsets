// Auto-generated protobuf field constants — DO NOT EDIT
// Message: ClientCloudFileUploadBlockDetails
// Module: steamclient64.dll
// Proto file: steammessages_cloud.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CLIENTCLOUDFILEUPLOADBLOCKDETAILS_HPP
#define SDK_PROTO_CLIENTCLOUDFILEUPLOADBLOCKDETAILS_HPP

namespace sdk::proto {

struct ClientCloudFileUploadBlockDetails_HTTPHeaders;

namespace ClientCloudFileUploadBlockDetails_fields {

    namespace HTTPHeaders {
        constexpr int name = 1;
        constexpr int value = 2;
    } // namespace HTTPHeaders

    constexpr int url_host = 1;
    constexpr int url_path = 2;
    constexpr int use_https = 3;
    constexpr int http_method = 4;
    constexpr int request_headers = 5;
    constexpr int block_offset = 6;
    constexpr int block_length = 7;
    constexpr int explicit_body_data = 8;
    constexpr int may_parallelize = 9;

} // namespace ClientCloudFileUploadBlockDetails_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CLIENTCLOUDFILEUPLOADBLOCKDETAILS_HPP

