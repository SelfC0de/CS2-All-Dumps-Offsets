// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramClientPingSampleReply
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP

namespace sdk::proto {

struct CMsgSteamDatagramClientPingSampleReply_POP;
struct CMsgTOSTreatment;

namespace CMsgSteamDatagramClientPingSampleReply_fields {

    namespace POP {
        constexpr int pop_id = 1;
        constexpr int front_ping_ms = 2;
        constexpr int cluster_penalty = 4;
        constexpr int e2e_ping_ms = 3;
        constexpr int e2e_score = 5;
        constexpr int e2e_p2p_peer_relay_pop_id = 6;
        constexpr int dc_ping_ms = 9;
        constexpr int dc_score = 10;
        constexpr int dc_via_relay_pop_id = 11;
    } // namespace POP

    constexpr int connection_id = 1;
    constexpr int relay_override_active = 5;
    constexpr int tos = 6;
    constexpr int pops = 2;

} // namespace CMsgSteamDatagramClientPingSampleReply_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP

