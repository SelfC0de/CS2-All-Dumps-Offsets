// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_auth.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_AUTH_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_AUTH_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EAuthTokenPlatformType : int {
    k_EAuthTokenPlatformType_Unknown = 0,
    k_EAuthTokenPlatformType_SteamClient = 1,
    k_EAuthTokenPlatformType_WebBrowser = 2,
    k_EAuthTokenPlatformType_MobileApp = 3,
};

enum class EAuthTokenAppType : int {
    k_EAuthTokenAppType_Unknown = 0,
    k_EAuthTokenAppType_Mobile_SteamApp = 1,
    k_EAuthTokenAppType_Mobile_ChatApp = 2,
};

enum class EAuthSessionGuardType : int {
    k_EAuthSessionGuardType_Unknown = 0,
    k_EAuthSessionGuardType_None = 1,
    k_EAuthSessionGuardType_EmailCode = 2,
    k_EAuthSessionGuardType_DeviceCode = 3,
    k_EAuthSessionGuardType_DeviceConfirmation = 4,
    k_EAuthSessionGuardType_EmailConfirmation = 5,
    k_EAuthSessionGuardType_MachineToken = 6,
    k_EAuthSessionGuardType_LegacyMachineAuth = 7,
};

enum class EAuthSessionSecurityHistory : int {
    k_EAuthSessionSecurityHistory_Invalid = 0,
    k_EAuthSessionSecurityHistory_UsedPreviously = 1,
    k_EAuthSessionSecurityHistory_NoPriorHistory = 2,
};

enum class ETokenRenewalType : int {
    k_ETokenRenewalType_None = 0,
    k_ETokenRenewalType_Allow = 1,
};

enum class EAuthenticationType : int {
    k_EAuthenticationType_Unknown = 0,
    k_EAuthenticationType_Password = 1,
    k_EAuthenticationType_QR = 2,
    k_EAuthenticationType_AccountCreation = 3,
    k_EAuthenticationType_GuestAccount = 4,
};

enum class EAuthTokenState : int {
    k_EAuthTokenState_Invalid = 0,
    k_EAuthTokenState_New = 1,
    k_EAuthTokenState_Confirmed = 2,
    k_EAuthTokenState_Issued = 3,
    k_EAuthTokenState_Denied = 4,
    k_EAuthTokenState_LoggedOut = 5,
    k_EAuthTokenState_Consumed = 6,
    k_EAuthTokenState_Revoked = 99,
};

enum class EAuthTokenRevokeAction : int {
    k_EAuthTokenRevokeLogout = 0,
    k_EAuthTokenRevokePermanent = 1,
    k_EAuthTokenRevokeReplaced = 2,
    k_EAuthTokenRevokeSupport = 3,
    k_EAuthTokenRevokeConsume = 4,
    k_EAuthTokenRevokeNonRememberedLogout = 5,
    k_EAuthTokenRevokeNonRememberedPermanent = 6,
    k_EAuthTokenRevokeAutomatic = 7,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_AUTH_STEAMCLIENT_ENUMS_HPP

