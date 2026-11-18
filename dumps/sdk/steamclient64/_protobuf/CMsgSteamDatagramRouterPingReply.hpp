// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramRouterPingReply
// Module: steamclient64.dll
// Proto file: steamdatagram_messages_sdr.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMROUTERPINGREPLY_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMROUTERPINGREPLY_HPP

namespace sdk::proto {

struct CMsgSteamDatagramRouterPingReply_AltAddress;
struct CMsgSteamDatagramRouterPingReply_RouteException;

namespace CMsgSteamDatagramRouterPingReply_fields {

    enum class Flags : int {
        FLAG_MAYBE_MORE_DATA_CENTERS = 1,
        FLAG_MAYBE_MORE_ALT_ADDRESSES = 2,
    };

    namespace RouteException {
        constexpr int data_center_id = 1;
        constexpr int flags = 2;
        constexpr int penalty = 3;
    } // namespace RouteException

    namespace AltAddress {
        enum class Protocol : int {
            DefaultProtocol = 0,
        };

        constexpr int ipv4 = 1;
        constexpr int port = 2;
        constexpr int penalty = 3;
        constexpr int protocol = 4;
        constexpr int id = 5;
    } // namespace AltAddress

    constexpr int client_timestamp = 1;
    constexpr int latency_datacenter_ids = 2;
    constexpr int latency_ping_ms = 3;
    constexpr int latency_datacenter_ids_p2p = 14;
    constexpr int latency_ping_ms_p2p = 15;
    constexpr int your_public_ip = 4;
    constexpr int your_public_port = 11;
    constexpr int server_time = 5;
    constexpr int challenge = 6;
    constexpr int seconds_until_shutdown = 7;
    constexpr int client_cookie = 8;
    constexpr int recv_tos = 16;
    constexpr int echo_sent_tos = 17;
    constexpr int sent_tos = 18;
    constexpr int echo_request_reply_tos = 19;
    constexpr int scoring_penalty_relay_cluster = 9;
    constexpr int flags = 12;
    constexpr int route_exceptions = 10;
    constexpr int alt_addresses = 13;
    constexpr int dummy_pad = 99;
    constexpr int dummy_varint = 100;

} // namespace CMsgSteamDatagramRouterPingReply_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMROUTERPINGREPLY_HPP

