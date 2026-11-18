// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CBroadcast_BroadcastViewerState_Notification
// Module: steamclient64.dll
// Proto file: steammessages_broadcast.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CBROADCAST_BROADCASTVIEWERSTATE_NOTIFICATION_HPP
#define SDK_PROTO_CBROADCAST_BROADCASTVIEWERSTATE_NOTIFICATION_HPP

namespace sdk::proto {

namespace CBroadcast_BroadcastViewerState_Notification_fields {

    enum class EViewerState : int {
        k_EViewerNeedsApproval = 1,
        k_EViewerWatching = 2,
        k_EViewerLeft = 3,
    };

    constexpr int steamid = 1;
    constexpr int state = 2;

} // namespace CBroadcast_BroadcastViewerState_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CBROADCAST_BROADCASTVIEWERSTATE_NOTIFICATION_HPP

