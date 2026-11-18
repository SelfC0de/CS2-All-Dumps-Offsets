// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: webuimessages_gamerecording.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_WEBUIMESSAGES_GAMERECORDING_ENUMS_HPP
#define SDK_PROTO_WEBUIMESSAGES_GAMERECORDING_ENUMS_HPP

namespace sdk::proto {

enum class ETimelineEntryType : int {
    k_ETimelineEntryType_Invalid = 0,
    k_ETimelineEntryType_GameMode = 1,
    k_ETimelineEntryType_Event = 2,
    k_ETimelineEntryType_StateDescription = 3,
    k_ETimelineEntryType_Achievement = 4,
    k_ETimelineEntryType_UserMarker = 5,
    k_ETimelineEntryType_Screenshot = 6,
    k_ETimelineEntryType_Error = 7,
    k_ETimelineEntryType_Tag = 8,
    k_ETimelineEntryType_GamePhase = 9,
};

enum class EPhaseResultType : int {
    k_EPhaseResultType_Automatic = 1,
    k_EPhaseResultType_Blank = 2,
    k_EPhaseResultType_API = 3,
};

enum class ETimelineChangeNotificationType : int {
    k_ETimelineChangeNotificationType_Started = 1,
    k_ETimelineChangeNotificationType_Stopped = 2,
    k_ETimelineChangeNotificationType_Deleted = 3,
    k_ETimelineChangeNotificationType_RecordingStarted = 4,
    k_ETimelineChangeNotificationType_RecordingStopped = 5,
    k_ETimelineChangeNotificationType_RecordingUpdated = 6,
};

enum class ERecordingSessionChangeNotificationType : int {
    k_ERecordingSessionChangeNotificationType_Started = 1,
    k_ERecordingSessionChangeNotificationType_Stopped = 2,
    k_ERecordingSessionChangeNotificationType_Deleted = 3,
    k_ERecordingSessionChangeNotificationType_Updated = 4,
};

enum class EDiskSpaceType : int {
    k_eDiskSpaceType_Recording = 0,
    k_eDiskSpaceType_Clip = 1,
};

enum class EThumbnailTimePrecision : int {
    k_ePrecise = 0,
    k_eLoose = 1,
};

enum class EThumbnailFormat : int {
    k_eJPEG = 1,
    k_eRGB = 2,
};

} // namespace sdk::proto

#endif // SDK_PROTO_WEBUIMESSAGES_GAMERECORDING_ENUMS_HPP

