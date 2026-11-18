// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientEmoticonList
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_friends.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTEMOTICONLIST_HPP
#define SDK_PROTO_CMSGCLIENTEMOTICONLIST_HPP

namespace sdk::proto {

struct CMsgClientEmoticonList_Effect;
struct CMsgClientEmoticonList_Emoticon;
struct CMsgClientEmoticonList_Sticker;

namespace CMsgClientEmoticonList_fields {

    namespace Emoticon {
        constexpr int name = 1;
        constexpr int count = 2;
        constexpr int time_last_used = 3;
        constexpr int use_count = 4;
        constexpr int time_received = 5;
        constexpr int appid = 6;
    } // namespace Emoticon

    namespace Sticker {
        constexpr int name = 1;
        constexpr int count = 2;
        constexpr int time_received = 3;
        constexpr int appid = 4;
        constexpr int time_last_used = 5;
        constexpr int use_count = 6;
    } // namespace Sticker

    namespace Effect {
        constexpr int name = 1;
        constexpr int count = 2;
        constexpr int time_received = 3;
        constexpr int infinite_use = 4;
        constexpr int appid = 5;
    } // namespace Effect

    constexpr int emoticons = 1;
    constexpr int stickers = 2;
    constexpr int effects = 3;

} // namespace CMsgClientEmoticonList_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTEMOTICONLIST_HPP

