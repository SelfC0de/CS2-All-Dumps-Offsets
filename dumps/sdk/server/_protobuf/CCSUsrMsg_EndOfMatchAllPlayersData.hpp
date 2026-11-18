// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CCSUsrMsg_EndOfMatchAllPlayersData
// Module: server.dll
// Proto file: cstrike15_usermessages.proto
#pragma once
#ifndef SDK_PROTO_CCSUSRMSG_ENDOFMATCHALLPLAYERSDATA_HPP
#define SDK_PROTO_CCSUSRMSG_ENDOFMATCHALLPLAYERSDATA_HPP

namespace sdk::proto {

struct CCSUsrMsg_EndOfMatchAllPlayersData_PlayerData;

namespace CCSUsrMsg_EndOfMatchAllPlayersData_fields {

    namespace Accolade {
        constexpr int eaccolade = 1;
        constexpr int value = 2;
        constexpr int position = 3;
    } // namespace Accolade

    namespace PlayerData {
        constexpr int slot = 1;
        constexpr int xuid = 2;
        constexpr int name = 3;
        constexpr int teamnumber = 4;
        constexpr int nomination = 5;
        constexpr int items = 6;
        constexpr int playercolor = 7;
        constexpr int isbot = 8;
    } // namespace PlayerData

    constexpr int allplayerdata = 1;
    constexpr int scene = 2;

} // namespace CCSUsrMsg_EndOfMatchAllPlayersData_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCSUSRMSG_ENDOFMATCHALLPLAYERSDATA_HPP

