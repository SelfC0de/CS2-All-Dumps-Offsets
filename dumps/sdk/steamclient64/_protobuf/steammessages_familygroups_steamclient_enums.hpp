// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_familygroups.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_FAMILYGROUPS_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_FAMILYGROUPS_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EFamilyGroupRole : int {
    k_EFamilyGroupRole_None = 0,
    k_EFamilyGroupRole_Adult = 1,
    k_EFamilyGroupRole_Child = 2,
    k_EFamilyGroupRole_MAX = 3,
};

enum class EFamilyGroupsTwoFactorMethod : int {
    k_EFamilyGroupsTwoFactorMethodNone = 0,
    k_EFamilyGroupsTwoFactorMethodMobile = 1,
    k_EFamilyGroupsTwoFactorMethodEmail = 2,
};

enum class EPurchaseRequestAction : int {
    k_EPurchaseRequestAction_None = 0,
    k_EPurchaseRequestAction_Decline = 1,
    k_EPurchaseRequestAction_Purchased = 2,
    k_EPurchaseRequestAction_Abandoned = 3,
    k_EPurchaseRequestAction_Cancel = 4,
    k_EPurchaseRequestAction_MAX = 5,
};

enum class EFamilyGroupChangeLogType : int {
    k_InvalidChangeType = 0,
    k_FamilyGroupCreated = 1,
    k_FamilyGroupModified = 2,
    k_FamilyGroupDeleted = 3,
    k_AccountInvited = 4,
    k_InviteDeniedByGroupSize = 5,
    k_JoinedFamilyGroup = 6,
    k_JoinDeniedByRegionMismatch = 7,
    k_JoinDeniedByMissingIpAddress = 8,
    k_JoinDeniedByFamilyCooldown = 9,
    k_JoinDeniedByUserCooldown = 10,
    k_JoinDeniedByOtherGroup = 11,
    k_AccountRemoved = 12,
    k_InviteCanceled = 13,
    k_PurchaseRequested = 14,
    k_ParentalSettingsEnabled = 15,
    k_ParentalSettingsDisabled = 16,
    k_ParentalSettingsChanged = 17,
    k_FamilyCooldownOverridesChanged = 18,
    k_PurchaseRequestCanceled = 19,
    k_PurchaseRequestApproved = 20,
    k_PurchaseRequestDeclined = 21,
    k_CooldownSkipConsumed = 22,
    k_FamilyGroupRestored = 23,
    k_JoinDenied = 24,
    k_SupportForceAcceptedInvite = 25,
};

enum class ESharedLibraryExcludeReason : int {
    k_ESharedLibrary_Included = 0,
    k_ESharedLibrary_AppExcluded_ByPartner = 1,
    k_ESharedLibrary_LicenseExcluded = 2,
    k_ESharedLibrary_FreeGame = 3,
    k_ESharedLibrary_LicensePrivate = 4,
    k_ESharedLibrary_AppExcluded_WrongAppType = 6,
    k_ESharedLibrary_AppExcluded_NonrefundableDLC = 7,
    k_ESharedLibrary_AppExcluded_UnreleasedApp = 8,
    k_ESharedLibrary_AppExcluded_ParentAppExcluded = 9,
    k_ESharedLibrary_PackageExcluded_ByPartner = 10,
    k_ESharedLibrary_PackageExcluded_Special = 11,
    k_ESharedLibrary_PackageExcluded_Dev = 12,
    k_ESharedLibrary_PackageExcluded_FreeWeekend = 13,
    k_ESharedLibrary_PackageExcluded_Invalid = 15,
    k_ESharedLibrary_PackageExcluded_RecurringLicense = 16,
    k_ESharedLibrary_PackageExcluded_WrongLicenseType = 17,
    k_ESharedLibrary_PackageExcluded_MasterSub = 18,
    k_ESharedLibrary_PackageExcluded_NoShareableApps = 19,
    k_ESharedLibrary_LicenseExcluded_PaymentMasterSub = 20,
    k_ESharedLibrary_LicenseExcluded_PaymentFamilyGroup = 21,
    k_ESharedLibrary_LicenseExcluded_PaymentAuthorizedDevice = 22,
    k_ESharedLibrary_LicenseExcluded_PaymentAutoGrant = 23,
    k_ESharedLibrary_LicenseExcluded_FlagPending = 24,
    k_ESharedLibrary_LicenseExcluded_FlagPendingRefund = 25,
    k_ESharedLibrary_LicenseExcluded_FlagBorrowed = 26,
    k_ESharedLibrary_LicenseExcluded_FlagAutoGrant = 27,
    k_ESharedLibrary_LicenseExcluded_FlagTimedTrial = 28,
    k_ESharedLibrary_LicenseExcluded_FreeSub = 29,
    k_ESharedLibrary_LicenseExcluded_Inactive = 30,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_FAMILYGROUPS_STEAMCLIENT_ENUMS_HPP

