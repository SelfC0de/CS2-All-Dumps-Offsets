// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramP2PRoutes
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMP2PROUTES_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMP2PROUTES_HPP

namespace sdk::proto {

struct CMsgSteamDatagramP2PRoutes_RelayCluster;
struct CMsgSteamDatagramP2PRoutes_Route;

namespace CMsgSteamDatagramP2PRoutes_fields {

    namespace RelayCluster {
        constexpr int pop_id = 1;
        constexpr int ping_ms = 2;
        constexpr int score_penalty = 3;
        constexpr int session_relay_routing_token = 4;
    } // namespace RelayCluster

    namespace Route {
        constexpr int my_pop_id = 1;
        constexpr int your_pop_id = 2;
        constexpr int legacy_score = 3;
        constexpr int interior_score = 4;
    } // namespace Route

    constexpr int relay_clusters = 1;
    constexpr int routes = 2;
    constexpr int revision = 3;

} // namespace CMsgSteamDatagramP2PRoutes_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMP2PROUTES_HPP

