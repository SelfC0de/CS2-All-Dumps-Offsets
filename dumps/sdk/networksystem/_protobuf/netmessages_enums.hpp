// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: netmessages.proto
// Module: networksystem.dll
#pragma once
#ifndef SDK_PROTO_NETMESSAGES_ENUMS_HPP
#define SDK_PROTO_NETMESSAGES_ENUMS_HPP

namespace sdk::proto {

enum class CLC_Messages : int {
    clc_ClientInfo = 20,
    clc_Move = 21,
    clc_VoiceData = 22,
    clc_BaselineAck = 23,
    clc_RespondCvarValue = 25,
    clc_LoadingProgress = 27,
    clc_SplitPlayerConnect = 28,
    clc_SplitPlayerDisconnect = 30,
    clc_ServerStatus = 31,
    clc_RequestPause = 33,
    clc_CmdKeyValues = 34,
    clc_RconServerDetails = 35,
    clc_HltvReplay = 36,
    clc_Diagnostic = 37,
};

enum class SVC_Messages : int {
    svc_ServerInfo = 40,
    svc_FlattenedSerializer = 41,
    svc_ClassInfo = 42,
    svc_SetPause = 43,
    svc_CreateStringTable = 44,
    svc_UpdateStringTable = 45,
    svc_VoiceInit = 46,
    svc_VoiceData = 47,
    svc_Print = 48,
    svc_Sounds = 49,
    svc_SetView = 50,
    svc_ClearAllStringTables = 51,
    svc_CmdKeyValues = 52,
    svc_BSPDecal = 53,
    svc_SplitScreen = 54,
    svc_PacketEntities = 55,
    svc_Prefetch = 56,
    svc_Menu = 57,
    svc_GetCvarValue = 58,
    svc_StopSound = 59,
    svc_PeerList = 60,
    svc_PacketReliable = 61,
    svc_HLTVStatus = 62,
    svc_ServerSteamID = 63,
    svc_FullFrameSplit = 70,
    svc_RconServerDetails = 71,
    svc_UserMessage = 72,
    svc_Broadcast_Command = 74,
    svc_HltvFixupOperatorStatus = 75,
    svc_UserCmds = 76,
    svc_NextMsgPredicted = 77,
    svc_EncryptedData = 78,
};

enum class VoiceDataFormat_t : int {
    VOICEDATA_FORMAT_STEAM = 0,
    VOICEDATA_FORMAT_ENGINE = 1,
    VOICEDATA_FORMAT_OPUS = 2,
};

enum class RequestPause_t : int {
    RP_PAUSE = 0,
    RP_UNPAUSE = 1,
    RP_TOGGLEPAUSE = 2,
};

enum class PrefetchType : int {
    PFT_SOUND = 0,
};

enum class ESplitScreenMessageType : int {
    MSG_SPLITSCREEN_ADDUSER = 0,
    MSG_SPLITSCREEN_REMOVEUSER = 1,
};

enum class EQueryCvarValueStatus : int {
    eQueryCvarValueStatus_ValueIntact = 0,
    eQueryCvarValueStatus_CvarNotFound = 1,
    eQueryCvarValueStatus_NotACvar = 2,
    eQueryCvarValueStatus_CvarProtected = 3,
};

enum class DIALOG_TYPE : int {
    DIALOG_MSG = 0,
    DIALOG_MENU = 1,
    DIALOG_TEXT = 2,
    DIALOG_ENTRY = 3,
    DIALOG_ASKCONNECT = 4,
};

enum class SVC_Messages_LowFrequency : int {
    svc_dummy = 600,
};

enum class Bidirectional_Messages : int {
    bi_RebroadcastGameEvent = 16,
    bi_RebroadcastSource = 17,
    bi_GameEvent_DEPRECATED = 18,
    bi_PredictionEvent = 19,
};

enum class ReplayEventType_t : int {
    REPLAY_EVENT_CANCEL = 0,
    REPLAY_EVENT_DEATH = 1,
    REPLAY_EVENT_GENERIC = 2,
    REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 3,
    REPLAY_EVENT_VICTORY = 4,
};

} // namespace sdk::proto

#endif // SDK_PROTO_NETMESSAGES_ENUMS_HPP

