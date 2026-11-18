// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPublishedFile_SanctionPublishedFile_Request
// Module: steamclient64.dll
// Proto file: steammessages_publishedfile.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPUBLISHEDFILE_SANCTIONPUBLISHEDFILE_REQUEST_HPP
#define SDK_PROTO_CPUBLISHEDFILE_SANCTIONPUBLISHEDFILE_REQUEST_HPP

namespace sdk::proto {

struct CPublishedFile_SanctionPublishedFile_Request_Sanction;

namespace CPublishedFile_SanctionPublishedFile_Request_fields {

    namespace Sanction {
        constexpr int sanction = 1;
        constexpr int days = 2;
        constexpr int escalate_to = 3;
    } // namespace Sanction

    constexpr int publishedfileid = 1;
    constexpr int reason = 2;
    constexpr int note = 3;
    constexpr int resolved_by_automation = 4;
    constexpr int sanctions = 5;

} // namespace CPublishedFile_SanctionPublishedFile_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPUBLISHEDFILE_SANCTIONPUBLISHEDFILE_REQUEST_HPP

