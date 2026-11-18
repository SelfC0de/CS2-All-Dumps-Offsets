// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CStore_GetUserGameInterestState_Response
// Module: steamclient64.dll
// Proto file: steammessages_store.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CSTORE_GETUSERGAMEINTERESTSTATE_RESPONSE_HPP
#define SDK_PROTO_CSTORE_GETUSERGAMEINTERESTSTATE_RESPONSE_HPP

namespace sdk::proto {

struct CStore_GetUserGameInterestState_Response_InQueue;

namespace CStore_GetUserGameInterestState_Response_fields {

    namespace InQueue {
        constexpr int type = 1;
        constexpr int skipped = 2;
        constexpr int items_remaining = 3;
        constexpr int next_appid = 4;
        constexpr int experimental_cohort = 5;
    } // namespace InQueue

    constexpr int owned = 1;
    constexpr int wishlist = 2;
    constexpr int ignored = 3;
    constexpr int following = 4;
    constexpr int in_queues = 5;
    constexpr int queues_with_skip = 6;
    constexpr int queue_items_remaining = 7;
    constexpr int queue_items_next_appid = 8;
    constexpr int temporarily_owned = 9;
    constexpr int queues = 10;
    constexpr int ignored_reason = 11;
    constexpr int beta_status = 12;

} // namespace CStore_GetUserGameInterestState_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTORE_GETUSERGAMEINTERESTSTATE_RESPONSE_HPP

