// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSVCMsg_PacketEntities
// Module: client.dll
// Proto file: netmessages.proto
#pragma once
#ifndef SDK_PROTO_CSVCMSG_PACKETENTITIES_HPP
#define SDK_PROTO_CSVCMSG_PACKETENTITIES_HPP

namespace sdk::proto {

struct CSVCMsg_PacketEntities_alternate_baseline_t;
struct CSVCMsg_PacketEntities_non_transmitted_entities_t;
struct CSVCMsg_PacketEntities_outofpvs_entity_updates_t;

namespace CSVCMsg_PacketEntities_fields {

    namespace alternate_baseline_t {
        constexpr int entity_index = 1;
        constexpr int baseline_index = 2;
    } // namespace alternate_baseline_t

    namespace non_transmitted_entities_t {
        constexpr int header_count = 1;
        constexpr int data = 2;
    } // namespace non_transmitted_entities_t

    namespace outofpvs_entity_updates_t {
        constexpr int count = 1;
        constexpr int data = 2;
    } // namespace outofpvs_entity_updates_t

    constexpr int max_entries = 1;
    constexpr int updated_entries = 2;
    constexpr int legacy_is_delta = 3;
    constexpr int update_baseline = 4;
    constexpr int baseline = 5;
    constexpr int delta_from = 6;
    constexpr int entity_data = 7;
    constexpr int pending_full_frame = 8;
    constexpr int active_spawngroup_handle = 9;
    constexpr int max_spawngroup_creationsequence = 10;
    constexpr int last_cmd_number_executed = 11;
    constexpr int last_cmd_number_recv_delta = 17;
    constexpr int server_tick = 12;
    constexpr int serialized_entities = 13;
    constexpr int alternate_baselines = 15;
    constexpr int has_pvs_vis_bits_deprecated = 16;
    constexpr int cmd_recv_status = 22;
    constexpr int non_transmitted_entities = 19;
    constexpr int cq_starved_command_ticks = 20;
    constexpr int cq_discarded_command_ticks = 21;
    constexpr int outofpvs_entity_updates = 23;
    constexpr int dev_padding = 999;

} // namespace CSVCMsg_PacketEntities_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSVCMSG_PACKETENTITIES_HPP

