// Auto-generated protobuf field constants — DO NOT EDIT
// Message: PublishedFileDetails
// Module: client.dll
// Proto file: steammessages_publishedfile.steamworkssdk.proto
#pragma once
#ifndef SDK_PROTO_PUBLISHEDFILEDETAILS_HPP
#define SDK_PROTO_PUBLISHEDFILEDETAILS_HPP

namespace sdk::proto {

struct PublishedFileDetails_Child;
struct PublishedFileDetails_KVTag;
struct PublishedFileDetails_Preview;
struct PublishedFileDetails_Tag;
struct PublishedFileDetails_VoteData;

namespace PublishedFileDetails_fields {

    namespace Tag {
        constexpr int tag = 1;
        constexpr int adminonly = 2;
    } // namespace Tag

    namespace Preview {
        constexpr int previewid = 1;
        constexpr int sortorder = 2;
        constexpr int url = 3;
        constexpr int size = 4;
        constexpr int filename = 5;
        constexpr int youtubevideoid = 6;
    } // namespace Preview

    namespace Child {
        constexpr int publishedfileid = 1;
        constexpr int sortorder = 2;
        constexpr int file_type = 3;
    } // namespace Child

    namespace KVTag {
        constexpr int key = 1;
        constexpr int value = 2;
    } // namespace KVTag

    namespace VoteData {
        constexpr int score = 1;
        constexpr int votes_up = 2;
        constexpr int votes_down = 3;
    } // namespace VoteData

    constexpr int result = 1;
    constexpr int publishedfileid = 2;
    constexpr int creator = 3;
    constexpr int creator_appid = 4;
    constexpr int consumer_appid = 5;
    constexpr int consumer_shortcutid = 6;
    constexpr int filename = 7;
    constexpr int file_size = 8;
    constexpr int preview_file_size = 9;
    constexpr int file_url = 10;
    constexpr int preview_url = 11;
    constexpr int youtubevideoid = 12;
    constexpr int url = 13;
    constexpr int hcontent_file = 14;
    constexpr int hcontent_preview = 15;
    constexpr int title = 16;
    constexpr int file_description = 17;
    constexpr int short_description = 18;
    constexpr int time_created = 19;
    constexpr int time_updated = 20;
    constexpr int visibility = 21;
    constexpr int flags = 22;
    constexpr int workshop_file = 23;
    constexpr int workshop_accepted = 24;
    constexpr int show_subscribe_all = 25;
    constexpr int num_comments_developer = 26;
    constexpr int num_comments_public = 27;
    constexpr int banned = 28;
    constexpr int ban_reason = 29;
    constexpr int banner = 30;
    constexpr int can_be_deleted = 31;
    constexpr int incompatible = 32;
    constexpr int app_name = 33;
    constexpr int file_type = 34;
    constexpr int can_subscribe = 35;
    constexpr int subscriptions = 36;
    constexpr int favorited = 37;
    constexpr int followers = 38;
    constexpr int lifetime_subscriptions = 39;
    constexpr int lifetime_favorited = 40;
    constexpr int lifetime_followers = 41;
    constexpr int views = 42;
    constexpr int image_width = 43;
    constexpr int image_height = 44;
    constexpr int image_url = 45;
    constexpr int spoiler_tag = 46;
    constexpr int shortcutid = 47;
    constexpr int shortcutname = 48;
    constexpr int num_children = 49;
    constexpr int num_reports = 50;
    constexpr int previews = 51;
    constexpr int tags = 52;
    constexpr int children = 53;
    constexpr int kvtags = 54;
    constexpr int vote_data = 55;
    constexpr int time_subscribed = 56;

} // namespace PublishedFileDetails_fields

} // namespace sdk::proto

#endif // SDK_PROTO_PUBLISHEDFILEDETAILS_HPP

