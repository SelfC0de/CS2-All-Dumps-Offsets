// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_GetAppRelationshipsBatched_Response
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_GETAPPRELATIONSHIPSBATCHED_RESPONSE_HPP
#define SDK_PROTO_CPUBLISHEDFILE_GETAPPRELATIONSHIPSBATCHED_RESPONSE_HPP

namespace sdk::proto {

struct CPublishedFile_GetAppRelationshipsBatched_Response_PublishedFileAppRelationship;

namespace CPublishedFile_GetAppRelationshipsBatched_Response_fields {

    namespace AppRelationship {
        constexpr int appid = 1;
        constexpr int relationship = 2;
    } // namespace AppRelationship

    namespace PublishedFileAppRelationship {
        constexpr int publishedfileid = 1;
        constexpr int result = 2;
        constexpr int app_relationships = 3;
    } // namespace PublishedFileAppRelationship

    constexpr int relationships = 1;

} // namespace CPublishedFile_GetAppRelationshipsBatched_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_GETAPPRELATIONSHIPSBATCHED_RESPONSE_HPP

