// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CInventory_ModifyItems_Request
// Module: steamclient64.dll
// Proto file: steammessages_inventory.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CINVENTORY_MODIFYITEMS_REQUEST_HPP
#define SDK_PROTO_CINVENTORY_MODIFYITEMS_REQUEST_HPP

namespace sdk::proto {

struct CInventory_ModifyItems_Request_ItemPropertyUpdate;

namespace CInventory_ModifyItems_Request_fields {

    namespace ItemPropertyUpdate {
        constexpr int itemid = 1;
        constexpr int remove_property = 2;
        constexpr int property_name = 3;
        constexpr int property_value_bool = 4;
        constexpr int property_value_int = 5;
        constexpr int property_value_string = 6;
        constexpr int property_value_float = 7;
    } // namespace ItemPropertyUpdate

    constexpr int appid = 1;
    constexpr int steamid = 2;
    constexpr int updates = 3;
    constexpr int timestamp = 4;

} // namespace CInventory_ModifyItems_Request_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CINVENTORY_MODIFYITEMS_REQUEST_HPP

