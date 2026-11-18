// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteDeviceStreamingRequest
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_discovery.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTEDEVICESTREAMINGREQUEST_HPP
#define SDK_PROTO_CMSGREMOTEDEVICESTREAMINGREQUEST_HPP

namespace sdk::proto {

struct CMsgRemoteDeviceStreamingRequest_ReservedGamepad;

namespace CMsgRemoteDeviceStreamingRequest_fields {

    namespace ReservedGamepad {
        constexpr int controller_type = 1;
        constexpr int controller_subtype = 2;
    } // namespace ReservedGamepad

    constexpr int request_id = 1;
    constexpr int maximum_resolution_x = 2;
    constexpr int maximum_resolution_y = 3;
    constexpr int audio_channel_count = 4;
    constexpr int device_version = 5;
    constexpr int stream_desktop = 6;
    constexpr int device_token = 7;
    constexpr int pin = 8;
    constexpr int enable_video_streaming = 9;
    constexpr int enable_audio_streaming = 10;
    constexpr int enable_input_streaming = 11;
    constexpr int network_test = 12;
    constexpr int client_id = 13;
    constexpr int supported_transport = 14;
    constexpr int restricted = 15;
    constexpr int form_factor = 16;
    constexpr int gamepad_count = 17;
    constexpr int gamepads = 18;
    constexpr int gameid = 19;
    constexpr int stream_interface = 20;
    constexpr int maximum_framerate_numerator = 21;
    constexpr int maximum_framerate_denominator = 22;
    constexpr int display_hdr = 23;

} // namespace CMsgRemoteDeviceStreamingRequest_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTEDEVICESTREAMINGREQUEST_HPP

