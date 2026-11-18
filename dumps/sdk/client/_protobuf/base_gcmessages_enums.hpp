// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: base_gcmessages.proto
// Module: client.dll
#pragma once
#ifndef SDK_PROTO_BASE_GCMESSAGES_ENUMS_HPP
#define SDK_PROTO_BASE_GCMESSAGES_ENUMS_HPP

namespace sdk::proto {

enum class EGCBaseMsg : int {
    k_EMsgGCSystemMessage = 4001,
    k_EMsgGCReplicateConVars = 4002,
    k_EMsgGCConVarUpdated = 4003,
    k_EMsgGCInQueue = 4008,
    k_EMsgGCInviteToParty = 4501,
    k_EMsgGCInvitationCreated = 4502,
    k_EMsgGCPartyInviteResponse = 4503,
    k_EMsgGCKickFromParty = 4504,
    k_EMsgGCLeaveParty = 4505,
    k_EMsgGCServerAvailable = 4506,
    k_EMsgGCClientConnectToServer = 4507,
    k_EMsgGCGameServerInfo = 4508,
    k_EMsgGCError = 4509,
    k_EMsgGCReplay_UploadedToYouTube = 4510,
    k_EMsgGCLANServerAvailable = 4511,
};

enum class EGCBaseProtoObjectTypes : int {
    k_EProtoObjectPartyInvite = 1001,
    k_EProtoObjectLobbyInvite = 1002,
};

enum class GC_BannedWordType : int {
    GC_BANNED_WORD_DISABLE_WORD = 0,
    GC_BANNED_WORD_ENABLE_WORD = 1,
};

} // namespace sdk::proto

#endif // SDK_PROTO_BASE_GCMESSAGES_ENUMS_HPP

