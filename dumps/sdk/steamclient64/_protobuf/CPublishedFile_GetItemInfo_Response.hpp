// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_GetItemInfo_Response
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_GETITEMINFO_RESPONSE_HPP
#define SDK_PROTO_CPUBLISHEDFILE_GETITEMINFO_RESPONSE_HPP

namespace sdk::proto {

struct CPublishedFile_GetItemInfo_Response_WorkshopItemInfo;

namespace CPublishedFile_GetItemInfo_Response_fields {

    namespace WorkshopItemInfo {
        constexpr int published_file_id = 1;
        constexpr int time_updated = 2;
        constexpr int manifest_id = 3;
        constexpr int flags = 4;
        constexpr int revision = 5;
        constexpr int author_snapshots = 6;
    } // namespace WorkshopItemInfo

    constexpr int update_time = 1;
    constexpr int workshop_items = 2;
    constexpr int private_items = 3;

} // namespace CPublishedFile_GetItemInfo_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_GETITEMINFO_RESPONSE_HPP

