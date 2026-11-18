// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientUCMEnumerateUserSubscribedFilesWithUpdatesResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_ucm.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTUCMENUMERATEUSERSUBSCRIBEDFILESWITHUPDATESRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTUCMENUMERATEUSERSUBSCRIBEDFILESWITHUPDATESRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientUCMEnumerateUserSubscribedFilesWithUpdatesResponse_PublishedFileId;

namespace CMsgClientUCMEnumerateUserSubscribedFilesWithUpdatesResponse_fields {

    namespace AuthorSnapshot {
        constexpr int timestamp = 1;
        constexpr int game_branch_min = 2;
        constexpr int game_branch_max = 3;
        constexpr int manifestid = 4;
    } // namespace AuthorSnapshot

    namespace PublishedFileId {
        constexpr int published_file_id = 1;
        constexpr int rtime32_subscribed = 2;
        constexpr int appid = 3;
        constexpr int file_hcontent = 4;
        constexpr int file_size = 5;
        constexpr int rtime32_last_updated = 6;
        constexpr int is_depot_content = 7;
        constexpr int author_snapshots = 8;
    } // namespace PublishedFileId

    constexpr int eresult = 1;
    constexpr int subscribed_files = 2;
    constexpr int total_results = 3;

} // namespace CMsgClientUCMEnumerateUserSubscribedFilesWithUpdatesResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTUCMENUMERATEUSERSUBSCRIBEDFILESWITHUPDATESRESPONSE_HPP

