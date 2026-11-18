// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CUserMsg_ParticleManager
// Module: client.dll
// Proto file: usermessages.proto
#pragma once
#ifndef SDK_PROTO_CUSERMSG_PARTICLEMANAGER_HPP
#define SDK_PROTO_CUSERMSG_PARTICLEMANAGER_HPP

namespace sdk::proto {

struct CUserMsg_ParticleManager_AddFan;
struct CUserMsg_ParticleManager_AddModellistOverrideElement;
struct CUserMsg_ParticleManager_ChangeControlPointAttachment;
struct CUserMsg_ParticleManager_ClearModellistOverride;
struct CUserMsg_ParticleManager_CreateParticle;
struct CUserMsg_ParticleManager_CreatePhysicsSim;
struct CUserMsg_ParticleManager_CreateSmokeGrid;
struct CUserMsg_ParticleManager_DestroyParticle;
struct CUserMsg_ParticleManager_DestroyParticleInvolving;
struct CUserMsg_ParticleManager_DestroyParticleNamed;
struct CUserMsg_ParticleManager_DestroyPhysicsSim;
struct CUserMsg_ParticleManager_FreezeParticleInvolving;
struct CUserMsg_ParticleManager_ParticleCanFreeze;
struct CUserMsg_ParticleManager_ParticleFreezeTransitionOverride;
struct CUserMsg_ParticleManager_ParticleSkipToTime;
struct CUserMsg_ParticleManager_ReleaseParticleIndex;
struct CUserMsg_ParticleManager_RemoveFan;
struct CUserMsg_ParticleManager_SetControlPointModel;
struct CUserMsg_ParticleManager_SetControlPointSnapshot;
struct CUserMsg_ParticleManager_SetMaterialOverride;
struct CUserMsg_ParticleManager_SetOverrideTexture;
struct CUserMsg_ParticleManager_SetParticleClusterGrowth;
struct CUserMsg_ParticleManager_SetParticleFoWProperties;
struct CUserMsg_ParticleManager_SetParticleNamedValueContext;
struct CUserMsg_ParticleManager_SetParticleShouldCheckFoW;
struct CUserMsg_ParticleManager_SetParticleText;
struct CUserMsg_ParticleManager_SetSceneObjectGenericFlag;
struct CUserMsg_ParticleManager_SetSceneObjectTintAndDesat;
struct CUserMsg_ParticleManager_SetTextureAttribute;
struct CUserMsg_ParticleManager_SetVData;
struct CUserMsg_ParticleManager_UpdateEntityPosition;
struct CUserMsg_ParticleManager_UpdateFan;
struct CUserMsg_ParticleManager_UpdateParticleEnt;
struct CUserMsg_ParticleManager_UpdateParticleFallback;
struct CUserMsg_ParticleManager_UpdateParticleFwd_OBSOLETE;
struct CUserMsg_ParticleManager_UpdateParticleOffset;
struct CUserMsg_ParticleManager_UpdateParticleOrient_OBSOLETE;
struct CUserMsg_ParticleManager_UpdateParticleSetFrozen;
struct CUserMsg_ParticleManager_UpdateParticleShouldDraw;
struct CUserMsg_ParticleManager_UpdateParticleTransform;
struct CUserMsg_ParticleManager_UpdateParticle_OBSOLETE;

namespace CUserMsg_ParticleManager_fields {

    namespace ReleaseParticleIndex {
    } // namespace ReleaseParticleIndex

    namespace CreateParticle {
        constexpr int particle_name_index = 1;
        constexpr int attach_type = 2;
        constexpr int entity_handle = 3;
        constexpr int entity_handle_for_modifiers = 4;
        constexpr int apply_voice_ban_rules = 5;
        constexpr int team_behavior = 6;
        constexpr int control_point_configuration = 7;
        constexpr int cluster = 8;
        constexpr int endcap_time = 9;
        constexpr int aggregation_position = 10;
    } // namespace CreateParticle

    namespace DestroyParticle {
        constexpr int destroy_immediately = 1;
    } // namespace DestroyParticle

    namespace DestroyParticleInvolving {
        constexpr int destroy_immediately = 1;
        constexpr int entity_handle = 3;
    } // namespace DestroyParticleInvolving

    namespace DestroyParticleNamed {
        constexpr int particle_name_index = 1;
        constexpr int entity_handle = 2;
        constexpr int destroy_immediately = 3;
        constexpr int play_endcap = 4;
    } // namespace DestroyParticleNamed

    namespace UpdateParticle_OBSOLETE {
        constexpr int control_point = 1;
        constexpr int position = 2;
    } // namespace UpdateParticle_OBSOLETE

    namespace UpdateParticleFwd_OBSOLETE {
        constexpr int control_point = 1;
        constexpr int forward = 2;
    } // namespace UpdateParticleFwd_OBSOLETE

    namespace UpdateParticleOrient_OBSOLETE {
        constexpr int control_point = 1;
        constexpr int forward = 2;
        constexpr int deprecated_right = 3;
        constexpr int up = 4;
        constexpr int left = 5;
    } // namespace UpdateParticleOrient_OBSOLETE

    namespace UpdateParticleTransform {
        constexpr int control_point = 1;
        constexpr int position = 2;
        constexpr int orientation = 3;
        constexpr int interpolation_interval = 4;
    } // namespace UpdateParticleTransform

    namespace UpdateParticleFallback {
        constexpr int control_point = 1;
        constexpr int position = 2;
    } // namespace UpdateParticleFallback

    namespace UpdateParticleOffset {
        constexpr int control_point = 1;
        constexpr int origin_offset = 2;
        constexpr int angle_offset = 3;
    } // namespace UpdateParticleOffset

    namespace UpdateParticleEnt {
        constexpr int control_point = 1;
        constexpr int entity_handle = 2;
        constexpr int attach_type = 3;
        constexpr int attachment = 4;
        constexpr int fallback_position = 5;
        constexpr int include_wearables = 6;
        constexpr int offset_position = 7;
        constexpr int offset_angles = 8;
    } // namespace UpdateParticleEnt

    namespace UpdateParticleSetFrozen {
        constexpr int set_frozen = 1;
        constexpr int transition_duration = 2;
    } // namespace UpdateParticleSetFrozen

    namespace UpdateParticleShouldDraw {
        constexpr int should_draw = 1;
    } // namespace UpdateParticleShouldDraw

    namespace ChangeControlPointAttachment {
        constexpr int attachment_old = 1;
        constexpr int attachment_new = 2;
        constexpr int entity_handle = 3;
    } // namespace ChangeControlPointAttachment

    namespace UpdateEntityPosition {
        constexpr int entity_handle = 1;
        constexpr int position = 2;
    } // namespace UpdateEntityPosition

    namespace SetParticleFoWProperties {
        constexpr int fow_control_point = 1;
        constexpr int fow_control_point2 = 2;
        constexpr int fow_radius = 3;
    } // namespace SetParticleFoWProperties

    namespace SetParticleShouldCheckFoW {
        constexpr int check_fow = 1;
    } // namespace SetParticleShouldCheckFoW

    namespace SetControlPointModel {
        constexpr int control_point = 1;
        constexpr int model_name = 2;
    } // namespace SetControlPointModel

    namespace SetControlPointSnapshot {
        constexpr int control_point = 1;
        constexpr int snapshot_name = 2;
    } // namespace SetControlPointSnapshot

    namespace SetParticleText {
        constexpr int text = 1;
        constexpr int localize = 2;
    } // namespace SetParticleText

    namespace SetTextureAttribute {
        constexpr int attribute_name = 1;
        constexpr int texture_name = 2;
    } // namespace SetTextureAttribute

    namespace SetOverrideTexture {
        constexpr int texture_name = 1;
    } // namespace SetOverrideTexture

    namespace SetSceneObjectGenericFlag {
        constexpr int flag_value = 1;
    } // namespace SetSceneObjectGenericFlag

    namespace SetSceneObjectTintAndDesat {
        constexpr int tint = 1;
        constexpr int desat = 2;
    } // namespace SetSceneObjectTintAndDesat

    namespace ParticleSkipToTime {
        constexpr int skip_to_time = 1;
    } // namespace ParticleSkipToTime

    namespace ParticleCanFreeze {
        constexpr int can_freeze = 1;
    } // namespace ParticleCanFreeze

    namespace ParticleFreezeTransitionOverride {
        constexpr int freeze_transition_override = 1;
    } // namespace ParticleFreezeTransitionOverride

    namespace FreezeParticleInvolving {
        constexpr int set_frozen = 1;
        constexpr int transition_duration = 2;
        constexpr int entity_handle = 3;
    } // namespace FreezeParticleInvolving

    namespace AddModellistOverrideElement {
        constexpr int model_name = 1;
        constexpr int spawn_probability = 2;
        constexpr int groupid = 3;
    } // namespace AddModellistOverrideElement

    namespace ClearModellistOverride {
        constexpr int groupid = 1;
    } // namespace ClearModellistOverride

    namespace SetParticleNamedValueContext {
        namespace FloatContextValue {
            constexpr int value_name_hash = 1;
            constexpr int value = 2;
        } // namespace FloatContextValue

        namespace VectorContextValue {
            constexpr int value_name_hash = 1;
            constexpr int value = 2;
        } // namespace VectorContextValue

        namespace TransformContextValue {
            constexpr int value_name_hash = 1;
            constexpr int angles = 2;
            constexpr int translation = 3;
        } // namespace TransformContextValue

        namespace EHandleContext {
            constexpr int value_name_hash = 1;
            constexpr int ent_index = 2;
        } // namespace EHandleContext

        constexpr int float_values = 1;
        constexpr int vector_values = 2;
        constexpr int transform_values = 3;
        constexpr int ehandle_values = 4;
    } // namespace SetParticleNamedValueContext

    namespace CreatePhysicsSim {
        constexpr int prop_group_name = 1;
        constexpr int use_high_quality_simulation = 2;
        constexpr int max_particle_count = 3;
    } // namespace CreatePhysicsSim

    namespace DestroyPhysicsSim {
    } // namespace DestroyPhysicsSim

    namespace CreateSmokeGrid {
        constexpr int vdata_name = 1;
    } // namespace CreateSmokeGrid

    namespace SetVData {
        constexpr int vdata_name = 1;
    } // namespace SetVData

    namespace SetMaterialOverride {
        constexpr int material_name = 1;
        constexpr int include_children = 2;
    } // namespace SetMaterialOverride

    namespace AddFan {
        constexpr int active = 1;
        constexpr int bounds_mins = 2;
        constexpr int bounds_maxs = 3;
        constexpr int fan_origin = 4;
        constexpr int fan_origin_offset = 5;
        constexpr int fan_direction = 6;
        constexpr int force = 7;
        constexpr int fan_force_curve = 8;
        constexpr int falloff = 9;
        constexpr int pull_towards_point = 10;
        constexpr int curve_min_dist = 11;
        constexpr int curve_max_dist = 12;
        constexpr int fan_type = 13;
        constexpr int cone_start_radius = 14;
        constexpr int cone_end_radius = 15;
        constexpr int cone_length = 16;
        constexpr int entity_handle = 17;
        constexpr int attachment_name = 18;
    } // namespace AddFan

    namespace UpdateFan {
        constexpr int active = 1;
        constexpr int fan_origin = 2;
        constexpr int fan_origin_offset = 3;
        constexpr int fan_direction = 4;
        constexpr int fan_ramp_ratio = 7;
        constexpr int bounds_mins = 5;
        constexpr int bounds_maxs = 6;
    } // namespace UpdateFan

    namespace RemoveFan {
    } // namespace RemoveFan

    namespace SetParticleClusterGrowth {
        constexpr int duration = 1;
        constexpr int origin = 2;
    } // namespace SetParticleClusterGrowth

    constexpr int type = 1;
    constexpr int index = 2;
    constexpr int release_particle_index = 3;
    constexpr int create_particle = 4;
    constexpr int destroy_particle = 5;
    constexpr int destroy_particle_involving = 6;
    constexpr int update_particle = 7;
    constexpr int update_particle_fwd = 8;
    constexpr int update_particle_orient = 9;
    constexpr int update_particle_fallback = 10;
    constexpr int update_particle_offset = 11;
    constexpr int update_particle_ent = 12;
    constexpr int update_particle_should_draw = 14;
    constexpr int update_particle_set_frozen = 15;
    constexpr int change_control_point_attachment = 16;
    constexpr int update_entity_position = 17;
    constexpr int set_particle_fow_properties = 18;
    constexpr int set_particle_text = 19;
    constexpr int set_particle_should_check_fow = 20;
    constexpr int set_control_point_model = 21;
    constexpr int set_control_point_snapshot = 22;
    constexpr int set_texture_attribute = 23;
    constexpr int set_scene_object_generic_flag = 24;
    constexpr int set_scene_object_tint_and_desat = 25;
    constexpr int destroy_particle_named = 26;
    constexpr int particle_skip_to_time = 27;
    constexpr int particle_can_freeze = 28;
    constexpr int set_named_value_context = 29;
    constexpr int update_particle_transform = 30;
    constexpr int particle_freeze_transition_override = 31;
    constexpr int freeze_particle_involving = 32;
    constexpr int add_modellist_override_element = 33;
    constexpr int clear_modellist_override = 34;
    constexpr int create_physics_sim = 35;
    constexpr int destroy_physics_sim = 36;
    constexpr int set_vdata = 37;
    constexpr int set_material_override = 38;
    constexpr int add_fan = 39;
    constexpr int update_fan = 40;
    constexpr int set_particle_cluster_growth = 41;
    constexpr int remove_fan = 42;
    constexpr int create_smoke_grid = 43;
    constexpr int set_override_texture = 44;

} // namespace CUserMsg_ParticleManager_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CUSERMSG_PARTICLEMANAGER_HPP

