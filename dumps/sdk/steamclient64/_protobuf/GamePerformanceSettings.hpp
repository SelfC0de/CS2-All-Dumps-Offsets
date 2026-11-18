// Auto-generated protobuf field constants — DO NOT EDIT
// Message: GamePerformanceSettings
// Module: steamclient64.dll
// Proto file: steammessages_base.proto
#pragma once
#ifndef SDK_PROTO_GAMEPERFORMANCESETTINGS_HPP
#define SDK_PROTO_GAMEPERFORMANCESETTINGS_HPP

namespace sdk::proto {

namespace GamePerformanceSettings_fields {

    enum class EGamePerformanceSetting : int {
        k_EGamePerformanceSetting_NotSet = 0,
        k_EGamePerformanceSetting_Low = 1,
        k_EGamePerformanceSetting_Medium = 2,
        k_EGamePerformanceSetting_High = 3,
        k_EGamePerformanceSetting_Ultra = 4,
        k_EGamePerformanceSetting_Custom = 5,
    };

    constexpr int setting = 1;
    constexpr int game_resolution_width = 2;
    constexpr int game_resolution_height = 3;

} // namespace GamePerformanceSettings_fields

} // namespace sdk::proto

#endif // SDK_PROTO_GAMEPERFORMANCESETTINGS_HPP

