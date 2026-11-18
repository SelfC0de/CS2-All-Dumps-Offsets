// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgGCCStrike15_ClientDeepStats
// Module: server.dll
// Proto file: cstrike15_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGGCCSTRIKE15_CLIENTDEEPSTATS_HPP
#define SDK_PROTO_CMSGGCCSTRIKE15_CLIENTDEEPSTATS_HPP

namespace sdk::proto {

struct CMsgGCCStrike15_ClientDeepStats_DeepStatsMatch;
struct CMsgGCCStrike15_ClientDeepStats_DeepStatsRange;

namespace CMsgGCCStrike15_ClientDeepStats_fields {

    namespace DeepStatsRange {
        constexpr int begin = 1;
        constexpr int end = 2;
        constexpr int frozen = 3;
    } // namespace DeepStatsRange

    namespace DeepStatsMatch {
        constexpr int player = 1;
        constexpr int events = 2;
    } // namespace DeepStatsMatch

    constexpr int account_id = 1;
    constexpr int range = 2;
    constexpr int matches = 3;

} // namespace CMsgGCCStrike15_ClientDeepStats_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGGCCSTRIKE15_CLIENTDEEPSTATS_HPP

