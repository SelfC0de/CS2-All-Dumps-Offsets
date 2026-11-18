// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_QueryFiles_Request
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_QUERYFILES_REQUEST_HPP
#define SDK_PROTO_CPUBLISHEDFILE_QUERYFILES_REQUEST_HPP

namespace sdk::proto {

struct CPublishedFile_QueryFiles_Request_DateRange;
struct CPublishedFile_QueryFiles_Request_KVTag;
struct CPublishedFile_QueryFiles_Request_TagGroup;

namespace CPublishedFile_QueryFiles_Request_fields {

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

    constexpr int query_type = 1;
    constexpr int page = 2;
    constexpr int cursor = 39;
    constexpr int numperpage = 3;
    constexpr int creator_appid = 4;
    constexpr int appid = 5;
    constexpr int requiredtags = 6;
    constexpr int excludedtags = 7;
    constexpr int match_all_tags = 8;
    constexpr int required_flags = 9;
    constexpr int omitted_flags = 10;
    constexpr int search_text = 11;
    constexpr int filetype = 12;
    constexpr int child_publishedfileid = 13;
    constexpr int days = 14;
    constexpr int include_recent_votes_only = 15;
    constexpr int cache_max_age_seconds = 31;
    constexpr int language = 33;
    constexpr int required_kv_tags = 34;
    constexpr int taggroups = 42;
    constexpr int date_range_created = 44;
    constexpr int date_range_updated = 45;
    constexpr int excluded_content_descriptors = 46;
    constexpr int admin_query = 47;
    constexpr int special_filter = 48;
    constexpr int appids_required_for_use = 49;
    constexpr int excluded_appids_required_for_use = 51;
    constexpr int search_text_target = 50;
    constexpr int totalonly = 16;
    constexpr int ids_only = 35;
    constexpr int return_vote_data = 17;
    constexpr int return_tags = 18;
    constexpr int return_kv_tags = 19;
    constexpr int return_previews = 20;
    constexpr int return_children = 21;
    constexpr int return_short_description = 22;
    constexpr int return_for_sale_data = 30;
    constexpr int return_metadata = 32;
    constexpr int return_playtime_stats = 36;
    constexpr int return_details = 37;
    constexpr int strip_description_bbcode = 38;
    constexpr int desired_revision = 40;
    constexpr int return_reactions = 43;

} // namespace CPublishedFile_QueryFiles_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_QUERYFILES_REQUEST_HPP

