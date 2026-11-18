// Auto-generated protobuf field constants — DO NOT EDIT
// Message: ParentalSettings
// Module: steamclient64.dll
// Proto file: steammessages_parental_objects.proto
#pragma once
#ifndef SDK_PROTO_PARENTALSETTINGS_HPP
#define SDK_PROTO_PARENTALSETTINGS_HPP

namespace sdk::proto {

struct ParentalApp;
struct ParentalPlaytimeRestrictions;
struct ParentalTemporaryPlaytimeRestrictions;

namespace ParentalSettings_fields {

    constexpr int steamid = 1;
    constexpr int applist_base_id = 2;
    constexpr int applist_base_description = 3;
    constexpr int applist_base = 4;
    constexpr int applist_custom = 5;
    constexpr int passwordhashtype = 6;
    constexpr int salt = 7;
    constexpr int passwordhash = 8;
    constexpr int is_enabled = 9;
    constexpr int enabled_features = 10;
    constexpr int recovery_email = 11;
    constexpr int is_site_license_lock = 12;
    constexpr int temporary_enabled_features = 13;
    constexpr int rtime_temporary_feature_expiration = 14;
    constexpr int playtime_restrictions = 15;
    constexpr int temporary_playtime_restrictions = 16;
    constexpr int excluded_store_content_descriptors = 17;
    constexpr int excluded_community_content_descriptors = 18;
    constexpr int utility_appids = 19;

} // namespace ParentalSettings_fields

} // namespace sdk::proto

#endif // SDK_PROTO_PARENTALSETTINGS_HPP

