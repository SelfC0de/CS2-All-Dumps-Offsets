// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgProtoBufHeader
// Module: steamclient64.dll
// Proto file: steammessages_base.proto
#pragma once
#ifndef SDK_PROTO_CMSGPROTOBUFHEADER_HPP
#define SDK_PROTO_CMSGPROTOBUFHEADER_HPP

namespace sdk::proto {

struct CMsgGCRoutingProtoBufHeader;

namespace CMsgProtoBufHeader_fields {

    enum class ESessionDisposition : int {
        k_ESessionDispositionNormal = 0,
        k_ESessionDispositionDisconnect = 1,
    };

    constexpr int steamid = 1;
    constexpr int client_sessionid = 2;
    constexpr int routing_appid = 3;
    constexpr int jobid_source = 10;
    constexpr int jobid_target = 11;
    constexpr int target_job_name = 12;
    constexpr int seq_num = 24;
    constexpr int eresult = 13;
    constexpr int error_message = 14;
    constexpr int auth_account_flags = 16;
    constexpr int token_source = 22;
    constexpr int admin_spoofing_user = 23;
    constexpr int transport_error = 17;
    constexpr int messageid = 18;
    constexpr int publisher_group_id = 19;
    constexpr int sysid = 20;
    constexpr int webapi_key_id = 25;
    constexpr int is_from_external_source = 26;
    constexpr int forward_to_sysid = 27;
    constexpr int cm_sysid = 28;
    constexpr int launcher_type = 31;
    constexpr int realm = 32;
    constexpr int timeout_ms = 33;
    constexpr int debug_source = 34;
    constexpr int debug_source_string_index = 35;
    constexpr int token_id = 36;
    constexpr int routing_gc = 37;
    constexpr int session_disposition = 38;
    constexpr int wg_token = 39;
    constexpr int webui_auth_key = 40;
    constexpr int exclude_client_sessionids = 41;
    constexpr int admin_request_spoofing_steamid = 43;
    constexpr int is_valveds = 44;
    constexpr int trace_tag = 45;
    constexpr int wg_msg_trace_flags = 46;
    constexpr int wg_msg_trace_instance = 47;
    constexpr int wg_msg_trace_gid = 48;
    constexpr int wg_msg_trace_token = 49;
    constexpr int wg_msg_trace_steamid = 50;
    constexpr int wg_msg_trace_status = 51;
    constexpr int trace_flags = 52;
    constexpr int browserapi_site = 53;

    // oneof ip_addr
    constexpr int ip = 15;
    constexpr int ip_v6 = 29;

} // namespace CMsgProtoBufHeader_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGPROTOBUFHEADER_HPP

