// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientStoreUserStatsResponse
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_userstats.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTSTOREUSERSTATSRESPONSE_HPP
#define SDK_PROTO_CMSGCLIENTSTOREUSERSTATSRESPONSE_HPP

namespace sdk::proto {

struct CMsgClientStoreUserStatsResponse_Stats_Failed_Validation;

namespace CMsgClientStoreUserStatsResponse_fields {

    namespace Stats_Failed_Validation {
        constexpr int stat_id = 1;
        constexpr int reverted_stat_value = 2;
    } // namespace Stats_Failed_Validation

    constexpr int game_id = 1;
    constexpr int eresult = 2;
    constexpr int crc_stats = 3;
    constexpr int stats_failed_validation = 4;
    constexpr int stats_out_of_date = 5;

} // namespace CMsgClientStoreUserStatsResponse_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTSTOREUSERSTATSRESPONSE_HPP

