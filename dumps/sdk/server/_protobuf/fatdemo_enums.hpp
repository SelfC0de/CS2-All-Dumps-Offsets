// Auto-generated protobuf enums — DO NOT EDIT
// Proto file: fatdemo.proto
// Module: server.dll
#pragma once
#ifndef SDK_PROTO_FATDEMO_ENUMS_HPP
#define SDK_PROTO_FATDEMO_ENUMS_HPP

namespace sdk::proto {

enum class EHitGroup : int {
    EHG_Generic = 0,
    EHG_Head = 1,
    EHG_Chest = 2,
    EHG_Stomach = 3,
    EHG_LeftArm = 4,
    EHG_RightArm = 5,
    EHG_LeftLeg = 6,
    EHG_RightLeg = 7,
    EHG_Gear = 8,
    EHG_Miss = 9,
};

enum class ETeam : int {
    ET_Unknown = 0,
    ET_Spectator = 1,
    ET_Terrorist = 2,
    ET_CT = 3,
};

enum class EWeaponType : int {
    EWT_Knife = 0,
    EWT_Pistol = 1,
    EWT_SubMachineGun = 2,
    EWT_Rifle = 3,
    EWT_Shotgun = 4,
    EWT_SniperRifle = 5,
    EWT_MachineGun = 6,
    EWT_C4 = 7,
    EWT_Grenade = 8,
    EWT_Equipment = 9,
    EWT_StackableItem = 10,
    EWT_Unknown = 11,
};

} // namespace sdk::proto

#endif // SDK_PROTO_FATDEMO_ENUMS_HPP

