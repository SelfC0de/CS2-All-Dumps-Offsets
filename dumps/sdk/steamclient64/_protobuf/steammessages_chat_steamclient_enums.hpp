// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_chat.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_CHAT_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_CHAT_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EChatRoomJoinState : int {
    k_EChatRoomJoinState_Default = 0,
    k_EChatRoomJoinState_None = 1,
    k_EChatRoomJoinState_Joined = 2,
    k_EChatRoomJoinState_TestInvalid = 99,
};

enum class EChatRoomGroupRank : int {
    k_EChatRoomGroupRank_Default = 0,
    k_EChatRoomGroupRank_Viewer = 10,
    k_EChatRoomGroupRank_Guest = 15,
    k_EChatRoomGroupRank_Member = 20,
    k_EChatRoomGroupRank_Moderator = 30,
    k_EChatRoomGroupRank_Officer = 40,
    k_EChatRoomGroupRank_Owner = 50,
    k_EChatRoomGroupRank_TestInvalid = 99,
};

enum class EChatRoomNotificationLevel : int {
    k_EChatroomNotificationLevel_Invalid = 0,
    k_EChatroomNotificationLevel_None = 1,
    k_EChatroomNotificationLevel_MentionMe = 2,
    k_EChatroomNotificationLevel_MentionAll = 3,
    k_EChatroomNotificationLevel_AllMessages = 4,
};

enum class EChatRoomServerMessage : int {
    k_EChatRoomServerMsg_Invalid = 0,
    k_EChatRoomServerMsg_RenameChatRoom = 1,
    k_EChatRoomServerMsg_Joined = 2,
    k_EChatRoomServerMsg_Parted = 3,
    k_EChatRoomServerMsg_Kicked = 4,
    k_EChatRoomServerMsg_Invited = 5,
    k_EChatRoomServerMsg_InviteDismissed = 8,
    k_EChatRoomServerMsg_ChatRoomTaglineChanged = 9,
    k_EChatRoomServerMsg_ChatRoomAvatarChanged = 10,
    k_EChatRoomServerMsg_AppCustom = 11,
    k_EChatRoomServerMsg_JoinedMany = 12,
    k_EChatRoomServerMsg_PartedMany = 13,
    k_EChatRoomServerMsg_InvitedMany = 14,
};

enum class EChatRoomMessageReactionType : int {
    k_EChatRoomMessageReactionType_Invalid = 0,
    k_EChatRoomMessageReactionType_Emoticon = 1,
    k_EChatRoomMessageReactionType_Sticker = 2,
};

enum class EChatRoomNotice : int {
    k_EChatRoomNotice_Invalid = 0,
    k_EChatRoomNotice_Suspicious = 1,
};

enum class EChatRoomMemberStateChange : int {
    k_EChatRoomMemberStateChange_Invalid = 0,
    k_EChatRoomMemberStateChange_Joined = 1,
    k_EChatRoomMemberStateChange_Parted = 2,
    k_EChatRoomMemberStateChange_Kicked = 3,
    k_EChatRoomMemberStateChange_Invited = 4,
    k_EChatRoomMemberStateChange_RankChanged = 7,
    k_EChatRoomMemberStateChange_InviteDismissed = 8,
    k_EChatRoomMemberStateChange_Muted = 9,
    k_EChatRoomMemberStateChange_Banned = 10,
    k_EChatRoomMemberStateChange_RolesChanged = 12,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_CHAT_STEAMCLIENT_ENUMS_HPP

