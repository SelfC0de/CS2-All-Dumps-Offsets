// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CSteamInputService_GyroQuaternionChanged_Notification
// Module: steamclient64.dll
// Proto file: webuimessages_steaminput.proto
#pragma once
#ifndef SDK_PROTO_CSTEAMINPUTSERVICE_GYROQUATERNIONCHANGED_NOTIFICATION_HPP
#define SDK_PROTO_CSTEAMINPUTSERVICE_GYROQUATERNIONCHANGED_NOTIFICATION_HPP

namespace sdk::proto {

struct ControllerQuaternion;

namespace CSteamInputService_GyroQuaternionChanged_Notification_fields {

    constexpr int controller_index = 1;
    constexpr int imu_index = 2;
    constexpr int gyro_raw_quaternion = 3;
    constexpr int gyro_filtered_quaternion = 4;
    constexpr int imu_sensor_delta_time = 5;
    constexpr int estimated_packet_rate = 6;

} // namespace CSteamInputService_GyroQuaternionChanged_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CSTEAMINPUTSERVICE_GYROQUATERNIONCHANGED_NOTIFICATION_HPP

