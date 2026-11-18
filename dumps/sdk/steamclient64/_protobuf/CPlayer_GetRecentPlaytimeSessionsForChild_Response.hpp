// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetRecentPlaytimeSessionsForChild_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETRECENTPLAYTIMESESSIONSFORCHILD_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETRECENTPLAYTIMESESSIONSFORCHILD_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetRecentPlaytimeSessionsForChild_Response_PlaytimeSession;

namespace CPlayer_GetRecentPlaytimeSessionsForChild_Response_fields {

    namespace PlaytimeSession {
        constexpr int time_start = 1;
        constexpr int time_end = 2;
        constexpr int appid = 3;
        constexpr int device_type = 4;
        constexpr int disconnected = 5;
    } // namespace PlaytimeSession

    constexpr int sessions = 1;

} // namespace CPlayer_GetRecentPlaytimeSessionsForChild_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETRECENTPLAYTIMESESSIONSFORCHILD_RESPONSE_HPP

