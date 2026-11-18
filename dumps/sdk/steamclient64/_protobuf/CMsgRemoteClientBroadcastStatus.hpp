// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgRemoteClientBroadcastStatus
// Module: steamclient64.dll
// Proto file: steammessages_remoteclient_discovery.proto
#pragma once
#ifndef SDK_PROTO_CMSGREMOTECLIENTBROADCASTSTATUS_HPP
#define SDK_PROTO_CMSGREMOTECLIENTBROADCASTSTATUS_HPP

namespace sdk::proto {

struct CMsgRemoteClientBroadcastStatus_User;

namespace CMsgRemoteClientBroadcastStatus_fields {

    namespace User {
        constexpr int steamid = 1;
        constexpr int auth_key_id = 2;
    } // namespace User

    constexpr int version = 1;
    constexpr int min_version = 2;
    constexpr int connect_port = 3;
    constexpr int hostname = 4;
    constexpr int enabled_services = 6;
    constexpr int ostype = 7;
    constexpr int is64bit = 8;
    constexpr int users = 9;
    constexpr int euniverse = 11;
    constexpr int timestamp = 12;
    constexpr int screen_locked = 13;
    constexpr int games_running = 14;
    constexpr int mac_addresses = 15;
    constexpr int download_lan_peer_group = 16;
    constexpr int broadcasting_active = 17;
    constexpr int vr_active = 18;
    constexpr int content_cache_port = 19;
    constexpr int ip_addresses = 20;
    constexpr int public_ip_address = 21;
    constexpr int remoteplay_active = 22;
    constexpr int supported_services = 23;
    constexpr int steam_deck = 24;
    constexpr int steam_version = 25;
    constexpr int vr_link_caps = 26;
    constexpr int vr_link_invite_client_id = 27;
    constexpr int connected_paired_network_hash = 28;
    constexpr int connecting_paired_network_hash = 32;
    constexpr int wifi_dongle_present = 29;
    constexpr int is_low_spec_hardware = 30;
    constexpr int gaming_device_type = 31;

} // namespace CMsgRemoteClientBroadcastStatus_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGREMOTECLIENTBROADCASTSTATUS_HPP

