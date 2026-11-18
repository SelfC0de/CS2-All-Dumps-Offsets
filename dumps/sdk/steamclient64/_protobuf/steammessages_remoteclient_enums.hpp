// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_remoteclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_ENUMS_HPP

namespace sdk::proto {

enum class ERemoteClientPairWifiAPResult : int {
    k_ERemoteClientPairWifiAPOK = 1,
    k_ERemoteClientPairWifiAPFail = 2,
    k_ERemoteClientPairWifiAPNetworkError = 3,
    k_ERemoteClientPairWifiAPUnauthorized = 4,
    k_ERemoteClientPairWifiAPNoDonglePresent = 5,
    k_ERemoteClientPairWifiAPTimeout = 6,
    k_ERemoteClientPairWifiAPCanceled = 7,
    k_ERemoteClientPairWifiAPProgress = 8,
    k_ERemoteClientPairWifiAPConnectFailed = 9,
    k_ERemoteClientPairWifiAPPINTimeout = 10,
};

enum class EStreamingDongleFixResult : int {
    k_EStreamingDongleFixResultSuccess = 1,
    k_EStreamingDongleFixResultFailure = 2,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_ENUMS_HPP

