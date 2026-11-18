// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CStore_GetDiscoveryQueue_Request
// Module: steamclient64.dll
// Proto file: steammessages_store.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CSTORE_GETDISCOVERYQUEUE_REQUEST_HPP
#define SDK_PROTO_CSTORE_GETDISCOVERYQUEUE_REQUEST_HPP

namespace sdk::proto {

struct CStoreDiscoveryQueueSettings;
struct CStorePageFilter;
struct StoreBrowseContext;
struct StoreBrowseItemDataRequest;

namespace CStore_GetDiscoveryQueue_Request_fields {

    constexpr int queue_type = 1;
    constexpr int country_code = 2;
    constexpr int rebuild_queue = 3;
    constexpr int settings_changed = 4;
    constexpr int settings = 5;
    constexpr int rebuild_queue_if_stale = 6;
    constexpr int ignore_user_preferences = 8;
    constexpr int no_experimental_results = 9;
    constexpr int experimental_cohort = 10;
    constexpr int debug_get_solr_query = 11;
    constexpr int store_page_filter = 12;
    constexpr int context = 13;
    constexpr int data_request = 14;

} // namespace CStore_GetDiscoveryQueue_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTORE_GETDISCOVERYQUEUE_REQUEST_HPP

