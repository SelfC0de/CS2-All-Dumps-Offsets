// Auto-generated protobuf field constants — DO NOT EDIT
// Message: C2S_CONNECT_Message
// Module: engine2.dll
// Proto file: connectionless_netmessages.proto
#pragma once
#ifndef SDK_PROTO_C2S_CONNECT_MESSAGE_HPP
#define SDK_PROTO_C2S_CONNECT_MESSAGE_HPP

namespace sdk::proto {

struct C2S_CONNECT_SameProcessCheck;
struct CCLCMsg_SplitPlayerConnect;

namespace C2S_CONNECT_Message_fields {

    constexpr int host_version = 1;
    constexpr int auth_protocol = 2;
    constexpr int challenge_number = 3;
    constexpr int reservation_cookie = 4;
    constexpr int low_violence = 5;
    constexpr int encrypted_password = 6;
    constexpr int splitplayers = 7;
    constexpr int auth_steam = 8;
    constexpr int challenge_context = 9;
    constexpr int localhost_same_process_check = 10;

} // namespace C2S_CONNECT_Message_fields

} // namespace sdk::proto

#endif // SDK_PROTO_C2S_CONNECT_MESSAGE_HPP

