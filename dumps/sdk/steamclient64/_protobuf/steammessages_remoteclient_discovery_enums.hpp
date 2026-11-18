// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_remoteclient_discovery.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_DISCOVERY_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_DISCOVERY_ENUMS_HPP

namespace sdk::proto {

enum class ERemoteClientBroadcastMsg : int {
    k_ERemoteClientBroadcastMsgDiscovery = 0,
    k_ERemoteClientBroadcastMsgStatus = 1,
    k_ERemoteClientBroadcastMsgOffline = 2,
    k_ERemoteDeviceAuthorizationRequest = 3,
    k_ERemoteDeviceAuthorizationResponse = 4,
    k_ERemoteDeviceStreamingRequest = 5,
    k_ERemoteDeviceStreamingResponse = 6,
    k_ERemoteDeviceProofRequest = 7,
    k_ERemoteDeviceProofResponse = 8,
    k_ERemoteDeviceAuthorizationCancelRequest = 9,
    k_ERemoteDeviceStreamingCancelRequest = 10,
    k_ERemoteClientBroadcastMsgClientIDDeconflict = 11,
    k_ERemoteDeviceStreamTransportSignal = 12,
    k_ERemoteDeviceStreamingProgress = 13,
    k_ERemoteDeviceAuthorizationConfirmed = 14,
    k_ERemoteClientBroadcastMsgPairingState = 15,
    k_ERemoteClientBroadcastMsgPairingExclusivity = 16,
};

enum class ERemoteClientService : int {
    k_ERemoteClientServiceNone = 0,
    k_ERemoteClientServiceRemoteControl = 1,
    k_ERemoteClientServiceGameStreaming = 2,
    k_ERemoteClientServiceSiteLicense = 4,
    k_ERemoteClientServiceContentCache = 8,
    k_ERemoteClientServiceContentServer = 16,
    k_ERemoteClientServiceManageDownloads = 32,
    k_ERemoteClientServiceRemoteInstallWithoutPin = 64,
};

enum class EVRLinkCaps : int {
    k_EVRLinkCapsUnknown = 0,
    k_EVRLinkCapsAvailable = 1,
    k_EVRLinkCapsUnimplemented = 2,
    k_EVRLinkCapsMissingHardwareEncoding = 3,
};

enum class ERemoteDeviceAuthorizationResult : int {
    k_ERemoteDeviceAuthorizationSuccess = 0,
    k_ERemoteDeviceAuthorizationDenied = 1,
    k_ERemoteDeviceAuthorizationNotLoggedIn = 2,
    k_ERemoteDeviceAuthorizationOffline = 3,
    k_ERemoteDeviceAuthorizationBusy = 4,
    k_ERemoteDeviceAuthorizationInProgress = 5,
    k_ERemoteDeviceAuthorizationTimedOut = 6,
    k_ERemoteDeviceAuthorizationFailed = 7,
    k_ERemoteDeviceAuthorizationCanceled = 8,
};

enum class EStreamDeviceFormFactor : int {
    k_EStreamDeviceFormFactorUnknown = 0,
    k_EStreamDeviceFormFactorPhone = 1,
    k_EStreamDeviceFormFactorTablet = 2,
    k_EStreamDeviceFormFactorComputer = 3,
    k_EStreamDeviceFormFactorTV = 4,
    k_EStreamDeviceFormFactorVRHeadset = 5,
};

enum class EStreamTransport : int {
    k_EStreamTransportNone = 0,
    k_EStreamTransportUDP = 1,
    k_EStreamTransportUDPRelay_OBSOLETE = 2,
    k_EStreamTransportWebRTC_OBSOLETE = 3,
    k_EStreamTransportSDR = 4,
    k_EStreamTransportUDP_SNS = 5,
    k_EStreamTransportUDPRelay_SNS_OBSOLETE = 6,
};

enum class EStreamInterface : int {
    k_EStreamInterfaceDefault = 0,
    k_EStreamInterfaceRecentGames = 1,
    k_EStreamInterfaceBigPicture = 2,
    k_EStreamInterfaceDesktop = 3,
    k_EStreamInterfaceSteamVR = 4,
};

enum class ERemoteDeviceStreamingResult : int {
    k_ERemoteDeviceStreamingSuccess = 0,
    k_ERemoteDeviceStreamingUnauthorized = 1,
    k_ERemoteDeviceStreamingScreenLocked = 2,
    k_ERemoteDeviceStreamingFailed = 3,
    k_ERemoteDeviceStreamingBusy = 4,
    k_ERemoteDeviceStreamingInProgress = 5,
    k_ERemoteDeviceStreamingCanceled = 6,
    k_ERemoteDeviceStreamingDriversNotInstalled = 7,
    k_ERemoteDeviceStreamingDisabled = 8,
    k_ERemoteDeviceStreamingBroadcastingActive = 9,
    k_ERemoteDeviceStreamingVRActive = 10,
    k_ERemoteDeviceStreamingPINRequired = 11,
    k_ERemoteDeviceStreamingTransportUnavailable = 12,
    k_ERemoteDeviceStreamingInvisible = 13,
    k_ERemoteDeviceStreamingGameLaunchFailed = 14,
    k_ERemoteDeviceStreamingSteamVRNotInstalled = 15,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_REMOTECLIENT_DISCOVERY_ENUMS_HPP

