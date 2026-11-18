// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBroadcast_WatchBroadcast_Response
// Module: steamclient64.dll
// Proto file: steammessages_broadcast.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CBROADCAST_WATCHBROADCAST_RESPONSE_HPP
#define SDK_PROTO_CBROADCAST_WATCHBROADCAST_RESPONSE_HPP

namespace sdk::proto {

namespace CBroadcast_WatchBroadcast_Response_fields {

    enum class EWatchResponse : int {
        k_EWatchResponseReady = 1,
        k_EWatchResponseNotAvailable = 2,
        k_EWatchResponseWaitingForApproval = 3,
        k_EWatchResponseWaitingForStart = 4,
        k_EWatchResponseInvalidSession = 5,
        k_EWatchResponseTooManyBroadcasts = 6,
        k_EWatchResponseWaitingForReconnect = 7,
        k_EWatchResponseSystemNotSupported = 8,
        k_EWatchResponseUserRestricted = 9,
        k_EWatchResponseClientOutOfDate = 10,
        k_EWatchResponsePoorUploadQuality = 11,
        k_EWatchResponseMissingSubscription = 12,
        k_EWatchResponseTooManyViewers = 13,
    };

    constexpr int response = 1;
    constexpr int mpd_url = 2;
    constexpr int broadcast_id = 3;
    constexpr int gameid = 4;
    constexpr int title = 5;
    constexpr int num_viewers = 6;
    constexpr int permission = 7;
    constexpr int is_rtmp = 8;
    constexpr int seconds_delay = 9;
    constexpr int viewer_token = 10;
    constexpr int hls_m3u8_master_url = 11;
    constexpr int heartbeat_interval = 12;
    constexpr int thumbnail_url = 13;
    constexpr int is_webrtc = 14;
    constexpr int webrtc_session_id = 15;
    constexpr int webrtc_offer_sdp = 16;
    constexpr int webrtc_turn_server = 17;
    constexpr int is_replay = 18;
    constexpr int duration = 19;
    constexpr int cdn_auth_url_parameters = 20;

} // namespace CBroadcast_WatchBroadcast_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBROADCAST_WATCHBROADCAST_RESPONSE_HPP

