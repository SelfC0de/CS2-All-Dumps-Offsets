// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamDatagramLinkLifetimeStats
// Module: steamclient64.dll
// Proto file: steamnetworkingsockets_messages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMDATAGRAMLINKLIFETIMESTATS_HPP
#define SDK_PROTO_CMSGSTEAMDATAGRAMLINKLIFETIMESTATS_HPP

namespace sdk::proto {

namespace CMsgSteamDatagramLinkLifetimeStats_fields {

    constexpr int connected_seconds = 2;
    constexpr int packets_sent = 3;
    constexpr int kb_sent = 4;
    constexpr int packets_recv = 5;
    constexpr int kb_recv = 6;
    constexpr int packets_recv_sequenced = 7;
    constexpr int packets_recv_dropped = 8;
    constexpr int packets_recv_out_of_order = 9;
    constexpr int packets_recv_out_of_order_corrected = 15;
    constexpr int packets_recv_duplicate = 10;
    constexpr int packets_recv_lurch = 11;
    constexpr int multipath_packets_recv_sequenced = 12;
    constexpr int multipath_packets_recv_later = 13;
    constexpr int multipath_send_enabled = 14;
    constexpr int quality_histogram_100 = 21;
    constexpr int quality_histogram_99 = 22;
    constexpr int quality_histogram_97 = 23;
    constexpr int quality_histogram_95 = 24;
    constexpr int quality_histogram_90 = 25;
    constexpr int quality_histogram_75 = 26;
    constexpr int quality_histogram_50 = 27;
    constexpr int quality_histogram_1 = 28;
    constexpr int quality_histogram_dead = 29;
    constexpr int quality_ntile_2nd = 30;
    constexpr int quality_ntile_5th = 31;
    constexpr int quality_ntile_25th = 32;
    constexpr int quality_ntile_50th = 33;
    constexpr int ping_histogram_25 = 41;
    constexpr int ping_histogram_50 = 42;
    constexpr int ping_histogram_75 = 43;
    constexpr int ping_histogram_100 = 44;
    constexpr int ping_histogram_125 = 45;
    constexpr int ping_histogram_150 = 46;
    constexpr int ping_histogram_200 = 47;
    constexpr int ping_histogram_300 = 48;
    constexpr int ping_histogram_max = 49;
    constexpr int ping_ntile_5th = 50;
    constexpr int ping_ntile_50th = 51;
    constexpr int ping_ntile_75th = 52;
    constexpr int ping_ntile_95th = 53;
    constexpr int ping_ntile_98th = 54;
    constexpr int jitter_histogram_negligible = 61;
    constexpr int jitter_histogram_1 = 62;
    constexpr int jitter_histogram_2 = 63;
    constexpr int jitter_histogram_5 = 64;
    constexpr int jitter_histogram_10 = 65;
    constexpr int jitter_histogram_20 = 66;

} // namespace CMsgSteamDatagramLinkLifetimeStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMDATAGRAMLINKLIFETIMESTATS_HPP

