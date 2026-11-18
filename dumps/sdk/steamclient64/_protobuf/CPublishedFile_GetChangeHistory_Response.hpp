// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_GetChangeHistory_Response
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_GETCHANGEHISTORY_RESPONSE_HPP
#define SDK_PROTO_CPUBLISHEDFILE_GETCHANGEHISTORY_RESPONSE_HPP

namespace sdk::proto {

struct CPublishedFile_GetChangeHistory_Response_ChangeLog;

namespace CPublishedFile_GetChangeHistory_Response_fields {

    namespace ChangeLog {
        constexpr int timestamp = 1;
        constexpr int change_description = 2;
        constexpr int language = 3;
        constexpr int saved_snapshot = 4;
        constexpr int snapshot_game_branch_min = 5;
        constexpr int snapshot_game_branch_max = 6;
        constexpr int manifest_id = 7;
        constexpr int accountid = 8;
    } // namespace ChangeLog

    constexpr int changes = 1;
    constexpr int total = 2;

} // namespace CPublishedFile_GetChangeHistory_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_GETCHANGEHISTORY_RESPONSE_HPP

