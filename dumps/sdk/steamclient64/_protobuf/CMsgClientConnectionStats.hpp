// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientConnectionStats
// Module: steamclient64.dll
// Proto file: steammessages_clientserver.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTCONNECTIONSTATS_HPP
#define SDK_PROTO_CMSGCLIENTCONNECTIONSTATS_HPP

namespace sdk::proto {

struct CMsgClientConnectionStats_Stats_Logon;
struct CMsgClientConnectionStats_Stats_VConn;

namespace CMsgClientConnectionStats_fields {

    namespace Stats_Logon {
        constexpr int connect_attempts = 1;
        constexpr int connect_successes = 2;
        constexpr int connect_failures = 3;
        constexpr int connections_dropped = 4;
        constexpr int seconds_running = 5;
        constexpr int msec_tologonthistime = 6;
        constexpr int count_bad_cms = 7;
        constexpr int no_udp_connectivity = 8;
        constexpr int no_tcp_connectivity = 9;
        constexpr int no_websocket_443_connectivity = 10;
        constexpr int no_websocket_non_443_connectivity = 11;
    } // namespace Stats_Logon

    namespace Stats_UDP {
        constexpr int pkts_sent = 1;
        constexpr int bytes_sent = 2;
        constexpr int pkts_recv = 3;
        constexpr int pkts_processed = 4;
        constexpr int bytes_recv = 5;
    } // namespace Stats_UDP

    namespace Stats_VConn {
        constexpr int connections_udp = 1;
        constexpr int connections_tcp = 2;
        constexpr int stats_udp = 3;
        constexpr int pkts_abandoned = 4;
        constexpr int conn_req_received = 5;
        constexpr int pkts_resent = 6;
        constexpr int msgs_sent = 7;
        constexpr int msgs_sent_failed = 8;
        constexpr int msgs_recv = 9;
        constexpr int datagrams_sent = 10;
        constexpr int datagrams_recv = 11;
        constexpr int bad_pkts_recv = 12;
        constexpr int unknown_conn_pkts_recv = 13;
        constexpr int missed_pkts_recv = 14;
        constexpr int dup_pkts_recv = 15;
        constexpr int failed_connect_challenges = 16;
        constexpr int micro_sec_avg_latency = 17;
        constexpr int micro_sec_min_latency = 18;
        constexpr int micro_sec_max_latency = 19;
    } // namespace Stats_VConn

    constexpr int stats_logon = 1;
    constexpr int stats_vconn = 2;

} // namespace CMsgClientConnectionStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTCONNECTIONSTATS_HPP

