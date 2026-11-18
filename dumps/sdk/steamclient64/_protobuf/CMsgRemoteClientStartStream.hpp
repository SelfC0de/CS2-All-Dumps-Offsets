// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteClientStartStream
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAM_HPP
#define SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAM_HPP

namespace sdk::proto {

struct CMsgRemoteClientStartStream_ReservedGamepad;

namespace CMsgRemoteClientStartStream_fields {

    namespace ReservedGamepad {
        constexpr int controller_type = 1;
        constexpr int controller_subtype = 2;
    } // namespace ReservedGamepad

    constexpr int app_id = 1;
    constexpr int environment = 2;
    constexpr int gamepad_count = 3;
    constexpr int launch_option = 4;
    constexpr int lock_parental_lock = 5;
    constexpr int unlock_parental_lock = 6;
    constexpr int maximum_resolution_x = 7;
    constexpr int maximum_resolution_y = 8;
    constexpr int gamepads = 9;
    constexpr int audio_channel_count = 10;
    constexpr int supported_transport = 11;
    constexpr int maximum_framerate_numerator = 12;
    constexpr int maximum_framerate_denominator = 13;
    constexpr int display_hdr = 14;
    constexpr int launch_only = 15;
    constexpr int gaming_device_type = 16;
    constexpr int cloud_conflict_resolution = 17;
    constexpr int controller_config_conflict_resolution = 18;

} // namespace CMsgRemoteClientStartStream_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTECLIENTSTARTSTREAM_HPP

