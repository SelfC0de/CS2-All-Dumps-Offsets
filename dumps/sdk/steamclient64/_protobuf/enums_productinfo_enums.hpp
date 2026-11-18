// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: enums_productinfo.proto
// Module: steamclient64.dll
#pragma once
#ifndef SDK_PROTO_ENUMS_PRODUCTINFO_ENUMS_HPP
#define SDK_PROTO_ENUMS_PRODUCTINFO_ENUMS_HPP

namespace sdk::proto {

enum class EContentDescriptorID : int {
    k_EContentDescriptor_NudityOrSexualContent = 1,
    k_EContentDescriptor_FrequentViolenceOrGore = 2,
    k_EContentDescriptor_AdultOnlySexualContent = 3,
    k_EContentDescriptor_GratuitousSexualContent = 4,
    k_EContentDescriptor_AnyMatureContent = 5,
    k_EContentDescriptorMAX = 6,
};

enum class EInteractiveElement : int {
    k_EInteractiveElement_Invalid = 0,
    k_EInteractiveElement_InGamePurchases = 1,
    k_EInteractiveElement_InGamePurchasesOfRandomizedItems = 2,
    k_EInteractiveElement_InGameChat = 3,
    k_EInteractiveElement_OnlineInteractivity = 4,
};

} // namespace sdk::proto

#endif // SDK_PROTO_ENUMS_PRODUCTINFO_ENUMS_HPP

