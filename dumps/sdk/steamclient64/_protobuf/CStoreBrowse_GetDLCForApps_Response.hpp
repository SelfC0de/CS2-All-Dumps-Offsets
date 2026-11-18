// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CStoreBrowse_GetDLCForApps_Response
// Module: steamclient64.dll
// Proto file: steammessages_storebrowse.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CSTOREBROWSE_GETDLCFORAPPS_RESPONSE_HPP
#define SDK_PROTO_CSTOREBROWSE_GETDLCFORAPPS_RESPONSE_HPP

namespace sdk::proto {

struct CStoreBrowse_GetDLCForApps_Response_DLCData;
struct CStoreBrowse_GetDLCForApps_Response_PlaytimeForApp;

namespace CStoreBrowse_GetDLCForApps_Response_fields {

    namespace DLCData {
        constexpr int appid = 1;
        constexpr int parentappid = 2;
        constexpr int release_date = 3;
        constexpr int coming_soon = 4;
        constexpr int price = 5;
        constexpr int discount = 6;
        constexpr int free = 7;
    } // namespace DLCData

    namespace PlaytimeForApp {
        constexpr int appid = 1;
        constexpr int playtime = 2;
        constexpr int last_played = 3;
    } // namespace PlaytimeForApp

    constexpr int dlc_data = 1;
    constexpr int playtime = 2;

} // namespace CStoreBrowse_GetDLCForApps_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTOREBROWSE_GETDLCFORAPPS_RESPONSE_HPP

