// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameRecording_QueryPhases_Response
// Module: steamclient64.dll
// Proto file: webuimessages_gamerecording.proto
#pragma once
#ifndef SDK_PROTO_CGAMERECORDING_QUERYPHASES_RESPONSE_HPP
#define SDK_PROTO_CGAMERECORDING_QUERYPHASES_RESPONSE_HPP

namespace sdk::proto {

struct CGameRecording_QueryPhases_Response_Phase;

namespace CGameRecording_QueryPhases_Response_fields {

    namespace Phase {
        namespace BackgroundRecording {
            constexpr int timeline_id = 1;
            constexpr int offset = 2;
            constexpr int duration_ms = 3;
        } // namespace BackgroundRecording

        constexpr int game_id = 1;
        constexpr int date_recorded = 5;
        constexpr int duration_ms = 6;
        constexpr int tags = 7;
        constexpr int contained_tags = 8;
        constexpr int background_recording = 9;
        constexpr int clip_ids = 10;
        constexpr int type = 11;
        constexpr int start_ms = 12;
        constexpr int screenshots = 13;
        constexpr int active = 14;
        constexpr int phase_id = 15;
        constexpr int significant_events = 16;
        constexpr int attributes = 17;
    } // namespace Phase

    constexpr int phases = 1;
    constexpr int total_count = 2;

} // namespace CGameRecording_QueryPhases_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMERECORDING_QUERYPHASES_RESPONSE_HPP

