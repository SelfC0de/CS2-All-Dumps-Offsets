// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CGameNetworkingUI_ConnectionState
// Module: steamclient64.dll
// Proto file: steammessages_gamenetworkingui.proto
#pragma once
#ifndef SDK_PROTO_CGAMENETWORKINGUI_CONNECTIONSTATE_HPP
#define SDK_PROTO_CGAMENETWORKINGUI_CONNECTIONSTATE_HPP

namespace sdk::proto {

struct CMsgSteamDatagramConnectionQuality;
struct CMsgSteamDatagramP2PRoutingSummary;

namespace CGameNetworkingUI_ConnectionState_fields {

    constexpr int connection_key = 1;
    constexpr int appid = 2;
    constexpr int connection_id_local = 3;
    constexpr int identity_local = 4;
    constexpr int identity_remote = 5;
    constexpr int connection_state = 10;
    constexpr int start_time = 12;
    constexpr int close_time = 13;
    constexpr int close_reason = 14;
    constexpr int close_message = 15;
    constexpr int status_loc_token = 16;
    constexpr int transport_kind = 20;
    constexpr int sdrpopid_local = 21;
    constexpr int sdrpopid_remote = 22;
    constexpr int address_remote = 23;
    constexpr int p2p_routing = 24;
    constexpr int ping_interior = 25;
    constexpr int ping_remote_front = 26;
    constexpr int ping_default_internet_route = 27;
    constexpr int e2e_quality_local = 30;
    constexpr int e2e_quality_remote = 31;
    constexpr int e2e_quality_remote_instantaneous_time = 32;
    constexpr int e2e_quality_remote_lifetime_time = 33;
    constexpr int front_quality_local = 40;
    constexpr int front_quality_remote = 41;
    constexpr int front_quality_remote_instantaneous_time = 42;
    constexpr int front_quality_remote_lifetime_time = 43;

} // namespace CGameNetworkingUI_ConnectionState_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CGAMENETWORKINGUI_CONNECTIONSTATE_HPP

