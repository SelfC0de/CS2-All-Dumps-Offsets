// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CAuthentication_RefreshToken_Enumerate_Response
// Module: steamclient64.dll
// Proto file: steammessages_auth.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CAUTHENTICATION_REFRESHTOKEN_ENUMERATE_RESPONSE_HPP
#define SDK_PROTO_CAUTHENTICATION_REFRESHTOKEN_ENUMERATE_RESPONSE_HPP

namespace sdk::proto {

struct CAuthentication_RefreshToken_Enumerate_Response_RefreshTokenDescription;

namespace CAuthentication_RefreshToken_Enumerate_Response_fields {

    namespace TokenUsageEvent {
        constexpr int time = 1;
        constexpr int ip = 2;
        constexpr int locale = 3;
        constexpr int country = 4;
        constexpr int state = 5;
        constexpr int city = 6;
    } // namespace TokenUsageEvent

    namespace RefreshTokenDescription {
        constexpr int token_id = 1;
        constexpr int token_description = 2;
        constexpr int time_updated = 3;
        constexpr int platform_type = 4;
        constexpr int logged_in = 5;
        constexpr int os_platform = 6;
        constexpr int auth_type = 7;
        constexpr int gaming_device_type = 8;
        constexpr int first_seen = 9;
        constexpr int last_seen = 10;
        constexpr int os_type = 11;
        constexpr int authentication_type = 12;
        constexpr int effective_token_state = 13;
    } // namespace RefreshTokenDescription

    constexpr int refresh_tokens = 1;
    constexpr int requesting_token = 2;

} // namespace CAuthentication_RefreshToken_Enumerate_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CAUTHENTICATION_REFRESHTOKEN_ENUMERATE_RESPONSE_HPP

