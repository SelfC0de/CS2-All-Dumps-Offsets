// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CControllerConfigMsg
// Module: steamclient64.dll
// Proto file: steammessages_remoteplay.proto
#pragma once
#ifndef SDK_PROTO_CCONTROLLERCONFIGMSG_HPP
#define SDK_PROTO_CCONTROLLERCONFIGMSG_HPP

namespace sdk::proto {

struct CControllerConfigMsg_ControllerActiveConfigMsg;
struct CControllerConfigMsg_ControllerConfigResponse;
struct CControllerConfigMsg_ControllerPersonalizationResponse;

namespace CControllerConfigMsg_fields {

    namespace ControllerConfigResponse {
        constexpr int appid = 1;
        constexpr int configURL = 2;
        constexpr int controllerType = 3;
        constexpr int controllerData = 4;
        constexpr int selectionOrder = 5;
        constexpr int actionBlock = 6;
    } // namespace ControllerConfigResponse

    namespace ControllerPersonalizationResponse {
        constexpr int personalizationData = 1;
    } // namespace ControllerPersonalizationResponse

    namespace ControllerActiveConfigChangeResponse {
        constexpr int configURL = 2;
        constexpr int controllerType = 3;
        constexpr int controllerData = 4;
        constexpr int selectionOrder = 5;
    } // namespace ControllerActiveConfigChangeResponse

    namespace ControllerActiveConfigMsg {
        constexpr int appid = 1;
        constexpr int configURL = 2;
        constexpr int controllerType = 3;
        constexpr int controllerData = 4;
    } // namespace ControllerActiveConfigMsg

    constexpr int type = 1;
    constexpr int controllerPath = 2;
    constexpr int appid = 3;
    constexpr int personalizationResponse = 4;
    constexpr int configResponse = 6;
    constexpr int activeConfigChangeMsg = 7;

} // namespace CControllerConfigMsg_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCONTROLLERCONFIGMSG_HPP

