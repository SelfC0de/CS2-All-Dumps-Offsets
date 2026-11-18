// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteClientStartStreamResponse
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAMRESPONSE_HPP
#define SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAMRESPONSE_HPP

namespace sdk::proto {

struct CMsgRemoteClientStartStreamResponse_CloudConflict;

namespace CMsgRemoteClientStartStreamResponse_fields {

    namespace CloudConflict {
        constexpr int appid = 1;
        constexpr int local_time = 2;
        constexpr int remote_time = 3;
    } // namespace CloudConflict

    constexpr int e_launch_result = 1;
    constexpr int stream_port = 2;
    constexpr int launch_options = 3;
    constexpr int auth_token = 4;
    constexpr int transport = 5;
    constexpr int relay_server = 6;
    constexpr int launch_task = 7;
    constexpr int launch_task_detail = 8;
    constexpr int launch_tasks_done = 9;
    constexpr int launch_tasks_total = 10;
    constexpr int vr_connection_params = 11;
    constexpr int launch_only = 12;
    constexpr int cloud_conflict = 13;

} // namespace CMsgRemoteClientStartStreamResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAMRESPONSE_HPP

