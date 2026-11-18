// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameRecording_SaveClip_Request
// Module: steamclient64.dll
// Proto file: webuimessages_gamerecording.proto
#pragma once
#ifndef SDK_PROTO_CGAMERECORDING_SAVECLIP_REQUEST_HPP
#define SDK_PROTO_CGAMERECORDING_SAVECLIP_REQUEST_HPP

namespace sdk::proto {

struct CGameRecording_SaveClip_Request_Position;

namespace CGameRecording_SaveClip_Request_fields {

    namespace Position {
        constexpr int timeline_id = 1;
        constexpr int offset_ms = 2;
    } // namespace Position

    constexpr int game_id = 1;
    constexpr int start = 2;
    constexpr int end = 3;
    constexpr int name = 4;
    constexpr int src_clip_id = 5;
    constexpr int temporary = 6;
    constexpr int force_thumbnail = 7;

} // namespace CGameRecording_SaveClip_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMERECORDING_SAVECLIP_REQUEST_HPP

