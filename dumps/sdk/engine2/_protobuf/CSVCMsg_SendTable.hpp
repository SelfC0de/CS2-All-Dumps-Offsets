// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSVCMsg_SendTable
// Module: engine2.dll
// Proto file: netmessages.proto
#pragma once
#ifndef SDK_PROTO_CSVCMSG_SENDTABLE_HPP
#define SDK_PROTO_CSVCMSG_SENDTABLE_HPP

namespace sdk::proto {

struct CSVCMsg_SendTable_sendprop_t;

namespace CSVCMsg_SendTable_fields {

    namespace sendprop_t {
        constexpr int type = 1;
        constexpr int var_name = 2;
        constexpr int flags = 3;
        constexpr int priority = 4;
        constexpr int dt_name = 5;
        constexpr int num_elements = 6;
        constexpr int low_value = 7;
        constexpr int high_value = 8;
        constexpr int num_bits = 9;
    } // namespace sendprop_t

    constexpr int is_end = 1;
    constexpr int net_table_name = 2;
    constexpr int needs_decoder = 3;
    constexpr int props = 4;

} // namespace CSVCMsg_SendTable_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSVCMSG_SENDTABLE_HPP

