// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CStore_PurchaseReceiptInfo
// Module: steamclient64.dll
// Proto file: steammessages_store.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CSTORE_PURCHASERECEIPTINFO_HPP
#define SDK_PROTO_CSTORE_PURCHASERECEIPTINFO_HPP

namespace sdk::proto {

struct CStore_PurchaseReceiptInfo_LineItem;

namespace CStore_PurchaseReceiptInfo_fields {

    namespace LineItem {
        constexpr int packageid = 1;
        constexpr int appid = 2;
        constexpr int line_item_description = 3;
    } // namespace LineItem

    constexpr int transactionid = 1;
    constexpr int packageid = 2;
    constexpr int purchase_status = 3;
    constexpr int result_detail = 4;
    constexpr int transaction_time = 5;
    constexpr int payment_method = 6;
    constexpr int base_price = 7;
    constexpr int total_discount = 8;
    constexpr int tax = 9;
    constexpr int shipping = 10;
    constexpr int currency_code = 11;
    constexpr int country_code = 12;
    constexpr int error_headline = 13;
    constexpr int error_string = 14;
    constexpr int error_link_text = 15;
    constexpr int error_link_url = 16;
    constexpr int error_appid = 17;
    constexpr int line_items = 18;

} // namespace CStore_PurchaseReceiptInfo_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTORE_PURCHASERECEIPTINFO_HPP

