// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteClientDownloadsManagement
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTECLIENTDOWNLOADSMANAGEMENT_HPP
#define SDK_PROTO_CMSGREMOTECLIENTDOWNLOADSMANAGEMENT_HPP

namespace sdk::proto {

struct CMsgRemoteClientDownloadsManagement_ChangeAppQueuePlacement;
struct CMsgRemoteClientDownloadsManagement_ChangeDownloadIndex;

namespace CMsgRemoteClientDownloadsManagement_fields {

    namespace ChangeAppQueuePlacement {
        constexpr int app_id = 1;
        constexpr int queue_placement = 2;
    } // namespace ChangeAppQueuePlacement

    namespace ChangeDownloadIndex {
        constexpr int app_id = 1;
        constexpr int download_index = 3;
    } // namespace ChangeDownloadIndex

    constexpr int change_queue_placement = 1;
    constexpr int change_download_index = 2;
    constexpr int enable_all_downloads = 3;
    constexpr int remove_from_download_list_app_id = 4;
    constexpr int suspend_download_throttling = 5;
    constexpr int uninstalling_app_id = 6;
    constexpr int installing_app_id = 7;

} // namespace CMsgRemoteClientDownloadsManagement_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTECLIENTDOWNLOADSMANAGEMENT_HPP

