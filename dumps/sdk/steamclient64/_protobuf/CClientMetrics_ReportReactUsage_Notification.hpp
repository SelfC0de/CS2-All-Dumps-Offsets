// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CClientMetrics_ReportReactUsage_Notification
// Module: steamclient64.dll
// Proto file: steammessages_clientmetrics.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCLIENTMETRICS_REPORTREACTUSAGE_NOTIFICATION_HPP
#define SDK_PROTO_CCLIENTMETRICS_REPORTREACTUSAGE_NOTIFICATION_HPP

namespace sdk::proto {

struct CClientMetrics_ReportReactUsage_Notification_ActionData;
struct CClientMetrics_ReportReactUsage_Notification_ComponentData;
struct CClientMetrics_ReportReactUsage_Notification_RouteData;

namespace CClientMetrics_ReportReactUsage_Notification_fields {

    namespace RouteData {
        constexpr int route = 1;
        constexpr int count = 2;
    } // namespace RouteData

    namespace ComponentData {
        constexpr int component = 1;
        constexpr int count = 2;
    } // namespace ComponentData

    namespace ActionData {
        constexpr int action = 1;
        constexpr int count = 2;
    } // namespace ActionData

    constexpr int product = 1;
    constexpr int version = 2;
    constexpr int routes = 3;
    constexpr int components = 4;
    constexpr int actions = 5;

} // namespace CClientMetrics_ReportReactUsage_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCLIENTMETRICS_REPORTREACTUSAGE_NOTIFICATION_HPP

