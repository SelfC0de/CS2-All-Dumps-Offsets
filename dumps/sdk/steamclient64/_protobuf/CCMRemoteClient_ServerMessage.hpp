// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCMRemoteClient_ServerMessage
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_service_messages.proto
#pragma once
#ifndef SDK_PROTO_CCMREMOTECLIENT_SERVERMESSAGE_HPP
#define SDK_PROTO_CCMREMOTECLIENT_SERVERMESSAGE_HPP

namespace sdk::proto {

struct CRemoteClient_CancelPairing_Response;
struct CRemoteClient_CreateSession_Response;
struct CRemoteClient_GetReplies_Response;
struct CRemoteClient_Offline_Notification;
struct CRemoteClient_SetPairingInfo_Response;
struct CRemoteClient_StartPairing_Response;

namespace CCMRemoteClient_ServerMessage_fields {

    constexpr int result = 1;

    // oneof Message
    constexpr int create_session_response = 2;
    constexpr int start_pairing_response = 3;
    constexpr int set_pairing_info_response = 4;
    constexpr int cancel_pairing_response = 5;
    constexpr int reply_packet = 6;
    constexpr int offline = 7;

} // namespace CCMRemoteClient_ServerMessage_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCMREMOTECLIENT_SERVERMESSAGE_HPP

