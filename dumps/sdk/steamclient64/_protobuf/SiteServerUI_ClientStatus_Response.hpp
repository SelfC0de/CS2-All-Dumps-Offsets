// Auto-generated protobuf field constants — DO NOT EDIT
// Message: SiteServerUI_ClientStatus_Response
// Module: steamclient64.dll
// Proto file: steammessages_siteserverui.proto
#pragma once
#ifndef SDK_PROTO_SITESERVERUI_CLIENTSTATUS_RESPONSE_HPP
#define SDK_PROTO_SITESERVERUI_CLIENTSTATUS_RESPONSE_HPP

namespace sdk::proto {

struct SiteServerUI_ClientStatus_Response_ClientInfo;
struct SiteServerUI_ClientStatus_Response_Payment;

namespace SiteServerUI_ClientStatus_Response_fields {

    namespace ClientInfo {
        constexpr int ip = 1;
        constexpr int hostname = 2;
        constexpr int connected = 3;
        constexpr int instance_id = 4;
    } // namespace ClientInfo

    namespace Payment {
        constexpr int transid = 1;
        constexpr int steamid = 2;
        constexpr int amount = 3;
        constexpr int time_created = 4;
        constexpr int purchase_status = 5;
        constexpr int hostname = 6;
        constexpr int persona_name = 7;
        constexpr int profile_url = 8;
        constexpr int avatar_url = 9;
    } // namespace Payment

    constexpr int clients = 4;
    constexpr int payments = 5;

} // namespace SiteServerUI_ClientStatus_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_SITESERVERUI_CLIENTSTATUS_RESPONSE_HPP

