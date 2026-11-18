// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_GetUserFiles_Request
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_GETUSERFILES_REQUEST_HPP
#define SDK_PROTO_CPUBLISHEDFILE_GETUSERFILES_REQUEST_HPP

namespace sdk::proto {

struct CPublishedFile_GetUserFiles_Request_DateRange;
struct CPublishedFile_GetUserFiles_Request_KVTag;
struct CPublishedFile_GetUserFiles_Request_TagGroup;

namespace CPublishedFile_GetUserFiles_Request_fields {

    namespace KVTag {
        constexpr int key = 1;
        constexpr int value = 2;
    } // namespace KVTag

    namespace TagGroup {
        constexpr int tags = 1;
    } // namespace TagGroup

    namespace DateRange {
        constexpr int timestamp_start = 1;
        constexpr int timestamp_end = 2;
    } // namespace DateRange

    constexpr int steamid = 1;
    constexpr int appid = 2;
    constexpr int shortcutid = 3;
    constexpr int page = 4;
    constexpr int numperpage = 5;
    constexpr int type = 6;
    constexpr int sortmethod = 7;
    constexpr int privacy = 9;
    constexpr int requiredtags = 10;
    constexpr int excludedtags = 11;
    constexpr int required_kv_tags = 30;
    constexpr int filetype = 14;
    constexpr int creator_appid = 15;
    constexpr int match_cloud_filename = 16;
    constexpr int cache_max_age_seconds = 27;
    constexpr int language = 29;
    constexpr int taggroups = 34;
    constexpr int date_range_created = 39;
    constexpr int date_range_updated = 40;
    constexpr int excluded_content_descriptors = 37;
    constexpr int admin_query = 38;
    constexpr int excluded_apps_with_content_descriptors = 41;
    constexpr int totalonly = 17;
    constexpr int ids_only = 18;
    constexpr int return_vote_data = 19;
    constexpr int return_tags = 20;
    constexpr int return_kv_tags = 21;
    constexpr int return_previews = 22;
    constexpr int return_children = 23;
    constexpr int return_short_description = 24;
    constexpr int return_for_sale_data = 26;
    constexpr int return_metadata = 28;
    constexpr int return_playtime_stats = 31;
    constexpr int strip_description_bbcode = 32;
    constexpr int return_reactions = 35;
    constexpr int startindex_override = 25;
    constexpr int desired_revision = 33;
    constexpr int return_apps = 36;

} // namespace CPublishedFile_GetUserFiles_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_GETUSERFILES_REQUEST_HPP

