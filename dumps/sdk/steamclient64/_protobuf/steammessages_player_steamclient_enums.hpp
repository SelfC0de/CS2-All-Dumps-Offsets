// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_player.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_PLAYER_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_PLAYER_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EAchievementProgressType : int {
    k_EAchievementProgressType_Invalid = 0,
    k_EAchievementProgressType_Int = 1,
    k_EAchievementProgressType_Float = 2,
};

enum class EProfileCustomizationStyle : int {
    k_EProfileCustomizationStyleDefault = 0,
    k_EProfileCustomizationStyleSelected = 1,
    k_EProfileCustomizationStyleRarest = 2,
    k_EProfileCustomizationStyleMostRecent = 3,
    k_EProfileCustomizationStyleRandom = 4,
    k_EProfileCustomizationStyleHighestRated = 5,
};

enum class EAgreementType : int {
    k_EAgreementType_Invalid = -1,
    k_EAgreementType_GlobalSSA = 0,
    k_EAgreementType_ChinaSSA = 1,
};

enum class ENotificationSetting : int {
    k_ENotificationSettingNotifyUseDefault = 0,
    k_ENotificationSettingAlways = 1,
    k_ENotificationSettingNever = 2,
};

enum class ETextFilterSetting : int {
    k_ETextFilterSettingSteamLabOptedOut = 0,
    k_ETextFilterSettingEnabled = 1,
    k_ETextFilterSettingEnabledAllowProfanity = 2,
    k_ETextFilterSettingDisabled = 3,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_PLAYER_STEAMCLIENT_ENUMS_HPP

