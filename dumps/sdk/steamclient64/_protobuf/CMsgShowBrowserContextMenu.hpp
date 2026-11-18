// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgShowBrowserContextMenu
// Module: steamclient64.dll
// Proto file: htmlmessages.proto
#pragma once
#ifndef SDK_PROTO_CMSGSHOWBROWSERCONTEXTMENU_HPP
#define SDK_PROTO_CMSGSHOWBROWSERCONTEXTMENU_HPP

namespace sdk::proto {

struct CMsgShowBrowserContextMenu_ContextCommand;

namespace CMsgShowBrowserContextMenu_fields {

    namespace ContextCommand {
        constexpr int id = 1;
        constexpr int label = 2;
    } // namespace ContextCommand

    constexpr int browser_handle = 1;
    constexpr int custom_commands = 2;
    constexpr int type_flags = 3;
    constexpr int page_url = 4;
    constexpr int coord_x = 5;
    constexpr int coord_y = 6;
    constexpr int link_url = 7;
    constexpr int unfiltered_link_url = 8;
    constexpr int selection_text = 9;
    constexpr int misspelled_word = 10;
    constexpr int edit_state_flags = 11;

} // namespace CMsgShowBrowserContextMenu_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGSHOWBROWSERCONTEXTMENU_HPP

