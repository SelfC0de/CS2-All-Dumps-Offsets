// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_remoteplay.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_REMOTEPLAY_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_REMOTEPLAY_ENUMS_HPP

namespace sdk::proto {

enum class EStreamChannel : int {
    k_EStreamChannelInvalid = -1,
    k_EStreamChannelDiscovery = 0,
    k_EStreamChannelControl = 1,
    k_EStreamChannelStats = 2,
    k_EStreamChannelDataChannelStart = 3,
};

enum class EStreamDiscoveryMessage : int {
    k_EStreamDiscoveryPingRequest = 1,
    k_EStreamDiscoveryPingResponse = 2,
};

enum class EStreamControlMessage : int {
    k_EStreamControlAuthenticationRequest = 1,
    k_EStreamControlAuthenticationResponse = 2,
    k_EStreamControlNegotiationInit = 3,
    k_EStreamControlNegotiationSetConfig = 4,
    k_EStreamControlNegotiationComplete = 5,
    k_EStreamControlClientHandshake = 6,
    k_EStreamControlServerHandshake = 7,
    k_EStreamControlStartNetworkTest = 8,
    k_EStreamControlKeepAlive = 9,
    k_EStreamControl_LAST_SETUP_MESSAGE = 15,
    k_EStreamControlStartAudioData = 50,
    k_EStreamControlStopAudioData = 51,
    k_EStreamControlStartVideoData = 52,
    k_EStreamControlStopVideoData = 53,
    k_EStreamControlInputMouseMotion = 54,
    k_EStreamControlInputMouseWheel = 55,
    k_EStreamControlInputMouseDown = 56,
    k_EStreamControlInputMouseUp = 57,
    k_EStreamControlInputKeyDown = 58,
    k_EStreamControlInputKeyUp = 59,
    k_EStreamControlInputGamepadAttached_OBSOLETE = 60,
    k_EStreamControlInputGamepadEvent_OBSOLETE = 61,
    k_EStreamControlInputGamepadDetached_OBSOLETE = 62,
    k_EStreamControlShowCursor = 63,
    k_EStreamControlHideCursor = 64,
    k_EStreamControlSetCursor = 65,
    k_EStreamControlGetCursorImage = 66,
    k_EStreamControlSetCursorImage = 67,
    k_EStreamControlDeleteCursor = 68,
    k_EStreamControlSetTargetFramerate = 69,
    k_EStreamControlInputLatencyTest_OBSOLETE = 70,
    k_EStreamControlGamepadRumble_OBSOLETE = 71,
    k_EStreamControlOverlayEnabled = 74,
    k_EStreamControlInputControllerAttached_OBSOLETE = 75,
    k_EStreamControlInputControllerState_OBSOLETE = 76,
    k_EStreamControlTriggerHapticPulse_OBSOLETE = 77,
    k_EStreamControlInputControllerDetached_OBSOLETE = 78,
    k_EStreamControlVideoDecoderInfo = 80,
    k_EStreamControlSetTitle = 81,
    k_EStreamControlSetIcon = 82,
    k_EStreamControlQuitRequest = 83,
    k_EStreamControlSetQoS = 87,
    k_EStreamControlInputControllerWirelessPresence_OBSOLETE = 88,
    k_EStreamControlSetGammaRamp = 89,
    k_EStreamControlVideoEncoderInfo = 90,
    k_EStreamControlInputControllerStateHID_OBSOLETE = 93,
    k_EStreamControlSetTargetBitrate = 94,
    k_EStreamControlSetControllerPairingEnabled_OBSOLETE = 95,
    k_EStreamControlSetControllerPairingResult_OBSOLETE = 96,
    k_EStreamControlTriggerControllerDisconnect_OBSOLETE = 97,
    k_EStreamControlSetActivity = 98,
    k_EStreamControlSetStreamingClientConfig = 99,
    k_EStreamControlSystemSuspend = 100,
    k_EStreamControlSetControllerSettings_OBSOLETE = 101,
    k_EStreamControlVirtualHereRequest = 102,
    k_EStreamControlVirtualHereReady = 103,
    k_EStreamControlVirtualHereShareDevice = 104,
    k_EStreamControlSetSpectatorMode = 105,
    k_EStreamControlRemoteHID = 106,
    k_EStreamControlStartMicrophoneData = 107,
    k_EStreamControlStopMicrophoneData = 108,
    k_EStreamControlInputText = 109,
    k_EStreamControlTouchConfigActive = 110,
    k_EStreamControlGetTouchConfigData = 111,
    k_EStreamControlSetTouchConfigData = 112,
    k_EStreamControlSaveTouchConfigLayout = 113,
    k_EStreamControlTouchActionSetActive = 114,
    k_EStreamControlGetTouchIconData = 115,
    k_EStreamControlSetTouchIconData = 116,
    k_EStreamControlInputTouchFingerDown = 117,
    k_EStreamControlInputTouchFingerMotion = 118,
    k_EStreamControlInputTouchFingerUp = 119,
    k_EStreamControlSetCaptureSize = 120,
    k_EStreamControlSetFlashState = 121,
    k_EStreamControlPause = 122,
    k_EStreamControlResume = 123,
    k_EStreamControlEnableHighResCapture = 124,
    k_EStreamControlDisableHighResCapture = 125,
    k_EStreamControlToggleMagnification = 126,
    k_EStreamControlSetCapslock = 127,
    k_EStreamControlSetKeymap = 128,
    k_EStreamControlStopRequest = 129,
    k_EStreamControlTouchActionSetLayerAdded = 130,
    k_EStreamControlTouchActionSetLayerRemoved = 131,
    k_EStreamControlRemotePlayTogetherGroupUpdate = 132,
    k_EStreamControlSetInputTemporarilyDisabled = 133,
    k_EStreamControlSetQualityOverride = 134,
    k_EStreamControlSetBitrateOverride = 135,
    k_EStreamControlShowOnScreenKeyboard = 136,
    k_EStreamControlControllerConfigMsg = 137,
    k_EStreamControlControllerPersonalizationUpdate = 138,
    k_EStreamControlEnableNeptuneData_OBSOLETE = 139,
    k_EStreamControlDisableNeptuneData_OBSOLETE = 140,
    k_EStreamControlStartNeptuneData_OBSOLETE = 141,
    k_EStreamControlStopNeptuneData_OBSOLETE = 142,
    k_EStreamControlPauseControllerInput = 143,
    k_EStreamControlResumeControllerInput = 144,
    k_EStreamControlVRConnectionReady = 145,
    k_EStreamControlSetCursorScale = 146,
    k_EStreamControlCaptureFailed = 147,
    k_EStreamControlVideoOverflow = 148,
    k_EStreamControlSetSupportedColorspaces = 149,
};

enum class EStreamVersion : int {
    k_EStreamVersionNone = 0,
    k_EStreamVersionCurrent = 1,
};

enum class EStreamAudioCodec : int {
    k_EStreamAudioCodecNone = 0,
    k_EStreamAudioCodecRaw = 1,
    k_EStreamAudioCodecVorbis = 2,
    k_EStreamAudioCodecOpus = 3,
    k_EStreamAudioCodecMP3 = 4,
    k_EStreamAudioCodecAAC = 5,
};

enum class EStreamVideoCodec : int {
    k_EStreamVideoCodecNone = 0,
    k_EStreamVideoCodecRaw = 1,
    k_EStreamVideoCodecH264 = 4,
    k_EStreamVideoCodecHEVC = 5,
    k_EStreamVideoCodecAV1 = 8,
    k_EStreamVideoCodecPyrowave = 9,
};

enum class EStreamQualityPreference : int {
    k_EStreamQualityAutomatic = -1,
    k_EStreamQualityFast = 1,
    k_EStreamQualityBalanced = 2,
    k_EStreamQualityBeautiful = 3,
};

enum class EStreamBitrate : int {
    k_EStreamBitrateAutomatic = -1,
    k_EStreamBitrateUnlimited = 0,
};

enum class EStreamColorspace : int {
    k_EStreamColorspace_Unknown = 0,
    k_EStreamColorspace_BT601 = 1,
    k_EStreamColorspace_BT601_Full = 2,
    k_EStreamColorspace_BT709 = 3,
    k_EStreamColorspace_BT709_Full = 4,
    k_EStreamColorspace_HDR10 = 5,
};

enum class EStreamP2PScope : int {
    k_EStreamP2PScopeAutomatic = 0,
    k_EStreamP2PScopeDisabled = 1,
    k_EStreamP2PScopeOnlyMe = 2,
    k_EStreamP2PScopeFriends = 3,
    k_EStreamP2PScopeEveryone = 4,
};

enum class EDisplayStyle : int {
    k_EDisplayStyleLetterbox = 0,
    k_EDisplayStyleStretch = 1,
    k_EDisplayStyleZoom = 2,
};

enum class EStreamHDRMode : int {
    k_EStreamHDRModeAuto = 0,
    k_EStreamHDRModeOn = 1,
    k_EStreamHDRModeOff = 2,
};

enum class EStreamHostPlayAudioPreference : int {
    k_EStreamHostPlayAudioDefault = 0,
    k_EStreamHostPlayAudioAlways = 1,
};

enum class EStreamHostDisplaySetting : int {
    k_EStreamHostDisplaySettingNone = 0,
    k_EStreamHostDisplaySettingClient = 1,
    k_EStreamHostDisplaySettingCustom = 2,
};

enum class EStreamingDataType : int {
    k_EStreamingAudioData = 0,
    k_EStreamingVideoData = 1,
    k_EStreamingMicrophoneData = 2,
    k_EStreamingNeptuneData_OBSOLETE = 3,
};

enum class EStreamMouseButton : int {
    k_EStreamMouseButtonLeft = 1,
    k_EStreamMouseButtonRight = 2,
    k_EStreamMouseButtonMiddle = 16,
    k_EStreamMouseButtonX1 = 32,
    k_EStreamMouseButtonX2 = 64,
    k_EStreamMouseButtonUnknown = 4096,
};

enum class EStreamMouseWheelDirection : int {
    k_EStreamMouseWheelUp = 120,
    k_EStreamMouseWheelDown = -120,
    k_EStreamMouseWheelLeft = 3,
    k_EStreamMouseWheelRight = 4,
};

enum class EStreamFramerateLimiter : int {
    k_EStreamFramerateSlowCapture = 1,
    k_EStreamFramerateSlowConvert = 2,
    k_EStreamFramerateSlowEncode = 4,
    k_EStreamFramerateSlowNetwork = 8,
    k_EStreamFramerateSlowDecode = 16,
    k_EStreamFramerateSlowGame = 32,
    k_EStreamFramerateSlowDisplay = 64,
};

enum class EStreamActivity : int {
    k_EStreamActivityIdle = 1,
    k_EStreamActivityGame = 2,
    k_EStreamActivityDesktop = 3,
    k_EStreamActivitySecureDesktop = 4,
    k_EStreamActivityMusic = 5,
};

enum class ECaptureFailedReason : int {
    k_ECaptureFailedReasonNone = 0,
    k_ECaptureFailedReasonUnknown = 1,
    k_ECaptureFailedReasonPipewireRequired = 2,
    k_ECaptureFailedReasonPipewirePermissions = 3,
    k_ECaptureFailedReasonMacOSPermissions = 4,
};

enum class EStreamDataMessage : int {
    k_EStreamDataPacket = 1,
    k_EStreamDataLost = 2,
};

enum class EAudioFormat : int {
    k_EAudioFormatNone = 0,
    k_EAudioFormat16BitLittleEndian = 1,
    k_EAudioFormatFloat = 2,
};

enum class EStreamStatsMessage : int {
    k_EStreamStatsFrameEvents = 1,
    k_EStreamStatsDebugDump = 2,
    k_EStreamStatsLogMessage = 3,
    k_EStreamStatsLogUploadBegin = 4,
    k_EStreamStatsLogUploadData = 5,
    k_EStreamStatsLogUploadComplete = 6,
};

enum class EStreamFrameEvent : int {
    k_EStreamInputEventStart = 0,
    k_EStreamInputEventSend = 1,
    k_EStreamInputEventRecv = 2,
    k_EStreamInputEventQueued = 3,
    k_EStreamInputEventHandled = 4,
    k_EStreamFrameEventStart = 5,
    k_EStreamFrameEventCaptureBegin = 6,
    k_EStreamFrameEventCaptureEnd = 7,
    k_EStreamFrameEventConvertBegin = 8,
    k_EStreamFrameEventConvertEnd = 9,
    k_EStreamFrameEventEncodeBegin = 10,
    k_EStreamFrameEventEncodeEnd = 11,
    k_EStreamFrameEventSend = 12,
    k_EStreamFrameEventRecv = 13,
    k_EStreamFrameEventDecodeBegin = 14,
    k_EStreamFrameEventDecodeEnd = 15,
    k_EStreamFrameEventUploadBegin = 16,
    k_EStreamFrameEventUploadEnd = 17,
    k_EStreamFrameEventComplete = 18,
};

enum class EStreamFrameResult : int {
    k_EStreamFrameResultPending = 0,
    k_EStreamFrameResultDisplayed = 1,
    k_EStreamFrameResultDroppedNetworkSlow = 2,
    k_EStreamFrameResultDroppedNetworkLost = 3,
    k_EStreamFrameResultDroppedDecodeSlow = 4,
    k_EStreamFrameResultDroppedDecodeCorrupt = 5,
    k_EStreamFrameResultDroppedLate = 6,
    k_EStreamFrameResultDroppedReset = 7,
};

enum class EFrameAccumulatedStat : int {
    k_EFrameStatFPS = 0,
    k_EFrameStatCaptureDurationMS = 1,
    k_EFrameStatConvertDurationMS = 2,
    k_EFrameStatEncodeDurationMS = 3,
    k_EFrameStatSteamDurationMS = 4,
    k_EFrameStatServerDurationMS = 5,
    k_EFrameStatNetworkDurationMS = 6,
    k_EFrameStatDecodeDurationMS = 7,
    k_EFrameStatDisplayDurationMS = 8,
    k_EFrameStatClientDurationMS = 9,
    k_EFrameStatFrameDurationMS = 10,
    k_EFrameStatInputLatencyMS = 11,
    k_EFrameStatGameLatencyMS = 12,
    k_EFrameStatRoundTripLatencyMS = 13,
    k_EFrameStatPingTimeMS = 14,
    k_EFrameStatServerBitrateKbitPerSec = 15,
    k_EFrameStatClientBitrateKbitPerSec = 16,
    k_EFrameStatLinkBandwidthKbitPerSec = 17,
    k_EFrameStatPacketLossPercentage = 18,
};

enum class ELogFileType : int {
    k_ELogFileSystemBoot = 0,
    k_ELogFileSystemReset = 1,
    k_ELogFileSystemDebug = 2,
};

enum class EStreamControllerConfigMsg : int {
    k_EStreamControllerConfigMsg_RequestConfigsForApp = 0,
    k_EStreamControllerConfigMsg_ConfigResponse = 1,
    k_EStreamControllerConfigMsg_PersonalizationResponse = 2,
    k_EStreamControllerConfigMsg_ActiveConfigChange = 3,
    k_EStreamControllerConfigMsg_RequestActiveConfig = 4,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_REMOTEPLAY_ENUMS_HPP

