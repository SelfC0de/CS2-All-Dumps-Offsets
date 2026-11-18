// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_steamtv.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_STEAMTV_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_STEAMTV_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EBroadcastImageType : int {
    k_EBroadcastImageType_None = 0,
    k_EBroadcastImageType_Offline = 1,
    k_EBroadcastImageType_Standby = 2,
    k_EBroadcastImageType_Avatar = 3,
    k_EBroadcastImageType_Summary = 4,
    k_EBroadcastImageType_Background = 5,
    k_EBroadcastImageType_Emoticon = 6,
};

enum class EGetGamesAlgorithm : int {
    k_EGetGamesAlgorithm_Default = 1,
    k_EGetGamesAlgorithm_MostPlayed = 2,
    k_EGetGamesAlgorithm_PopularNew = 3,
};

enum class EGetChannelsAlgorithm : int {
    k_EGetChannelsAlgorithm_Default = 1,
    k_EGetChannelsAlgorithm_Friends = 2,
    k_EGetChannelsAlgorithm_Featured = 3,
    k_EGetChannelsAlgorithm_Developer = 4,
    k_EGetChannelsAlgorithm_Following = 5,
};

enum class ESteamTVContentTemplate : int {
    k_ESteamTVContentTemplate_Invalid = 0,
    k_ESteamTVContentTemplate_Takeover = 1,
    k_ESteamTVContentTemplate_SingleGame = 2,
    k_ESteamTVContentTemplate_GameList = 3,
    k_ESteamTVContentTemplate_QuickExplore = 4,
    k_ESteamTVContentTemplate_ConveyorBelt = 5,
    k_ESteamTVContentTemplate_WatchParty = 6,
    k_ESteamTVContentTemplate_Developer = 7,
    k_ESteamTVContentTemplate_Event = 8,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_STEAMTV_STEAMCLIENT_ENUMS_HPP

