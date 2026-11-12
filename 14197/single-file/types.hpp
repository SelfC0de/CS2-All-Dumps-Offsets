#pragma once

#include <cstdint>

struct vector2d_t {
    float x, y;
};

struct vector3d_t {
    float x, y, z;
};

struct vector4d_t {
    float x, y, z, w;
};

struct qangle_t {
    float pitch, yaw, roll;
};

struct color_t {
    std::uint8_t r, g, b, a;
};

struct quaternion_t {
    float x, y, z, w;
};

struct matrix3x4_t {
    float data[3][4];
};

struct transform_t {
    matrix3x4_t rotation;
    vector3d_t translation;
};

struct AABB_t { std::uint8_t _x[24]; };
struct AI_BaseNPCAnimGraph_DebugSnapshotData_t { std::uint8_t _x[72]; };
struct AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t { std::uint8_t _x[40]; };
struct AI_FacingServices_DebugSnapshotData_t { std::uint8_t _x[4]; };
struct AI_GroundRootMotionMotor_DebugSnapshotData_t_Event_t { std::uint8_t _x[4]; };
struct AI_MotorServices_DebugSnapshotData_t { std::uint8_t _x[56]; };
struct AI_MotorServices_DebugSnapshotData_t_MotorPathWaypoint_t { std::uint8_t _x[4]; };
struct AI_Navigator_DebugSnapshotData_t { std::uint8_t _x[80]; };
struct AI_Navigator_DebugSnapshotData_t_Waypoint_t { std::uint8_t _x[4]; };
struct ActorClipEntry_t { std::uint8_t _x[4]; };
struct ActorMapping_t { std::uint8_t _x[4]; };
struct AggregateInstanceStreamOnDiskData_t { std::uint8_t _x[4]; };
struct AggregateInstanceStream_t { std::uint8_t _x[4]; };
struct AggregateLODSetup_t { std::uint8_t _x[4]; };
struct AggregateMeshInfo_t { std::uint8_t _x[4]; };
struct AggregateRTProxySceneObject_t { std::uint8_t _x[4]; };
struct AggregateSceneObject_t { std::uint8_t _x[4]; };
struct AggregateVertexAlbedoStreamOnDiskData_t { std::uint8_t _x[4]; };
struct AggregateVertexEmissiveStreamOnDiskData_t { std::uint8_t _x[4]; };
struct AimCameraOpFixedSettings_t { std::uint8_t _x[4]; };
struct AimMatrixBlendMode { std::uint8_t _x[4]; };
struct AimMatrixOpFixedSettings_t { std::uint8_t _x[248]; };
struct AmmoFlags_t { std::uint8_t _x[4]; };
struct AmmoIndex_t { std::uint8_t _x[1]; };
struct AnimComponentID { std::uint8_t _x[4]; };
struct AnimGraph2SerializedPoseRecipeSlot_t { std::uint8_t _x[4]; };
struct AnimLoopMode_t { std::uint8_t _x[4]; };
struct AnimNodeID { std::uint8_t _x[44]; };
struct AnimNodeNetworkMode { std::uint8_t _x[4]; };
struct AnimParamButton_t { std::uint8_t _x[4]; };
struct AnimParamID { std::uint8_t _x[4]; };
struct AnimParamNetworkSetting { std::uint8_t _x[4]; };
struct AnimParamType_t { std::uint8_t _x[2]; };
struct AnimParamVectorType_t { std::uint8_t _x[4]; };
struct AnimScriptHandle { std::uint8_t _x[8]; };
struct AnimScriptType { std::uint8_t _x[4]; };
struct AnimStateID { std::uint8_t _x[4]; };
struct AnimTagID { std::uint8_t _x[24]; };
struct AnimValueSource { std::uint8_t _x[4]; };
struct AnimVectorSource { std::uint8_t _x[4]; };
struct AnimationAlgorithm_t { std::uint8_t _x[4]; };
struct AnimationDecodeDebugDumpElement_t { std::uint8_t _x[4]; };
struct AnimationProcessingType_t { std::uint8_t _x[8]; };
struct AnimationSnapshotType_t { std::uint8_t _x[4]; };
struct AnimationType_t { std::uint8_t _x[4]; };
struct AttachmentHandle_t { std::uint8_t _x[1]; };
struct Attribute_t { std::uint8_t _x[4]; };
struct AutoRoomDoorwayPairs_t { std::uint8_t _x[4]; };
struct BASEPTR { std::uint8_t _x[8]; };
struct BBoxVolumeType_t { std::uint8_t _x[4]; };
struct BakedLightingInfo_t { std::uint8_t _x[72]; };
struct BakedLightingInfo_t_BakedShadowAssignment_t { std::uint8_t _x[4]; };
struct BeamType_t { std::uint8_t _x[4]; };
struct BinaryNodeChildOption { std::uint8_t _x[4]; };
struct BinaryNodeTiming { std::uint8_t _x[4]; };
struct Blend2DMode { std::uint8_t _x[4]; };
struct BlendItem_t { std::uint8_t _x[4]; };
struct BlendKeyType { std::uint8_t _x[4]; };
struct BloodType { std::uint8_t _x[4]; };
struct BloomBlendMode_t { std::uint8_t _x[4]; };
struct BlurFilterType_t { std::uint8_t _x[4]; };
struct BoneDemoCaptureSettings_t { std::uint8_t _x[4]; };
struct BoneMaskBlendSpace { std::uint8_t _x[4]; };
struct BreakableContentsType_t { std::uint8_t _x[4]; };
struct BrushSolidities_e { std::uint8_t _x[4]; };
struct C4LightEffect_t { std::uint8_t _x[4]; };
struct CAI_Expresser { std::uint8_t _x[4