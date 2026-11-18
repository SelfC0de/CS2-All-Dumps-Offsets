// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CUserMessageRemoteServerResponse
// Module: server.dll
// Proto file: usermessages.proto
#pragma once
#ifndef SDK_PROTO_CUSERMESSAGEREMOTESERVERRESPONSE_HPP
#define SDK_PROTO_CUSERMESSAGEREMOTESERVERRESPONSE_HPP

namespace sdk::proto {

namespace CUserMessageRemoteServerResponse_fields {

    enum class ECommandResult : int {
        EResultSuccess = 1,
        EResultServerDoesntAllow = 2,
        EResultClientNotAuthenticated = 3,
        EResultClientNotAllowed = 4,
        EResultCommandNotAllowed = 5,
    };

    constexpr int command_result = 1;
    constexpr int convar = 2;
    constexpr int results = 3;

} // namespace CUserMessageRemoteServerResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CUSERMESSAGEREMOTESERVERRESPONSE_HPP

