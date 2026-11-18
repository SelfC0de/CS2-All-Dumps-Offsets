// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientWelcome
// Module: client.dll
// Proto file: gcsdk_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTWELCOME_HPP
#define SDK_PROTO_CMSGCLIENTWELCOME_HPP

namespace sdk::proto {

struct CMsgClientWelcome_Location;
struct CMsgSOCacheSubscribed;
struct CMsgSOCacheSubscriptionCheck;

namespace CMsgClientWelcome_fields {

    namespace Location {
        constexpr int latitude = 1;
        constexpr int longitude = 2;
        constexpr int country = 3;
    } // namespace Location

    constexpr int version = 1;
    constexpr int game_data = 2;
    constexpr int outofdate_subscribed_caches = 3;
    constexpr int uptodate_subscribed_caches = 4;
    constexpr int location = 5;
    constexpr int game_data2 = 6;
    constexpr int rtime32_gc_welcome_timestamp = 7;
    constexpr int currency = 8;
    constexpr int balance = 9;
    constexpr int balance_url = 10;
    constexpr int txn_country_code = 11;

} // namespace CMsgClientWelcome_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTWELCOME_HPP

