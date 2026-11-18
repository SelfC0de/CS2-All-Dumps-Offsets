// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgKubeRPCPacket
// Module: steamclient64.dll
// Proto file: steammessages_base.proto
#pragma once
#ifndef SDK_PROTO_CMSGKUBERPCPACKET_HPP
#define SDK_PROTO_CMSGKUBERPCPACKET_HPP

namespace sdk::proto {

struct CMsgKubeRPCPacket_Hdr;

namespace CMsgKubeRPCPacket_fields {

    namespace Hdr {
        constexpr int jobid_source = 10;
        constexpr int jobid_target = 11;
        constexpr int eresult = 13;
        constexpr int target_job_name = 12;
        constexpr int error_message = 14;
        constexpr int reply_address = 42;
    } // namespace Hdr

    constexpr int hdr = 1;
    constexpr int payload = 2;

} // namespace CMsgKubeRPCPacket_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGKUBERPCPACKET_HPP

