// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetPurchasedAndUpgradedProfileCustomizations_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETPURCHASEDANDUPGRADEDPROFILECUSTOMIZATIONS_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETPURCHASEDANDUPGRADEDPROFILECUSTOMIZATIONS_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetPurchasedAndUpgradedProfileCustomizations_Response_PurchasedCustomization;
struct CPlayer_GetPurchasedAndUpgradedProfileCustomizations_Response_UpgradedCustomization;

namespace CPlayer_GetPurchasedAndUpgradedProfileCustomizations_Response_fields {

    namespace PurchasedCustomization {
        constexpr int customization_type = 1;
        constexpr int count = 2;
    } // namespace PurchasedCustomization

    namespace UpgradedCustomization {
        constexpr int customization_type = 1;
        constexpr int level = 2;
    } // namespace UpgradedCustomization

    constexpr int purchased_customizations = 1;
    constexpr int upgraded_customizations = 2;

} // namespace CPlayer_GetPurchasedAndUpgradedProfileCustomizations_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETPURCHASEDANDUPGRADEDPROFILECUSTOMIZATIONS_RESPONSE_HPP

