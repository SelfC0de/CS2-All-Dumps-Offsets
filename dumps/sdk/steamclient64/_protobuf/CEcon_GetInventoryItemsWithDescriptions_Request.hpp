// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CEcon_GetInventoryItemsWithDescriptions_Request
// Module: steamclient64.dll
// Proto file: steammessages_econ.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CECON_GETINVENTORYITEMSWITHDESCRIPTIONS_REQUEST_HPP
#define SDK_PROTO_CECON_GETINVENTORYITEMSWITHDESCRIPTIONS_REQUEST_HPP

namespace sdk::proto {

struct CEcon_GetInventoryItemsWithDescriptions_Request_FilterOptions;

namespace CEcon_GetInventoryItemsWithDescriptions_Request_fields {

    namespace FilterOptions {
        constexpr int assetids = 1;
        constexpr int currencyids = 2;
        constexpr int tradable_only = 3;
        constexpr int marketable_only = 4;
    } // namespace FilterOptions

    constexpr int steamid = 1;
    constexpr int appid = 2;
    constexpr int contextid = 3;
    constexpr int get_descriptions = 4;
    constexpr int get_asset_properties = 11;
    constexpr int for_trade_offer_verification = 10;
    constexpr int language = 5;
    constexpr int filters = 6;
    constexpr int start_assetid = 8;
    constexpr int count = 9;

} // namespace CEcon_GetInventoryItemsWithDescriptions_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CECON_GETINVENTORYITEMSWITHDESCRIPTIONS_REQUEST_HPP

