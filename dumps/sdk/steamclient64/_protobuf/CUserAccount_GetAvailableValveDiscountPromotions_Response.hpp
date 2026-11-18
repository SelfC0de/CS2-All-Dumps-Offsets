// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CUserAccount_GetAvailableValveDiscountPromotions_Response
// Module: steamclient64.dll
// Proto file: steammessages_useraccount.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CUSERACCOUNT_GETAVAILABLEVALVEDISCOUNTPROMOTIONS_RESPONSE_HPP
#define SDK_PROTO_CUSERACCOUNT_GETAVAILABLEVALVEDISCOUNTPROMOTIONS_RESPONSE_HPP

namespace sdk::proto {

struct CUserAccount_GetAvailableValveDiscountPromotions_Response_ValveDiscountPromotionDetails;

namespace CUserAccount_GetAvailableValveDiscountPromotions_Response_fields {

    namespace ValveDiscountPromotionDetails {
        constexpr int promotionid = 1;
        constexpr int promotion_description = 2;
        constexpr int minimum_cart_amount = 3;
        constexpr int minimum_cart_amount_for_display = 4;
        constexpr int discount_amount = 5;
        constexpr int currency_code = 6;
        constexpr int available_use_count = 7;
        constexpr int promotional_discount_type = 8;
        constexpr int loyalty_reward_id = 9;
        constexpr int localized_name_token = 10;
        constexpr int max_use_count = 11;
    } // namespace ValveDiscountPromotionDetails

    constexpr int promotions = 1;

} // namespace CUserAccount_GetAvailableValveDiscountPromotions_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CUSERACCOUNT_GETAVAILABLEVALVEDISCOUNTPROMOTIONS_RESPONSE_HPP

