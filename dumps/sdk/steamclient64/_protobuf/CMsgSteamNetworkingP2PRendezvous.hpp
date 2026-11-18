// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgSteamNetworkingP2PRendezvous
// Module: steamclient64.dll
// Proto file: steamnetworkingsockets_messages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSTEAMNETWORKINGP2PRENDEZVOUS_HPP
#define SDK_PROTO_CMSGSTEAMNETWORKINGP2PRENDEZVOUS_HPP

namespace sdk::proto {

struct CMsgSteamNetworkingP2PRendezvous_ApplicationMessage;
struct CMsgSteamNetworkingP2PRendezvous_ConnectOK;
struct CMsgSteamNetworkingP2PRendezvous_ConnectRequest;
struct CMsgSteamNetworkingP2PRendezvous_ConnectionClosed;
struct CMsgSteamNetworkingP2PRendezvous_ReliableMessage;

namespace CMsgSteamNetworkingP2PRendezvous_fields {

    namespace ConnectRequest {
        constexpr int crypt = 6;
        constexpr int cert = 7;
        constexpr int to_virtual_port = 9;
        constexpr int from_virtual_port = 10;
        constexpr int from_fakeip = 11;
    } // namespace ConnectRequest

    namespace ConnectOK {
        constexpr int crypt = 5;
        constexpr int cert = 6;
    } // namespace ConnectOK

    namespace ConnectionClosed {
        constexpr int debug = 5;
        constexpr int reason_code = 6;
    } // namespace ConnectionClosed

    namespace ReliableMessage {
        constexpr int ice = 1;
    } // namespace ReliableMessage

    namespace ApplicationMessage {
        constexpr int data = 1;
        constexpr int msg_num = 2;
        constexpr int flags = 3;
        constexpr int lane_idx = 4;
    } // namespace ApplicationMessage

    constexpr int from_identity = 8;
    constexpr int from_connection_id = 9;
    constexpr int to_identity = 10;
    constexpr int to_connection_id = 1;
    constexpr int sdr_routes = 2;
    constexpr int ack_peer_routes_revision = 3;
    constexpr int ice_enabled = 7;
    constexpr int hosted_server_ticket = 14;
    constexpr int connect_request = 4;
    constexpr int connect_ok = 5;
    constexpr int connection_closed = 6;
    constexpr int ack_reliable_msg = 11;
    constexpr int first_reliable_msg = 12;
    constexpr int reliable_messages = 13;
    constexpr int application_messages = 15;

} // namespace CMsgSteamNetworkingP2PRendezvous_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSTEAMNETWORKINGP2PRENDEZVOUS_HPP

