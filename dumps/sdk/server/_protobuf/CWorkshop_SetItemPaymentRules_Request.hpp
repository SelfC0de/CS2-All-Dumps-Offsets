// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CWorkshop_SetItemPaymentRules_Request
// Module: server.dll
// Proto file: gcsdk_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CWORKSHOP_SETITEMPAYMENTRULES_REQUEST_HPP
#define SDK_PROTO_CWORKSHOP_SETITEMPAYMENTRULES_REQUEST_HPP

namespace sdk::proto {

struct CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule;
struct CWorkshop_SetItemPaymentRules_Request_WorkshopDirectPaymentRule;
struct CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule;

namespace CWorkshop_SetItemPaymentRules_Request_fields {

    namespace WorkshopItemPaymentRule {
        constexpr int workshop_file_id = 1;
        constexpr int revenue_percentage = 2;
        constexpr int rule_description = 3;
        constexpr int rule_type = 4;
    } // namespace WorkshopItemPaymentRule

    namespace WorkshopDirectPaymentRule {
        constexpr int workshop_file_id = 1;
        constexpr int rule_description = 2;
    } // namespace WorkshopDirectPaymentRule

    namespace PartnerItemPaymentRule {
        constexpr int account_id = 1;
        constexpr int revenue_percentage = 2;
        constexpr int rule_description = 3;
    } // namespace PartnerItemPaymentRule

    constexpr int appid = 1;
    constexpr int gameitemid = 2;
    constexpr int associated_workshop_files = 3;
    constexpr int partner_accounts = 4;
    constexpr int validate_only = 5;
    constexpr int make_workshop_files_subscribable = 6;
    constexpr int associated_workshop_file_for_direct_payments = 7;

} // namespace CWorkshop_SetItemPaymentRules_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CWORKSHOP_SETITEMPAYMENTRULES_REQUEST_HPP

