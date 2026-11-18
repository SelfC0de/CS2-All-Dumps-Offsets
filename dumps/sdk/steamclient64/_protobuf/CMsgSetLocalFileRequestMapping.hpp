// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSetLocalFileRequestMapping
// Module: steamclient64.dll
// Proto file: htmlmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSETLOCALFILEREQUESTMAPPING_HPP
#define SDK_PROTO_CMSGSETLOCALFILEREQUESTMAPPING_HPP

namespace sdk::proto {

struct CMsgSetLocalFileRequestMapping_AdditionalRoute;

namespace CMsgSetLocalFileRequestMapping_fields {

    namespace AdditionalRoute {
        constexpr int relative_url = 1;
        constexpr int local_path = 2;
        constexpr int allowed_extensions = 3;
        constexpr int url_rewrite = 4;
    } // namespace AdditionalRoute

    constexpr int browser_handle = 1;
    constexpr int request_url = 2;
    constexpr int default_local_path = 3;
    constexpr int routes = 4;

} // namespace CMsgSetLocalFileRequestMapping_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSETLOCALFILEREQUESTMAPPING_HPP

