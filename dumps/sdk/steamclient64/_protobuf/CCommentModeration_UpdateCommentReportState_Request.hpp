// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCommentModeration_UpdateCommentReportState_Request
// Module: steamclient64.dll
// Proto file: steammessages_community.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCOMMENTMODERATION_UPDATECOMMENTREPORTSTATE_REQUEST_HPP
#define SDK_PROTO_CCOMMENTMODERATION_UPDATECOMMENTREPORTSTATE_REQUEST_HPP

namespace sdk::proto {

struct CCommentModeration_UpdateCommentReportState_Request_Sanction;
struct CommentClassification;

namespace CCommentModeration_UpdateCommentReportState_Request_fields {

    namespace Sanction {
        constexpr int sanction = 1;
        constexpr int days = 2;
        constexpr int escalate_to = 3;
    } // namespace Sanction

    constexpr int resolve = 1;
    constexpr int reportid = 2;
    constexpr int report_action = 3;
    constexpr int gidcomment = 4;
    constexpr int commentthreadtype = 5;
    constexpr int steamid = 6;
    constexpr int gidfeature = 7;
    constexpr int gidfeature2 = 8;
    constexpr int classification = 9;
    constexpr int reason = 10;
    constexpr int comment_thread_id = 11;
    constexpr int sanctions = 12;
    constexpr int note = 13;
    constexpr int skip_lock = 14;

} // namespace CCommentModeration_UpdateCommentReportState_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCOMMENTMODERATION_UPDATECOMMENTREPORTSTATE_REQUEST_HPP

