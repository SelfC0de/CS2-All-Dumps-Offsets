// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CWorkshop_PopulateItemDescriptions_Request
// Module: matchmaking.dll
// Proto file: gcsdk_gcmessages.proto
#pragma once
#ifndef SDK_PROTO_CWORKSHOP_POPULATEITEMDESCRIPTIONS_REQUEST_HPP
#define SDK_PROTO_CWORKSHOP_POPULATEITEMDESCRIPTIONS_REQUEST_HPP

namespace sdk::proto {

struct CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock;

namespace CWorkshop_PopulateItemDescriptions_Request_fields {

    namespace SingleItemDescription {
        constexpr int gameitemid = 1;
        constexpr int item_description = 2;
        constexpr int one_per_account = 3;
    } // namespace SingleItemDescription

    namespace ItemDescriptionsLanguageBlock {
        constexpr int language = 1;
        constexpr int descriptions = 2;
    } // namespace ItemDescriptionsLanguageBlock

    constexpr int appid = 1;
    constexpr int languages = 2;

} // namespace CWorkshop_PopulateItemDescriptions_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CWORKSHOP_POPULATEITEMDESCRIPTIONS_REQUEST_HPP

