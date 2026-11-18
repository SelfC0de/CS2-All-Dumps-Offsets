// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameRecordingTimelineMetadata
// Module: steamclient64.dll
// Proto file: webuimessages_gamerecordingfiles.proto
#pragma once
#ifndef SDK_PROTO_CGAMERECORDINGTIMELINEMETADATA_HPP
#define SDK_PROTO_CGAMERECORDINGTIMELINEMETADATA_HPP

namespace sdk::proto {

struct CGameRecordingPhase;
struct CGameRecordingTimelineEvent;
struct CGameRecordingTimelineMetadata_Recording;

namespace CGameRecordingTimelineMetadata_fields {

    namespace Recording {
        constexpr int recording_id = 1;
        constexpr int start_offset_ms = 2;
        constexpr int duration_ms = 3;
        constexpr int recording_type = 4;
        constexpr int delete_on_cleanup = 5;
        constexpr int video_manager_clip_id = 6;
        constexpr int video_manager_video_id = 7;
        constexpr int cdn_manifest_url = 8;
        constexpr int file_size = 9;
        constexpr int recording_zero_timeline_offset_ms = 10;
    } // namespace Recording

    constexpr int timeline_id = 1;
    constexpr int game_id = 2;
    constexpr int date_recorded = 3;
    constexpr int duration_ms = 4;
    constexpr int recordings = 5;
    constexpr int phases = 6;
    constexpr int significant_events = 7;

} // namespace CGameRecordingTimelineMetadata_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMERECORDINGTIMELINEMETADATA_HPP

