// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CTransportSignalMsg
// Module: steamclient64.dll
// Proto file: steammessages_remoteplay.proto
#pragma once
#ifndef SDK_PROTO_CTRANSPORTSIGNALMSG_HPP
#define SDK_PROTO_CTRANSPORTSIGNALMSG_HPP

namespace sdk::proto {

struct CTransportSignalMsg_WebRTCMessage;

namespace CTransportSignalMsg_fields {

    namespace WebRTCMessage {
        namespace Candidate {
            constexpr int sdp_mid = 1;
            constexpr int sdp_mline_index = 2;
            constexpr int candidate = 3;
        } // namespace Candidate


        // oneof msg
        constexpr int greeting = 1;
        constexpr int offer = 2;
        constexpr int answer = 3;
        constexpr int candidate = 4;
    } // namespace WebRTCMessage

    constexpr int webrtc = 1;
    constexpr int sdr = 2;

} // namespace CTransportSignalMsg_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CTRANSPORTSIGNALMSG_HPP

