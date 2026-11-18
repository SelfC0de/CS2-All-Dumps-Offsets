// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSource2NetworkFlowQuality
// Module: server.dll
// Proto file: source2_steam_stats.proto
#pragma once
#ifndef SDK_PROTO_CMSGSOURCE2NETWORKFLOWQUALITY_HPP
#define SDK_PROTO_CMSGSOURCE2NETWORKFLOWQUALITY_HPP

namespace sdk::proto {

namespace CMsgSource2NetworkFlowQuality_fields {

    constexpr int duration = 1;
    constexpr int bytes_total = 5;
    constexpr int bytes_total_reliable = 6;
    constexpr int bytes_total_voice = 7;
    constexpr int bytes_sec_p95 = 10;
    constexpr int bytes_sec_p99 = 11;
    constexpr int enginemsgs_total = 20;
    constexpr int enginemsgs_sec_p95 = 21;
    constexpr int enginemsgs_sec_p99 = 22;
    constexpr int netframes_total = 30;
    constexpr int netframes_dropped = 31;
    constexpr int netframes_outoforder = 32;
    constexpr int netframes_size_exceeds_mtu = 34;
    constexpr int netframes_size_p95 = 35;
    constexpr int netframes_size_p99 = 36;
    constexpr int netframes_size_uncompressed_p50 = 12;
    constexpr int netframes_size_uncompressed_p95 = 13;
    constexpr int netframes_size_uncompressed_p99 = 14;
    constexpr int netframes_size_uncompressed_max = 15;
    constexpr int netframes_msgs_p50 = 16;
    constexpr int netframes_msgs_p95 = 17;
    constexpr int netframes_msgs_p99 = 18;
    constexpr int netframes_msgs_max = 19;
    constexpr int ticks_total = 40;
    constexpr int ticks_good = 41;
    constexpr int ticks_good_almost_late = 42;
    constexpr int ticks_fixed_dropped = 43;
    constexpr int ticks_fixed_late = 44;
    constexpr int ticks_bad_dropped = 45;
    constexpr int ticks_bad_late = 46;
    constexpr int ticks_bad_other = 47;
    constexpr int tick_missrate_samples_total = 50;
    constexpr int tick_missrate_samples_perfect = 51;
    constexpr int tick_missrate_samples_perfectnet = 52;
    constexpr int tick_missratenet_p75_x10 = 53;
    constexpr int tick_missratenet_p95_x10 = 54;
    constexpr int tick_missratenet_p99_x10 = 55;
    constexpr int recvmargin_p1 = 61;
    constexpr int recvmargin_p5 = 62;
    constexpr int recvmargin_p25 = 63;
    constexpr int recvmargin_p50 = 64;
    constexpr int recvmargin_p75 = 65;
    constexpr int recvmargin_p95 = 66;
    constexpr int netframe_jitter_p50 = 70;
    constexpr int netframe_jitter_p99 = 71;
    constexpr int interval_peakjitter_p50 = 72;
    constexpr int interval_peakjitter_p95 = 73;
    constexpr int packet_misdelivery_rate_p50_x4 = 74;
    constexpr int packet_misdelivery_rate_p95_x4 = 75;
    constexpr int net_ping_p5 = 80;
    constexpr int net_ping_p50 = 81;
    constexpr int net_ping_p95 = 82;
    constexpr int msgproc_usec_p50 = 90;
    constexpr int msgproc_usec_p95 = 91;
    constexpr int msgproc_usec_p99 = 92;
    constexpr int msgproc_usec_max = 93;
    constexpr int msgproc_usec_avg_p50 = 94;
    constexpr int msgproc_usec_avg_p95 = 95;
    constexpr int msgproc_usec_avg_p99 = 96;
    constexpr int msgproc_usec_avg_max = 97;
    constexpr int queuedmsgs_p50 = 100;
    constexpr int queuedmsgs_p95 = 101;
    constexpr int queuedmsgs_p99 = 102;
    constexpr int queuedmsgs_max = 103;

} // namespace CMsgSource2NetworkFlowQuality_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSOURCE2NETWORKFLOWQUALITY_HPP

