// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: gcsdk_gcmessages.proto
// Module: client.dll
#pragma once
#ifndef SDK_PROTO_GCSDK_GCMESSAGES_ENUMS_HPP
#define SDK_PROTO_GCSDK_GCMESSAGES_ENUMS_HPP

namespace sdk::proto {

enum class GCClientLauncherType : int {
    GCClientLauncherType_DEFAULT = 0,
    GCClientLauncherType_PERFECTWORLD = 1,
    GCClientLauncherType_STEAMCHINA = 2,
    GCClientLauncherType_SOURCE2 = 3,
};

enum class GCConnectionStatus : int {
    GCConnectionStatus_HAVE_SESSION = 0,
    GCConnectionStatus_GC_GOING_DOWN = 1,
    GCConnectionStatus_NO_SESSION = 2,
    GCConnectionStatus_NO_SESSION_IN_LOGON_QUEUE = 3,
    GCConnectionStatus_NO_STEAM = 4,
};

} // namespace sdk::proto

#endif // SDK_PROTO_GCSDK_GCMESSAGES_ENUMS_HPP

