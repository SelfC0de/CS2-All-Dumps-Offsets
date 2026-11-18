// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_clientmetrics.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_CLIENTMETRICS_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_CLIENTMETRICS_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class ESteamPipeWorkType : int {
    k_ESteamPipeClientWorkType_Invalid = 0,
    k_ESteamPipeClientWorkType_StageFromChunkStores = 1,
};

enum class ESteamPipeOperationType : int {
    k_ESteamPipeOperationType_Invalid = 0,
    k_ESteamPipeOperationType_DecryptCPU = 1,
    k_ESteamPipeOperationType_DiskRead = 2,
    k_ESteamPipeOperationType_DiskWrite = 3,
};

enum class EClipShareMethod : int {
    k_EClipShareMethod_Chat = 1,
    k_EClipShareMethod_Clipboard = 2,
    k_EClipShareMethod_File = 3,
    k_EClipShareMethod_SendClip = 4,
    k_EClipShareMethod_SaveToMedia = 5,
    k_EClipShareMethod_CreateLink = 6,
};

enum class EClipRangeMethod : int {
    k_EClipRangeMethod_CreateClipButton = 1,
    k_EClipRangeMethod_Highlight = 2,
    k_EClipRangeMethod_BeginEndButtons = 3,
    k_EClipRangeMethod_ContextMenu = 4,
    k_EClipRangeMethod_Drag = 5,
    k_EClipRangeMethod_EntireClip = 6,
    k_EClipRangeMethod_PhaseRecording = 7,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_CLIENTMETRICS_STEAMCLIENT_ENUMS_HPP

