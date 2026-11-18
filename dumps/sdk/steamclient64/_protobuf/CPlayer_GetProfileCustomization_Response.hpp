// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CPlayer_GetProfileCustomization_Response
// Module: steamclient64.dll
// Proto file: steammessages_player.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CPLAYER_GETPROFILECUSTOMIZATION_RESPONSE_HPP
#define SDK_PROTO_CPLAYER_GETPROFILECUSTOMIZATION_RESPONSE_HPP

namespace sdk::proto {

struct CPlayer_GetProfileCustomization_Response_PurchasedCustomization;
struct ProfileCustomization;
struct ProfilePreferences;
struct ProfileTheme;

namespace CPlayer_GetProfileCustomization_Response_fields {

    namespace PurchasedCustomization {
        constexpr int purchaseid = 1;
        constexpr int customization_type = 2;
        constexpr int level = 3;
    } // namespace PurchasedCustomization

    constexpr int customizations = 1;
    constexpr int slots_available = 2;
    constexpr int profile_theme = 3;
    constexpr int purchased_customizations = 4;
    constexpr int profile_preferences = 5;

} // namespace CPlayer_GetProfileCustomization_Response_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CPLAYER_GETPROFILECUSTOMIZATION_RESPONSE_HPP

