// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CMsgClientSharedLibraryLockStatus
// Module: steamclient64.dll
// Proto file: steammessages_clientserver_2.proto
#pragma once
#ifndef SDK_PROTO_CMSGCLIENTSHAREDLIBRARYLOCKSTATUS_HPP
#define SDK_PROTO_CMSGCLIENTSHAREDLIBRARYLOCKSTATUS_HPP

namespace sdk::proto {

struct CMsgClientSharedLibraryLockStatus_LockedLibrary;

namespace CMsgClientSharedLibraryLockStatus_fields {

    namespace LockedLibrary {
        constexpr int owner_id = 1;
        constexpr int locked_by = 2;
    } // namespace LockedLibrary

    constexpr int locked_library = 1;
    constexpr int own_library_locked_by = 2;

} // namespace CMsgClientSharedLibraryLockStatus_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CMSGCLIENTSHAREDLIBRARYLOCKSTATUS_HPP

