// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCMRemoteClient_ClientMessage
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_service_messages.proto
#pragma once
#ifndef SDK_PROTO_CCMREMOTECLIENT_CLIENTMESSAGE_HPP
#define SDK_PROTO_CCMREMOTECLIENT_CLIENTMESSAGE_HPP

namespace sdk::proto {

struct CRemoteClient_CancelPairing_Request;
struct CRemoteClient_CreateSession_Request;
struct CRemoteClient_RegisterStatusUpdate_Notification;
struct CRemoteClient_RemotePacket_Notification;
struct CRemoteClient_SetPairingInfo_Request;
struct CRemoteClient_StartPairing_Request;
struct CRemoteClient_UnregisterStatusUpdate_Notification;

namespace CCMRemoteClient_ClientMessage_fields {


    // oneof Message
    constexpr int create_session_request = 1;
    constexpr int start_pairing_request = 2;
    constexpr int set_pairing_info_request = 3;
    constexpr int cancel_pairing_request = 4;
    constexpr int register_status_update = 5;
    constexpr int unregister_status_update = 6;
    constexpr int remote_packet = 7;

} // namespace CCMRemoteClient_ClientMessage_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCMREMOTECLIENT_CLIENTMESSAGE_HPP

