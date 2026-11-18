// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CStorePageFilter
// Module: steamclient64.dll
// Proto file: contenthubs.proto
#pragma once
#ifndef SDK_PROTO_CSTOREPAGEFILTER_HPP
#define SDK_PROTO_CSTOREPAGEFILTER_HPP

namespace sdk::proto {

struct CStorePageFilter_ContentHubFilter;
struct CStorePageFilter_SalePageFilter;
struct CStorePageFilter_StoreFilter;

namespace CStorePageFilter_fields {

    namespace SalePageFilter {
        constexpr int sale_tagid = 1;
        constexpr int creator_clan_account_id = 2;
    } // namespace SalePageFilter

    namespace ContentHubFilter {
        namespace OptInInfo {
            constexpr int name = 1;
            constexpr int optin_tagid = 2;
            constexpr int prune_tagid = 3;
            constexpr int optin_only = 4;
        } // namespace OptInInfo

        constexpr int hub_type = 1;
        constexpr int hub_category = 2;
        constexpr int hub_tagid = 3;
        constexpr int discount_filter = 4;
        constexpr int optin = 5;
    } // namespace ContentHubFilter

    namespace StoreFilter {
        constexpr int filter_json = 1;
        constexpr int cache_key = 2;
    } // namespace StoreFilter

    constexpr int sale_filter = 1;
    constexpr int content_hub_filter = 2;
    constexpr int store_filters = 3;

} // namespace CStorePageFilter_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTOREPAGEFILTER_HPP

