// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientUCMUpdatePublishedFile
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_ucm.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTUCMUPDATEPUBLISHEDFILE_HPP
#define SDK_PROTO_CMSGCLIENTUCMUPDATEPUBLISHEDFILE_HPP

namespace sdk::proto {

struct CMsgClientUCMUpdatePublishedFile_AdditionalPreview;
struct CMsgClientUCMUpdatePublishedFile_KeyValueTag;

namespace CMsgClientUCMUpdatePublishedFile_fields {

    namespace KeyValueTag {
        constexpr int key = 1;
        constexpr int value = 2;
    } // namespace KeyValueTag

    namespace AdditionalPreview {
        constexpr int original_file_name = 1;
        constexpr int internal_file_name = 2;
        constexpr int videoid = 3;
        constexpr int preview_type = 4;
        constexpr int update_index = 5;
    } // namespace AdditionalPreview

    constexpr int app_id = 1;
    constexpr int published_file_id = 2;
    constexpr int file_name = 3;
    constexpr int preview_file_name = 4;
    constexpr int title = 5;
    constexpr int description = 6;
    constexpr int tags = 7;
    constexpr int visibility = 8;
    constexpr int update_file = 9;
    constexpr int update_preview_file = 10;
    constexpr int update_title = 11;
    constexpr int update_description = 12;
    constexpr int update_tags = 13;
    constexpr int update_visibility = 14;
    constexpr int change_description = 15;
    constexpr int update_url = 16;
    constexpr int url = 17;
    constexpr int update_content_manifest = 18;
    constexpr int content_manifest = 19;
    constexpr int metadata = 20;
    constexpr int update_metadata = 21;
    constexpr int language = 22;
    constexpr int removed_kvtags = 23;
    constexpr int kvtags = 24;
    constexpr int previews = 25;
    constexpr int previews_to_remove = 26;
    constexpr int clear_in_progress = 27;
    constexpr int remove_all_kvtags = 28;
    constexpr int content_descriptors_to_add = 29;
    constexpr int content_descriptors_to_remove = 30;
    constexpr int allow_admin_tags = 31;
    constexpr int external_asset_id = 32;
    constexpr int game_branch_min = 33;
    constexpr int game_branch_max = 34;

} // namespace CMsgClientUCMUpdatePublishedFile_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTUCMUPDATEPUBLISHEDFILE_HPP

