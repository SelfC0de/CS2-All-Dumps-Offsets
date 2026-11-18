// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientLicenseList
// Module: steamclient64.dll
// Proto file: steammessages_clientserver.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTLICENSELIST_HPP
#define SDK_PROTO_CMSGCLIENTLICENSELIST_HPP

namespace sdk::proto {

struct CMsgClientLicenseList_License;

namespace CMsgClientLicenseList_fields {

    namespace License {
        constexpr int package_id = 1;
        constexpr int time_created = 2;
        constexpr int time_next_process = 3;
        constexpr int minute_limit = 4;
        constexpr int minutes_used = 5;
        constexpr int payment_method = 6;
        constexpr int flags = 7;
        constexpr int purchase_country_code = 8;
        constexpr int license_type = 9;
        constexpr int territory_code = 10;
        constexpr int change_number = 11;
        constexpr int owner_id = 12;
        constexpr int initial_period = 13;
        constexpr int initial_time_unit = 14;
        constexpr int renewal_period = 15;
        constexpr int renewal_time_unit = 16;
        constexpr int access_token = 17;
        constexpr int master_package_id = 18;
    } // namespace License

    constexpr int eresult = 1;
    constexpr int licenses = 2;

} // namespace CMsgClientLicenseList_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTLICENSELIST_HPP

