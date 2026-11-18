// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSVCMsg_Sounds
// Module: server.dll
// Proto file: netmessages.proto
#pragma once
#ifndef SDK_PROTO_CSVCMSG_SOUNDS_HPP
#define SDK_PROTO_CSVCMSG_SOUNDS_HPP

namespace sdk::proto {

struct CSVCMsg_Sounds_sounddata_t;

namespace CSVCMsg_Sounds_fields {

    namespace sounddata_t {
        constexpr int origin_x = 1;
        constexpr int origin_y = 2;
        constexpr int origin_z = 3;
        constexpr int volume = 4;
        constexpr int delay_value = 5;
        constexpr int sequence_number = 6;
        constexpr int entity_index = 7;
        constexpr int channel = 8;
        constexpr int pitch = 9;
        constexpr int flags = 10;
        constexpr int sound_num = 11;
        constexpr int sound_num_handle = 12;
        constexpr int speaker_entity = 13;
        constexpr int random_seed = 14;
        constexpr int sound_level = 15;
        constexpr int is_sentence = 16;
        constexpr int is_ambient = 17;
        constexpr int guid = 18;
        constexpr int sound_resource_id = 19;
    } // namespace sounddata_t

    constexpr int reliable_sound = 1;
    constexpr int sounds = 2;

} // namespace CSVCMsg_Sounds_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSVCMSG_SOUNDS_HPP

