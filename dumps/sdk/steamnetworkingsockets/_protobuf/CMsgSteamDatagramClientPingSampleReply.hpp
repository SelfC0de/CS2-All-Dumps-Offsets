// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramClientPingSampleReply
// Module: steamnetworkingsockets.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP

namespace sdk::proto {

struct CMsgSteamDatagramClientPingSampleReply_LegacyDataCenter;
struct CMsgSteamDatagramClientPingSampleReply_POP;
struct CMsgTOSTreatment;

namespace CMsgSteamDatagramClientPingSampleReply_fields {

    namespace POP {
        namespace AltAddress {
            constexpr int id = 1;
            constexpr int front_ping_ms = 2;
            constexpr int penalty = 3;
        } // namespace AltAddress

        constexpr int pop_id = 1;
        constexpr int default_front_ping_ms = 2;
        constexpr int cluster_penalty = 4;
        constexpr int alt_addresses = 7;
        constexpr int default_e2e_ping_ms = 3;
        constexpr int default_e2e_score = 5;
        constexpr int p2p_via_peer_relay_pop_id = 6;
        constexpr int best_dc_ping_ms = 9;
        constexpr int best_dc_score = 10;
        constexpr int best_dc_via_relay_pop_id = 11;
        constexpr int default_dc_ping_ms = 12;
        constexpr int default_dc_score = 13;
        constexpr int default_dc_via_relay_pop_id = 14;
        constexpr int test_dc_ping_ms = 15;
        constexpr int test_dc_score = 16;
        constexpr int test_dc_via_relay_pop_id = 17;
    } // namespace POP

    namespace LegacyDataCenter {
        constexpr int data_center_id = 1;
        constexpr int best_dc_via_relay_pop_id = 2;
        constexpr int best_dc_ping_ms = 3;
    } // namespace LegacyDataCenter

    constexpr int connection_id = 1;
    constexpr int relay_override_active = 5;
    constexpr int tos = 6;
    constexpr int pops = 2;
    constexpr int legacy_data_centers = 3;

} // namespace CMsgSteamDatagramClientPingSampleReply_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMCLIENTPINGSAMPLEREPLY_HPP

