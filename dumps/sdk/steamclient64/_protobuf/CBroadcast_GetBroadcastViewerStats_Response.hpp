// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBroadcast_GetBroadcastViewerStats_Response
// Module: steamclient64.dll
// Proto file: steammessages_broadcast.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CBROADCAST_GETBROADCASTVIEWERSTATS_RESPONSE_HPP
#define SDK_PROTO_CBROADCAST_GETBROADCASTVIEWERSTATS_RESPONSE_HPP

namespace sdk::proto {

struct CBroadcast_GetBroadcastViewerStats_Response_CountryStats;
struct CBroadcast_GetBroadcastViewerStats_Response_ViewerStats;

namespace CBroadcast_GetBroadcastViewerStats_Response_fields {

    namespace ViewerStats {
        constexpr int time = 1;
        constexpr int num_viewers = 2;
    } // namespace ViewerStats

    namespace CountryStats {
        constexpr int country_code = 1;
        constexpr int num_viewers = 2;
    } // namespace CountryStats

    constexpr int viewer_stats = 1;
    constexpr int country_stats = 2;

} // namespace CBroadcast_GetBroadcastViewerStats_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBROADCAST_GETBROADCASTVIEWERSTATS_RESPONSE_HPP

