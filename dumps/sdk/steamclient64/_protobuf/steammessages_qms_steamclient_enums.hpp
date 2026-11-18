// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: steammessages_qms.steamclient.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_STEAMMESSAGES_QMS_STEAMCLIENT_ENUMS_HPP
#define SDK_PROTO_STEAMMESSAGES_QMS_STEAMCLIENT_ENUMS_HPP

namespace sdk::proto {

enum class EGameSearchAction : int {
    k_EGameSearchAction_None = 0,
    k_EGameSearchAction_Accept = 1,
    k_EGameSearchAction_Decline = 2,
    k_EGameSearchAction_Cancel = 3,
};

enum class EGameSearchResult : int {
    k_EGameSearchResult_Invalid = 0,
    k_EGameSearchResult_SearchInProgress = 1,
    k_EGameSearchResult_SearchFailedNoHosts = 2,
    k_EGameSearchResult_SearchGameFound = 3,
    k_EGameSearchResult_SearchCompleteAccepted = 4,
    k_EGameSearchResult_SearchCompleteDeclined = 5,
    k_EGameSearchResult_SearchCanceled = 6,
};

} // namespace sdk::proto

#endif // SDK_PROTO_STEAMMESSAGES_QMS_STEAMCLIENT_ENUMS_HPP

