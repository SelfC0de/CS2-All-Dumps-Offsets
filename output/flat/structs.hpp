#pragma once

#include <cstdint>

namespace animationsystem {

    struct cpulsecell_waitforcursorswithtag_t {
        bool m_b_tag_self_when_complete;
        PulseCursorCancelPriority_t m_n_desired_kill_priority;
    };

    struct cpulsecell_racecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_base_t {
        PulseDocNodeID_t m_n_editor_node_id;
    };

    struct cpulsecell_pickbestoutflowselector_t {
        PulseBestOutflowRules_t m_n_check_type;
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cpulsecell_waitforobservable_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_ResumePoint m_on_true;
    };

    struct cpulse_outflowconnection_t {
        PulseSymbol_t m_source_outflow_name;
        PulseRuntimeChunkIndex_t m_n_dest_chunk;
        int32_t m_n_instruction;
        PulseRegisterMap_t m_outflow_register_map;
    };

    struct cpulsegraphdef_t {
        PulseSymbol_t m_domain_identifier;
        CPulseValueFullType m_domain_sub_type;
        PulseSymbol_t m_parent_map_name;
        PulseSymbol_t m_parent_xml_name;
        CUtlVector_CPulse_Chunk_ m_chunks;
        CUtlVector_CPulseCell_Base_ m_cells;
        CUtlVector_CPulse_Variable_ m_vars;
        CUtlVector_CPulse_TempVarBankDefinition_ m_temp_var_banks;
        CUtlVector_CPulse_PublicOutput_ m_public_outputs;
        CUtlVector_CPulse_InvokeBinding_ m_invoke_bindings;
        CUtlVector_CPulse_CallInfo_ m_call_infos;
        CUtlVector_CPulse_Constant_ m_constants;
        CUtlVector_CPulse_DomainValue_ m_domain_values;
        CUtlVector_CPulse_BlackboardReference_ m_blackboard_references;
        CUtlVector_CPulse_OutputConnection_ m_output_connections;
    };

    struct cpulsecell_firecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_timeline__timelineevent_t_t {
        float m_fl_time_from_previous;
        CPulse_OutflowConnection m_event_outflow;
    };

    struct cpulsecell_intervaltimer__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
        float m_fl_wait_interval;
        float m_fl_wait_interval_high;
        bool m_b_complete_on_next_wake;
    };

    struct outflowwithrequirements_t_t {
        CPulse_OutflowConnection m_connection;
        PulseDocNodeID_t m_destination_flow_node_id;
        CUtlVector_PulseDocNodeID_t_ m_requirement_node_ids;
        CUtlVector_int32_t_ m_n_cursor_state_block_index;
    };

    struct cpulsecell_value_gradient_t {
        CColorGradient m_gradient;
    };

    struct pulsenodedynamicoutflows_t__dynamicoutflow_t_t {
        CGlobalSymbol m_outflow_id;
        CPulse_OutflowConnection m_connection;
    };

    struct cpulsecell_inflow_graphhook_t {
        PulseSymbol_t m_hook_name;
    };

    struct cpulsecell_inflow_baseentrypoint_t {
        PulseRuntimeChunkIndex_t m_entry_chunk;
        PulseRegisterMap_t m_register_map;
    };

    struct cpulsecell_waitforcursorswithtagbase_t {
        int32_t m_n_cursors_allowed_to_wait;
        CPulse_ResumePoint m_wait_complete;
    };

    struct cpulse_invokebinding_t {
        PulseRegisterMap_t m_register_map;
        PulseSymbol_t m_func_name;
        PulseRuntimeCellIndex_t m_n_cell_index;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
    };

    struct cpulsecell_intervaltimer_t {
        CPulse_ResumePoint m_completed;
        SignatureOutflow_Continue m_on_interval;
    };

    struct cpulsecell_baselerp_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_value_curve_t {
        CPiecewiseCurve m_curve;
    };

    struct cpulsecell_inflow_eventhandler_t {
        PulseSymbol_t m_event_name;
    };

    struct cpulsecell_outflow_cycleshuffled__instancestate_t_t {
        CUtlVectorFixedGrowable_uint8_t_8_ m_shuffle;
        int32_t m_n_next_shuffle;
    };

    struct cpulsecell_baselerp__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
    };

    struct cpulsecell_timeline_t {
        CUtlVector_CPulseCell_Timeline_TimelineEvent_t_ m_timeline_events;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_inflow_entoutputhandler_t {
        PulseSymbol_t m_source_entity;
        PulseSymbol_t m_source_output;
        CPulseValueFullType m_expected_param_type;
    };

    struct cpulsecell_outflow_cycleordered__instancestate_t_t {
        int32_t m_n_next_index;
    };

    struct cpulsecell_limitcount__instancestate_t_t {
        int32_t m_n_current_count;
    };

    struct cpulsecell_baseyieldinginflow_t {
        CPulse_ResumePoint m_base_flow_on_after_cancel;
        CPulse_ResumePoint m_base_flow_while_active;
    };

    struct pulsenodedynamicoutflows_t_t {
        CUtlVector_PulseNodeDynamicOutflows_t_DynamicOutflow_t_ m_outflows;
    };

    struct cpulsecell_isrequirementvalid__criteria_t_t {
        bool m_b_is_valid;
    };

    struct cpulsecell_inflow_observablevariablelistener_t {
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference;
        bool m_b_self_reference;
    };

    struct cpulsecell_outflow_cycleordered_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct pulseselectoroutflowlist_t_t {
        CUtlVector_OutflowWithRequirements_t_ m_outflows;
    };

    struct cpulsecell_inflow_wait_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_outflow_cycleshuffled_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_inflow_method_t {
        PulseSymbol_t m_method_name;
        CUtlString m_description;
        bool m_b_is_public;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_return_values;
    };

    struct cpulsecell_booleanswitchstate_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_OutflowConnection m_when_true;
        CPulse_OutflowConnection m_when_false;
    };

    struct cpulsecell_inflow_yield_t {
        CPulse_ResumePoint m_unyield_resume;
    };

    struct cpulsecell_unknown_t {
        KeyValues3 m_unknown_keys;
    };

    struct cpulsecell_outflow_cyclerandom_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_step_publicoutput_t {
        PulseRuntimeOutputIndex_t m_output_index;
    };

    struct cpulse_blackboardreference_t {
        CStrongHandle_InfoForResourceTypeIPulseGraphDef_ m_h_blackboard_resource;
        PulseSymbol_t m_blackboard_resource;
        PulseDocNodeID_t m_n_node_id;
        CGlobalSymbol m_node_name;
    };

    struct canimationlayer_t {
        CAnimNetVar_int32_t_ m_h_sequence;
        float m_fl_prev_cycle;
        CAnimNetVar_float_ m_fl_cycle;
        CAnimNetVar_float_ m_fl_weight;
        CAnimNetVar_int32_t_ m_n_order;
        bool m_b_looping;
        int32_t m_n_flags;
        bool m_b_sequence_finished;
        float m_fl_kill_rate;
        float m_fl_kill_delay;
        int32_t m_n_priority;
    };

    struct cpulse_callinfo_t {
        PulseSymbol_t m_port_name;
        PulseDocNodeID_t m_n_editor_node_id;
        PulseRegisterMap_t m_register_map;
        PulseDocNodeID_t m_call_method_id;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
        PulseRuntimeChunkIndex_t m_n_break_dest_chunk;
        int32_t m_n_break_dest_instruction;
    };

    struct cpulsecell_inlinenodeskipselector_t {
        PulseDocNodeID_t m_n_flow_node_id;
        bool m_b_and;
        PulseSelectorOutflowList_t m_pass_outflow;
        CPulse_OutflowConnection m_fail_outflow;
    };

    struct cpulsecell_limitcount_t {
        int32_t m_n_limit_count;
    };

    struct cpulsecell_step_callexternalmethod_t {
        PulseSymbol_t m_method_name;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_index;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_expected_args;
        PulseMethodCallMode_t m_n_async_call_mode;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_limitcount__criteria_t_t {
        bool m_b_limit_count_passes;
    };

    struct cpulsecell_cursorqueue_t {
        int32_t m_n_cursors_allowed_to_run_parallel;
    };

    struct canimframeblockanim_t {
        int32_t m_n_start_frame;
        int32_t m_n_end_frame;
        CUtlVector_int32_t_ m_segment_index_array;
    };

    struct cslowdownonslopesupdatenode_t {
        float m_fl_slow_down_strength;
    };

    struct corientationwarpupdatenode_t {
        OrientationWarpMode_t m_e_mode;
        CAnimParamHandle m_h_target_param;
        CAnimParamHandle m_h_target_position_param;
        CAnimParamHandle m_h_fallback_target_position_param;
        OrientationWarpTargetOffsetMode_t m_e_target_offset_mode;
        float m_fl_target_offset;
        CAnimParamHandle m_h_target_offset_param;
        CAnimInputDamping m_damping;
        OrientationWarpRootMotionSource_t m_e_root_motion_source;
        float m_fl_max_root_motion_scale;
        bool m_b_enable_preferred_rotation_direction;
        AnimValueSource m_e_preferred_rotation_direction;
        float m_fl_preferred_rotation_threshold;
    };

    struct canimparameterbase_t {
        CGlobalSymbol m_name;
        CUtlString m_s_comment;
        CUtlString m_group;
        AnimParamID m_id;
        CUtlString m_component_name;
        bool m_b_networking_requested;
        bool m_b_is_referenced;
    };

    struct csequencefinishedanimtag_t {
        CUtlString m_sequence_name;
    };

    struct csceneobjectdata_t {
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
        CUtlLeanVector_CMaterialDrawDescriptor_ m_draw_calls;
        CUtlLeanVector_AABB_t_ m_draw_bounds;
        CUtlLeanVector_CMeshletDescriptor_ m_meshlets;
        CUtlLeanVector_CSceneObjectData_RTProxyDrawDescriptor_t_ m_rt_proxy_draw_calls;
        vector4d_t m_v_tint_color;
    };

    struct cparticlemodelinput_t {
        ParticleModelType_t m_n_type;
        CParticleNamedValueRef m_named_value;
        int32_t m_n_control_point;
    };

    struct cnmfootiktask_t {
        int32_t m_n_left_effector_bone_idx;
        int32_t m_n_right_effector_bone_idx;
        transform_t m_left_target_transform;
        transform_t m_right_target_transform;
        int32_t m_n_left_target_bone_idx;
        int32_t m_n_right_target_bone_idx;
        CNmTarget m_left_target;
        CNmTarget m_right_target;
        NmIKBlendMode_t m_blend_mode;
        float m_fl_blend_weight;
        bool m_b_is_target_in_world_space;
        bool m_b_is_running_from_deserialized_data;
    };

    struct cintanimparameter_t {
        int32_t m_default_value;
        int32_t m_min_value;
        int32_t m_max_value;
    };

    struct cnmparameterizedblendnode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_source_node_indices;
        int16_t m_n_input_parameter_value_node_idx;
        bool m_b_allow_looping;
    };

    struct perticksettings_t_t {
        transform_t m_starting_local_to_world;
        transform_t m_prev_local_to_world;
        transform_t m_final_local_to_world;
        CRootMotion m_root_motion;
        int32_t m_update_id;
        float m_fl_last_time_step;
        float m_fl_prev_anim_time;
        float m_fl_next_anim_time;
        bool m_b_awaken;
        bool m_b_teleported;
        bool m_b_is_client;
        bool m_b_is_predicted;
    };

    struct cnmframesnapevent_t {
        NmFrameSnapEventMode_t m_frame_snap_mode;
    };

    struct canimnodepath_t {
        AnimNodeID m_path;
        int32_t m_n_count;
    };

    struct animnodeoutputid_t {
        uint32_t m_id;
    };

    struct cnmsynctrack_t {
        CUtlLeanVectorFixedGrowable_CNmSyncTrack_Event_t_10_ m_sync_events;
        int32_t m_n_start_event_offset;
    };

    struct cseqbonemasklist_t {
        CBufferString m_s_name;
        CUtlVector_int16_t_ m_n_local_bone_array;
        CUtlVector_float_ m_fl_bone_weight_array;
        float m_fl_default_morph_ctrl_weight;
        CUtlVector_std_pair_CBufferString_float_ m_morph_ctrl_weight_array;
    };

    struct canimencodedframes_t {
        CBufferString m_file_name;
        int32_t m_n_frames;
        int32_t m_n_frames_per_block;
        CUtlVector_CAnimFrameBlockAnim_ m_frameblock_array;
        CAnimEncodeDifference m_usage_differences;
    };

    struct samplecode_t {
        uint8_t m_sub_code;
    };

    struct ccachedpose_t {
        CUtlVector_CTransform_ m_transforms;
        CUtlVector_float_ m_morph_weights;
        HSequence m_h_sequence;
        float m_fl_cycle;
    };

    struct cnmtransitioneventconditionnode__cdefinition_t {
        CGlobalSymbol m_require_rule_id;
        CNmBitFlags m_event_condition_rules;
        int16_t m_n_source_state_node_idx;
        NmTransitionRuleCondition_t m_rule_condition;
    };

    struct cstatenodeinstancedata_t {
        CRelativeArray_float_ m_state_weights;
        vector3d_t m_v_transition_velocity_delta_ws;
        CAnimNetVar_float_ m_current_state_start_time;
        CAnimNetVar_uint8_t_ m_reset_count;
    };

    struct cmotiongraphconfig_t {
        float m_param_values;
        float m_fl_duration;
        MotionIndex m_n_motion_index;
        int32_t m_n_sample_start;
        int32_t m_n_sample_count;
    };

    struct cmotionsearchnode_t {
        CUtlVector_CMotionSearchNode_ m_children;
        CVectorQuantizer m_quantizer;
        CUtlVector_CUtlVector_SampleCode_ m_sample_codes;
        CUtlVector_CUtlVector_int32_t_ m_sample_indices;
        CUtlVector_int32_t_ m_selectable_samples;
    };

    struct canimactivity_t {
        CBufferString m_name;
        int32_t m_n_activity;
        int32_t m_n_flags;
        int32_t m_n_weight;
    };

    struct canimscriptmanager_t {
        CUtlVector_ScriptInfo_t_ m_script_info;
    };

    struct animationdecodedebugdumpelement_t_t {
        int32_t m_n_entity_index;
        CUtlString m_model_name;
        CUtlVector_CUtlString_ m_pose_params;
        CUtlVector_CUtlString_ m_decode_ops;
        CUtlVector_CUtlString_ m_internal_ops;
        CUtlVector_CUtlString_ m_decoded_anims;
    };

    struct cchoreoinstancedata_t {
        CAnimationLayer m_anim_overlay;
    };

    struct pulseruntimevarindex_t_t {
        int32_t m_value;
    };

    struct configindex_t {
        uint16_t m_n_group;
        uint16_t m_n_config;
    };

    struct vphysxcollisionattributes_t_t {
        int32_t m_n_include_detail_layer_count;
        uint32_t m_collision_group;
        CUtlVector_uint32_t_ m_interact_as;
        CUtlVector_uint32_t_ m_interact_with;
        CUtlVector_uint32_t_ m_interact_exclude;
        CUtlVector_uint32_t_ m_detail_layers;
        CUtlString m_collision_group_string;
        CUtlVector_CUtlString_ m_interact_as_strings;
        CUtlVector_CUtlString_ m_interact_with_strings;
        CUtlVector_CUtlString_ m_interact_exclude_strings;
        CUtlVector_CUtlString_ m_detail_layer_strings;
    };

    struct csequenceupdatenode_t {
        HSequence m_h_sequence;
        float m_duration;
        CParamSpanUpdater m_param_spans;
        CUtlVector_TagSpan_t_ m_tags;
    };

    struct cstatemachineinstancedata_t {
        float m_fl_time_in_state;
        CAnimNetVar_int32_t_ m_current_transition_index;
        int32_t m_prev_state_index;
        int32_t m_scheduled_transition_index;
    };

    struct cnmpassthroughnode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct cnmgraphdefinition__externalgraphslot_t_t {
        int16_t m_n_node_idx;
        CGlobalSymbol m_slot_id;
    };

    struct pulseruntimeentrypointindex_t_t {
        int32_t m_value;
    };

    struct caimcameraupdatenode_t {
        CAnimParamHandle m_h_parameter_position;
        CAnimParamHandle m_h_parameter_orientation;
        CAnimParamHandle m_h_parameter_pelvis_offset;
        CAnimParamHandle m_h_parameter_camera_only;
        CAnimParamHandle m_h_parameter_weapon_depenetration_distance;
        CAnimParamHandle m_h_parameter_weapon_depenetration_delta;
        CAnimParamHandle m_h_parameter_camera_clearance_distance;
        AimCameraOpFixedSettings_t m_op_fixed_settings;
    };

    struct pulseruntimedomainvalueindex_t_t {
        int16_t m_value;
    };

    struct lookdata_t {
        CAnimNetVar_Vector_ m_v_look_target;
    };

    struct cseqseqdescflag_t {
        bool m_b_looping;
        bool m_b_snap;
        bool m_b_autoplay;
        bool m_b_post;
        bool m_b_hidden;
        bool m_b_multi;
        bool m_b_legacy_delta;
        bool m_b_legacy_worldspace;
        bool m_b_legacy_cyclepose;
        bool m_b_legacy_realtime;
        bool m_b_model_doc;
    };

    struct permmodelinfo_t_t {
        uint32_t m_n_flags;
        vector3d_t m_v_hull_min;
        vector3d_t m_v_hull_max;
        vector3d_t m_v_view_min;
        vector3d_t m_v_view_max;
        float m_fl_mass;
        vector3d_t m_v_eye_position;
        float m_fl_max_eye_deflection;
        CUtlString m_s_surface_property;
        CUtlString m_key_value_text;
    };

    struct stanceinfo_t_t {
        vector3d_t m_v_position;
        float m_fl_direction;
    };

    struct ikbonenameandindex_t_t {
        CUtlString m_name;
    };

    struct cpulse_chunk_t {
        CUtlLeanVector_PGDInstruction_t_ m_instructions;
        CUtlLeanVector_CPulse_RegisterInfo_ m_registers;
        CUtlLeanVector_CPulse_InstructionDebug_ m_instruction_debug_infos;
        PulseRuntimeTempVarBankIndex_t m_n_temp_var_bank;
    };

    struct cstancescaleupdatenode_t {
        CAnimParamHandle m_h_param;
    };

    struct cpulsebreakpointlocation_t {
        PulseDocNodeID_t m_node_id;
        PulseSymbol_t m_sequence_point;
        PulseSymbol_t m_port_name;
        bool m_b_defer_break;
    };

    struct pulseruntimeinvokeindex_t_t {
        int32_t m_value;
    };

    struct cnmbonemaskblendnode__cdefinition_t {
        int16_t m_n_source_mask_node_idx;
        int16_t m_n_target_mask_node_idx;
        int16_t m_n_blend_weight_value_node_idx;
    };

    struct cnmideventnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmBitFlags m_event_condition_rules;
        CGlobalSymbol m_default_value;
    };

    struct hitreactfixedsettings_t_t {
        int32_t m_n_weight_list_index;
        int32_t m_n_effected_bone_count;
        float m_fl_max_impact_force;
        float m_fl_min_impact_force;
        float m_fl_whip_impact_scale;
        float m_fl_counter_rotation_scale;
        float m_fl_distance_fade_scale;
        float m_fl_propagation_scale;
        float m_fl_whip_delay;
        float m_fl_spring_strength;
        float m_fl_whip_spring_strength;
        float m_fl_max_angle_radians;
        int32_t m_n_hip_bone_index;
        float m_fl_hip_bone_translation_scale;
        float m_fl_hip_dip_spring_strength;
        float m_fl_hip_dip_impact_scale;
        float m_fl_hip_dip_delay;
    };

    struct canimtagbase_t {
        CGlobalSymbol m_name;
        CUtlString m_s_comment;
        CGlobalSymbol m_group;
        AnimTagID m_tag_id;
        bool m_b_is_referenced;
    };

    struct cmotiongraph_t {
        CParamSpanUpdater m_param_spans;
        CUtlVector_TagSpan_t_ m_tags;
        CSmartPtr_CMotionNode_ m_p_root_node;
        int32_t m_n_parameter_count;
        int32_t m_n_config_start_index;
        int32_t m_n_config_count;
        bool m_b_loop;
    };

    struct cnmvectorinfonode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CNmVectorInfoNode_Info_t m_desired_info;
    };

    struct animationsnapshot_t_t {
        int32_t m_n_ent_index;
        CUtlString m_model_name;
    };

    struct cseqtransition_t {
        float m_fl_fade_in_time;
        float m_fl_fade_out_time;
    };

    struct cnmvirtualparametertargetnode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct canimgraphdebugreplay_t {
        CUtlString m_anim_graph_file_name;
        CUtlVector_CSmartPtr_CAnimReplayFrame_ m_frame_list;
        int32_t m_start_index;
        int32_t m_write_index;
        int32_t m_frame_count;
    };

    struct cvectoranimparameter_t {
        vector3d_t m_default_value;
        bool m_b_interpolate;
        AnimParamVectorType_t m_vector_type;
    };

    struct cnmstatemachinenode__statedefinition_t_t {
        int16_t m_n_state_node_idx;
        int16_t m_n_entry_condition_node_idx;
        CUtlLeanVectorFixedGrowable_CNmStateMachineNode_TransitionDefinition_t_5_ m_transition_definitions;
    };

    struct cstanceoverrideupdatenode_t {
        CUtlVector_StanceInfo_t_ m_foot_stance_info;
        CAnimUpdateNodeRef m_p_stance_source_node;
        CAnimParamHandle m_h_parameter;
        StanceOverrideMode m_e_mode;
    };

    struct cnmgraphdefinition__externalposeslot_t_t {
        int16_t m_n_node_idx;
        CGlobalSymbol m_slot_id;
    };

    struct physshapemarkup_t_t {
        int32_t m_n_body_in_aggregate;
        int32_t m_n_shape_in_body;
        CGlobalSymbol m_s_hit_group;
    };

    struct cblend2dinstancedata_t {
        vector2d_t m_damped_value;
        float m_fl_cycle;
        float m_fl_prev_cycle;
    };

    struct lookatbone_t_t {
        int32_t m_index;
        float m_weight;
    };

    struct cdirectplaybackinstancedata_t {
        vector3d_t m_v_target_position;
        float m_fl_target_facing;
        float m_fl_interp_end_time;
        float m_weights;
        SequenceData m_sequences;
        uint32_t m_current_sequence_index;
        CAnimNetVar_uint64_t_ m_current_sequence_data;
        float m_fl_fade_in_time;
        float m_fl_fade_out_time;
        CAnimNetVar_float_ m_fl_forced_cycle;
        bool m_b_reset_pending;
        CAnimNetVar_float_ m_sequence_cycle_zero_time;
    };

    struct cnmtransitionnode__cdefinition_t {
        int16_t m_n_target_state_node_idx;
        int16_t m_n_duration_override_node_idx;
        int16_t m_time_offset_override_node_idx;
        int16_t m_start_bone_mask_node_idx;
        float m_fl_duration;
        NmPercent_t m_bone_mask_blend_in_time_percentage;
        float m_fl_time_offset;
        CNmBitFlags m_transition_options;
        int16_t m_target_sync_idnode_idx;
        NmEasingOperation_t m_blend_weight_easing;
        NmRootMotionBlendMode_t m_root_motion_blend;
    };

    struct pulseruntimeregisterindex_t_t {
        int16_t m_value;
    };

    struct cnmfloateasenode__cdefinition_t {
        float m_fl_ease_time;
        float m_fl_start_value;
        int16_t m_n_input_value_node_idx;
        NmEasingOperation_t m_easing_op;
        bool m_b_use_start_value;
    };

    struct canimationgraphinstance_t {
        bool m_b_tag_dispatch_dirty;
    };

    struct canimencodedifference_t {
        CUtlVector_CAnimBoneDifference_ m_bone_array;
        CUtlVector_CAnimMorphDifference_ m_morph_array;
        CUtlVector_CAnimUserDifference_ m_user_array;
        CUtlVector_uint8_t_ m_b_has_rotation_bit_array;
        CUtlVector_uint8_t_ m_b_has_movement_bit_array;
        CUtlVector_uint8_t_ m_b_has_morph_bit_array;
        CUtlVector_uint8_t_ m_b_has_user_bit_array;
    };

    struct cnmtargetoffsetnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        bool m_b_is_bone_space_offset;
        quaternion_t m_rotation_offset;
        vector3d_t m_translation_offset;
    };

    struct motionmatchinginstancedata_t {
        MotionSelection m_current_selection;
        MotionSelection m_previous_selection;
    };

    struct cmotiongraphupdatenode_t {
        CSmartPtr_CMotionGraph_ m_p_motion_graph;
    };

    struct cnmfloatanglemathnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CNmFloatAngleMathNode_Operation_t m_operation;
    };

    struct pulsecursorid_t_t {
        int32_t m_value;
    };

    struct canimparamhandle_t {
        AnimParamType_t m_type;
        uint8_t m_index;
    };

    struct weightlist_t {
        CUtlString m_name;
        CUtlVector_float_ m_weights;
    };

    struct motionindex_t {
        uint16_t m_n_group;
        uint16_t m_n_motion;
    };

    struct followattachmentsettings_t_t {
        CAnimAttachment m_attachment;
        int32_t m_bone_index;
        AttachmentHandle_t m_attachment_handle;
        bool m_b_match_translation;
        bool m_b_match_rotation;
    };

    struct cnmreferencedgraphnode__cdefinition_t {
        int16_t m_n_referenced_graph_idx;
        int16_t m_n_fallback_node_idx;
    };

    struct animnodeid_t {
        uint32_t m_id;
    };

    struct cnmclipselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_condition_node_indices;
    };

    struct clookcomponentupdater_t {
        CAnimParamHandle m_h_look_heading;
        CAnimParamHandle m_h_look_heading_normalized;
        CAnimParamHandle m_h_look_heading_velocity;
        CAnimParamHandle m_h_look_pitch;
        CAnimParamHandle m_h_look_distance;
        CAnimParamHandle m_h_look_direction;
        CAnimParamHandle m_h_look_target;
        CAnimParamHandle m_h_look_target_world_space;
        bool m_b_network_look_target;
    };

    struct cnmisexternalposesetnode__cdefinition_t {
        int16_t m_n_external_pose_node_idx;
    };

    struct canimgraphnetworksettings_t {
        bool m_b_networking_enabled;
    };

    struct csingleframeupdatenode_t {
        CUtlVector_CSmartPtr_CAnimActionUpdater_ m_actions;
        CPoseHandle m_h_pose_cache_handle;
        HSequence m_h_sequence;
        float m_fl_cycle;
    };

    struct cnmchainlookatnode__cdefinition_t {
        CGlobalSymbol m_end_effector_bone_id;
        vector3d_t m_end_effector_forward_axis;
        vector3d_t m_end_effector_offset;
        int16_t m_n_lookat_target_node_idx;
        int16_t m_n_enabled_node_idx;
        float m_fl_blend_time_seconds;
        CUtlVectorFixedGrowable_float_5_ m_chain_weights;
        uint8_t m_n_chain_length;
        bool m_b_is_target_in_world_space;
    };

    struct cnmfollowbonenode__cdefinition_t {
        CGlobalSymbol m_bone;
        CGlobalSymbol m_follow_target_bone;
        int16_t m_n_enabled_node_idx;
        NmFollowBoneMode_t m_mode;
    };

    struct movementdata_t {
        vector3d_t m_goal_way_point_pos;
        CAnimNetVar_Vector_ m_v_move_dir;
        CAnimNetVar_Vector_ m_v_acceleration;
        CAnimNetVar_float_ m_fl_current_move_speed;
        CAnimNetVar_float_ m_fl_target_move_speed;
        CAnimNetVar_float_ m_fl_goal_distance;
        CAnimNetVar_float_ m_fl_boundary_radius;
        bool m_b_goal_changed;
        CAnimNetVar_bool_ m_b_has_path;
        CAnimNetVar_float_ m_fl_facing_heading;
        vector3d_t m_v_manual_facing_direction;
        VectorWS m_v_manual_facing_target;
        CAnimNetVar_uint8_t_ m_n_facing_mode;
        CAnimNetVar_bool_ m_b_force_facing;
        CAnimNetVar_int32_t_ m_n_active_motor_index;
        CAnimNetVar_bool_ m_b_on_ground;
        CAnimNetVar_Vector_ m_v_facing_position;
        vector3d_t m_v_prev_facing_position;
    };

    struct cremapvaluecomponentupdater_t {
        CUtlVector_CRemapValueUpdateItem_ m_items;
    };

    struct cmodelconfiglist_t {
        bool m_b_hide_material_group_in_tools;
        bool m_b_hide_render_color_in_tools;
        CUtlVector_CModelConfig_ m_configs;
    };

    struct cseqautolayerflag_t {
        bool m_b_post;
        bool m_b_spline;
        bool m_b_xfade;
        bool m_b_no_blend;
        bool m_b_local;
        bool m_b_pose;
        bool m_b_fetch_frame;
        bool m_b_subtract;
    };

    struct animstateid_t {
        uint32_t m_id;
    };

    struct cnmideventconditionnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmBitFlags m_event_condition_rules;
        CUtlVectorFixedGrowable_CGlobalSymbol_5_ m_event_ids;
    };

    struct modelboneflexdriver_t_t {
        CUtlString m_bone_name;
        uint32_t m_bone_name_token;
        CUtlVector_ModelBoneFlexDriverControl_t_ m_controls;
    };

    struct cmorphdata_t {
        CUtlString m_name;
        CUtlVector_CMorphRectData_ m_morph_rect_datas;
    };

    struct cfootpinningupdatenode_t {
        FootPinningPoseOpFixedData_t m_pose_op_fixed_data;
        FootPinningTimingSource m_e_timing_source;
        CUtlVector_CAnimParamHandle_ m_params;
        bool m_b_reset_child;
    };

    struct cseqposesetting_t {
        CBufferString m_s_pose_parameter;
        CBufferString m_s_attachment;
        CBufferString m_s_reference_sequence;
        float m_fl_value;
        bool m_b_x;
        bool m_b_y;
        bool m_b_z;
        int32_t m_e_type;
    };

    struct pulsegraphexecutionhistorycursordesc_t_t {
        CUtlVector_PulseCursorID_t_ vec_ancestor_cursor_ids;
        PulseDocNodeID_t n_spawn_node_id;
        PulseDocNodeID_t n_retired_at_node_id;
        float fl_last_referenced;
        int32_t n_last_valid_entry_idx;
        bool b_was_an_observable_computation;
    };

    struct cnmvirtualparameterfloatnode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct cattachment_t {
        CUtlString m_name;
        CUtlString m_influence_names;
        Quaternion m_v_influence_rotations;
        Vector m_v_influence_offsets;
        float m_influence_weights;
        bool m_b_influence_root_transform;
        uint8_t m_n_influences;
        bool m_b_ignore_rotation;
    };

    struct csequenceupdatenodebase_t {
        float m_playback_speed;
        bool m_b_loop;
    };

    struct cdrawcullingdata_t {
        int8_t m_cone_axis;
        int8_t m_cone_cutoff;
    };

    struct vphysxjoint_t_t {
        uint16_t m_n_type;
        uint16_t m_n_body1;
        uint16_t m_n_body2;
        uint16_t m_n_flags;
        transform_t m_frame1;
        transform_t m_frame2;
        bool m_b_enable_collision;
        bool m_b_is_linear_constraint_disabled;
        bool m_b_is_angular_constraint_disabled;
        bool m_b_enable_linear_limit;
        VPhysXRange_t m_linear_limit;
        bool m_b_enable_linear_motor;
        vector3d_t m_v_linear_target_velocity;
        float m_fl_max_force;
        bool m_b_enable_swing_limit;
        VPhysXRange_t m_swing_limit;
        bool m_b_enable_twist_limit;
        VPhysXRange_t m_twist_limit;
        bool m_b_enable_angular_motor;
        vector3d_t m_v_angular_target_velocity;
        float m_fl_max_torque;
        float m_fl_linear_frequency;
        float m_fl_linear_damping_ratio;
        float m_fl_angular_frequency;
        float m_fl_angular_damping_ratio;
        float m_fl_friction;
        float m_fl_elasticity;
        float m_fl_elastic_damping;
        float m_fl_plasticity;
        CUtlString m_tag;
    };

    struct cstatenodetransitiondata_t {
        CBlendCurve m_curve;
        CAnimValue_float_ m_blend_duration;
        CAnimValue_float_ m_reset_cycle_value;
        uint32_t m_b_reset;
        uint32_t m_reset_cycle_option;
    };

    struct ctimeremainingmetricevaluator_t {
        bool m_b_match_by_time_remaining;
        float m_fl_max_time_remaining;
        bool m_b_filter_by_time_remaining;
        float m_fl_min_time_remaining;
    };

    struct pulseruntimetempvarindex_t_t {
        int16_t m_value;
    };

    struct cmodelconfigelement_t {
        CUtlString m_element_name;
        CUtlVector_CModelConfigElement_ m_nested_elements;
    };

    struct footfixedsettings_t {
        TraceSettings_t m_trace_settings;
        VectorAligned m_v_foot_base_bind_pose_position_ms;
        float m_fl_foot_base_length;
        float m_fl_max_rotation_left;
        float m_fl_max_rotation_right;
        int32_t m_footstep_landed_tag_index;
        bool m_b_enable_tracing;
        float m_fl_trace_angle_blend;
        int32_t m_n_disable_tag_index;
        int32_t m_n_foot_index;
    };

    struct cnmbonemaskswitchnode__cdefinition_t {
        int16_t m_n_switch_value_node_idx;
        int16_t m_n_true_value_node_idx;
        int16_t m_n_false_value_node_idx;
        float m_fl_blend_time_seconds;
        bool m_b_switch_dynamically;
    };

    struct cmodelconfig_t {
        CUtlString m_config_name;
        CUtlVector_CModelConfigElement_ m_elements;
        bool m_b_top_level;
        bool m_b_active_in_editor_by_default;
    };

    struct animcomponentid_t {
        uint32_t m_id;
    };

    struct vphysxaggregatedata_t_t {
        uint16_t m_n_flags;
        uint16_t m_n_ref_counter;
        bool m_b_compounds_packed;
        CUtlVector_uint32_t_ m_bones_hash;
        CUtlVector_CUtlString_ m_bone_names;
        CUtlVector_uint16_t_ m_index_names;
        CUtlVector_uint16_t_ m_index_hash;
        CUtlVector_matrix3x4a_t_ m_bind_pose;
        CUtlVector_VPhysXBodyPart_t_ m_parts;
        CUtlVector_PhysShapeMarkup_t_ m_shape_markups;
        CUtlVector_VPhysXConstraint2_t_ m_constraints2;
        CUtlVector_VPhysXJoint_t_ m_joints;
        PhysFeModelDesc_t* m_p_fe_model;
        CUtlVector_uint16_t_ m_bone_parents;
        CUtlVector_uint32_t_ m_surface_property_hashes;
        CUtlVector_VPhysXCollisionAttributes_t_ m_collision_attributes;
        CUtlVector_CUtlString_ m_debug_part_names;
        CUtlString m_embedded_keyvalues;
    };

    struct cnmgraphdefinition_t {
        CGlobalSymbol m_variation_id;
        CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_skeleton;
        CUtlVector_CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_supported_secondary_skeletons;
        CNmGraphVariationUserData* m_p_user_data;
        CUtlVector_int16_t_ m_persistent_node_indices;
        int16_t m_n_root_node_idx;
        CUtlVector_CGlobalSymbol_ m_control_parameter_ids;
        CUtlVector_CGlobalSymbol_ m_virtual_parameter_ids;
        CUtlVector_int16_t_ m_virtual_parameter_node_indices;
        CUtlVector_CNmGraphDefinition_ReferencedGraphSlot_t_ m_referenced_graph_slots;
        CUtlVector_CNmGraphDefinition_ExternalGraphSlot_t_ m_external_graph_slots;
        CUtlVector_CNmGraphDefinition_ExternalPoseSlot_t_ m_external_pose_slots;
        CUtlVector_CUtlString_ m_node_paths;
        CUtlVector_CStrongHandleVoid_ m_resources;
    };

    struct cnmselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_condition_node_indices;
    };

    struct canimdemocapturesettings_t {
        vector2d_t m_vec_error_range_spline_rotation;
        vector2d_t m_vec_error_range_spline_translation;
        vector2d_t m_vec_error_range_spline_scale;
        float m_fl_ik_rotation_max_spline_error;
        float m_fl_ik_translation_max_spline_error;
        vector2d_t m_vec_error_range_quantization_rotation;
        vector2d_t m_vec_error_range_quantization_translation;
        vector2d_t m_vec_error_range_quantization_scale;
        float m_fl_ik_rotation_max_quantization_error;
        float m_fl_ik_translation_max_quantization_error;
        CUtlString m_base_sequence;
        int32_t m_n_base_sequence_frame;
        EDemoBoneSelectionMode m_bone_selection_mode;
        CUtlVector_BoneDemoCaptureSettings_t_ m_bones;
        CUtlVector_IKDemoCaptureSettings_t_ m_ik_chains;
    };

    struct ikdemocapturesettings_t_t {
        CUtlString m_parent_bone_name;
        IKChannelMode m_e_mode;
        CUtlString m_ik_chain_name;
        CUtlString m_one_bone_start;
        CUtlString m_one_bone_end;
    };

    struct cseqmultifetchflag_t {
        bool m_b_realtime;
        bool m_b_cylepose;
        bool m_b0_d;
        bool m_b1_d;
        bool m_b2_d;
        bool m_b2_d_tri;
    };

    struct pulseregistermap_t_t {
        KeyValues3 m_inparams;
        CKV3MemberNameSet m_inparams_which_can_be_moved;
        KeyValues3 m_outparams;
    };

    struct vphysxrange_t_t {
        float m_fl_min;
        float m_fl_max;
    };

    struct cstopatgoalupdatenode_t {
        float m_fl_outer_radius;
        float m_fl_inner_radius;
        float m_fl_max_scale;
        float m_fl_min_scale;
        CAnimInputDamping m_damping;
    };

    struct cnmideventpercentagethroughnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmBitFlags m_event_condition_rules;
        CGlobalSymbol m_event_id;
    };

    struct canimbonedifference_t {
        CBufferString m_name;
        CBufferString m_parent;
        vector3d_t m_pos_error;
        bool m_b_has_rotation;
        bool m_b_has_movement;
    };

    struct cnmcachedboolnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        NmCachedValueMode_t m_mode;
    };

    struct cactioncomponentupdater_t {
        CUtlVector_CSmartPtr_CAnimActionUpdater_ m_actions;
    };

    struct cdirectionalblendinstancedata_t {
        float m_damped_value;
        float m_fl_cycle;
        float m_fl_prev_cycle;
        CAnimNetVar_float_ m_fl_playback_rate;
        CAnimNetVar_float_ m_fl_cycle_zero_time;
        CAnimNetVar_float_ m_reset_cycle_value;
        CAnimNetVar_float_ m_reset_count;
    };

    struct cdampedpathanimmotorupdater_t {
        float m_fl_anticipation_time;
        float m_fl_min_speed_scale;
        CAnimParamHandle m_h_anticipation_pos_param;
        CAnimParamHandle m_h_anticipation_heading_param;
        float m_fl_spring_constant;
        float m_fl_min_spring_tension;
        float m_fl_max_spring_tension;
    };

    struct cnmcachedfloatnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        NmCachedValueMode_t m_mode;
    };

    struct cnmfloatswitchnode__cdefinition_t {
        int16_t m_n_switch_value_node_idx;
        int16_t m_n_true_value_node_idx;
        int16_t m_n_false_value_node_idx;
        float m_fl_false_value;
        float m_fl_true_value;
    };

    struct cmodelconfigelement_setmaterialgrouponattachedmodels_t {
        CUtlString m_material_group_name;
    };

    struct cnmfloatchanneldata_t {
        CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_skeleton;
        CGlobalSymbol m_set_id;
        CUtlVector_CNmFloatChannelData_ChannelSettings_t_ m_channel_settings;
        CUtlVector_uint16_t_ m_compressed_data;
        CUtlVector_uint32_t_ m_compressed_offsets;
    };

    struct cnmentityattributeeventbase_t {
        CNmEventTargetEntity_t m_target;
        CUtlString m_attribute_name;
    };

    struct cnmvirtualparameterbonemasknode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct sequencedata_t {
        HSequence m_h_sequence;
        CNetworkedCycle m_cycle;
    };

    struct cpathhelperupdatenode_t {
        float m_fl_stopping_radius;
        float m_fl_stopping_speed_scale;
    };

    struct materialgroup_t_t {
        CUtlString m_name;
        CUtlVector_CStrongHandle_InfoForResourceTypeIMaterial2_ m_materials;
    };

    struct cmorphbundledata_t {
        float m_fl_uleft_src;
        float m_fl_vtop_src;
        CUtlVector_float_ m_offsets;
        CUtlVector_float_ m_ranges;
    };

    struct cmodelconfigelement_userpick_t {
        CUtlVector_CUtlString_ m_choices;
    };

    struct csolveiktargethandle_t_t {
        CAnimParamHandle m_position_handle;
        CAnimParamHandle m_orientation_handle;
    };

    struct cfootadjustmentupdatenode_t {
        CUtlVector_HSequence_ m_clips;
        CPoseHandle m_h_base_pose_cache_handle;
        CAnimParamHandle m_facing_target;
        float m_fl_turn_time_min;
        float m_fl_turn_time_max;
        float m_fl_step_height_max;
        float m_fl_step_height_max_angle;
        bool m_b_reset_child;
        bool m_b_animation_driven;
    };

    struct caimconstraint_t {
        quaternion_t m_q_aim_offset;
        uint32_t m_n_up_type;
    };

    struct cmaterialdrawdescriptor__rigidmeshpart_t_t {
        uint16_t m_n_rigid_blasindex;
        int16_t m_n_bone_index;
        uint32_t m_n_start_index_offset;
        uint32_t m_n_primitive_count;
    };

    struct cfootfallanimtag_t {
        FootFallTagFoot_t m_foot;
    };

    struct cmaterialdrawdescriptor_t {
        float m_fl_uv_density;
        vector3d_t m_v_tint_color;
        float m_fl_alpha;
        uint32_t m_n_num_meshlets;
        uint32_t m_n_first_meshlet;
        uint32_t m_n_applied_index_offset;
        int32_t m_n_emissive_primitive_count;
        uint8_t m_n_depth_vertex_buffer_index;
        uint8_t m_n_meshlet_packed_ivbindex;
        CUtlLeanVector_CMaterialDrawDescriptor_RigidMeshPart_t_ m_rigid_mesh_parts;
        CUtlLeanVector_uint16_t_ m_root_bvh_nodes;
        RenderPrimitiveType_t m_n_primitive_type;
        int32_t m_n_base_vertex;
        int32_t m_n_vertex_count;
        int32_t m_n_start_index;
        int32_t m_n_index_count;
        CRenderBufferBinding m_index_buffer;
        CRenderBufferBinding m_meshlet_packed_ivb;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_material;
    };

    struct cnmskeleton_t {
        CGlobalSymbol m_id;
        CUtlLeanVector_CGlobalSymbol_ m_bone_ids;
        CUtlVector_int32_t_ m_parent_indices;
        CUtlVector_CTransform_ m_parent_space_reference_pose;
        CUtlVector_CTransform_ m_model_space_reference_pose;
        int32_t m_num_bones_to_sample_at_low_lod;
        bool m_b_is_prop_skeleton;
        CUtlLeanVector_NmBoneMaskSetDefinition_t_ m_mask_definitions;
        CUtlLeanVector_CNmSkeleton_SecondarySkeleton_t_ m_secondary_skeletons;
        CUtlLeanVector_CNmFloatChannelSet_t_ m_float_channel_sets;
        CUtlVector_CNmSkeleton_ContactConfig_t_ m_contact_configs;
        CUtlVector_int32_t_ m_gameplay_relevant_bone_indices;
        int64_t m_n_special_dependency_hash;
    };

    struct cstepsremainingmetricevaluator_t {
        CUtlVector_int32_t_ m_foot_indices;
        float m_fl_min_steps_remaining;
    };

    struct cnmclothevent_t {
        CNmClothEvent_Type_t m_type;
        float m_fl_stiffness;
        float m_fl_speed_in;
        float m_fl_speed_out;
        float m_fl_length_seconds;
        CUtlString m_vertex_set_name;
        CUtlString m_effect_name;
    };

    struct cbodygroupsetting_t {
        CUtlString m_body_group_name;
        int32_t m_n_body_group_option;
    };

    struct cvectorquantizer_t {
        CUtlVector_float_ m_centroid_vectors;
        int32_t m_n_centroids;
        int32_t m_n_dimensions;
    };

    struct particlenamedvalueconfiguration_t_t {
        CUtlString m_config_name;
        KeyValues3 m_config_value;
        CUtlString m_bound_value_path;
        ParticleAttachment_t m_i_attach_type;
        CUtlString m_str_entity_scope;
        CUtlString m_str_attachment_name;
    };

    struct cnmvectorcreatenode__cdefinition_t {
        int16_t m_input_vector_value_node_idx;
        int16_t m_input_value_xnode_idx;
        int16_t m_input_value_ynode_idx;
        int16_t m_input_value_znode_idx;
    };

    struct cparticlevecinput_t {
        ParticleVecType_t m_n_type;
        vector3d_t m_v_literal_value;
        color_t m_literal_color;
        CParticleNamedValueRef m_named_value;
        bool m_b_follow_named_value;
        ParticleAttributeIndex_t m_n_vector_attribute;
        vector3d_t m_v_vector_attribute_scale;
        int32_t m_n_control_point;
        int32_t m_n_delta_control_point;
        vector3d_t m_v_cpvalue_scale;
        vector3d_t m_v_cprelative_position;
        vector3d_t m_v_cprelative_dir;
        CParticleFloatInput m_float_component_x;
        CParticleFloatInput m_float_component_y;
        CParticleFloatInput m_float_component_z;
        CParticleFloatInput m_float_interp;
        float m_fl_interp_input0;
        float m_fl_interp_input1;
        vector3d_t m_v_interp_output0;
        vector3d_t m_v_interp_output1;
        CColorGradient m_gradient;
        vector3d_t m_v_random_min;
        vector3d_t m_v_random_max;
    };

    struct cnmstatenode__cdefinition_t {
        int16_t m_n_child_node_idx;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_3_ m_entry_events;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_3_ m_execute_events;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_3_ m_exit_events;
        CUtlLeanVectorFixedGrowable_CNmStateNode_TimedEvent_t_1_ m_timed_remaining_events;
        CUtlLeanVectorFixedGrowable_CNmStateNode_TimedEvent_t_1_ m_timed_elapsed_events;
        int16_t m_n_layer_weight_node_idx;
        int16_t m_n_layer_root_motion_weight_node_idx;
        int16_t m_n_layer_bone_mask_node_idx;
        bool m_b_is_off_state;
        bool m_b_use_actual_elapsed_time_in_state_for_timed_events;
    };

    struct cnmbonemaskselectornode__cdefinition_t {
        int16_t m_default_mask_node_idx;
        int16_t m_parameter_value_node_idx;
        bool m_b_switch_dynamically;
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_mask_node_indices;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_7_ m_parameter_values;
        float m_fl_blend_time_seconds;
    };

    struct cnmvirtualparametervectornode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct cfootcyclemetricevaluator_t {
        CUtlVector_int32_t_ m_foot_indices;
    };

    struct cnmconstidnode__cdefinition_t {
        CGlobalSymbol m_value;
    };

    struct chitbox_t {
        CUtlString m_name;
        CUtlString m_s_surface_property;
        CUtlString m_s_bone_name;
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
        float m_fl_shape_radius;
        uint32_t m_n_bone_name_hash;
        int32_t m_n_group_id;
        uint8_t m_n_shape_type;
        bool m_b_translation_only;
        uint32_t m_crc;
        color_t m_c_render_color;
        uint16_t m_n_hit_box_index;
    };

    struct cnmparameterizedselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_uint8_t_8_ m_option_weights;
        int16_t m_parameter_node_idx;
        bool m_b_ignore_invalid_options;
        bool m_b_has_weights_set;
    };

    struct modelskeletondata_t_t {
        CUtlVector_CUtlString_ m_bone_name;
        CUtlVector_int16_t_ m_n_parent;
        CUtlVector_float_ m_bone_sphere;
        CUtlVector_uint32_t_ m_n_flag;
        CUtlVector_Vector_ m_bone_pos_parent;
        CUtlVector_QuaternionStorage_ m_bone_rot_parent;
        CUtlVector_float_ m_bone_scale_parent;
    };

    struct cnmevent_t {
        NmPercent_t m_fl_start_time;
        NmPercent_t m_fl_duration;
        CGlobalSymbol m_sync_id;
    };

    struct nmcompressionsettings_t__quantizationrange_t_t {
        float m_fl_range_start;
        float m_fl_range_length;
    };

    struct tagspan_t_t {
        int32_t m_tag_index;
        float m_start_cycle;
        float m_end_cycle;
    };

    struct cnmconsttargetnode__cdefinition_t {
        CNmTarget m_value;
    };

    struct cremapvalueupdateitem_t {
        CAnimParamHandle m_h_param_in;
        CAnimParamHandle m_h_param_out;
        float m_fl_min_input_value;
        float m_fl_max_input_value;
        float m_fl_min_output_value;
        float m_fl_max_output_value;
    };

    struct permmodeldataanimatedmaterialattribute_t_t {
        CUtlString m_attribute_name;
        int32_t m_n_num_channels;
    };

    struct cmotiondataset_t {
        CUtlVector_CMotionGraphGroup_ m_groups;
        int32_t m_n_dimension_count;
    };

    struct particleattributeindex_t_t {
        int32_t m_value;
    };

    struct cproductquantizer_t {
        CUtlVector_CVectorQuantizer_ m_sub_quantizers;
        int32_t m_n_dimensions;
    };

    struct cchoiceupdatenode_t {
        CUtlVector_CAnimUpdateNodeRef_ m_children;
        CUtlVector_float_ m_weights;
        CUtlVector_float_ m_blend_times;
        ChoiceMethod m_choice_method;
        ChoiceChangeMethod m_choice_change_method;
        ChoiceBlendMethod m_blend_method;
        float m_blend_time;
        bool m_b_cross_fade;
        bool m_b_reset_chosen;
        bool m_b_dont_reset_same_selection;
    };

    struct skeletonanimcapture_t__bone_t_t {
        CUtlString m_name;
        transform_t m_bind_pose;
        int32_t m_n_parent;
    };

    struct cexpressionactionupdater_t {
        CAnimParamHandle m_h_param;
        AnimParamType_t m_e_param_type;
        AnimScriptHandle m_h_script;
    };

    struct cnmfloatmathnode__cdefinition_t {
        int16_t m_n_input_value_node_idx_a;
        int16_t m_n_input_value_node_idx_b;
        bool m_b_return_absolute_result;
        bool m_b_return_negated_result;
        CNmFloatMathNode_Operator_t m_operator;
        float m_fl_value_b;
    };

    struct canimationgraphvisualizerline_t {
        VectorAligned m_v_ws_position_start;
        VectorAligned m_v_ws_position_end;
        color_t m_color;
    };

    struct ccyclecontrolupdatenode_t {
        AnimValueSource m_value_source;
        CAnimParamHandle m_param_index;
        bool m_b_lock_when_waning;
    };

    struct cnmtargetinfonode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CNmTargetInfoNode_Info_t m_info_type;
        bool m_b_is_world_space_target;
    };

    struct cdampedvaluecomponentupdater_t {
        CUtlVector_CDampedValueUpdateItem_ m_items;
    };

    struct cbaseconstraint_t {
        CUtlString m_name;
        vector3d_t m_v_up_vector;
        CUtlLeanVector_CConstraintSlave_ m_slaves;
        CUtlVector_CConstraintTarget_ m_targets;
    };

    struct blenditem_t_t {
        CUtlVector_TagSpan_t_ m_tags;
        CAnimUpdateNodeRef m_p_child;
        HSequence m_h_sequence;
        vector2d_t m_v_pos;
        float m_fl_duration;
        bool m_b_use_custom_duration;
    };

    struct dampedpathmotorinstancedata_t_t {
        vector3d_t m_v_velocity;
        vector3d_t m_v_acceleration;
        bool m_b_stopping;
    };

    struct cnmisexternalgraphslotfillednode__cdefinition_t {
        int16_t m_n_external_graph_node_idx;
    };

    struct cnewparticleeffect_t {
        CNewParticleEffect* m_p_next;
        CNewParticleEffect* m_p_prev;
        IParticleCollection* m_p_particles;
        char* m_p_debug_name;
        uint32_t m_b_dont_remove;
        uint32_t m_b_remove;
        uint32_t m_b_needs_bbox_update;
        uint32_t m_b_is_first_frame;
        uint32_t m_b_auto_update_bbox;
        uint32_t m_b_allocated;
        uint32_t m_b_simulate;
        uint32_t m_b_should_perform_cull_check;
        uint32_t m_b_force_no_draw;
        uint32_t m_b_suppress_screen_space_effect;
        uint32_t m_b_should_save;
        uint32_t m_b_should_simulate_during_game_paused;
        uint32_t m_b_should_check_fo_w;
        uint32_t m_b_is_async_create;
        uint32_t m_b_freeze_transition_active;
        uint32_t m_b_freeze_target_state;
        uint32_t m_b_can_freeze;
        vector3d_t m_v_sort_origin;
        float m_fl_scale;
        PARTICLE_EHANDLE_* m_h_owner;
        CParticleProperty* m_p_owning_particle_property;
        float m_fl_freeze_transition_start;
        float m_fl_freeze_transition_duration;
        float m_fl_freeze_transition_override;
        vector3d_t m_last_min;
        vector3d_t m_last_max;
        CSplitScreenSlot m_n_split_screen_user;
        vector3d_t m_vec_aggregation_center;
        int32_t m_ref_count;
    };

    struct cnmclipnode__cdefinition_t {
        int16_t m_n_play_in_reverse_value_node_idx;
        bool m_b_sample_root_motion;
        bool m_b_allow_looping;
        int16_t m_n_data_slot_idx;
        int16_t m_n_reset_time_value_node_idx;
        CUtlVectorFixedGrowable_CGlobalSymbol_2_ m_graph_events;
        float m_fl_speed_multiplier;
        int32_t m_n_start_sync_event_offset;
    };

    struct cnmmaterialattributeevent_t {
        CNmEventTargetEntity_t m_target;
        CUtlString m_attribute_name;
        CUtlStringToken m_attribute_name_token;
        CPiecewiseCurve m_x;
        CPiecewiseCurve m_y;
        CPiecewiseCurve m_z;
        CPiecewiseCurve m_w;
    };

    struct tagstatus_t {
        TagActionStatus m_tag_status;
        float m_fl_tag_start_anim_time;
    };

    struct cnmblend1dnode__cdefinition_t {
        CNmParameterizedBlendNode_Parameterization_t m_parameterization;
    };

    struct cconcreteanimparameter_t {
        AnimParamButton_t m_preview_button;
        AnimParamNetworkSetting m_e_network_setting;
        bool m_b_use_most_recent_value;
        bool m_b_auto_reset;
        bool m_b_game_writable;
        bool m_b_graph_writable;
    };

    struct cnmboneweightlist_t {
        CResourceName m_skeleton_name;
        CUtlVector_CGlobalSymbol_ m_bone_ids;
        CUtlVector_float_ m_weights;
    };

    struct cpairedsequenceupdatenode_t {
        CGlobalSymbol m_s_paired_sequence_role;
    };

    struct cmodelconfigelement_randompick_t {
        CUtlVector_CUtlString_ m_choices;
        CUtlVector_float_ m_choice_weights;
    };

    struct cnmscalenode__cdefinition_t {
        int16_t m_n_mask_node_idx;
        int16_t m_n_enable_node_idx;
    };

    struct vphysxconstraint2_t_t {
        uint32_t m_n_flags;
        uint16_t m_n_parent;
        uint16_t m_n_child;
        VPhysXConstraintParams_t m_params;
    };

    struct cconstrainttarget_t {
        quaternion_t m_q_offset;
        vector3d_t m_v_offset;
        uint32_t m_n_bone_hash;
        CUtlString m_s_name;
        float m_fl_weight;
        bool m_b_is_attachment;
    };

    struct skeletonanimcapture_t_t {
        CEntityIndex m_n_ent_index;
        CEntityIndex m_n_ent_parent;
        CUtlVector_CEntityIndex_ m_imported_collision;
        CUtlString m_model_name;
        CUtlString m_capture_name;
        CUtlVector_SkeletonAnimCapture_t_Bone_t_ m_model_bind_pose;
        CUtlVector_SkeletonAnimCapture_t_Bone_t_ m_fe_model_init_pose;
        int32_t m_n_flex_controllers;
        bool m_b_predicted;
        CUtlVector_SkeletonAnimCapture_t_Frame_t_ m_frames;
    };

    struct canimuser_t {
        CBufferString m_name;
        int32_t m_n_type;
    };

    struct cpulse_tempvarbankdefinition_t {
        CUtlVector_CPulse_TempVarInfo_ m_temp_vars;
    };

    struct cragdollcomponentupdater_t {
        CUtlVector_CAnimNodePath_ m_ragdoll_node_paths;
        CUtlVector_CAnimNodePath_ m_follow_attachment_node_paths;
        CUtlVector_int32_t_ m_bone_indices;
        CUtlVector_CUtlString_ m_bone_names;
        CUtlVector_WeightList_ m_weight_lists;
        CUtlVector_int32_t_ m_bone_to_weight_indices;
        float m_fl_spring_frequency_min;
        float m_fl_spring_frequency_max;
        float m_fl_max_stretch;
        bool m_b_solid_collision_at_zero_weight;
    };

    struct particlenamedvaluesource_t_t {
        CUtlString m_name;
        bool m_is_public;
        CPulseValueFullType m_value_type;
        ParticleNamedValueConfiguration_t m_default_config;
    };

    struct cfootdefinition_t {
        CUtlString m_name;
        CUtlString m_ankle_bone_name;
        CUtlString m_toe_bone_name;
        vector3d_t m_v_ball_offset;
        vector3d_t m_v_heel_offset;
        float m_fl_foot_length;
        float m_fl_bind_pose_direction_ms;
        float m_fl_trace_height;
        float m_fl_trace_radius;
    };

    struct cseqsynthanimdesc_t {
        CBufferString m_s_name;
        CSeqSeqDescFlag m_flags;
        CSeqTransition m_transition;
        int16_t m_n_local_base_reference;
        int16_t m_n_local_bone_mask;
        CUtlVector_CAnimActivity_ m_activity_array;
    };

    struct cnmlayerblendnode__layerdefinition_t_t {
        int16_t m_n_input_node_idx;
        int16_t m_n_weight_value_node_idx;
        int16_t m_n_bone_mask_value_node_idx;
        int16_t m_n_root_motion_weight_value_node_idx;
        bool m_b_is_synchronized;
        bool m_b_ignore_events;
        bool m_b_is_state_machine_layer;
        NmPoseBlendMode_t m_blend_mode;
    };

    struct canimcomponentupdater_t {
        CUtlString m_name;
        AnimComponentID m_id;
        AnimNodeNetworkMode m_network_mode;
        bool m_b_start_enabled;
    };

    struct cblend2dupdatenode_t {
        CUtlVector_BlendItem_t_ m_items;
        CUtlVector_TagSpan_t_ m_tags;
        CParamSpanUpdater m_param_spans;
        CUtlVector_int32_t_ m_node_item_indices;
        CAnimInputDamping m_damping;
        AnimValueSource m_blend_source_x;
        CAnimParamHandle m_param_x;
        AnimValueSource m_blend_source_y;
        CAnimParamHandle m_param_y;
        Blend2DMode m_e_blend_mode;
        float m_playback_speed;
        bool m_b_loop;
        bool m_b_lock_blend_on_reset;
        bool m_b_lock_when_waning;
        bool m_b_anim_events_and_tags_on_most_weighted_only;
    };

    struct cnpcphysicshull_t {
        CGlobalSymbol m_s_name;
        NPCPhysicsHullType_t m_e_type;
        float m_fl_capsule_height;
        float m_fl_capsule_radius;
        vector3d_t m_v_capsule_center1;
        vector3d_t m_v_capsule_center2;
        float m_fl_ground_box_height;
        float m_fl_ground_box_width;
    };

    struct permmodelextpart_t_t {
        transform_t m_transform;
        CUtlString m_name;
        int32_t m_n_parent;
        CStrongHandle_InfoForResourceTypeCModel_ m_ref_model;
    };

    struct cnmcachedidnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        NmCachedValueMode_t m_mode;
    };

    struct cleanmatrixupdatenode_t {
        int32_t m_frame_corners;
        CPoseHandle m_poses;
        CAnimInputDamping m_damping;
        AnimVectorSource m_blend_source;
        CAnimParamHandle m_param_index;
        vector3d_t m_vertical_axis;
        vector3d_t m_horizontal_axis;
        HSequence m_h_sequence;
        float m_fl_max_value;
        int32_t m_n_sequence_max_frame;
    };

    struct csymbolanimparameter_t {
        CGlobalSymbol m_default_value;
    };

    struct cnmfloatcurveeventnode__cdefinition_t {
        CGlobalSymbol m_event_id;
        int16_t m_n_default_node_idx;
        float m_fl_default_value;
        CNmBitFlags m_event_condition_rules;
    };

    struct cnmstatemachinenode__transitiondefinition_t_t {
        int16_t m_n_target_state_idx;
        int16_t m_n_condition_node_idx;
        int16_t m_n_transition_node_idx;
        bool m_b_can_be_forced;
    };

    struct cnmfloatselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_condition_node_indices;
        CUtlLeanVectorFixedGrowable_float_5_ m_values;
        float m_fl_default_value;
        float m_fl_ease_time;
        NmEasingOperation_t m_easing_op;
    };

    struct ctargetselectorupdatenode_t {
        TargetSelectorAngleMode_t m_e_angle_mode;
        CUtlVector_CAnimUpdateNodeRef_ m_children;
        CAnimParamHandle m_h_target_position;
        CAnimParamHandle m_h_target_face_position_parameter;
        CAnimParamHandle m_h_move_heading_parameter;
        CAnimParamHandle m_h_desired_move_heading_parameter;
        bool m_b_target_position_is_world_space;
        bool m_b_target_face_position_is_world_space;
        bool m_b_enable_phase_matching;
        float m_fl_phase_matching_max_root_motion_skip;
    };

    struct slopedata_t {
        vector3d_t m_v_slope_normal;
    };

    struct chitboxsetlist_t {
        CUtlVector_CHitBoxSet_ m_hit_box_sets;
    };

    struct motiondbindex_t {
        uint32_t m_n_index;
    };

    struct cdirectplaybacktagdata_t {
        CUtlString m_sequence_name;
        CUtlVector_TagSpan_t_ m_tags;
    };

    struct cnmgrapheventconditionnode__condition_t_t {
        CGlobalSymbol m_event_id;
        NmGraphEventTypeCondition_t m_event_type_condition;
    };

    struct cnmfloatremapnode__remaprange_t_t {
        float m_fl_begin;
        float m_fl_end;
    };

    struct cnmcurrentsynceventidnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
    };

    struct cnmstatecompletedconditionnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        int16_t m_n_transition_duration_override_node_idx;
        float m_fl_transition_duration_seconds;
    };

    struct cnmcamerafovevent_t {
        CPiecewiseCurve m_curve;
    };

    struct cnmtargetwarpevent_t {
        NmTargetWarpRule_t m_rule;
        NmTargetWarpAlgorithm_t m_algorithm;
    };

    struct cparamspanupdater_t {
        CUtlVector_ParamSpan_t_ m_spans;
    };

    struct cparticleanimtag_t {
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_particle_system;
        CUtlString m_particle_system_name;
        CUtlString m_config_name;
        bool m_b_detach_from_owner;
        bool m_b_aggregate;
        bool m_b_stop_when_tag_ends;
        bool m_b_tag_end_stop_is_instant;
        CUtlString m_attachment_name;
        ParticleAttachment_t m_attachment_type;
        CUtlString m_attachment_cp1_name;
        ParticleAttachment_t m_attachment_cp1_type;
    };

    struct ccyclebase_t {
        float m_fl_cycle;
    };

    struct followtargetopfixedsettings_t_t {
        int32_t m_bone_index;
        bool m_b_bone_target;
        int32_t m_bone_target_index;
        bool m_b_world_coodinate_target;
        bool m_b_match_target_orientation;
    };

    struct cnmidswitchnode__cdefinition_t {
        int16_t m_n_switch_value_node_idx;
        int16_t m_n_true_value_node_idx;
        int16_t m_n_false_value_node_idx;
        CGlobalSymbol m_false_value;
        CGlobalSymbol m_true_value;
    };

    struct cnmrootmotionevent_t {
        float m_fl_blend_time_seconds;
    };

    struct cpulse_publicoutput_t {
        PulseSymbol_t m_name;
        CUtlString m_description;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
    };

    struct cchoiceinstancedata_t {
        CAnimNetVar_int32_t_ m_current_choice;
        int32_t m_previous_choice;
        CAnimNetVar_float_ m_fl_clip_start_time;
        float m_choice_previous_cycle;
    };

    struct cnmcameradofevent_t {
        CPiecewiseCurve m_curve;
    };

    struct animationsnapshotbase_t_t {
        float m_fl_real_time;
        matrix3x4a_t m_root_to_world;
        bool m_b_bones_in_world_space;
        CUtlVector_uint32_t_ m_bone_setup_mask;
        CUtlVector_matrix3x4a_t_ m_bone_transforms;
        CUtlVector_float_ m_flex_controllers;
        AnimationSnapshotType_t m_snapshot_type;
        bool m_b_has_decode_dump;
        AnimationDecodeDebugDumpElement_t m_decode_dump;
    };

    struct cemittagactionupdater_t {
        int32_t m_n_tag_index;
        bool m_b_is_zero_duration;
    };

    struct dynamicmeshdeformparams_t_t {
        float m_fl_tension_compress_scale;
        float m_fl_tension_stretch_scale;
        bool m_b_recompute_smooth_normals_after_animation;
        bool m_b_compute_dynamic_mesh_tension_after_animation;
        bool m_b_smooth_normals_across_uv_seams;
        bool m_b_enable_eye_bulge_deformation;
    };

    struct cnmtimeconditionnode__cdefinition_t {
        int16_t m_source_state_node_idx;
        int16_t m_n_input_value_node_idx;
        float m_fl_comparand;
        CNmTimeConditionNode_ComparisonType_t m_type;
        CNmTimeConditionNode_Operator_t m_operator;
    };

    struct cnmsynceventindexconditionnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmSyncEventIndexConditionNode_TriggerMode_t m_trigger_mode;
        int32_t m_sync_event_idx;
    };

    struct canimstatemachineupdater_t {
        CUtlVector_CStateUpdateData_ m_states;
        CUtlVector_CTransitionUpdateData_ m_transitions;
        int32_t m_start_state_index;
    };

    struct cunaryupdatenode_t {
        CAnimUpdateNodeRef m_p_child_node;
    };

    struct cnmidtofloatnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        float m_default_value;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_5_ m_ids;
        CUtlLeanVectorFixedGrowable_float_5_ m_values;
    };

    struct playerinputmotorinstancedata_t_t {
        vector3d_t m_v_input_vector_ws;
        vector3d_t m_v_velocity_ws;
        vector3d_t m_v_acceleration_ws;
    };

    struct cselectorupdatenode_t {
        CUtlVector_CAnimUpdateNodeRef_ m_children;
        CUtlVector_int8_t_ m_tags;
        CBlendCurve m_blend_curve;
        CAnimValue_float_ m_fl_blend_time;
        CAnimParamHandle m_h_parameter;
        int32_t m_n_tag_index;
        SelectorTagBehavior_t m_e_tag_behavior;
        bool m_b_reset_on_change;
        bool m_b_lock_when_waning;
        bool m_b_sync_cycles_on_change;
    };

    struct nmpercent_t_t {
        float m_fl_value;
    };

    struct cstatemachinecomponentupdater_t {
        CAnimStateMachineUpdater m_state_machine;
    };

    struct canimupdatenoderef_t {
        int32_t m_node_index;
    };

    struct cpulse_outputconnection_t {
        PulseSymbol_t m_source_output;
        PulseSymbol_t m_target_entity;
        PulseSymbol_t m_target_input;
        PulseSymbol_t m_param;
    };

    struct cphyssurfaceproperties_t {
        CUtlString m_name;
        uint32_t m_name_hash;
        uint32_t m_base_name_hash;
        bool m_b_hidden;
        CUtlString m_description;
        CPhysSurfacePropertiesPhysics m_physics;
        CPhysSurfacePropertiesVehicle m_vehicle_params;
        CPhysSurfacePropertiesSoundNames m_audio_sounds;
        CPhysSurfacePropertiesAudio m_audio_params;
    };

    struct cseqposeparamdesc_t {
        CBufferString m_s_name;
        float m_fl_start;
        float m_fl_end;
        float m_fl_loop;
        bool m_b_looping;
    };

    struct cmodelconfigelement_setbodygroup_t {
        CGlobalSymbol m_group_name;
        int32_t m_n_choice;
    };

    struct canimmovement_t {
        int32_t endframe;
        int32_t motionflags;
        float v0;
        float v1;
        float angle;
        vector3d_t vector;
        vector3d_t position;
    };

    struct followattachmentdata_t {
        int32_t m_bone_index;
        AttachmentHandle_t m_attachment_handle;
    };

    struct footsteptrigger_t {
        CUtlVector_int32_t_ m_tags;
        int32_t m_n_foot_index;
        StepPhase m_trigger_phase;
    };

    struct cnmsynctrack__eventmarker_t_t {
        NmPercent_t m_start_time;
        CGlobalSymbol m_id;
    };

    struct cpathmetricevaluator_t {
        CUtlVector_float_ m_path_time_samples;
        float m_fl_distance;
        bool m_b_extrapolate_movement;
        float m_fl_min_extrapolation_speed;
    };

    struct cfootlockupdatenode_t {
        FootLockPoseOpFixedSettings m_op_fixed_settings;
        CUtlVector_FootFixedSettings_ m_foot_settings;
        CAnimInputDamping m_hip_shift_damping;
        CAnimInputDamping m_root_height_damping;
        float m_fl_stride_curve_scale;
        float m_fl_stride_curve_limit_scale;
        float m_fl_step_height_increase_scale;
        float m_fl_step_height_decrease_scale;
        float m_fl_hip_shift_scale;
        float m_fl_blend_time;
        float m_fl_max_root_height_offset;
        float m_fl_min_root_height_offset;
        float m_fl_tilt_plane_pitch_spring_strength;
        float m_fl_tilt_plane_roll_spring_strength;
        bool m_b_apply_foot_rotation_limits;
        bool m_b_apply_hip_shift;
        bool m_b_modulate_step_height;
        bool m_b_reset_child;
        bool m_b_enable_vertical_curved_paths;
        bool m_b_enable_root_height_damping;
    };

    struct pulsegraphexecutionhistorynodedesc_t_t {
        CBufferString str_cell_desc;
        PulseSymbol_t str_binding_name;
    };

    struct jigglebonesettings_t_t {
        int32_t m_n_bone_index;
        float m_fl_spring_strength;
        float m_fl_max_time_step;
        float m_fl_damping;
        vector3d_t m_v_bounds_max_ls;
        vector3d_t m_v_bounds_min_ls;
        JiggleBoneSimSpace m_e_sim_space;
    };

    struct cjumphelperupdatenode_t {
        CAnimParamHandle m_h_target_param;
        vector3d_t m_fl_original_jump_movement;
        float m_fl_original_jump_duration;
        float m_fl_jump_start_cycle;
        float m_fl_jump_end_cycle;
        JumpCorrectionMethod m_e_correction_method;
        bool m_b_translation_axis;
        bool m_b_scale_speed;
    };

    struct footlockposeopfixedsettings_t {
        CUtlVector_FootFixedData_t_ m_foot_info;
        CAnimInputDamping m_hip_damping_settings;
        int32_t m_n_hip_bone_index;
        IKSolverType m_ik_solver_type;
        bool m_b_apply_tilt;
        bool m_b_apply_hip_drop;
        bool m_b_always_use_fallback_hinge;
        bool m_b_apply_foot_rotation_limits;
        bool m_b_apply_leg_twist_limits;
        float m_fl_max_foot_height;
        float m_fl_extension_scale;
        float m_fl_max_leg_twist;
        bool m_b_enable_lock_breaking;
        float m_fl_lock_break_tolerance;
        float m_fl_lock_blend_time;
        bool m_b_enable_stretching;
        float m_fl_max_stretch_amount;
        float m_fl_stretch_extension_scale;
    };

    struct cbonevelocitymetricevaluator_t {
        int32_t m_n_bone_index;
    };

    struct cwarpsectionanimtag_t {
        bool m_b_warp_position;
        bool m_b_warp_orientation;
    };

    struct selectorinstancedata_t_t {
        CRelativeArray_float_ m_weights;
        CAnimNetVar_float_ m_current_index_start_time;
        int32_t m_current_index;
        int32_t m_previous_index;
    };

    struct cmodelconfigelement_randomcolor_t {
        CColorGradient m_gradient;
    };

    struct cfootmotion_t {
        CUtlVector_CFootStride_ m_strides;
        CUtlString m_name;
        bool m_b_additive;
    };

    struct cjiggleboneupdatenode_t {
        JiggleBoneSettingsList_t m_op_fixed_data;
    };

    struct cnmconstvectornode__cdefinition_t {
        vector3d_t m_value;
    };

    struct moodanimation_t_t {
        CModelAnimNameWithDeltas m_s_name;
        float m_fl_weight;
    };

    struct clodcomponentupdater_t {
        int32_t m_n_server_lod;
    };

    struct cnmistargetsetnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
    };

    struct cphyssurfacepropertiesvehicle_t {
        float m_wheel_drag;
        float m_wheel_friction_scale;
    };

    struct canimdatachanneldesc_t {
        CBufferString m_sz_channel_class;
        CBufferString m_sz_variable_name;
        int32_t m_n_flags;
        int32_t m_n_type;
        CBufferString m_sz_grouping;
        CBufferString m_sz_description;
        CUtlVector_CBufferString_ m_sz_element_name_array;
        CUtlVector_int32_t_ m_n_element_index_array;
        CUtlVector_uint32_t_ m_n_element_mask_array;
    };

    struct cnmparticleevent_t {
        CNmEventRelevance_t m_relevance;
        CNmParticleEvent_Type_t m_type;
        CNmEventTargetEntity_t m_target;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_particle_system;
        CUtlString m_tags;
        bool m_b_stop_immediately;
        bool m_b_detach_from_owner;
        bool m_b_play_end_cap;
        CUtlString m_attachment_point0;
        ParticleAttachment_t m_attachment_type0;
        CUtlString m_attachment_point1;
        ParticleAttachment_t m_attachment_type1;
        CUtlString m_config;
        CUtlString m_effect_for_config;
    };

    struct motionselection_t {
        NetVarConfigIndex m_n_config_index;
        CAnimNetVar_float_ m_fl_cycle_zero_time;
        CAnimNetVar_float_ m_fl_playback_speed;
        CAnimNetVar_float_ m_fl_start_time;
        int32_t m_n_sample;
    };

    struct cmorphrectdata_t {
        int16_t m_n_xleft_dst;
        int16_t m_n_ytop_dst;
        float m_fl_uwidth_src;
        float m_fl_vheight_src;
        CUtlVector_CMorphBundleData_ m_bundle_datas;
    };

    struct canimfoot_t {
        CUtlString m_name;
        vector3d_t m_v_ball_offset;
        vector3d_t m_v_heel_offset;
        int32_t m_ankle_bone_index;
        int32_t m_toe_bone_index;
    };

    struct cnmcachedvectornode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        NmCachedValueMode_t m_mode;
    };

    struct cnmstatenode__timedevent_t_t {
        CGlobalSymbol m_id;
        float m_fl_time_value_seconds;
        CNmStateNode_TimedEvent_t_Comparison_t m_comparision_operator;
    };

    struct cfootpositionmetricevaluator_t {
        CUtlVector_int32_t_ m_foot_indices;
        bool m_b_ignore_slope;
    };

    struct cparticlevariableref_t {
        CKV3MemberNameWithStorage m_variable_name;
        CPulseValueFullType m_variable_type;
    };

    struct cmoverinstancedata_t {
        float m_fl_damped_value;
        vector3d_t m_v_movement;
        CRotation m_rotation;
        CRotation m_target_orientation;
    };

    struct hsequence_t {
        int32_t m_value;
    };

    struct cdampedvalueupdateitem_t {
        CAnimInputDamping m_damping;
        CAnimParamHandle m_h_param_in;
        CAnimParamHandle m_h_param_out;
    };

    struct canimlocalhierarchy_t {
        CBufferString m_s_bone;
        CBufferString m_s_new_parent;
        int32_t m_n_start_frame;
        int32_t m_n_peak_frame;
        int32_t m_n_tail_frame;
        int32_t m_n_end_frame;
    };

    struct cblendupdatenode_t {
        CUtlVector_CAnimUpdateNodeRef_ m_children;
        CUtlVector_uint8_t_ m_sorted_order;
        CUtlVector_float_ m_target_values;
        AnimValueSource m_blend_value_source;
        LinearRootMotionBlendMode_t m_e_linear_root_motion_blend_mode;
        CAnimParamHandle m_param_index;
        CAnimInputDamping m_damping;
        BlendKeyType m_blend_key_type;
        bool m_b_lock_blend_on_reset;
        bool m_b_sync_cycles;
        bool m_b_loop;
        bool m_b_lock_when_waning;
        bool m_b_is_angle;
    };

    struct pulsegraphexecutionhistoryentry_t_t {
        PulseCursorID_t n_cursor_id;
        PulseDocNodeID_t n_editor_id;
        PulseSymbol_t seq_point;
        float fl_exec_time;
        uint32_t un_flags;
        PulseSymbol_t tag_name;
        PulseCursorID_t child_id;
    };

    struct cquaternionanimparameter_t {
        quaternion_t m_default_value;
        bool m_b_interpolate;
    };

    struct permmodeldata_t_t {
        CUtlString m_name;
        PermModelInfo_t m_model_info;
        CUtlVector_PermModelExtPart_t_ m_ext_parts;
        CUtlVector_CStrongHandle_InfoForResourceTypeCRenderMesh_ m_ref_meshes;
        CUtlVector_uint64_t_ m_ref_mesh_group_masks;
        CUtlVector_uint64_t_ m_ref_phys_group_masks;
        CUtlVector_uint8_t_ m_ref_lodgroup_masks;
        CUtlVector_float_ m_lod_group_switch_distances;
        CUtlVector_CStrongHandle_InfoForResourceTypeCPhysAggregateData_ m_ref_physics_data;
        CUtlVector_CStrongHandle_InfoForResourceTypeCPhysAggregateData_ m_ref_physics_hitbox_data;
        CUtlVector_CStrongHandle_InfoForResourceTypeCAnimationGroup_ m_ref_anim_groups;
        CUtlVector_CStrongHandle_InfoForResourceTypeCSequenceGroupData_ m_ref_sequence_groups;
        CUtlVector_CUtlString_ m_mesh_groups;
        CUtlVector_MaterialGroup_t_ m_material_groups;
        uint64_t m_n_default_mesh_group_mask;
        ModelSkeletonData_t m_model_skeleton;
        CUtlVector_int16_t_ m_remapping_table;
        CUtlVector_uint16_t_ m_remapping_table_starts;
        CUtlVector_ModelBoneFlexDriver_t_ m_bone_flex_drivers;
        CModelConfigList* m_p_model_config_list;
        CUtlVector_CUtlString_ m_body_groups_hidden_in_tools;
        CUtlVector_CStrongHandle_InfoForResourceTypeCModel_ m_ref_anim_include_models;
        CUtlVector_PermModelDataAnimatedMaterialAttribute_t_ m_animated_material_attributes;
        CUtlVector_ModelAnimGraph2Ref_t_ m_anim_graph2_refs;
        CUtlVector_CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_vec_nm_skeleton_refs;
    };

    struct pulsecursoryieldtoken_t_t {
        int32_t m_value;
    };

    struct cfollowpathinstancedata_t {
        CRelativeArray_CMotionTransform_ m_x_last_predicted_transforms_deltas;
        float m_damped_turn_value;
        float m_fl_turn_amount;
        CAnimNetVar_float_ m_fl_prediction_scale;
        float m_fl_last_path_time;
    };

    struct modelmeshbufferdata_t_t {
        int32_t m_n_block_index;
        uint32_t m_n_element_count;
        uint32_t m_n_element_size_in_bytes;
        bool m_b_meshopt_compressed;
        bool m_b_meshopt_index_sequence;
        int8_t m_n_meshopt_meshlet_encode_version;
        bool m_b_compressed_zstd;
        bool m_b_create_buffer_srv;
        bool m_b_create_buffer_uav;
        bool m_b_create_raw_buffer;
        bool m_b_create_pooled_buffer;
        uint16_t m_n_buffer_usage;
        CUtlVector_RenderInputLayoutField_t_ m_input_layout_fields;
    };

    struct csequencegroupdata_t {
        CBufferString m_s_name;
        uint32_t m_n_flags;
        CUtlVector_CBufferString_ m_local_sequence_name_array;
        CUtlVector_CSeqS1SeqDesc_ m_local_s1_seq_desc_array;
        CUtlVector_CSeqS1SeqDesc_ m_local_multi_seq_desc_array;
        CUtlVector_CSeqSynthAnimDesc_ m_local_synth_anim_desc_array;
        CUtlVector_CSeqCmdSeqDesc_ m_local_cmd_seq_desc_array;
        CUtlVector_CSeqBoneMaskList_ m_local_bone_mask_array;
        CUtlVector_CSeqScaleSet_ m_local_scale_set_array;
        CUtlVector_CBufferString_ m_local_bone_name_array;
        CBufferString m_local_node_name;
        CUtlVector_CSeqPoseParamDesc_ m_local_pose_param_array;
        KeyValues3 m_key_values;
        CUtlVector_CSeqIKLock_ m_local_ikautoplay_lock_array;
    };

    struct cstatemachineupdatenode_t {
        CAnimStateMachineUpdater m_state_machine;
        CUtlVector_CStateNodeStateData_ m_state_data;
        CUtlVector_CStateNodeTransitionData_ m_transition_data;
        bool m_b_block_waning_tags;
        bool m_b_lock_state_when_waning;
        bool m_b_reset_when_activated;
    };

    struct cnmidbasedselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_5_ m_option_ids;
        int16_t m_n_parameter_node_idx;
        int16_t m_n_fallback_node_idx;
        bool m_b_ignore_invalid_options;
    };

    struct caimmatrixupdatenode_t {
        AimMatrixOpFixedSettings_t m_op_fixed_settings;
        AnimVectorSource m_target;
        CAnimParamHandle m_param_index;
        HSequence m_h_sequence;
        bool m_b_reset_child;
        bool m_b_lock_when_waning;
    };

    struct skeletonanimcapture_t__frame_t_t {
        float m_fl_time;
        SkeletonAnimCapture_t_FrameStamp_t m_stamp;
        transform_t m_transform;
        bool m_b_teleport;
        CUtlVector_CTransform_ m_composite_bones;
        CUtlVector_CTransform_ m_sim_state_bones;
        CUtlVector_CTransform_ m_fe_model_anims;
        CUtlVector_VectorAligned_ m_fe_model_pos;
        CUtlVector_float_ m_flex_controller_weights;
    };

    struct cmodelconfigelement_command_t {
        CUtlString m_command;
        KeyValues3 m_args;
    };

    struct targetselectorinstancedata_t_t {
        CAnimNetVar_int32_t_ m_current_index;
        CAnimNetVar_Vector_ m_v_msroot_motion_anlyzer_target;
    };

    struct canimeventdefinition_t {
        int32_t m_n_frame;
        int32_t m_n_end_frame;
        float m_fl_cycle;
        float m_fl_duration;
        KeyValues3 m_event_data;
        CBufferString m_s_legacy_options;
        CGlobalSymbol m_s_event_name;
    };

    struct cnmrootmotiondata_t {
        CUtlVector_CTransform_ m_transforms;
        int32_t m_n_num_frames;
        float m_fl_average_linear_velocity;
        float m_fl_average_angular_velocity_radians;
        transform_t m_total_delta;
    };

    struct cpulsegraphexecutionhistory_t {
        PulseGraphInstanceID_t m_n_instance_id;
        CUtlString m_str_file_name;
        CUtlVector_PulseGraphExecutionHistoryEntry_t_ m_vec_history;
        CUtlOrderedMap_PulseDocNodeID_t_PulseGraphExecutionHistoryNodeDesc_t_ m_map_cell_desc;
        CUtlOrderedMap_PulseCursorID_t_PulseGraphExecutionHistoryCursorDesc_t_ m_map_cursor_desc;
    };

    struct animscripthandle_t {
        uint32_t m_id;
    };

    struct cflexop_t {
        FlexOpCode_t m_op_code;
        int32_t m_data;
    };

    struct chitreactupdatenode_t {
        HitReactFixedSettings_t m_op_fixed_settings;
        CAnimParamHandle m_trigger_param;
        CAnimParamHandle m_hit_bone_param;
        CAnimParamHandle m_hit_offset_param;
        CAnimParamHandle m_hit_direction_param;
        CAnimParamHandle m_hit_strength_param;
        float m_fl_min_delay_between_hits;
        bool m_b_reset_child;
    };

    struct clookatupdatenode_t {
        LookAtOpFixedSettings_t m_op_fixed_settings;
        AnimVectorSource m_target;
        CAnimParamHandle m_param_index;
        CAnimParamHandle m_weight_param_index;
        bool m_b_reset_child;
        bool m_b_lock_when_waning;
    };

    struct canimbone_t {
        CBufferString m_name;
        int32_t m_parent;
        vector3d_t m_pos;
        QuaternionStorage m_quat;
        float m_scale;
        QuaternionStorage m_q_alignment;
        int32_t m_flags;
    };

    struct canimparametermanagerupdater_t {
        CUtlVector_CSmartPtr_CAnimParameterBase_ m_parameters;
        CUtlHashtable_AnimParamID_int32_t_ m_id_to_index_map;
        CUtlHashtable_CUtlString_int32_t_ m_name_to_index_map;
        CUtlVector_CAnimParamHandle_ m_index_to_handle;
        CUtlVector_std_pair_CAnimParamHandle_CAnimVariant_ m_auto_reset_params;
        CUtlHashtable_CAnimParamHandle_int16_t_ m_auto_reset_map;
    };

    struct bonedemocapturesettings_t_t {
        CUtlString m_bone_name;
        float m_fl_error_spline_rotation_max;
        float m_fl_error_spline_translation_max;
        float m_fl_error_spline_scale_max;
        float m_fl_error_quantization_rotation_max;
        float m_fl_error_quantization_translation_max;
        float m_fl_error_quantization_scale_max;
    };

    struct pairedsequencedata_t {
        PairedSequence_t m_vec_paired_sequences;
    };

    struct cboneconstraintposespacemorph__input_t_t {
        vector3d_t m_input_value;
        CUtlVector_float_ m_output_weight_list;
    };

    struct moodanimationlayer_t_t {
        CUtlString m_s_name;
        bool m_b_active_listening;
        bool m_b_active_talking;
        CUtlVector_MoodAnimation_t_ m_layer_animations;
        CRangeFloat m_fl_intensity;
        CRangeFloat m_fl_duration_scale;
        bool m_b_scale_with_ints;
        CRangeFloat m_fl_next_start;
        CRangeFloat m_fl_start_offset;
        CRangeFloat m_fl_end_offset;
        float m_fl_fade_in;
        float m_fl_fade_out;
    };

    struct cspeedscaleupdatenode_t {
        CAnimParamHandle m_param_index;
    };

    struct csequencetagspans_t {
        CGlobalSymbol m_s_sequence_name;
        CUtlVector_TagSpan_t_ m_tags;
    };

    struct cmodelconfigelement_setbodygrouponattachedmodels_t {
        CUtlString m_group_name;
        int32_t m_n_choice;
    };

    struct canimreplayframe_t {
        CUtlVector_CUtlBinaryBlock_ m_input_data_blocks;
        CUtlBinaryBlock m_instance_data;
        transform_t m_starting_local_to_world_transform;
        transform_t m_local_to_world_transform;
        float m_time_stamp;
    };

    struct cnmtransitionevent_t {
        NmTransitionRule_t m_rule;
        CGlobalSymbol m_id;
    };

    struct cnmfloatcurveevent_t {
        CGlobalSymbol m_id;
        CPiecewiseCurve m_curve;
    };

    struct cparticletransforminput_t {
        ParticleTransformType_t m_n_type;
        CParticleNamedValueRef m_named_value;
        bool m_b_follow_named_value;
        bool m_b_supports_disabled;
        bool m_b_use_orientation;
        int32_t m_n_control_point;
        int32_t m_n_control_point_range_max;
        float m_fl_end_cpgrowth_time;
    };

    struct cpathanimmotorupdaterbase_t {
        bool m_b_lock_to_path;
    };

    struct pgdinstruction_t_t {
        PulseInstructionCode_t m_n_code;
        PulseRuntimeVarIndex_t m_n_var;
        PulseRuntimeRegisterIndex_t m_n_reg0;
        PulseRuntimeRegisterIndex_t m_n_reg1;
        PulseRuntimeRegisterIndex_t m_n_reg2;
        PulseRuntimeInvokeIndex_t m_n_invoke_binding_index;
        PulseRuntimeChunkIndex_t m_n_chunk;
        int32_t m_n_dest_instruction;
        PulseRuntimeCallInfoIndex_t m_n_call_info_index;
        PulseRuntimeConstantIndex_t m_n_const_idx;
        PulseRuntimeDomainValueIndex_t m_n_domain_value_idx;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference_idx;
        PulseRuntimeTempVarIndex_t m_n_temp_var_idx;
    };

    struct cnmfootstepeventpercentagethroughnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        NmFootPhaseCondition_t m_phase_condition;
        CNmBitFlags m_event_condition_rules;
    };

    struct aimcameraopfixedsettings_t_t {
        int32_t m_n_chain_index;
        int32_t m_n_camera_joint_index;
        int32_t m_n_pelvis_joint_index;
        int32_t m_n_clavicle_left_joint_index;
        int32_t m_n_clavicle_right_joint_index;
        int32_t m_n_depenetration_joint_index;
        CUtlVector_int32_t_ m_prop_joints;
    };

    struct skeletonanimcapture_t__camera_t_t {
        transform_t m_tm_camera;
        float m_fl_time;
    };

    struct cnmgrapheventconditionnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmBitFlags m_event_condition_rules;
        CUtlVectorFixedGrowable_CNmGraphEventConditionNode_Condition_t_5_ m_conditions;
    };

    struct cfollowattachmentupdatenode_t {
        FollowAttachmentSettings_t m_op_fixed_data;
    };

    struct cmovementcomponentupdater_t {
        CUtlVector_CSmartPtr_CAnimMotorUpdaterBase_ m_motors;
        CAnimInputDamping m_facing_damping;
        int32_t m_n_default_motor_index;
        float m_fl_default_run_speed;
        bool m_b_move_vars_disabled;
        bool m_b_network_path;
        bool m_b_network_facing;
        CAnimParamHandle m_param_handles;
    };

    struct cmodelconfigelement_setmaterialgroup_t {
        CUtlString m_material_group_name;
    };

    struct cfuturefacingmetricevaluator_t {
        float m_fl_distance;
        float m_fl_time;
    };

    struct cnmidbasedclipselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_5_ m_option_ids;
        int16_t m_n_parameter_node_idx;
        int16_t m_n_fallback_node_idx;
        bool m_b_ignore_invalid_options;
    };

    struct cleanmatrixinstancedata_t {
        float m_fl_value_y;
        float m_fl_value_x;
    };

    struct nmcompressionsettings_t_t {
        NmCompressionSettings_t_QuantizationRange_t m_translation_range_x;
        NmCompressionSettings_t_QuantizationRange_t m_translation_range_y;
        NmCompressionSettings_t_QuantizationRange_t m_translation_range_z;
        NmCompressionSettings_t_QuantizationRange_t m_scale_range;
        int32_t m_n_track_read_offset;
        quaternion_t m_constant_rotation;
        bool m_b_is_rotation_static;
        bool m_b_is_translation_static;
        bool m_b_is_scale_static;
    };

    struct cpulse_variable_t {
        PulseSymbol_t m_name;
        CUtlString m_description;
        CPulseValueFullType m_type;
        KeyValues3 m_default_value;
        PulseVariableKeysSource_t m_n_keys_source;
        bool m_b_is_public_blackboard_variable;
        bool m_b_is_observable;
        PulseDocNodeID_t m_n_editor_node_id;
        KeyValues3 m_metadata;
    };

    struct particle_ehandle___t {
        int32_t unused;
    };

    struct caddupdatenode_t {
        BinaryNodeChildOption m_foot_motion_timing;
        bool m_b_apply_to_foot_motion;
        bool m_b_apply_channels_separately;
        bool m_b_use_model_space;
        bool m_b_apply_scale;
    };

    struct canimenum_t {
        uint8_t m_value;
    };

    struct cdemosettingscomponentupdater_t {
        CAnimDemoCaptureSettings m_settings;
    };

    struct canimdecoder_t {
        CBufferString m_sz_name;
        int32_t m_n_version;
        int32_t m_n_type;
    };

    struct cnmcachedtargetnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        NmCachedValueMode_t m_mode;
    };

    struct cnmconstboolnode__cdefinition_t {
        bool m_b_value;
    };

    struct cnmbitflags_t {
        uint32_t m_flags;
    };

    struct cfootstride_t {
        CFootCycleDefinition m_definition;
        CFootTrajectories m_trajectories;
    };

    struct csceneobjectdata__rtproxydrawdescriptor_t_t {
        uint32_t m_material_group_token;
        int32_t m_n_src_draw_index;
        CMaterialDrawDescriptor m_draw_desc;
        matrix3x4_t m_m_world_from_local;
        VertexAlbedoFormat_t m_n_vertex_albedo_format;
        int8_t m_n_vertex_albedo_vb;
        uint16_t m_n_vertex_albedo_offset;
        uint16_t m_n_vertex_albedo_stride;
        VertexAlbedoFormat_t m_n_vertex_emissive_format;
        int8_t m_n_vertex_emissive_vb;
        uint16_t m_n_vertex_emissive_offset;
        uint16_t m_n_vertex_emissive_stride;
        float m_f_emissive_factor;
    };

    struct cnmlegacyevent_t {
        CUtlString m_anim_event_class_name;
        KeyValues3 m_kv;
    };

    struct cstatenodestatedata_t {
        CAnimUpdateNodeRef m_p_child;
        uint32_t m_b_exclusive_root_motion;
        uint32_t m_b_exclusive_root_motion_first_frame;
    };

    struct cfootsteplandedanimtag_t {
        FootstepLandedFootSoundType_t m_footstep_type;
        CUtlString m_override_sound_name;
        CUtlString m_debug_anim_source_string;
        CUtlString m_bone_name;
        FootstepJumpPhase_t m_footstep_jump_phase;
    };

    struct cenumanimparameter_t {
        uint8_t m_default_value;
        CUtlVector_CUtlString_ m_enum_options;
        CUtlVector_uint64_t_ m_vec_enum_referenced;
    };

    struct chandshakeanimtagbase_t {
        bool m_b_is_disable_tag;
    };

    struct animtagid_t {
        uint32_t m_id;
    };

    struct cwaypointhelperinstancedata_t {
        vector3d_t m_v_movement;
        QAngle m_v_rotation;
        vector3d_t m_v_waypoint_pos_ws;
        bool m_b_stop_updating_waypoint_pos;
    };

    struct canimframesegment_t {
        int32_t m_n_unique_frame_index;
        uint32_t m_n_local_element_masks;
        int32_t m_n_local_channel;
        CUtlBinaryBlock m_container;
    };

    struct cslopecomponentupdater_t {
        float m_fl_trace_distance;
        CAnimParamHandle m_h_slope_angle;
        CAnimParamHandle m_h_slope_angle_front;
        CAnimParamHandle m_h_slope_angle_side;
        CAnimParamHandle m_h_slope_heading;
        CAnimParamHandle m_h_slope_normal;
        CAnimParamHandle m_h_slope_normal_world_space;
    };

    struct caniminputdamping_t {
        DampingSpeedFunction m_speed_function;
        float m_f_speed_scale;
        float m_f_falling_speed_scale;
    };

    struct chitboxset_t {
        CUtlString m_name;
        uint32_t m_n_name_hash;
        CUtlVector_CHitBox_ m_hit_boxes;
        CUtlString m_source_filename;
    };

    struct chaintosolvedata_t_t {
        int32_t m_n_chain_index;
        IKSolverSettings_t m_solver_settings;
        IKTargetSettings_t m_target_settings;
        SolveIKChainAnimNodeDebugSetting m_debug_setting;
        float m_fl_debug_normalized_value;
        VectorAligned m_v_debug_offset;
    };

    struct cconstraintslave_t {
        quaternion_t m_q_base_orientation;
        vector3d_t m_v_base_position;
        uint32_t m_n_bone_hash;
        float m_fl_weight;
        CUtlString m_s_name;
    };

    struct pulseruntimeoutputindex_t_t {
        int32_t m_value;
    };

    struct cfootcycledefinition_t {
        vector3d_t m_v_stance_position_ms;
        vector3d_t m_v_midpoint_position_ms;
        float m_fl_stance_direction_ms;
        vector3d_t m_v_to_stride_start_pos;
        CAnimCycle m_stance_cycle;
        CFootCycle m_foot_lift_cycle;
        CFootCycle m_foot_off_cycle;
        CFootCycle m_foot_strike_cycle;
        CFootCycle m_foot_land_cycle;
    };

    struct cvirtualanimparameter_t {
        CUtlString m_expression_string;
        AnimParamType_t m_e_param_type;
    };

    struct cmotionmetricevaluator_t {
        CUtlVector_float_ m_means;
        CUtlVector_float_ m_standard_deviations;
        float m_fl_weight;
        int32_t m_n_dimension_start_index;
    };

    struct cfuturevelocitymetricevaluator_t {
        float m_fl_distance;
        float m_fl_stopping_distance;
        float m_fl_target_speed;
        VelocityMetricMode m_e_mode;
    };

    struct cnmskeleton__secondaryskeleton_t_t {
        CGlobalSymbol m_attach_to_bone_id;
        CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_skeleton;
    };

    struct canimupdatenodebase_t {
        CAnimNodePath m_node_path;
        AnimNodeNetworkMode m_network_mode;
        CUtlString m_name;
    };

    struct csetparameteractionupdater_t {
        CAnimParamHandle m_h_param;
        CAnimVariant m_value;
    };

    struct cnmfixedweightbonemasknode__cdefinition_t {
        float m_fl_bone_weight;
    };

    struct skeletonanimcapture_t__framestamp_t_t {
        float m_fl_time;
        float m_fl_entity_sim_time;
        bool m_b_teleport_tick;
        bool m_b_predicted;
        float m_fl_cur_time;
        float m_fl_real_time;
        int32_t m_n_frame_count;
        int32_t m_n_tick_count;
    };

    struct cpulse_domainvalue_t {
        PulseDomainValueType_t m_n_type;
        CGlobalSymbolCaseSensitive m_value;
        CPulseValueFullType m_required_runtime_type;
    };

    struct cbonepositionmetricevaluator_t {
        int32_t m_n_bone_index;
    };

    struct crenderbufferbinding_t {
        uint64_t m_h_buffer;
        uint32_t m_n_bind_offset_bytes;
    };

    struct cnmparameterizedblendnode__parameterization_t_t {
        CUtlLeanVectorFixedGrowable_CNmParameterizedBlendNode_BlendRange_t_5_ m_blend_ranges;
        Range_t m_parameter_range;
    };

    struct cnmentityattributeintevent_t {
        int32_t m_n_int_value;
    };

    struct cnmnotnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
    };

    struct cmeshletdescriptor_t {
        PackedAABB_t m_packed_aabb;
        CDrawCullingData m_culling_data;
        uint32_t m_n_vertex_offset;
        uint32_t m_n_triangle_offset;
        uint8_t m_n_vertex_count;
        uint8_t m_n_triangle_count;
        uint16_t m_n_bone_index;
    };

    struct cmorphsetdata_t {
        int32_t m_n_width;
        int32_t m_n_height;
        CUtlVector_MorphBundleType_t_ m_bundle_types;
        CUtlVector_CMorphData_ m_morph_datas;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_atlas;
        CUtlVector_CFlexDesc_ m_flex_desc;
        CUtlVector_CFlexController_ m_flex_controllers;
        CUtlVector_CFlexRule_ m_flex_rules;
    };

    struct cnmandnode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_4_ m_condition_node_indices;
    };

    struct cmorphconstraint_t {
        CUtlString m_s_target_morph;
        int32_t m_n_slave_channel;
        float m_fl_min;
        float m_fl_max;
    };

    struct cclothsettingsanimtag_t {
        float m_fl_stiffness;
        float m_fl_ease_in;
        float m_fl_ease_out;
        CUtlString m_n_vertex_set;
    };

    struct canimdesc_flag_t {
        bool m_b_looping;
        bool m_b_all_zeros;
        bool m_b_hidden;
        bool m_b_delta;
        bool m_b_legacy_worldspace;
        bool m_b_model_doc;
        bool m_b_implicit_seq_ignore_delta;
        bool m_b_anim_graph_additive;
    };

    struct cnmblend2dnode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_source_node_indices;
        CUtlLeanVectorFixedGrowable_Vector2D_10_ m_values;
        CUtlLeanVectorFixedGrowable_uint8_t_30_ m_indices;
        CUtlLeanVectorFixedGrowable_uint8_t_10_ m_hull_indices;
        int16_t m_n_input_parameter_node_idx0;
        int16_t m_n_input_parameter_node_idx1;
        bool m_b_allow_looping;
    };

    struct cnmfloatchanneldata__channelsettings_t_t {
        NmCompressionSettings_t_QuantizationRange_t m_range;
        bool m_b_is_static;
    };

    struct cblendcurve_t {
        float m_fl_control_point1;
        float m_fl_control_point2;
    };

    struct cnmskeleton__contactconfig_t_t {
        CGlobalSymbol m_id;
        int32_t m_n_bone_idx;
        vector3d_t m_v_bone_local_probe_dir;
        float m_fl_probe_max_dist;
        NmContactAudioInfo_t m_audio_info;
    };

    struct cnmgraphnode__cdefinition_t {
        int16_t m_n_node_idx;
    };

    struct canimationgraphvisualizersphere_t {
        VectorAligned m_v_ws_position;
        float m_fl_radius;
        color_t m_color;
    };

    struct cnmclip__modelspacesamplingchainlink_t_t {
        int32_t m_n_bone_idx;
        int32_t m_n_parent_bone_idx;
        int32_t m_n_parent_chain_link_idx;
    };

    struct canimuserdifference_t {
        CBufferString m_name;
        int32_t m_n_type;
    };

    struct ctransitionupdatedata_t {
        uint8_t m_src_state_index;
        uint8_t m_dest_state_index;
        uint32_t m_n_handshake_mask_to_disable_first;
        uint32_t m_b_disabled;
    };

    struct pulseruntimeblackboardreferenceindex_t_t {
        int16_t m_value;
    };

    struct cnmcontactevent_t {
        CGlobalSymbol m_config_id;
        CGlobalSymbol m_probe_bone_id;
        vector3d_t m_v_bone_local_probe_dir;
        float m_fl_probe_max_dist;
        NmContactAudioInfo_t m_audio_info;
    };

    struct cboneconstraintposespacebone__input_t_t {
        vector3d_t m_input_value;
        CUtlVector_CTransform_ m_output_transform_list;
    };

    struct cseqmultifetch_t {
        CSeqMultiFetchFlag m_flags;
        CUtlVector_int16_t_ m_local_reference_array;
        int32_t m_n_group_size;
        int32_t m_n_local_pose;
        CUtlVector_float_ m_pose_key_array0;
        CUtlVector_float_ m_pose_key_array1;
        int32_t m_n_local_cycle_pose_parameter;
        bool m_b_calculate_pose_parameters;
        bool m_b_fixed_blend_weight;
        float m_fl_fixed_blend_weight_vals;
    };

    struct cphyssurfacepropertiessoundnames_t {
        CUtlString m_impact_soft;
        CUtlString m_impact_hard;
        CUtlString m_scrape_smooth;
        CUtlString m_scrape_rough;
        CUtlString m_bullet_impact;
        CUtlString m_rolling;
        CUtlString m_break;
        CUtlString m_strain;
        CUtlString m_melee_impact;
        CUtlString m_push_off;
        CUtlString m_skid_stop;
        CUtlString m_resonant;
    };

    struct nmbonemasksetdefinition_t_t {
        CGlobalSymbol m_id;
        CNmBoneWeightList m_primary_weight_list;
        CUtlLeanVector_CNmBoneWeightList_ m_secondary_weight_lists;
    };

    struct caudioanimtag_t {
        CUtlString m_clip_name;
        CUtlString m_attachment_name;
        float m_fl_volume;
        bool m_b_stop_when_tag_ends;
        bool m_b_stop_when_graph_ends;
        bool m_b_play_on_server;
        bool m_b_play_on_client;
    };

    struct cturnhelperupdatenode_t {
        AnimValueSource m_facing_target;
        float m_turn_start_time_offset;
        float m_turn_duration;
        bool m_b_match_child_duration;
        float m_manual_turn_offset;
        bool m_b_use_manual_turn_offset;
    };

    struct canimationgroup_t {
        uint32_t m_n_flags;
        CBufferString m_name;
        CUtlVector_CStrongHandle_InfoForResourceTypeCAnimData_ m_local_hanim_array_handle;
        CUtlVector_CStrongHandle_InfoForResourceTypeCAnimationGroup_ m_included_group_array_handle;
        CStrongHandle_InfoForResourceTypeCSequenceGroupData_ m_direct_hseq_group_handle;
        CAnimKeyData m_decode_key;
        CUtlVector_CBufferString_ m_sz_scripts;
        CUtlVector_CStrongHandleVoid_ m_additional_ext_refs;
    };

    struct cpulse_tempvarinfo_t {
        PulseSymbol_t m_name;
        CPulseValueFullType m_type;
        PulseDocNodeID_t m_n_editor_node_id;
        bool m_b_is_observable;
    };

    struct nmcontactaudioinfo_t_t {
        CGlobalSymbol m_audio_action_id;
        CGlobalSymbol m_audio_type_id;
        CGlobalSymbol m_soundevent_override_id;
    };

    struct nmsynctracktime_t_t {
        int32_t m_n_event_idx;
        NmPercent_t m_percentage_through;
    };

    struct cnmclip_t {
        CStrongHandle_InfoForResourceTypeCNmSkeleton_ m_skeleton;
        uint32_t m_n_num_frames;
        float m_fl_duration;
        CUtlBinaryBlock m_compressed_pose_data;
        CUtlVector_NmCompressionSettings_t_ m_track_compression_settings;
        CUtlVector_uint32_t_ m_compressed_pose_offsets;
        CUtlVectorFixedGrowable_CNmClip_1_ m_secondary_animations;
        CUtlVectorFixedGrowable_CNmFloatChannelData_2_ m_float_channel_data;
        CNmSyncTrack m_sync_track;
        CNmRootMotionData m_root_motion;
        bool m_b_is_additive;
        CUtlVector_CNmClip_ModelSpaceSamplingChainLink_t_ m_model_space_sampling_chain;
        CUtlVector_int32_t_ m_model_space_bone_sampling_indices;
    };

    struct ctogglecomponentactionupdater_t {
        AnimComponentID m_component_id;
        bool m_b_set_enabled;
    };

    struct cnmspeedscalebasenode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        float m_fl_default_input_value;
    };

    struct canimationgraphvisualizerprimitivebase_t {
        CAnimationGraphVisualizerPrimitiveType m_type;
        AnimNodeID m_owning_anim_node_paths;
        int32_t m_n_owning_anim_node_path_count;
    };

    struct nmsynctracktimerange_t_t {
        NmSyncTrackTime_t m_start_time;
        NmSyncTrackTime_t m_end_time;
    };

    struct canimationgraphvisualizertext_t {
        VectorAligned m_v_ws_position;
        color_t m_color;
        CUtlString m_text;
    };

    struct cfoottrajectory_t {
        vector3d_t m_v_offset;
        float m_fl_rotation_offset;
        float m_fl_progression;
    };

    struct cmotionmatchingupdatenode_t {
        CMotionDataSet m_data_set;
        CUtlVector_CSmartPtr_CMotionMetricEvaluator_ m_metrics;
        CUtlVector_float_ m_weights;
        bool m_b_search_every_tick;
        float m_fl_search_interval;
        bool m_b_search_when_clip_ends;
        bool m_b_search_when_goal_changes;
        CBlendCurve m_blend_curve;
        float m_fl_sample_rate;
        float m_fl_blend_time;
        bool m_b_lock_clip_when_waning;
        float m_fl_selection_threshold;
        float m_fl_reselection_time_window;
        bool m_b_enable_rotation_correction;
        bool m_b_goal_assist;
        float m_fl_goal_assist_distance;
        float m_fl_goal_assist_tolerance;
        CAnimInputDamping m_distance_scale_damping;
        float m_fl_distance_scale_outer_radius;
        float m_fl_distance_scale_inner_radius;
        float m_fl_distance_scale_max_scale;
        float m_fl_distance_scale_min_scale;
        bool m_b_enable_distance_scaling;
    };

    struct cseqs1seqdesc_t {
        CBufferString m_s_name;
        CSeqSeqDescFlag m_flags;
        CSeqMultiFetch m_fetch;
        int32_t m_n_local_weightlist;
        CUtlVector_CSeqAutoLayer_ m_auto_layer_array;
        CUtlVector_CSeqIKLock_ m_iklock_array;
        CSeqTransition m_transition;
        KeyValues3 m_sequence_keys;
        CBufferString m_legacy_key_value_text;
        CUtlVector_CAnimActivity_ m_activity_array;
        CUtlVector_CFootMotion_ m_foot_motion;
    };

    struct cflexcontroller_t {
        CUtlString m_sz_name;
        CUtlString m_sz_type;
        float min;
        float max;
    };

    struct skeletondemodb_t_t {
        CUtlVector_SkeletonAnimCapture_t_ m_anim_captures;
        CUtlVector_SkeletonAnimCapture_t_Camera_t_ m_camera_track;
        float m_fl_recording_time;
    };

    struct cnmfloatrangecomparisonnode__cdefinition_t {
        Range_t m_range;
        int16_t m_n_input_value_node_idx;
        bool m_b_is_inclusive_check;
    };

    struct cmotionnodesequence_t {
        CUtlVector_TagSpan_t_ m_tags;
        HSequence m_h_sequence;
        float m_fl_playback_speed;
    };

    struct cnmtwoboneiknode__cdefinition_t {
        CGlobalSymbol m_effector_bone_id;
        int16_t m_n_effector_target_node_idx;
        int16_t m_n_enabled_node_idx;
        float m_fl_blend_time_seconds;
        NmIKBlendMode_t m_blend_mode;
        bool m_b_is_target_in_world_space;
        float m_fl_chain_rotation_weight;
    };

    struct cflexdesc_t {
        CUtlString m_sz_facs;
    };

    struct crendermesh_t {
        CUtlLeanVectorFixedGrowable_CSceneObjectData_1_ m_scene_objects;
        CUtlLeanVector_CBaseConstraint_ m_constraints;
        CRenderSkeleton m_skeleton;
        bool m_b_use_uv2_for_charting;
        bool m_b_embedded_map_mesh;
        DynamicMeshDeformParams_t m_mesh_deform_params;
        CRenderGroom* m_p_groom_data;
    };

    struct canimskeleton_t {
        CUtlVector_CTransform_ m_local_space_transforms;
        CUtlVector_CTransform_ m_model_space_transforms;
        CUtlVector_CUtlString_ m_bone_names;
        CUtlVector_CUtlVector_int32_t_ m_children;
        CUtlVector_int32_t_ m_parents;
        CUtlVector_CAnimFoot_ m_feet;
        CUtlVector_CUtlString_ m_morph_names;
        CUtlVector_int32_t_ m_lod_bone_counts;
    };

    struct pulseruntimeconstantindex_t_t {
        int16_t m_value;
    };

    struct cfootadjustmentinstancedata_t {
        CAnimNetVar_float_ m_fl_start_time;
        CAnimNetVar_float_ m_fl_duration;
        float m_fl_start_heading_ws;
    };

    struct cnmbodygroupnode__cdefinition_t {
        int16_t m_n_enabled_node_idx;
        CNmBodyGroupEvent m_event;
    };

    struct cnmtimecontrolledclipnode__cdefinition_t {
        int16_t m_n_play_in_reverse_value_node_idx;
        bool m_b_sample_root_motion;
        int16_t m_n_data_slot_idx;
        int16_t m_n_time_value_node_idx;
        CUtlVectorFixedGrowable_CGlobalSymbol_2_ m_graph_events;
    };

    struct vphysics2shapedef_t_t {
        CUtlLeanVector_RnSphereDesc_t_ m_spheres;
        CUtlLeanVector_RnCapsuleDesc_t_ m_capsules;
        CUtlLeanVector_RnHullDesc_t_ m_hulls;
        CUtlLeanVector_RnMeshDesc_t_ m_meshes;
        CUtlLeanVector_RnCompoundDesc_t_ m_compounds;
        CUtlVector_uint16_t_ m_collision_attribute_indices;
    };

    struct cnmfloatcurvenode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CPiecewiseCurve m_curve;
    };

    struct canimationgraphvisualizeraxis_t {
        transform_t m_x_ws_transform;
        float m_fl_axis_size;
    };

    struct ctwistconstraint_t {
        bool m_b_inverse;
        quaternion_t m_q_parent_bind_rotation;
        quaternion_t m_q_child_bind_rotation;
    };

    struct pulsedocnodeid_t_t {
        int32_t m_value;
    };

    struct modelboneflexdrivercontrol_t_t {
        ModelBoneFlexComponent_t m_n_bone_component;
        CUtlString m_flex_controller;
        uint32_t m_flex_controller_token;
        float m_fl_min;
        float m_fl_max;
    };

    struct cseqcmdlayer_t {
        int16_t m_cmd;
        int16_t m_n_local_reference;
        int16_t m_n_local_bonemask;
        int16_t m_n_dst_result;
        int16_t m_n_src_result;
        bool m_b_spline;
        float m_fl_var1;
        float m_fl_var2;
        int16_t m_n_line_number;
    };

    struct footpinningposeopfixeddata_t_t {
        CUtlVector_FootFixedData_t_ m_foot_info;
        float m_fl_blend_time;
        float m_fl_lock_break_distance;
        float m_fl_max_leg_twist;
        int32_t m_n_hip_bone_index;
        bool m_b_apply_leg_twist_limits;
        bool m_b_apply_foot_rotation_limits;
    };

    struct renderskeletonbone_t_t {
        CUtlString m_bone_name;
        CUtlString m_parent_name;
        matrix3x4_t m_inv_bind_pose;
        SkeletonBoneBounds_t m_bbox;
        float m_fl_sphere_radius;
    };

    struct cdistanceremainingmetricevaluator_t {
        float m_fl_max_distance;
        float m_fl_min_distance;
        float m_fl_start_goal_filter_distance;
        float m_fl_max_goal_overshoot_scale;
        bool m_b_filter_fixed_min_distance;
        bool m_b_filter_goal_distance;
        bool m_b_filter_goal_overshoot;
    };

    struct cdirectplaybackupdatenode_t {
        bool m_b_finish_early;
        bool m_b_reset_on_finish;
        CUtlVector_CDirectPlaybackTagData_ m_all_tags;
    };

    struct cnmidevent_t {
        CGlobalSymbol m_id;
        CGlobalSymbol m_secondary_id;
    };

    struct cflexrule_t {
        int32_t m_n_flex;
        CUtlVector_CFlexOp_ m_flex_ops;
    };

    struct scriptinfo_t_t {
        CUtlString m_code;
        CUtlVector_CAnimParamHandle_ m_params_modified;
        CUtlVector_int32_t_ m_proxy_read_params;
        CUtlVector_int32_t_ m_proxy_write_params;
        AnimScriptType m_e_script_type;
    };

    struct cboneconstraintrbf_t {
        CUtlVector_std_pair_CUtlString_uint32_t_ m_input_bones;
        CUtlVector_std_pair_CUtlString_uint32_t_ m_output_bones;
    };

    struct cnetworkedcycle_t {
        float m_fl_cycle_unclamped;
        float m_fl_prev_cycle_unclamped;
        CAnimNetVar_float_ m_fl_cycles_per_second;
        CAnimNetVar_float_ m_fl_cycle_zero_time;
        CAnimNetVar_uint8_t_ m_reset_count;
    };

    struct cnmsoundevent_t {
        CNmEventRelevance_t m_relevance;
        CUtlString m_name;
        CNmSoundEvent_Position_t m_position;
        CUtlString m_attachment_name;
        CUtlString m_tags;
        bool m_b_continue_playing_sound_at_duration_end;
        float m_fl_duration_interruption_threshold;
    };

    struct crendergroom_t {
        CUtlVector_RenderHairStrandInfo_t_ m_hairs;
        CUtlVector_uint32_t_ m_hair_position_offsets;
        CStrongHandleCopyable_InfoForResourceTypeIMaterial2_ m_h_sim_params_mat;
        CUtlVector_int32_t_ m_strand_segment_count_hist;
        int32_t m_n_max_segments_per_hair_strand;
        int32_t m_n_guide_hair_count;
        int32_t m_n_hair_count;
        int32_t m_n_total_vertex_count;
        int32_t m_n_total_segment_count;
        int32_t m_n_groom_group_id;
        int32_t m_n_attach_bone_idx;
        int32_t m_n_attach_mesh_idx;
        int32_t m_n_attach_mesh_draw_call_idx;
        bool m_b_enable_simulation;
    };

    struct cnmparameterizedclipselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_option_node_indices;
        CUtlLeanVectorFixedGrowable_uint8_t_8_ m_option_weights;
        int16_t m_parameter_node_idx;
        bool m_b_ignore_invalid_options;
        bool m_b_has_weights_set;
    };

    struct ctilttwistconstraint_t {
        int32_t m_n_target_axis;
        int32_t m_n_slave_axis;
    };

    struct cvphysxsurfacepropertieslist_t {
        CUtlVector_CPhysSurfaceProperties_ m_surface_properties_list;
    };

    struct cnmfloatspringnode__cdefinition_t {
        float m_fl_start_value;
        float m_fl_hertz;
        float m_fl_damping_ratio;
        int16_t m_n_input_value_node_idx;
        bool m_b_use_start_value;
    };

    struct renderhairstrandinfo_t_t {
        uint32_t m_n_guide_hair_indices_n_surface_tri_index;
        uint16_t m_v_guide_bary_v_base_bary;
        uint16_t m_v_root_offset_fl_length_scale;
        uint16_t m_n_packed_base_uv;
        uint32_t m_n_packed_surface_normal_os;
        uint32_t m_n_packed_surface_tangent_os;
        uint32_t m_n_data_offset_segments;
    };

    struct ccyclecontrolclipupdatenode_t {
        CUtlVector_TagSpan_t_ m_tags;
        HSequence m_h_sequence;
        float m_duration;
        AnimValueSource m_value_source;
        CAnimParamHandle m_param_index;
        bool m_b_lock_when_waning;
    };

    struct cnmtargetpointnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        bool m_b_is_world_space_target;
    };

    struct cnmtargetselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_8_ m_option_node_indices;
        float m_fl_orientation_score_weight;
        float m_fl_position_score_weight;
        int16_t m_parameter_node_idx;
        bool m_b_ignore_invalid_options;
        bool m_b_is_world_space_target;
        CGlobalSymbol m_alignment_bone_id;
    };

    struct cpulse_registerinfo_t {
        PulseRuntimeRegisterIndex_t m_n_reg;
        CPulseValueFullType m_type;
        CKV3MemberNameWithStorage m_origin_name;
        int32_t m_n_written_by_instruction;
        int32_t m_n_last_read_by_instruction;
    };

    struct cstaticposecache_t {
        CUtlVector_CCachedPose_ m_poses;
        int32_t m_n_bone_count;
        int32_t m_n_morph_count;
    };

    struct lookatopfixedsettings_t_t {
        CAnimAttachment m_attachment;
        CAnimInputDamping m_damping;
        CUtlVector_LookAtBone_t_ m_bones;
        float m_fl_yaw_limit;
        float m_fl_pitch_limit;
        float m_fl_hysteresis_inner_angle;
        float m_fl_hysteresis_outer_angle;
        bool m_b_rotate_yaw_forward;
        bool m_b_maintain_up_direction;
        bool m_b_target_is_position;
        bool m_b_use_hysteresis;
    };

    struct crootmotion_t {
        CMotionTransform m_delta_transform;
        vector3d_t m_v_velocity_ms;
        vector3d_t m_v_up_override;
    };

    struct canimgraphsettingsmanager_t {
        CUtlVector_CSmartPtr_CAnimGraphSettingsGroup_ m_settings_groups;
    };

    struct canimgraphmodelbinding_t {
        CUtlString m_model_name;
        CSmartPtr_CAnimUpdateSharedData_ m_p_shared_data;
    };

    struct cboneconstraintposespacebone_t {
        CUtlVector_CBoneConstraintPoseSpaceBone_Input_t_ m_input_list;
    };

    struct cnmtwoboneiktask_t {
        int32_t m_n_effector_bone_idx;
        int32_t m_n_effector_target_bone_idx;
        transform_t m_target_transform;
    };

    struct motionblenditem_t {
        CSmartPtr_CMotionNode_ m_p_child;
        float m_fl_key_value;
    };

    struct cboneconstraintposespacemorph_t {
        CUtlString m_s_bone_name;
        CUtlString m_s_attachment_name;
        CUtlVector_CUtlString_ m_output_morph;
        CUtlVector_CBoneConstraintPoseSpaceMorph_Input_t_ m_input_list;
        bool m_b_clamp;
    };

    struct cfloatanimparameter_t {
        float m_f_default_value;
        float m_f_min_value;
        float m_f_max_value;
        bool m_b_interpolate;
    };

    struct cstateactionupdater_t {
        CSmartPtr_CAnimActionUpdater_ m_p_action;
        StateActionBehavior m_e_behavior;
    };

    struct cplayerinputanimmotorupdater_t {
        CUtlVector_float_ m_sample_times;
        float m_fl_spring_constant;
        float m_fl_anticipation_distance;
        CAnimParamHandle m_h_anticipation_pos_param;
        CAnimParamHandle m_h_anticipation_heading_param;
        bool m_b_use_acceleration;
    };

    struct crenderskeleton_t {
        CUtlVector_RenderSkeletonBone_t_ m_bones;
        CUtlVector_int32_t_ m_bone_parents;
        int32_t m_n_bone_weight_count;
    };

    struct cseqiklock_t {
        float m_fl_pos_weight;
        float m_fl_angle_weight;
        int16_t m_n_local_bone;
        bool m_b_bones_oriented_along_positive_x;
    };

    struct canimparamhandlemap_t {
        CUtlHashtable_uint16_t_int16_t_ m_list;
    };

    struct cnmfloatclampnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        Range_t m_clamp_range;
    };

    struct pulseruntimecellindex_t_t {
        int32_t m_value;
    };

    struct cnmexternalposenode__cdefinition_t {
        bool m_b_should_sample_root_motion;
    };

    struct canimdesc_t {
        CBufferString m_name;
        CAnimDesc_Flag m_flags;
        float fps;
        CAnimEncodedFrames m_data;
        CUtlVector_CAnimMovement_ m_movement_array;
        transform_t m_x_initial_offset;
        CUtlVector_CAnimEventDefinition_ m_event_array;
        CUtlVector_CAnimActivity_ m_activity_array;
        CUtlVector_CAnimLocalHierarchy_ m_hierarchy_array;
        float framestalltime;
        vector3d_t m_vec_root_min;
        vector3d_t m_vec_root_max;
        CUtlVector_Vector_ m_vec_bone_world_min;
        CUtlVector_Vector_ m_vec_bone_world_max;
        CAnimSequenceParams m_sequence_params;
    };

    struct cnmrootmotionoverridenode__cdefinition_t {
        int16_t m_desired_moving_velocity_node_idx;
        int16_t m_desired_facing_direction_node_idx;
        int16_t m_linear_velocity_limit_node_idx;
        int16_t m_angular_velocity_limit_node_idx;
        int16_t m_enabled_node_idx;
        float m_max_linear_velocity;
        float m_max_angular_velocity_radians;
        CNmBitFlags m_override_flags;
    };

    struct cnmtargetwarpnode__cdefinition_t {
        int16_t m_n_clip_reference_node_idx;
        int16_t m_n_target_value_node_idx;
        CNmRootMotionData_SamplingMode_t m_sampling_mode;
        CNmTargetWarpNode_TargetUpdateRule_t m_target_update_rule;
        bool m_b_align_with_target_at_last_warp_event;
        float m_fl_sampling_position_error_threshold_sq;
        float m_fl_max_tangent_length;
        float m_fl_lerp_fallback_distance_threshold;
        float m_fl_target_update_distance_threshold;
        float m_fl_target_update_angle_threshold_radians;
        CGlobalSymbol m_alignment_bone_id;
    };

    struct cphyssurfacepropertiesphysics_t {
        float m_friction;
        float m_elasticity;
        float m_density;
        float m_thickness;
        float m_soft_contact_frequency;
        float m_soft_contact_damping_ratio;
    };

    struct canimationgraphvisualizerpie_t {
        VectorAligned m_v_ws_center;
        VectorAligned m_v_ws_start;
        VectorAligned m_v_ws_end;
        color_t m_color;
    };

    struct nmfloatcurvecompressionsettings_t_t {
        NmCompressionSettings_t_QuantizationRange_t m_range;
        bool m_b_is_static;
    };

    struct cboneconstraintdottomorph_t {
        CUtlString m_s_bone_name;
        CUtlString m_s_target_bone_name;
        CUtlString m_s_morph_channel_name;
        float m_fl_remap;
    };

    struct tracesettings_t_t {
        float m_fl_trace_height;
        float m_fl_trace_radius;
    };

    struct paramspansample_t_t {
        CAnimVariant m_value;
        float m_fl_cycle;
    };

    struct vphysxconstraintparams_t_t {
        int8_t m_n_type;
        int8_t m_n_translate_motion;
        int8_t m_n_rotate_motion;
        int8_t m_n_flags;
        Vector m_anchor;
        QuaternionStorage m_axes;
        float m_max_force;
        float m_max_torque;
        float m_linear_limit_value;
        float m_linear_limit_restitution;
        float m_linear_limit_spring;
        float m_linear_limit_damping;
        float m_twist_low_limit_value;
        float m_twist_low_limit_restitution;
        float m_twist_low_limit_spring;
        float m_twist_low_limit_damping;
        float m_twist_high_limit_value;
        float m_twist_high_limit_restitution;
        float m_twist_high_limit_spring;
        float m_twist_high_limit_damping;
        float m_swing1_limit_value;
        float m_swing1_limit_restitution;
        float m_swing1_limit_spring;
        float m_swing1_limit_damping;
        float m_swing2_limit_value;
        float m_swing2_limit_restitution;
        float m_swing2_limit_spring;
        float m_swing2_limit_damping;
        vector3d_t m_goal_position;
        QuaternionStorage m_goal_orientation;
        vector3d_t m_goal_angular_velocity;
        float m_drive_spring_x;
        float m_drive_spring_y;
        float m_drive_spring_z;
        float m_drive_damping_x;
        float m_drive_damping_y;
        float m_drive_damping_z;
        float m_drive_spring_twist;
        float m_drive_spring_swing;
        float m_drive_spring_slerp;
        float m_drive_damping_twist;
        float m_drive_damping_swing;
        float m_drive_damping_slerp;
        int32_t m_solver_iteration_count;
        float m_projection_linear_tolerance;
        float m_projection_angular_tolerance;
    };

    struct cnmfloatcomparisonnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        int16_t m_n_comparand_value_node_idx;
        CNmFloatComparisonNode_Comparison_t m_comparison;
        float m_fl_epsilon;
        float m_fl_comparison_value;
    };

    struct cstateupdatedata_t {
        CUtlString m_name;
        AnimScriptHandle m_h_script;
        CUtlVector_int32_t_ m_transition_indices;
        CUtlVector_CStateActionUpdater_ m_actions;
        AnimStateID m_state_id;
        uint32_t m_b_is_start_state;
        uint32_t m_b_is_end_state;
        uint32_t m_b_is_passthrough;
        uint32_t m_b_is_passthrough_root_motion;
        uint32_t m_b_pre_evaluate_passthrough_transition_path;
    };

    struct cturnhelperinstancedata_t {
        float m_turn_amount;
        float m_turn_start_time;
        float m_duration;
    };

    struct ccycleclipinstancedata_t {
        CAnimNetVar_float_ m_fl_cycle;
        CAnimNetVar_float_ m_fl_prev_cycle;
    };

    struct pulseruntimetempvarbankindex_t_t {
        int16_t m_value;
    };

    struct cmoverupdatenode_t {
        CAnimInputDamping m_damping;
        AnimValueSource m_facing_target;
        CAnimParamHandle m_h_move_vec_param;
        CAnimParamHandle m_h_move_heading_param;
        CAnimParamHandle m_h_turn_to_face_param;
        float m_fl_turn_to_face_offset;
        float m_fl_turn_to_face_limit;
        bool m_b_additive;
        bool m_b_apply_movement;
        bool m_b_orient_movement;
        bool m_b_apply_rotation;
        bool m_b_limit_only;
    };

    struct cnmlayerblendnode__cdefinition_t {
        int16_t m_n_base_node_idx;
        bool m_b_only_sample_base_root_motion;
        CUtlLeanVectorFixedGrowable_CNmLayerBlendNode_LayerDefinition_t_3_ m_layer_definition;
    };

    struct cnmfootiknode__cdefinition_t {
        CGlobalSymbol m_left_effector_bone_id;
        CGlobalSymbol m_right_effector_bone_id;
        int16_t m_n_left_target_node_idx;
        int16_t m_n_right_target_node_idx;
        int16_t m_n_enabled_node_idx;
        float m_fl_blend_time_seconds;
        NmIKBlendMode_t m_blend_mode;
        bool m_b_is_target_in_world_space;
    };

    struct canimmotorupdaterbase_t {
        CUtlString m_name;
        bool m_b_default;
    };

    struct jigglebonesettingslist_t_t {
        CUtlVector_JiggleBoneSettings_t_ m_bone_settings;
    };

    struct csubtractupdatenode_t {
        BinaryNodeChildOption m_foot_motion_timing;
        bool m_b_apply_to_foot_motion;
        bool m_b_apply_channels_separately;
        bool m_b_use_model_space;
    };

    struct pulsegraphinstanceid_t_t {
        uint32_t m_value;
    };

    struct cnmfloatremapnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CNmFloatRemapNode_RemapRange_t m_input_range;
        CNmFloatRemapNode_RemapRange_t m_output_range;
    };

    struct cposehandle_t {
        uint16_t m_n_index;
        PoseType_t m_e_type;
    };

    struct cnmfootstepeventidnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmBitFlags m_event_condition_rules;
    };

    struct csolveikchainupdatenode_t {
        CUtlVector_CSolveIKTargetHandle_t_ m_target_handles;
        SolveIKChainPoseOpFixedSettings_t m_op_fixed_data;
    };

    struct cnmornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_4_ m_condition_node_indices;
    };

    struct cseqcmdseqdesc_t {
        CBufferString m_s_name;
        CSeqSeqDescFlag m_flags;
        CSeqTransition m_transition;
        int16_t m_n_frame_range_sequence;
        int16_t m_n_frame_count;
        float m_fl_fps;
        int16_t m_n_sub_cycles;
        int16_t m_num_local_results;
        CUtlVector_CSeqCmdLayer_ m_cmd_layer_array;
        CUtlVector_CAnimEventDefinition_ m_event_array;
        CUtlVector_CAnimActivity_ m_activity_array;
        CUtlVector_CSeqPoseSetting_ m_pose_setting_array;
    };

    struct cbonemaskupdatenode_t {
        int32_t m_n_weight_list_index;
        float m_fl_root_motion_blend;
        BoneMaskBlendSpace m_blend_space;
        BinaryNodeChildOption m_foot_motion_timing;
        bool m_b_use_blend_scale;
        AnimValueSource m_blend_value_source;
        CAnimParamHandle m_h_blend_parameter;
    };

    struct cpulse_constant_t {
        CPulseValueFullType m_type;
        KeyValues3 m_value;
    };

    struct cparticlefloatinput_t {
        ParticleFloatType_t m_n_type;
        ParticleFloatMapType_t m_n_map_type;
        float m_fl_literal_value;
        CParticleNamedValueRef m_named_value;
        int32_t m_n_control_point;
        ParticleAttributeIndex_t m_n_scalar_attribute;
        ParticleAttributeIndex_t m_n_vector_attribute;
        int32_t m_n_vector_component;
        bool m_b_reverse_order;
        float m_fl_random_min;
        float m_fl_random_max;
        bool m_b_has_random_sign_flip;
        int32_t m_n_random_seed;
        ParticleFloatRandomMode_t m_n_random_mode;
        CUtlString m_str_snapshot_subset;
        float m_fl_lod0;
        float m_fl_lod1;
        float m_fl_lod2;
        float m_fl_lod3;
        ParticleAttributeIndex_t m_n_noise_input_vector_attribute;
        float m_fl_noise_output_min;
        float m_fl_noise_output_max;
        float m_fl_noise_scale;
        vector3d_t m_vec_noise_offset_rate;
        float m_fl_noise_offset;
        int32_t m_n_noise_octaves;
        PFNoiseTurbulence_t m_n_noise_turbulence;
        PFNoiseType_t m_n_noise_type;
        PFNoiseModifier_t m_n_noise_modifier;
        float m_fl_noise_turbulence_scale;
        float m_fl_noise_turbulence_mix;
        float m_fl_noise_img_preview_scale;
        bool m_b_noise_img_preview_live;
        float m_fl_no_camera_fallback;
        bool m_b_use_bounds_center;
        ParticleFloatInputMode_t m_n_input_mode;
        float m_fl_mult_factor;
        float m_fl_input0;
        float m_fl_input1;
        float m_fl_output0;
        float m_fl_output1;
        float m_fl_notched_range_min;
        float m_fl_notched_range_max;
        float m_fl_notched_output_outside;
        float m_fl_notched_output_inside;
        ParticleFloatRoundType_t m_n_round_type;
        ParticleFloatBiasType_t m_n_bias_type;
        float m_fl_bias_parameter;
        CPiecewiseCurve m_curve;
        float m_fl_compare_value;
    };

    struct solveikchainposeopfixedsettings_t_t {
        CUtlVector_ChainToSolveData_t_ m_chains_to_solve_data;
    };

    struct cnmentityattributefloatevent_t {
        CPiecewiseCurve m_float_value;
    };

    struct cnmidselectornode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_int16_t_5_ m_condition_node_indices;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_5_ m_values;
        CGlobalSymbol m_default_value;
    };

    struct twoboneiksettings_t_t {
        IkEndEffectorType m_end_effector_type;
        CAnimAttachment m_end_effector_attachment;
        IkTargetType m_target_type;
        CAnimAttachment m_target_attachment;
        int32_t m_target_bone_index;
        CAnimParamHandle m_h_position_param;
        CAnimParamHandle m_h_rotation_param;
        bool m_b_always_use_fallback_hinge;
        VectorAligned m_v_ls_fallback_hinge_axis;
        int32_t m_n_fixed_bone_index;
        int32_t m_n_middle_bone_index;
        int32_t m_n_end_bone_index;
        bool m_b_match_target_orientation;
        bool m_b_constrain_twist;
        float m_fl_max_twist;
    };

    struct canimupdateshareddata_t {
        CUtlVector_CSmartPtr_CAnimUpdateNodeBase_ m_nodes;
        CUtlHashtable_CAnimNodePath_int32_t_ m_node_index_map;
        CUtlVector_CSmartPtr_CAnimComponentUpdater_ m_components;
        CSmartPtr_CAnimParameterManagerUpdater_ m_p_param_list_updater;
        CSmartPtr_CAnimTagManagerUpdater_ m_p_tag_manager_updater;
        CSmartPtr_CAnimScriptManager_ m_script_manager;
        CAnimGraphSettingsManager m_settings;
        CSmartPtr_CStaticPoseCacheBuilder_ m_p_static_pose_cache;
        CSmartPtr_CAnimSkeleton_ m_p_skeleton;
        CAnimNodePath m_root_node_path;
    };

    struct canimattachment_t {
        Quaternion m_influence_rotations;
        VectorAligned m_influence_offsets;
        int32_t m_influence_indices;
        float m_influence_weights;
        uint8_t m_num_influences;
    };

    struct cfoottrajectories_t {
        CUtlVector_CFootTrajectory_ m_trajectories;
    };

    struct cnmidcomparisonnode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
        CNmIDComparisonNode_Comparison_t m_comparison;
        CUtlLeanVectorFixedGrowable_CGlobalSymbol_4_ m_comparision_ids;
    };

    struct pairedsequence_t_t {
        CGlobalSymbol m_s_role;
        CGlobalSymbol m_s_sequence_name;
        CAnimNetVar_uint32_t_ m_h_sequence;
    };

    struct cnmconstfloatnode__cdefinition_t {
        float m_fl_value;
    };

    struct cboolanimparameter_t {
        bool m_b_default_value;
    };

    struct cragdollanimtag_t {
        CGlobalSymbol m_profile_name;
    };

    struct cmotionnode_t {
        CUtlString m_name;
        AnimNodeID m_id;
    };

    struct cnmstatemachinenode__cdefinition_t {
        CUtlLeanVectorFixedGrowable_CNmStateMachineNode_StateDefinition_t_5_ m_state_definitions;
        int16_t m_n_default_state_index;
    };

    struct cbodygroupanimtag_t {
        int32_t m_n_priority;
        CUtlVector_CBodyGroupSetting_ m_body_group_settings;
    };

    struct cnmorientationwarpnode__cdefinition_t {
        int16_t m_n_clip_reference_node_idx;
        int16_t m_n_target_value_node_idx;
        bool m_b_is_offset_node;
        bool m_b_is_offset_relative_to_character;
        bool m_b_warp_translation;
        CNmOrientationWarpNode_AlignmentMode_t m_alignment_mode;
        CNmRootMotionData_SamplingMode_t m_sampling_mode;
    };

    struct animparamid_t {
        uint32_t m_id;
    };

    struct cnmbonemasknode__cdefinition_t {
        CGlobalSymbol m_bone_mask_id;
    };

    struct modelanimgraph2ref_t_t {
        CUtlString m_s_identifier;
        CStrongHandle_InfoForResourceTypeCNmGraphDefinition_ m_h_graph;
    };

    struct animationdecodedebugdump_t_t {
        AnimationProcessingType_t m_processing_type;
        CUtlVector_AnimationDecodeDebugDumpElement_t_ m_elems;
    };

    struct cnmvirtualparameteridnode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct cseqscaleset_t {
        CBufferString m_s_name;
        bool m_b_root_offset;
        vector3d_t m_v_root_offset;
        CUtlVector_int16_t_ m_n_local_bone_array;
        CUtlVector_float_ m_fl_bone_scale_array;
    };

    struct pulseruntimecallinfoindex_t_t {
        int32_t m_value;
    };

    struct cdirectionalblendupdatenode_t {
        HSequence m_h_sequences;
        CAnimInputDamping m_damping;
        AnimValueSource m_blend_value_source;
        CAnimParamHandle m_param_index;
        float m_playback_speed;
        float m_duration;
        bool m_b_loop;
        bool m_b_lock_blend_on_reset;
    };

    struct cnmgraphdefinition__referencedgraphslot_t_t {
        int16_t m_n_node_idx;
        int16_t m_data_slot_idx;
    };

    struct paramspan_t_t {
        CUtlVector_ParamSpanSample_t_ m_samples;
        CAnimParamHandle m_h_param;
        AnimParamType_t m_e_param_type;
        float m_fl_start_cycle;
        float m_fl_end_cycle;
    };

    struct cfootsteptriggerupdatenode_t {
        CUtlVector_FootStepTrigger_ m_triggers;
        float m_fl_tolerance;
    };

    struct iktargetsettings_t_t {
        IKTargetSource m_target_source;
        IKBoneNameAndIndex_t m_bone;
        AnimParamID m_animgraph_parameter_name_position;
        AnimParamID m_animgraph_parameter_name_orientation;
        IKTargetCoordinateSystem m_target_coord_system;
    };

    struct cmodelconfigelement_setrendercolor_t {
        color_t m_color;
    };

    struct cnmanimationposenode__cdefinition_t {
        int16_t m_n_pose_time_value_node_idx;
        int16_t m_n_data_slot_idx;
        Range_t m_input_time_remap_range;
        float m_fl_user_specified_time;
        bool m_b_use_frames_as_input;
    };

    struct cmotionsearchdb_t {
        CMotionSearchNode m_root_node;
        CProductQuantizer m_residual_quantizer;
        CUtlVector_MotionDBIndex_ m_code_indices;
    };

    struct cmotionnodeblend1d_t {
        CUtlVector_MotionBlendItem_ m_blend_items;
        int32_t m_n_param_index;
    };

    struct cnmcurrentsynceventnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        CNmCurrentSyncEventNode_InfoType_t m_info_type;
    };

    struct skeletonbonebounds_t_t {
        vector3d_t m_vec_center;
        vector3d_t m_vec_size;
    };

    struct ctwoboneikupdatenode_t {
        TwoBoneIKSettings_t m_op_fixed_data;
    };

    struct vphysxbodypart_t_t {
        uint32_t m_n_flags;
        float m_fl_mass;
        VPhysics2ShapeDef_t m_rn_shape;
        uint16_t m_n_collision_attribute_index;
        uint16_t m_n_reserved;
        float m_fl_inertia_scale;
        float m_fl_linear_damping;
        float m_fl_angular_damping;
        float m_fl_linear_drag;
        float m_fl_angular_drag;
        bool m_b_override_mass_center;
        vector3d_t m_v_mass_center_override;
    };

    struct pulseruntimechunkindex_t_t {
        int32_t m_value;
    };

    struct cfollowpathupdatenode_t {
        float m_fl_blend_out_time;
        bool m_b_block_non_path_movement;
        bool m_b_stop_feet_at_goal;
        bool m_b_scale_speed;
        float m_fl_scale;
        float m_fl_min_angle;
        float m_fl_max_angle;
        float m_fl_speed_scale_blending;
        CAnimInputDamping m_turn_damping;
        AnimValueSource m_facing_target;
        CAnimParamHandle m_h_param;
        float m_fl_turn_to_face_offset;
        bool m_b_turn_to_face;
    };

    struct aimmatrixopfixedsettings_t_t {
        CAnimAttachment m_attachment;
        CAnimInputDamping m_damping;
        CPoseHandle m_pose_cache_handles;
        AimMatrixBlendMode m_e_blend_mode;
        float m_fl_max_yaw_angle;
        float m_fl_max_pitch_angle;
        int32_t m_n_sequence_max_frame;
        int32_t m_n_bone_mask_index;
        bool m_b_target_is_position;
        bool m_b_use_bias_and_clamp;
        float m_fl_bias_and_clamp_yaw_offset;
        float m_fl_bias_and_clamp_pitch_offset;
        CBlendCurve m_bias_and_clamp_blend_curve;
    };

    struct canimscriptcomponentupdater_t {
        AnimScriptHandle m_h_script;
    };

    struct cragdollupdatenode_t {
        int32_t m_n_weight_list_index;
        RagdollPoseControl m_pose_control_method;
    };

    struct cmaterialattributeanimtag_t {
        CUtlString m_attribute_name;
        MatterialAttributeTagType_t m_attribute_type;
        float m_fl_value;
        color_t m_color;
    };

    struct cnmfooteventconditionnode__cdefinition_t {
        int16_t m_n_source_state_node_idx;
        NmFootPhaseCondition_t m_phase_condition;
        CNmBitFlags m_event_condition_rules;
    };

    struct cnmfloatchannelset_t_t {
        CGlobalSymbol m_id;
        CUtlLeanVector_CGlobalSymbol_ m_channel_ids;
    };

    struct cnmfootevent_t {
        NmFootPhase_t m_phase;
    };

    struct cphyssurfacepropertiesaudio_t {
        float m_reflectivity;
        float m_hardness_factor;
        float m_roughness_factor;
        float m_rough_threshold;
        float m_hard_threshold;
        float m_hard_velocity_threshold;
        float m_fl_static_impact_volume;
        float m_fl_occlusion_factor;
    };

    struct cseqautolayer_t {
        int16_t m_n_local_reference;
        int16_t m_n_local_pose;
        CSeqAutoLayerFlag m_flags;
        float m_start;
        float m_peak;
        float m_tail;
        float m_end;
    };

    struct modelembeddedmesh_t_t {
        CUtlString m_name;
        int32_t m_n_mesh_index;
        int32_t m_n_data_block;
        int32_t m_n_morph_block;
        CUtlVector_ModelMeshBufferData_t_ m_vertex_buffers;
        CUtlVector_ModelMeshBufferData_t_ m_index_buffers;
        CUtlVector_ModelMeshBufferData_t_ m_tools_buffers;
        int32_t m_n_vbibblock;
        int32_t m_n_tools_vbblock;
    };

    struct physsoftbodydesc_t_t {
        CUtlVector_uint32_t_ m_particle_bone_hash;
        CUtlVector_RnSoftbodyParticle_t_ m_particles;
        CUtlVector_RnSoftbodySpring_t_ m_springs;
        CUtlVector_RnSoftbodyCapsule_t_ m_capsules;
        CUtlVector_CTransform_ m_init_pose;
        CUtlVector_CUtlString_ m_particle_bone_name;
    };

    struct cpulseruntimemethodarg_t {
        CKV3MemberNameWithStorage m_name;
        CUtlString m_description;
        CPulseValueFullType m_type;
    };

    struct canimsequenceparams_t {
        float m_fl_fade_in_time;
        float m_fl_fade_out_time;
    };

    struct ctargetwarpupdatenode_t {
        TargetWarpAngleMode_t m_e_angle_mode;
        CAnimParamHandle m_h_target_position_parameter;
        CAnimParamHandle m_h_target_up_vector_parameter;
        CAnimParamHandle m_h_target_face_position_parameter;
        CAnimParamHandle m_h_move_heading_parameter;
        CAnimParamHandle m_h_desired_move_heading_parameter;
        TargetWarpCorrectionMethod m_e_correction_method;
        TargetWarpTimingMethod m_e_target_warp_timing_method;
        bool m_b_target_face_position_is_world_space;
        bool m_b_target_position_is_world_space;
        bool m_b_only_warp_when_tag_is_found;
        bool m_b_warp_orientation_during_translation;
        bool m_b_warp_around_center;
        float m_fl_max_angle;
    };

    struct cnmvirtualparameterboolnode__cdefinition_t {
        int16_t m_n_child_node_idx;
    };

    struct cfollowtargetupdatenode_t {
        FollowTargetOpFixedSettings_t m_op_fixed_data;
        CAnimParamHandle m_h_parameter_position;
        CAnimParamHandle m_h_parameter_orientation;
    };

    struct pulseruntimestateoffset_t_t {
        uint16_t m_value;
    };

    struct ccppscriptcomponentupdater_t {
        CUtlVector_CGlobalSymbol_ m_scripts_to_run;
    };

    struct netvarconfigindex_t {
        CAnimNetVar_uint32_t_ m_index;
    };

    struct canimdata_t {
        CBufferString m_name;
        CUtlVector_CAnimDesc_ m_anim_array;
        CUtlVector_CAnimDecoder_ m_decoder_array;
        int32_t m_n_max_unique_frame_index;
        CUtlVector_CAnimFrameSegment_ m_segment_array;
    };

    struct iksolversettings_t_t {
        IKSolverType m_solver_type;
        int32_t m_n_num_iterations;
        EIKEndEffectorRotationFixUpMode m_end_effector_rotation_fix_up_mode;
    };

    struct cbinaryupdatenode_t {
        CAnimUpdateNodeRef m_p_child1;
        CAnimUpdateNodeRef m_p_child2;
        BinaryNodeTiming m_timing_behavior;
        float m_fl_timing_blend;
        bool m_b_reset_child1;
        bool m_b_reset_child2;
    };

    struct cblendnodeinstancedata_t {
        float m_damped_value;
        float m_fl_cycle;
        float m_fl_cycle_zero_time;
        float m_fl_playback_rate;
        CAnimNetVar_float_ m_fl_blend_value;
        float m_fl_duration;
        CAnimNetVar_uint8_t_ m_reset_count;
    };

    struct cnmparameterizedblendnode__blendrange_t_t {
        int16_t m_n_input_idx0;
        int16_t m_n_input_idx1;
        Range_t m_parameter_value_range;
    };

    struct canimkeydata_t {
        CBufferString m_name;
        CUtlVector_CAnimBone_ m_bone_array;
        CUtlVector_CAnimUser_ m_user_array;
        CUtlVector_CBufferString_ m_morph_array;
        int32_t m_n_channel_elements;
        CUtlVector_CAnimDataChannelDesc_ m_data_channel_array;
    };

    struct attachmenthandle_t_t {
        uint8_t m_value;
    };

    struct canimmorphdifference_t {
        CBufferString m_name;
    };

    struct footfixeddata_t_t {
        VectorAligned m_v_toe_offset;
        VectorAligned m_v_heel_offset;
        int32_t m_n_target_bone_index;
        int32_t m_n_ankle_bone_index;
        int32_t m_n_ikanchor_bone_index;
        int32_t m_ik_chain_index;
        float m_fl_max_iklength;
        int32_t m_n_foot_index;
        int32_t m_n_tag_index;
        float m_fl_max_rotation_left;
        float m_fl_max_rotation_right;
    };

    struct cmotiongraphgroup_t {
        CMotionSearchDB m_search_db;
        CUtlVector_CSmartPtr_CMotionGraph_ m_motion_graphs;
        CUtlVector_CMotionGraphConfig_ m_motion_graph_configs;
        CUtlVector_int32_t_ m_sample_to_config;
        AnimScriptHandle m_h_is_active_script;
    };

    struct cpulse_instructiondebug_t {
        PulseDocNodeID_t m_n_flow_node_id;
        PulseDocNodeID_t m_n_value_node_id;
        PulseSymbol_t m_sequence_point_name;
    };

    struct cnmvectornegatenode__cdefinition_t {
        int16_t m_n_input_value_node_idx;
    };

    struct cnmsynctrack__event_t_t {
        CGlobalSymbol m_id;
        NmPercent_t m_start_time;
        NmPercent_t m_duration;
    };

    struct cnmtarget_t {
        transform_t m_transform;
        CGlobalSymbol m_bone_id;
        bool m_b_is_bone_target;
        bool m_b_is_using_bone_space_offsets;
        bool m_b_has_offsets;
        bool m_b_is_set;
    };

    struct cnmbodygroupevent_t {
        CNmEventTargetEntity_t m_target;
        CUtlString m_group_name;
        CUtlString m_choice_name;
    };

    struct cwaypointhelperupdatenode_t {
        float m_fl_start_cycle;
        float m_fl_end_cycle;
        bool m_b_only_goals;
        bool m_b_prevent_overshoot;
        bool m_b_prevent_undershoot;
    };

    struct cmoodvdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_model_name;
        MoodType_t m_n_mood_type;
        CUtlVector_MoodAnimationLayer_t_ m_animation_layers;
    };

    struct cmodelconfigelement_attachedmodel_t {
        CUtlString m_instance_name;
        CUtlString m_entity_class;
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        vector3d_t m_v_offset;
        QAngle m_a_ang_offset;
        CUtlString m_attachment_name;
        CUtlString m_local_attachment_offset_name;
        ModelConfigAttachmentType_t m_attachment_type;
        bool m_b_bone_merge_flex;
        bool m_b_user_specified_color;
        bool m_b_user_specified_material_group;
        CUtlString m_bodygroup_on_other_models;
        CUtlString m_material_group_on_other_models;
        bool m_b_collide_with_hierarchy;
        bool m_b_collide_outside_hierarchy;
    };

    struct canimtagmanagerupdater_t {
        CUtlVector_CSmartPtr_CAnimTagBase_ m_tags;
    };

}

namespace client {

    struct cpulsecell_waitforcursorswithtag_t {
        bool m_b_tag_self_when_complete;
        PulseCursorCancelPriority_t m_n_desired_kill_priority;
    };

    struct c_sceneentity__queuedevents_t_t {
        float starttime;
    };

    struct ccsplayer_pingservices_t {
        CHandle_C_PlayerPing_ m_h_player_ping;
    };

    struct ceconitemattribute_t {
        uint16_t m_i_attribute_definition_index;
        float m_fl_value;
        float m_fl_initial_value;
        int32_t m_n_refundable_currency;
        bool m_b_set_bonus;
    };

    struct cpulsecell_racecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct c_envwindshared_t {
        GameTime_t m_fl_start_time;
        uint32_t m_i_wind_seed;
        uint16_t m_i_min_wind;
        uint16_t m_i_max_wind;
        int32_t m_wind_radius;
        uint16_t m_i_min_gust;
        uint16_t m_i_max_gust;
        float m_fl_min_gust_delay;
        float m_fl_max_gust_delay;
        float m_fl_gust_duration;
        uint16_t m_i_gust_dir_change;
        uint16_t m_i_initial_wind_dir;
        float m_fl_initial_wind_speed;
        VectorWS m_location;
        CHandle_C_BaseEntity_ m_h_ent_owner;
    };

    struct c_skycamera_t {
        sky3dparams_t m_skybox_data;
        CUtlStringToken m_skybox_slot_token;
        bool m_b_use_angles;
        C_SkyCamera* m_p_next;
    };

    struct cpulsecell_base_t {
        PulseDocNodeID_t m_n_editor_node_id;
    };

    struct c_soundopvarsetpointbase_t {
        CUtlSymbolLarge m_isz_stack_name;
        CUtlSymbolLarge m_isz_operator_name;
        CUtlSymbolLarge m_isz_opvar_name;
        int32_t m_i_opvar_index;
        bool m_b_use_auto_compare;
        bool m_b_fast_refresh;
    };

    struct c_envcubemapfog_t {
        float m_fl_end_distance;
        float m_fl_start_distance;
        float m_fl_fog_falloff_exponent;
        bool m_b_height_fog_enabled;
        float m_fl_fog_height_width;
        float m_fl_fog_height_end;
        float m_fl_fog_height_start;
        float m_fl_fog_height_exponent;
        float m_fl_lodbias;
        bool m_b_active;
        bool m_b_start_disabled;
        float m_fl_fog_max_opacity;
        int32_t m_n_cubemap_source_type;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
        CUtlSymbolLarge m_isz_sky_entity;
        int32_t m_n_height_fog_type;
        int32_t m_n_fog_height_blend_mode;
        int32_t m_n_fog_height_coordinate_space;
        int32_t m_n_distance_fog_type;
        CUtlSymbolLarge m_distance_fog_curve_string;
        CUtlSymbolLarge m_height_fog_curve_string;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_fog_cubemap_texture;
        bool m_b_has_height_fog_end;
        bool m_b_first_time;
    };

    struct c_envparticleglow_t {
        float m_fl_alpha_scale;
        float m_fl_radius_scale;
        float m_fl_self_illum_scale;
        color_t m_color_tint;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_texture_override;
    };

    struct ccsplayercontroller_inventoryservices_t {
        CUtlVector_CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t_ m_vec_networkable_loadout;
        uint16_t m_un_music_id;
        MedalRank_t m_rank;
        int32_t m_n_persona_data_public_level;
        int32_t m_n_persona_data_public_commends_leader;
        int32_t m_n_persona_data_public_commends_teacher;
        int32_t m_n_persona_data_public_commends_friendly;
        int32_t m_n_persona_data_xp_trail_level;
        C_UtlVectorEmbeddedNetworkVar_ServerAuthoritativeWeaponSlot_t_ m_vec_server_authoritative_weapon_slots;
    };

    struct ccsplayermodernjump_t {
        GameTick_t m_n_last_actual_jump_press_tick;
        float m_fl_last_actual_jump_press_frac;
        GameTick_t m_n_last_usable_jump_press_tick;
        float m_fl_last_usable_jump_press_frac;
        GameTick_t m_n_last_landed_tick;
        float m_fl_last_landed_frac;
        float m_fl_last_landed_velocity_x;
        float m_fl_last_landed_velocity_y;
        float m_fl_last_landed_velocity_z;
    };

    struct c_econentity__attachedmodeldata_t_t {
        int32_t m_i_model_display_flags;
    };

    struct ctriggerfan_t {
        vector3d_t m_v_fan_origin_offset;
        vector3d_t m_v_direction;
        bool m_b_push_towards_info_target;
        bool m_b_push_away_from_info_target;
        quaternion_t m_q_noise_delta;
        CHandle_CInfoFan_ m_h_info_fan;
        float m_fl_force;
        bool m_b_falloff;
        CountdownTimer m_ramp_timer;
    };

    struct c_bullethitmodel_t {
        matrix3x4_t m_mat_local;
        int32_t m_i_bone_index;
        CHandle_C_BaseEntity_ m_h_player_parent;
        bool m_b_is_hit;
        float m_fl_time_created;
        VectorWS m_vec_start_pos;
    };

    struct c_funcelectrifiedvolume_t {
        ParticleIndex_t m_n_ambient_effect;
        CUtlSymbolLarge m_effect_name;
        bool m_b_state;
    };

    struct c_mapvetopickcontroller_t {
        int32_t m_n_draft_type;
        int32_t m_n_team_winning_coin_toss;
        int32_t m_n_team_with_first_choice;
        int32_t m_n_vote_map_ids_list;
        int32_t m_n_account_ids;
        int32_t m_n_map_id0;
        int32_t m_n_map_id1;
        int32_t m_n_map_id2;
        int32_t m_n_map_id3;
        int32_t m_n_map_id4;
        int32_t m_n_map_id5;
        int32_t m_n_starting_side0;
        int32_t m_n_current_phase;
        int32_t m_n_phase_start_tick;
        int32_t m_n_phase_duration_ticks;
        int32_t m_n_post_data_update_tick;
        bool m_b_disabled_hud;
    };

    struct c_envvolumetricfogvolume_t {
        bool m_b_active;
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        bool m_b_start_disabled;
        bool m_b_indirect_use_lpvs;
        float m_fl_strength;
        int32_t m_n_falloff_shape;
        float m_fl_falloff_exponent;
        float m_fl_height_fog_depth;
        float m_f_height_fog_edge_width;
        float m_f_indirect_light_strength;
        float m_f_sun_light_strength;
        float m_f_noise_strength;
        color_t m_tint_color;
        bool m_b_override_tint_color;
        bool m_b_override_indirect_light_strength;
        bool m_b_override_sun_light_strength;
        bool m_b_override_noise_strength;
    };

    struct cpulsecell_playsequence_t {
        CUtlString m_sequence_name;
        PulseNodeDynamicOutflows_t m_pulse_anim_events;
        CPulse_ResumePoint m_on_finished;
    };

    struct c_barnlight_t {
        bool m_b_enabled;
        int32_t m_n_color_mode;
        color_t m_color;
        float m_fl_color_temperature;
        float m_fl_brightness;
        float m_fl_brightness_scale;
        int32_t m_n_direct_light;
        int32_t m_n_baked_shadow_index;
        int32_t m_n_light_path_unique_id;
        int32_t m_n_light_map_unique_id;
        int32_t m_n_luminaire_shape;
        float m_fl_luminaire_size;
        float m_fl_luminaire_anisotropy;
        CUtlString m_light_style_string;
        GameTime_t m_fl_light_style_start_time;
        C_NetworkUtlVectorBase_CUtlString_ m_queued_light_style_strings;
        C_NetworkUtlVectorBase_CUtlString_ m_light_style_events;
        C_NetworkUtlVectorBase_CHandle_C_BaseModelEntity_ m_light_style_targets;
        CEntityIOOutput m_style_event;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_light_cookie;
        float m_fl_shape;
        float m_fl_soft_x;
        float m_fl_soft_y;
        float m_fl_skirt;
        float m_fl_skirt_near;
        vector3d_t m_v_size_params;
        float m_fl_range;
        vector3d_t m_v_shear;
        int32_t m_n_bake_specular_to_cubemaps;
        vector3d_t m_v_bake_specular_to_cubemaps_size;
        float m_fl_bake_specular_to_cubemaps_scale;
        int32_t m_n_cast_shadows;
        int32_t m_n_shadow_map_size;
        int32_t m_n_shadow_priority;
        bool m_b_contact_shadow;
        bool m_b_force_shadows_enabled;
        int32_t m_n_bounce_light;
        float m_fl_bounce_scale;
        float m_fl_min_roughness;
        vector3d_t m_v_alternate_color;
        float m_f_alternate_color_brightness;
        int32_t m_n_fog;
        float m_fl_fog_strength;
        int32_t m_n_fog_shadows;
        float m_fl_fog_scale;
        float m_fl_fade_size_start;
        float m_fl_fade_size_end;
        float m_fl_shadow_fade_size_start;
        float m_fl_shadow_fade_size_end;
        bool m_b_precomputed_fields_valid;
        vector3d_t m_v_precomputed_bounds_mins;
        vector3d_t m_v_precomputed_bounds_maxs;
        vector3d_t m_v_precomputed_obborigin;
        QAngle m_v_precomputed_obbangles;
        vector3d_t m_v_precomputed_obbextent;
        int32_t m_n_precomputed_sub_frusta;
        vector3d_t m_v_precomputed_obborigin0;
        QAngle m_v_precomputed_obbangles0;
        vector3d_t m_v_precomputed_obbextent0;
        vector3d_t m_v_precomputed_obborigin1;
        QAngle m_v_precomputed_obbangles1;
        vector3d_t m_v_precomputed_obbextent1;
        vector3d_t m_v_precomputed_obborigin2;
        QAngle m_v_precomputed_obbangles2;
        vector3d_t m_v_precomputed_obbextent2;
        vector3d_t m_v_precomputed_obborigin3;
        QAngle m_v_precomputed_obbangles3;
        vector3d_t m_v_precomputed_obbextent3;
        vector3d_t m_v_precomputed_obborigin4;
        QAngle m_v_precomputed_obbangles4;
        vector3d_t m_v_precomputed_obbextent4;
        vector3d_t m_v_precomputed_obborigin5;
        QAngle m_v_precomputed_obbangles5;
        vector3d_t m_v_precomputed_obbextent5;
        bool m_b_initial_bone_setup;
        C_NetworkUtlVectorBase_uint16_t_ m_vis_clusters;
    };

    struct cpulsecell_lerpcamerasettings_t {
        float m_fl_seconds;
        PointCameraSettings_t m_start;
        PointCameraSettings_t m_end;
    };

    struct cpointoffscreenindicatorui_t {
        bool m_b_been_enabled;
        bool m_b_hide;
        float m_fl_seen_target_time;
        C_PointClientUIWorldPanel* m_p_target_panel;
    };

    struct c_postprocessingvolume_t {
        CStrongHandle_InfoForResourceTypeCPostProcessingResource_ m_h_post_settings;
        float m_fl_fade_duration;
        float m_fl_min_log_exposure;
        float m_fl_max_log_exposure;
        float m_fl_min_exposure;
        float m_fl_max_exposure;
        float m_fl_exposure_compensation;
        float m_fl_exposure_fade_speed_up;
        float m_fl_exposure_fade_speed_down;
        float m_fl_tonemap_evsmoothing_range;
        bool m_b_master;
        bool m_b_exposure_control;
    };

    struct ccsminimapvolume_t {
        CUtlString m_str_minimap_name;
    };

    struct c_basemodelentity__emphasized_phoneme_t {
        CUtlString m_s_class_name;
        float m_fl_amount;
        bool m_b_required;
        bool m_b_basechecked;
        bool m_b_valid;
    };

    struct cpulsecell_pickbestoutflowselector_t {
        PulseBestOutflowRules_t m_n_check_type;
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cinfofan_t {
        float m_f_fan_force_max_radius;
        float m_f_fan_force_min_radius;
        float m_fl_curve_dist_range;
        CUtlSymbolLarge m_fan_force_curve_string;
    };

    struct c_votecontroller_t {
        int32_t m_i_active_issue_index;
        int32_t m_i_only_team_to_vote;
        int32_t m_n_vote_option_count;
        int32_t m_n_potential_votes;
        bool m_b_votes_dirty;
        bool m_b_type_dirty;
        bool m_b_is_yes_no_vote;
    };

    struct c_c4_t {
        ParticleIndex_t m_active_light_particle_index;
        C4LightEffect_t m_e_active_light_effect;
        bool m_b_started_arming;
        GameTime_t m_f_armed_time;
        bool m_b_bomb_placed_animation;
        bool m_b_is_planting_via_use;
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
        bool m_b_played_arming_beeps;
        bool m_b_bomb_planted;
    };

    struct c_csplayerpawnbase_t {
        CCSPlayer_PingServices* m_p_ping_services;
        CSPlayerState m_previous_player_state;
        CSPlayerState m_i_player_state;
        bool m_b_has_moved_since_spawn;
        GameTime_t m_fl_last_spawn_time_index;
        int32_t m_i_progress_bar_duration;
        float m_fl_progress_bar_start_time;
        GameTime_t m_fl_client_death_time;
        float m_fl_flash_bang_time;
        float m_fl_flash_screenshot_alpha;
        float m_fl_flash_overlay_alpha;
        bool m_b_flash_build_up;
        bool m_b_flash_dsp_has_been_cleared;
        bool m_b_flash_screenshot_has_been_grabbed;
        float m_fl_flash_max_alpha;
        float m_fl_flash_duration;
        GameTime_t m_fl_client_health_fade_change_timestamp;
        int32_t m_n_client_health_fade_parity_value;
        float m_f_next_think_push_away;
        float m_fl_current_music_start_time;
        float m_fl_music_round_start_time;
        bool m_b_defer_start_music_on_warmup;
        float m_fl_last_smoke_overlay_alpha;
        float m_fl_last_smoke_age;
        vector3d_t m_v_last_smoke_overlay_color;
        CHandle_CCSPlayerController_ m_h_original_controller;
    };

    struct c_breakableprop_t {
        CPropDataComponent m_cprop_data_component;
        CEntityIOOutput m_on_start_death;
        CEntityIOOutput m_on_break;
        CEntityOutputTemplate_float_ m_on_health_changed;
        CEntityIOOutput m_on_take_damage;
        float m_impact_energy_scale;
        int32_t m_i_min_health_dmg;
        float m_fl_pressure_delay;
        float m_fl_def_burst_scale;
        vector3d_t m_v_def_burst_offset;
        CHandle_C_BaseEntity_ m_h_breaker;
        PerformanceMode_t m_performance_mode;
        GameTime_t m_fl_prevent_damage_before_time;
        BreakableContentsType_t m_breakable_contents_type;
        CUtlString m_str_breakable_contents_prop_group_override;
        CUtlString m_str_breakable_contents_particle_override;
        bool m_b_has_break_pieces_or_commands;
        float m_explode_damage;
        float m_explode_radius;
        CGlobalSymbol m_s_explosion_type;
        float m_explosion_delay;
        CUtlSymbolLarge m_explosion_buildup_sound;
        CUtlSymbolLarge m_explosion_custom_effect;
        CUtlSymbolLarge m_explosion_custom_sound;
        CUtlSymbolLarge m_explosion_modifier;
        CHandle_C_BasePlayerPawn_ m_h_physics_attacker;
        GameTime_t m_fl_last_physics_influence_time;
        float m_fl_default_fade_scale;
        CHandle_C_BaseEntity_ m_h_last_attacker;
    };

    struct c_retakegamerules_t {
        int32_t m_n_match_seed;
        bool m_b_blockers_present;
        bool m_b_round_in_progress;
        int32_t m_i_first_second_half_round;
        int32_t m_i_bomb_site;
        CHandle_C_CSPlayerPawn_ m_h_bomb_planter;
    };

    struct cprecipitationvdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_effect;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_puddle_effect;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_post_effect;
        float m_fl_inner_distance;
        ParticleAttachment_t m_n_attach_type;
        bool m_b_batch_same_volume_type;
        int32_t m_n_rtenv_cp;
        int32_t m_n_rtenv_cpcomponent;
        CUtlString m_sz_modifier;
        int32_t m_n_use_snapshot_from_surface_graph;
        PrecipitationFilter_t m_snapshot_filter;
    };

    struct cpulsecell_waitforobservable_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_ResumePoint m_on_true;
    };

    struct c_soundareaentitysphere_t {
        float m_fl_radius;
    };

    struct cpulsecell_step_entfire_t {
        CUtlString m_input;
    };

    struct c_basebutton_t {
        CHandle_C_BaseModelEntity_ m_glow_entity;
        bool m_usable;
        CUtlSymbolLarge m_sz_display_text;
    };

    struct ccsobserver_observerservices_t {
        ObserverInterpState_t m_obs_interp_state;
    };

    struct chitboxcomponent_t {
        float m_fl_bounds_expand_radius;
    };

    struct c_soundeventboxhelper_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct c_soundeventboxentity_t {
        C_NetworkUtlVectorBase_SoundeventBoxHelperNetworked_t_ m_vec_box_helpers_networked;
    };

    struct serverauthoritativeweaponslot_t_t {
        uint16_t un_class;
        uint16_t un_slot;
        uint16_t un_item_def_idx;
    };

    struct c_precipitation_t {
        float m_fl_density;
        float m_fl_particle_inner_dist;
        char* m_p_particle_def;
        TimedEvent m_t_particle_precip_trace_timer;
        bool m_b_active_particle_precip_emitter;
        bool m_b_particle_precip_initialized;
        bool m_b_has_simulated_since_last_scene_object_update;
        int32_t m_n_available_sheet_sequences_max_index;
    };

    struct clogicrelay_t {
        CEntityIOOutput m_on_spawn;
        CEntityIOOutput m_on_trigger;
        bool m_b_disabled;
        bool m_b_wait_for_refire;
        bool m_b_trigger_once;
        bool m_b_fast_retrigger;
        bool m_b_passthough_caller;
    };

    struct sequencehistory_t_t {
        HSequence m_h_sequence;
        GameTime_t m_fl_seq_start_time;
        float m_fl_seq_fixed_cycle;
        AnimLoopMode_t m_n_seq_loop_mode;
        float m_fl_playback_rate;
        float m_fl_cycles_per_second;
    };

    struct cpulse_outflowconnection_t {
        PulseSymbol_t m_source_outflow_name;
        PulseRuntimeChunkIndex_t m_n_dest_chunk;
        int32_t m_n_instruction;
        PulseRegisterMap_t m_outflow_register_map;
    };

    struct c_spotlightend_t {
        float m_fl_light_scale;
        float m_radius;
    };

    struct c_fish_t {
        VectorWS m_pos;
        vector3d_t m_vel;
        QAngle m_angles;
        int32_t m_local_life_state;
        float m_death_depth;
        float m_death_angle;
        float m_buoyancy;
        CountdownTimer m_wiggle_timer;
        float m_wiggle_phase;
        float m_wiggle_rate;
        VectorWS m_actual_pos;
        QAngle m_actual_angles;
        VectorWS m_pool_origin;
        float m_water_level;
        bool m_got_update;
        float m_x;
        float m_y;
        float m_z;
        float m_angle;
        float m_error_history;
        int32_t m_error_history_index;
        int32_t m_error_history_count;
        float m_average_error;
    };

    struct c_envvolumetricfogcontroller_t {
        float m_fl_scattering;
        color_t m_tint_color;
        float m_fl_anisotropy;
        float m_fl_fade_speed;
        float m_fl_draw_distance;
        float m_fl_fade_in_start;
        float m_fl_fade_in_end;
        float m_fl_indirect_strength;
        int32_t m_n_volume_depth;
        float m_f_first_volume_slice_thickness;
        int32_t m_n_indirect_texture_dim_x;
        int32_t m_n_indirect_texture_dim_y;
        int32_t m_n_indirect_texture_dim_z;
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        bool m_b_active;
        GameTime_t m_fl_start_aniso_time;
        GameTime_t m_fl_start_scatter_time;
        GameTime_t m_fl_start_draw_distance_time;
        float m_fl_start_anisotropy;
        float m_fl_start_scattering;
        float m_fl_start_draw_distance;
        float m_fl_default_anisotropy;
        float m_fl_default_scattering;
        float m_fl_default_draw_distance;
        bool m_b_start_disabled;
        bool m_b_enable_indirect;
        bool m_b_is_master;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_fog_indirect_texture;
        int32_t m_n_force_refresh_count;
        float m_f_noise_speed;
        float m_f_noise_strength;
        vector3d_t m_v_noise_scale;
        float m_f_wind_speed;
        vector3d_t m_v_wind_direction;
        bool m_b_first_time;
    };

    struct cpulsegraphdef_t {
        PulseSymbol_t m_domain_identifier;
        CPulseValueFullType m_domain_sub_type;
        PulseSymbol_t m_parent_map_name;
        PulseSymbol_t m_parent_xml_name;
        CUtlVector_CPulse_Chunk_ m_chunks;
        CUtlVector_CPulseCell_Base_ m_cells;
        CUtlVector_CPulse_Variable_ m_vars;
        CUtlVector_CPulse_TempVarBankDefinition_ m_temp_var_banks;
        CUtlVector_CPulse_PublicOutput_ m_public_outputs;
        CUtlVector_CPulse_InvokeBinding_ m_invoke_bindings;
        CUtlVector_CPulse_CallInfo_ m_call_infos;
        CUtlVector_CPulse_Constant_ m_constants;
        CUtlVector_CPulse_DomainValue_ m_domain_values;
        CUtlVector_CPulse_BlackboardReference_ m_blackboard_references;
        CUtlVector_CPulse_OutputConnection_ m_output_connections;
    };

    struct c_envdetailcontroller_t {
        float m_fl_fade_start_dist;
        float m_fl_fade_end_dist;
    };

    struct ccsplayer_hostageservices_t {
        CHandle_C_BaseEntity_ m_h_carried_hostage;
        CHandle_C_BaseEntity_ m_h_carried_hostage_prop;
    };

    struct crendercomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        bool m_b_is_rendering_with_view_models;
        uint32_t m_n_splitscreen_flags;
        bool m_b_enable_rendering;
        bool m_b_interpolation_ready_to_draw;
    };

    struct c_team_t {
        C_NetworkUtlVectorBase_CHandle_CBasePlayerController_ m_a_player_controllers;
        C_NetworkUtlVectorBase_CHandle_C_BasePlayerPawn_ m_a_players;
        int32_t m_i_score;
        char m_sz_teamname;
    };

    struct cpointchildmodifier_t {
        bool m_b_orphan_instead_of_deleting_children_on_remove;
    };

    struct ccsplayerlegacyjump_t {
        bool m_b_old_jump_pressed;
        float m_fl_jump_pressed_time;
    };

    struct c_csgo_teampreviewcamera_t {
        int32_t m_n_variant;
    };

    struct c_colorcorrectionvolume_t {
        float m_last_enter_weight;
        GameTime_t m_last_enter_time;
        float m_last_exit_weight;
        GameTime_t m_last_exit_time;
        bool m_b_enabled;
        float m_max_weight;
        float m_fade_duration;
        float m_weight;
        char m_lookup_filename;
    };

    struct cplayer_movementservices_t {
        int32_t m_n_impulse;
        CInButtonState m_n_buttons;
        uint64_t m_n_queued_button_down_mask;
        uint64_t m_n_queued_button_change_mask;
        uint64_t m_n_button_double_pressed;
        uint32_t m_p_button_pressed_cmd_number;
        uint32_t m_n_last_command_number_processed;
        uint64_t m_n_toggle_button_down_mask;
        float m_fl_cmd_forward_move;
        float m_fl_cmd_left_move;
        float m_fl_cmd_up_move;
        float m_fl_maxspeed;
        float m_arr_force_subtick_move_when;
        float m_fl_forward_move;
        float m_fl_left_move;
        float m_fl_up_move;
        vector3d_t m_vec_last_movement_impulses;
        QAngle m_vec_old_view_angles;
    };

    struct cinfodynamicshadowhintbox_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
    };

    struct cbaseanimgraphcontroller_t {
        AnimationAlgorithm_t m_n_animation_algorithm;
        ExternalAnimGraphHandle_t m_n_next_external_graph_handle;
        C_NetworkUtlVectorBase_CGlobalSymbol_ m_vec_secondary_skeleton_slot_ids;
        C_NetworkUtlVectorBase_CHandle_CBaseAnimGraph_ m_vec_secondary_skeletons;
        int32_t m_n_secondary_skeleton_master_count;
        float m_fl_sound_sync_time;
        uint32_t m_n_active_ikchain_mask;
        HSequence m_h_sequence;
        GameTime_t m_fl_seq_start_time;
        float m_fl_seq_fixed_cycle;
        AnimLoopMode_t m_n_anim_loop_mode;
        CNetworkedQuantizedFloat m_fl_playback_rate;
        SequenceFinishNotifyState_t m_n_notify_state;
        bool m_b_networked_animation_inputs_changed;
        bool m_b_networked_sequence_changed;
        bool m_b_last_update_skipped;
        bool m_b_sequence_finished;
        GameTick_t m_n_prev_anim_update_tick;
        CStrongHandle_InfoForResourceTypeCNmGraphDefinition_ m_h_graph_definition_ag2;
        C_UtlVectorEmbeddedNetworkVar_AnimGraph2SerializedPoseRecipeSlot_t_ m_serialize_pose_recipe_ag2_slots;
        C_NetworkUtlVectorBase_uint8_t_ m_serialize_pose_recipe_ag2_dynamic;
        uint32_t m_n_serialize_pose_recipe_ag2_active_slot;
        int32_t m_n_serialize_pose_recipe_version_ag2;
        int32_t m_n_server_graph_instance_iteration;
        int32_t m_n_server_serialization_context_iteration;
        ResourceId_t m_primary_graph_id;
        C_NetworkUtlVectorBase_ResourceId_t_ m_vec_external_graph_ids;
        C_NetworkUtlVectorBase_ResourceId_t_ m_vec_external_clip_ids;
        CGlobalSymbol m_s_anim_graph2_identifier;
        CAnimGraph2InstancePtr m_p_graph_instance_ag2;
        CExternalAnimGraphList m_vec_external_graphs;
        AnimationAlgorithm_t m_n_prev_animation_algorithm;
    };

    struct c_colorcorrection_t {
        VectorWS m_vec_origin;
        float m_min_falloff;
        float m_max_falloff;
        float m_fl_fade_in_duration;
        float m_fl_fade_out_duration;
        float m_fl_max_weight;
        float m_fl_cur_weight;
        char m_netlookup_filename;
        bool m_b_enabled;
        bool m_b_master;
        bool m_b_client_side;
        bool m_b_exclusive;
        bool m_b_enabled_on_client;
        float m_fl_cur_weight_on_client;
        bool m_b_fading_in;
        float m_fl_fade_start_weight;
        float m_fl_fade_start_time;
        float m_fl_fade_duration;
    };

    struct animgraph2serializedposerecipeslot_t_t {
        CUtlBinaryBlock m_topology;
    };

    struct cbuoyancyhelper_t {
        IPhysicsMotionController* m_p_controller;
        CUtlStringToken m_n_fluid_type;
        float m_fl_fluid_density;
        float m_fl_neutrally_buoyant_gravity;
        float m_fl_neutrally_buoyant_linear_damping;
        float m_fl_neutrally_buoyant_angular_damping;
        bool m_b_neutrally_buoyant;
        CUtlVector_float_ m_vec_fraction_of_wheel_submerged_for_wheel_friction;
        CUtlVector_float_ m_vec_wheel_friction_scales;
        CUtlVector_float_ m_vec_fraction_of_wheel_submerged_for_wheel_drag;
        CUtlVector_float_ m_vec_wheel_drag;
    };

    struct ccsplayer_cameraservices_t {
        float m_fl_death_cam_tilt;
        CHandle_C_PointDeathcamBounds_ m_h_death_cam_bounds;
        bool m_b_death_cam_bounds_searched;
        vector3d_t m_v_client_scope_inaccuracy;
    };

    struct cfiltermultiple_t {
        filter_t m_n_filter_type;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_C_BaseEntity_ m_h_filter;
    };

    struct cpulsecell_firecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cenvsoundscape_t {
        CEntityIOOutput m_on_play;
        float m_fl_radius;
        CGameSoundEventName m_sound_event_name;
        bool m_b_override_with_event;
        int32_t m_soundscape_index;
        int32_t m_soundscape_entity_list_id;
        CUtlSymbolLarge m_position_names;
        CHandle_CEnvSoundscape_ m_h_proxy_soundscape;
        bool m_b_disabled;
        CUtlSymbolLarge m_soundscape_name;
        uint32_t m_sound_event_hash;
    };

    struct c_fogcontroller_t {
        fogparams_t m_fog;
        bool m_b_use_angles;
        int32_t m_i_changed_variables;
    };

    struct cbodycomponentpoint_t {
        CGameSceneNode m_scene_node;
    };

    struct c_skycameravolume_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        CHandle_C_SkyCameraVolumeTarget_ m_h_target;
        int32_t m_n_priority;
        bool m_b_is_enabled;
        bool m_b_skybox_blur_effect;
        vector3d_t m_v_blur_origin;
        bool m_b_skybox_receives_world_csm;
        bool m_b_world_receives_skybox_csm;
        bool m_b_start_disabled;
        CUtlSymbolLarge m_isz_target_name;
    };

    struct c_econitemview_t {
        bool m_b_inventory_image_rgba_requested;
        bool m_b_inventory_image_tried_cache;
        int32_t m_n_inventory_image_rgba_width;
        int32_t m_n_inventory_image_rgba_height;
        char m_sz_current_load_cached_file_name;
        bool m_b_restore_custom_material_after_precache;
        uint16_t m_i_item_definition_index;
        int32_t m_i_entity_quality;
        uint32_t m_i_entity_level;
        uint64_t m_i_item_id;
        uint32_t m_i_item_idhigh;
        uint32_t m_i_item_idlow;
        uint32_t m_i_account_id;
        uint32_t m_i_inventory_position;
        bool m_b_initialized;
        bool m_b_disallow_soc;
        bool m_b_is_store_item;
        bool m_b_is_trade_item;
        int32_t m_i_entity_quantity;
        int32_t m_i_rarity_override;
        int32_t m_i_quality_override;
        int32_t m_i_origin_override;
        uint8_t m_ub_style_override;
        uint8_t m_un_client_flags;
        CAttributeList m_attribute_list;
        CAttributeList m_networked_dynamic_attributes;
        char m_sz_custom_name;
        char m_sz_custom_name_override;
        char m_sz_custom_name_override2;
        char m_sz_custom_name_override3;
        bool m_b_initialized_tags;
    };

    struct cpulsecell_timeline__timelineevent_t_t {
        float m_fl_time_from_previous;
        CPulse_OutflowConnection m_event_outflow;
    };

    struct cpulsecell_intervaltimer__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
        float m_fl_wait_interval;
        float m_fl_wait_interval_high;
        bool m_b_complete_on_next_wake;
    };

    struct outflowwithrequirements_t_t {
        CPulse_OutflowConnection m_connection;
        PulseDocNodeID_t m_destination_flow_node_id;
        CUtlVector_PulseDocNodeID_t_ m_requirement_node_ids;
        CUtlVector_int32_t_ m_n_cursor_state_block_index;
    };

    struct c_soundeventpathcornerentity_t {
        C_NetworkUtlVectorBase_SoundeventPathCornerPairNetworked_t_ m_vec_corner_pairs_networked;
    };

    struct c_infovisibilitybox_t {
        int32_t m_n_mode;
        vector3d_t m_v_box_size;
        bool m_b_enabled;
    };

    struct ccsplayer_itemservices_t {
        bool m_b_has_defuser;
        bool m_b_has_helmet;
    };

    struct cpulsecell_value_gradient_t {
        CColorGradient m_gradient;
    };

    struct intervaltimer_t {
        GameTime_t m_timestamp;
        WorldGroupId_t m_n_world_group_id;
    };

    struct audioparams_t_t {
        VectorWS local_sound;
        int32_t soundscape_index;
        uint8_t local_bits;
        int32_t soundscape_entity_list_index;
        uint32_t sound_event_hash;
    };

    struct c_pathparticlerope_t {
        bool m_b_start_active;
        float m_fl_max_simulation_time;
        CUtlSymbolLarge m_isz_effect_name;
        CUtlVector_CUtlSymbolLarge_ m_path_nodes_name;
        float m_fl_particle_spacing;
        float m_fl_slack;
        float m_fl_radius;
        color_t m_color_tint;
        int32_t m_n_effect_state;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_i_effect_index;
        C_NetworkUtlVectorBase_Vector_ m_path_nodes_position;
        C_NetworkUtlVectorBase_Vector_ m_path_nodes_tangent_in;
        C_NetworkUtlVectorBase_Vector_ m_path_nodes_tangent_out;
        C_NetworkUtlVectorBase_Vector_ m_path_nodes_color;
        C_NetworkUtlVectorBase_bool_ m_path_nodes_pin_enabled;
        C_NetworkUtlVectorBase_float_ m_path_nodes_radius_scale;
    };

    struct c_decoyprojectile_t {
        int32_t m_n_decoy_shot_tick;
        int32_t m_n_client_last_known_decoy_shot_tick;
        GameTime_t m_fl_time_particle_effect_spawn;
    };

    struct c_attributecontainer_t {
        C_EconItemView m_item;
        int32_t m_i_external_item_provider_registered_token;
        uint64_t m_ull_registered_as_item_id;
    };

    struct c_csweaponbase_t {
        WeaponGameplayAnimState m_i_weapon_gameplay_anim_state;
        GameTime_t m_fl_weapon_gameplay_anim_state_timestamp;
        GameTime_t m_fl_inspect_cancel_complete_time;
        bool m_b_inspect_pending;
        bool m_b_inspect_should_loop;
        int32_t m_n_last_empty_sound_cmd_num;
        bool m_b_fire_on_empty;
        CEntityIOOutput m_on_player_pickup;
        CSWeaponMode m_weapon_mode;
        float m_fl_turning_inaccuracy_delta;
        vector3d_t m_vec_turning_inaccuracy_eye_dir_last;
        float m_fl_turning_inaccuracy;
        float m_f_accuracy_penalty;
        GameTime_t m_fl_last_accuracy_update_time;
        float m_f_accuracy_smoothed_for_zoom;
        int32_t m_i_recoil_index;
        float m_fl_recoil_index;
        bool m_b_burst_mode;
        GameTime_t m_fl_last_burst_mode_change_time;
        GameTick_t m_n_postpone_fire_ready_ticks;
        float m_fl_postpone_fire_ready_frac;
        bool m_b_in_reload;
        GameTick_t m_n_deploy_tick;
        GameTime_t m_fl_attack_hold_start_time;
        GameTime_t m_fl_dropped_at_time;
        bool m_b_is_hauled_back;
        bool m_b_silencer_on;
        GameTime_t m_fl_time_silencer_switch_complete;
        bool m_b_is_in_stealth_reload;
        bool m_b_in_silent_reload_section;
        GameTime_t m_fl_stealth_reload_hold_start_time;
        bool m_b_reload_held_since_start;
        float m_fl_weapon_action_playback_rate;
        int32_t m_i_original_team_number;
        int32_t m_i_most_recent_team_number;
        bool m_b_dropped_near_buy_zone;
        float m_fl_next_attack_render_time_offset;
        bool m_b_clear_weapon_identifying_ugc;
        bool m_b_visuals_data_set;
        bool m_b_uiweapon;
        int32_t m_n_custom_econ_reload_event_id;
        bool m_b_can_be_picked_up;
        GameTime_t m_next_prev_owner_use_time;
        CHandle_C_CSPlayerPawn_ m_h_prev_owner;
        GameTick_t m_n_drop_tick;
        bool m_b_was_active_weapon_when_dropped;
        bool m_donated;
        GameTime_t m_f_last_shot_time;
        bool m_b_was_owned_by_ct;
        bool m_b_was_owned_by_terrorist;
        float m_fl_next_client_fire_bullet_time;
        float m_fl_next_client_fire_bullet_time_repredict;
        C_IronSightController m_iron_sight_controller;
        int32_t m_i_iron_sight_mode;
        GameTime_t m_fl_last_lostrace_failure_time;
        float m_fl_wat_tick_offset;
        GameTime_t m_fl_last_shake_time;
    };

    struct ctimeline_t {
        float m_fl_values;
        int32_t m_n_value_counts;
        int32_t m_n_bucket_count;
        float m_fl_interval;
        float m_fl_final_value;
        TimelineCompression_t m_n_compression_type;
        bool m_b_stopped;
    };

    struct c_tonemapcontroller2_t {
        float m_fl_auto_exposure_min;
        float m_fl_auto_exposure_max;
        float m_fl_exposure_adaptation_speed_up;
        float m_fl_exposure_adaptation_speed_down;
        float m_fl_tonemap_evsmoothing_range;
    };

    struct countdowntimer_t {
        float m_duration;
        GameTime_t m_timestamp;
        float m_timescale;
        WorldGroupId_t m_n_world_group_id;
    };

    struct cnoisestreamdata_t {
        NoiseStreamDef_t m_stream;
    };

    struct pulsenodedynamicoutflows_t__dynamicoutflow_t_t {
        CGlobalSymbol m_outflow_id;
        CPulse_OutflowConnection m_connection;
    };

    struct weaponpurchasecount_t_t {
        uint16_t m_n_item_def_index;
        uint16_t m_n_count;
    };

    struct filterhealth_t {
        bool m_b_adrenaline_active;
        int32_t m_i_health_min;
        int32_t m_i_health_max;
    };

    struct c_pointclientuihud_t {
        bool m_b_check_cssclasses;
        bool m_b_ignore_input;
        float m_fl_width;
        float m_fl_height;
        float m_fl_dpi;
        float m_fl_interact_distance;
        float m_fl_depth_offset;
        uint32_t m_un_owner_context;
        uint32_t m_un_horizontal_align;
        uint32_t m_un_vertical_align;
        uint32_t m_un_orientation;
        bool m_b_allow_interaction_from_all_scene_worlds;
        C_NetworkUtlVectorBase_CUtlSymbolLarge_ m_vec_cssclasses;
    };

    struct cpulsecell_inflow_graphhook_t {
        PulseSymbol_t m_hook_name;
    };

    struct c_pointcommentarynode_t {
        bool m_b_active;
        bool m_b_was_active;
        GameTime_t m_fl_end_time;
        GameTime_t m_fl_start_time;
        float m_fl_start_time_in_commentary;
        CUtlSymbolLarge m_isz_commentary_file;
        CUtlSymbolLarge m_isz_title;
        CUtlSymbolLarge m_isz_speakers;
        int32_t m_i_node_number;
        int32_t m_i_node_number_max;
        bool m_b_listened_to;
        CSoundPatch* m_snd_commentary;
        CHandle_C_BaseEntity_ m_h_view_position;
        bool m_b_restart_after_restore;
    };

    struct shard_model_desc_t_t {
        int32_t m_n_model_id;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material_base;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material_damage_overlay;
        ShardSolid_t m_solid;
        vector2d_t m_vec_panel_size;
        vector2d_t m_vec_stress_position_a;
        vector2d_t m_vec_stress_position_b;
        C_NetworkUtlVectorBase_Vector2D_ m_vec_panel_vertices;
        C_NetworkUtlVectorBase_Vector4D_ m_v_initial_panel_vertices;
        float m_fl_glass_half_thickness;
        bool m_b_has_parent;
        bool m_b_parent_frozen;
        CUtlStringToken m_surface_prop_string_token;
    };

    struct c_keychainmodule_t {
        uint32_t m_n_keychain_def_id;
        uint32_t m_n_keychain_seed;
    };

    struct cfuncwater_t {
        CBuoyancyHelper m_buoyancy_helper;
    };

    struct ccsgamemoderules_t {
        CNetworkVarChainer __m_p_chain_entity;
    };

    struct c_pointclientuiworldtextpanel_t {
        char m_message_text;
    };

    struct ccsplayer_waterservices_t {
        float m_fl_water_jump_time;
        vector3d_t m_vec_water_jump_vel;
        float m_fl_swim_sound_time;
    };

    struct c_csobserverpawn_t {
        CEntityHandle m_h_detect_parent_change;
    };

    struct viewangleserverchange_t_t {
        FixAngleSet_t n_type;
        QAngle q_angle;
        uint32_t n_index;
    };

    struct c_funcladder_t {
        vector3d_t m_vec_ladder_dir;
        CUtlVector_CHandle_C_InfoLadderDismount_ m_dismounts;
        vector3d_t m_vec_local_top;
        VectorWS m_vec_player_mount_position_top;
        VectorWS m_vec_player_mount_position_bottom;
        float m_fl_auto_ride_speed;
        bool m_b_disabled;
        bool m_b_fake_ladder;
        bool m_b_has_slack;
    };

    struct ccsplayerbase_cameraservices_t {
        uint32_t m_i_fov;
        uint32_t m_i_fovstart;
        GameTime_t m_fl_fovtime;
        float m_fl_fovrate;
        CHandle_C_BaseEntity_ m_h_zoom_owner;
        float m_fl_last_shot_fov;
    };

    struct cpulsecell_inflow_baseentrypoint_t {
        PulseRuntimeChunkIndex_t m_entry_chunk;
        PulseRegisterMap_t m_register_map;
    };

    struct c_csplayerpawn_t {
        CCSPlayer_BulletServices* m_p_bullet_services;
        CCSPlayer_HostageServices* m_p_hostage_services;
        CCSPlayer_BuyServices* m_p_buy_services;
        CCSPlayer_GlowServices* m_p_glow_services;
        CCSPlayer_ActionTrackingServices* m_p_action_tracking_services;
        CCSPlayer_AimPunchServices* m_p_aim_punch_services;
        CCSPlayer_DamageReactServices* m_p_damage_react_services;
        GameTime_t m_fl_health_shot_boost_expiration_time;
        GameTime_t m_fl_last_fired_weapon_time;
        bool m_b_has_female_voice;
        float m_fl_landing_time_seconds;
        float m_fl_old_fall_velocity;
        char m_sz_last_place_name;
        bool m_b_prev_defuser;
        bool m_b_prev_helmet;
        int32_t m_n_prev_armor_val;
        int32_t m_n_prev_grenade_ammo_count;
        uint32_t m_un_previous_weapon_hash;
        uint32_t m_un_weapon_hash;
        bool m_b_in_buy_zone;
        bool m_b_previously_in_buy_zone;
        bool m_b_in_landing;
        float m_fl_landing_start_time;
        bool m_b_in_hostage_rescue_zone;
        bool m_b_in_bomb_zone;
        bool m_b_is_buy_menu_open;
        GameTime_t m_fl_time_of_last_injury;
        GameTime_t m_fl_next_spray_decal_time;
        int32_t m_i_retakes_offering;
        int32_t m_i_retakes_offering_card;
        bool m_b_retakes_has_defuse_kit;
        bool m_b_retakes_mvplast_round;
        int32_t m_i_retakes_mvpboost_item;
        loadout_slot_t m_retakes_mvpboost_extra_utility;
        bool m_b_need_to_re_apply_gloves;
        C_EconItemView m_econ_gloves;
        uint8_t m_n_econ_gloves_changed;
        bool m_b_must_sync_ragdoll_state;
        int32_t m_n_ragdoll_damage_bone;
        vector3d_t m_v_ragdoll_damage_force;
        char m_sz_ragdoll_damage_weapon_name;
        bool m_b_ragdoll_damage_headshot;
        VectorWS m_v_ragdoll_server_origin;
        GameTime_t m_last_land_time;
        bool m_b_on_ground_last_tick;
        CHandle_C_CS2HudModelArms_ m_h_hud_model_arms;
        QAngle m_q_death_eye_angles;
        bool m_b_left_handed;
        GameTime_t m_f_switched_handedness_time;
        float m_fl_viewmodel_offset_x;
        float m_fl_viewmodel_offset_y;
        float m_fl_viewmodel_offset_z;
        float m_fl_viewmodel_fov;
        uint32_t m_vec_player_patch_econ_indices;
        color_t m_gun_game_immunity_color;
        CUtlVector_C_BulletHitModel_ m_vec_bullet_hit_models;
        bool m_b_is_walking;
        EntitySpottedState_t m_entity_spotted_state;
        bool m_b_is_scoped;
        bool m_b_resume_zoom;
        bool m_b_is_defusing;
        bool m_b_is_grabbing_hostage;
        CSPlayerBlockingUseAction_t m_i_blocking_use_action_in_progress;
        GameTime_t m_fl_emit_sound_time;
        GameTime_t m_fl_emit_sound_time_client;
        bool m_b_in_no_defuse_area;
        int32_t m_n_which_bomb_zone;
        int32_t m_i_shots_fired;
        float m_fl_flinch_stack;
        float m_fl_velocity_modifier;
        bool m_b_wait_for_no_attack;
        float m_ignore_ladder_jump_time;
        bool m_b_killed_by_headshot;
        int32_t m_armor_value;
        uint16_t m_un_current_equipment_value;
        uint16_t m_un_round_start_equipment_value;
        uint16_t m_un_freezetime_end_equipment_value;
        CEntityIndex m_n_last_killer_index;
        bool m_b_old_is_scoped;
        bool m_b_has_death_info;
        float m_fl_death_info_time;
        VectorWS m_vec_death_info_origin;
        GameTime_t m_grenade_parameter_stash_time;
        bool m_b_grenade_parameters_stashed;
        QAngle m_ang_stashed_shoot_angles;
        VectorWS m_vec_stashed_grenade_throw_position;
        VectorWS m_vec_stashed_grenade_throw_pawn_center;
        vector3d_t m_vec_stashed_velocity;
        float m_fl_interpolated_inaccuracy;
        bool m_b_should_autobuy_dmweapons;
        GameTime_t m_f_immune_to_gun_game_damage_time;
        bool m_b_gun_game_immunity;
        GameTime_t m_f_immune_to_gun_game_damage_time_last;
        float m_fl_big_head_scale;
        float m_f_molotov_damage_time;
        ParticleIndex_t m_n_player_inferno_body_fx;
        QAngle m_ang_eye_angles;
        GameTime_t m_arr_old_eye_angles_times;
        QAngle m_arr_old_eye_angles;
        QAngle m_ang_eye_angles_velocity;
        CEntityIndex m_i_ident_index;
        CountdownTimer m_delay_target_idtimer;
        CEntityIndex m_i_target_item_ent_idx;
        CEntityIndex m_i_old_ident_index;
        CountdownTimer m_hold_target_idtimer;
    };

    struct cpulsecell_waitforcursorswithtagbase_t {
        int32_t m_n_cursors_allowed_to_wait;
        CPulse_ResumePoint m_wait_complete;
    };

    struct c_hostage_t {
        EntitySpottedState_t m_entity_spotted_state;
        CHandle_C_BaseEntity_ m_leader;
        CountdownTimer m_reuse_timer;
        vector3d_t m_vel;
        bool m_is_rescued;
        bool m_jumped_this_frame;
        int32_t m_n_hostage_state;
        bool m_b_hands_have_been_cut;
        CHandle_C_CSPlayerPawn_ m_h_hostage_grabber;
        GameTime_t m_f_last_grab_time;
        VectorWS m_vec_grabbed_pos;
        GameTime_t m_fl_rescue_start_time;
        GameTime_t m_fl_grab_success_time;
        GameTime_t m_fl_drop_start_time;
        CountdownTimer m_blink_timer;
        VectorWS m_look_at;
        CountdownTimer m_look_around_timer;
        bool m_is_init;
        AttachmentHandle_t m_eye_attachment;
        AttachmentHandle_t m_chest_attachment;
        CBasePlayerController* m_p_prediction_owner;
        GameTime_t m_f_newest_alpha_think_time;
    };

    struct c_fogplayerparams_t_t {
        CHandle_C_FogController_ m_h_ctrl;
        float m_fl_transition_time;
        color_t m_old_color;
        float m_fl_old_start;
        float m_fl_old_end;
        float m_fl_old_max_density;
        float m_fl_old_hdrcolor_scale;
        float m_fl_old_far_z;
        color_t m_new_color;
        float m_fl_new_start;
        float m_fl_new_end;
        float m_fl_new_max_density;
        float m_fl_new_hdrcolor_scale;
        float m_fl_new_far_z;
    };

    struct cgamescenenode_t {
        CTransformWS m_node_to_world;
        CEntityInstance* m_p_owner;
        CGameSceneNode* m_p_parent;
        CGameSceneNode* m_p_child;
        CGameSceneNode* m_p_next_sibling;
        CGameSceneNodeHandle m_h_parent;
        CNetworkOriginCellCoordQuantizedVector m_vec_origin;
        QAngle m_ang_rotation;
        float m_fl_scale;
        VectorWS m_vec_abs_origin;
        QAngle m_ang_abs_rotation;
        float m_fl_abs_scale;
        vector3d_t m_vec_wrapped_local_origin;
        QAngle m_ang_wrapped_local_rotation;
        float m_fl_wrapped_scale;
        int16_t m_n_parent_attachment_or_bone;
        bool m_b_debug_abs_origin_changes;
        bool m_b_dormant;
        bool m_b_force_parent_to_be_networked;
        uint32_t m_b_dirty_hierarchy;
        uint32_t m_b_dirty_bone_merge_info;
        uint32_t m_b_networked_position_changed;
        uint32_t m_b_networked_angles_changed;
        uint32_t m_b_networked_scale_changed;
        uint32_t m_b_will_be_calling_post_data_update;
        uint32_t m_b_bone_merge_flex;
        uint32_t m_n_latch_abs_origin;
        uint32_t m_b_dirty_bone_merge_bone_to_root;
        uint8_t m_n_hierarchical_depth;
        uint8_t m_n_hierarchy_type;
        uint8_t m_n_do_not_set_anim_time_in_invalidate_physics_count;
        CUtlStringToken m_name;
        CUtlStringToken m_hierarchy_attach_name;
        float m_fl_client_local_scale;
    };

    struct cplayer_observerservices_t {
        uint8_t m_i_observer_mode;
        CHandle_C_BaseEntity_ m_h_observer_target;
        ObserverMode_t m_i_observer_last_mode;
        bool m_b_forced_observer_mode;
        float m_fl_observer_chase_distance;
        GameTime_t m_fl_observer_chase_distance_calc_time;
    };

    struct ccashstack_t {
        int32_t m_n_cash_stack_value;
    };

    struct c_soundareaentitybase_t {
        bool m_b_disabled;
        bool m_b_was_enabled;
        CUtlSymbolLarge m_isz_sound_area_type;
        vector3d_t m_v_pos;
    };

    struct c_playervisibility_t {
        float m_fl_visibility_strength;
        float m_fl_fog_distance_multiplier;
        float m_fl_fog_max_density_multiplier;
        float m_fl_fade_time;
        bool m_b_start_disabled;
        bool m_b_is_enabled;
    };

    struct cattributemanager__cached_attribute_float_t_t {
        float fl_in;
        CUtlSymbolLarge i_attrib_hook;
        float fl_out;
    };

    struct c_baseplayerweapon_t {
        GameTick_t m_n_next_primary_attack_tick;
        float m_fl_next_primary_attack_tick_ratio;
        GameTick_t m_n_next_secondary_attack_tick;
        float m_fl_next_secondary_attack_tick_ratio;
        int32_t m_i_clip1;
        int32_t m_i_clip2;
        int32_t m_p_reserve_ammo;
    };

    struct cragdollmanager_t {
        int8_t m_i_current_max_ragdoll_count;
    };

    struct c_envsky_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material_lighting_only;
        bool m_b_start_disabled;
        color_t m_v_tint_color;
        color_t m_v_tint_color_lighting_only;
        float m_fl_brightness_scale;
        int32_t m_n_fog_type;
        float m_fl_fog_min_start;
        float m_fl_fog_min_end;
        float m_fl_fog_max_start;
        float m_fl_fog_max_end;
        bool m_b_enabled;
    };

    struct cpulse_invokebinding_t {
        PulseRegisterMap_t m_register_map;
        PulseSymbol_t m_func_name;
        PulseRuntimeCellIndex_t m_n_cell_index;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
    };

    struct c_gamerules_t {
        CNetworkVarChainer __m_p_chain_entity;
        int32_t m_n_total_paused_ticks;
        int32_t m_n_pause_start_tick;
        bool m_b_game_paused;
    };

    struct c_csgo_mappreviewcamerapath_t {
        float m_fl_zfar;
        float m_fl_znear;
        bool m_b_loop;
        bool m_b_vertical_fov;
        bool m_b_constant_speed;
        float m_fl_duration;
        float m_fl_path_length;
        float m_fl_path_duration;
        bool m_b_dof_enabled;
        float m_fl_dof_near_blurry;
        float m_fl_dof_near_crisp;
        float m_fl_dof_far_crisp;
        float m_fl_dof_far_blurry;
        float m_fl_dof_tilt_to_ground;
    };

    struct c_pointworldtext_t {
        bool m_b_force_recreate_next_update;
        int32_t m_n_text_width_px;
        int32_t m_n_text_height_px;
        char m_message_text;
        char m_font_name;
        char m_background_material_name;
        bool m_b_enabled;
        bool m_b_fullbright;
        float m_fl_world_units_per_px;
        float m_fl_font_size;
        float m_fl_depth_offset;
        bool m_b_draw_background;
        float m_fl_background_border_width;
        float m_fl_background_border_height;
        float m_fl_background_world_to_uv;
        color_t m_color;
        PointWorldTextJustifyHorizontal_t m_n_justify_horizontal;
        PointWorldTextJustifyVertical_t m_n_justify_vertical;
        PointWorldTextReorientMode_t m_n_reorient_mode;
    };

    struct c_ropekeyframe_t {
        CBitVec_10_ m_links_touching_something;
        int32_t m_n_links_touching_something;
        bool m_b_apply_wind;
        int32_t m_f_prev_locked_points;
        int32_t m_i_force_point_move_counter;
        bool m_b_prev_end_point_pos;
        VectorWS m_v_prev_end_point_pos;
        float m_fl_cur_scroll;
        float m_fl_scroll_speed;
        uint16_t m_rope_flags;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_i_rope_material_model_index;
        uint8_t m_n_segments;
        CHandle_C_BaseEntity_ m_h_start_point;
        CHandle_C_BaseEntity_ m_h_end_point;
        AttachmentHandle_t m_i_start_attachment;
        AttachmentHandle_t m_i_end_attachment;
        uint8_t m_subdiv;
        int16_t m_rope_length;
        int16_t m_slack;
        float m_texture_scale;
        uint8_t m_f_locked_points;
        uint8_t m_n_change_count;
        float m_width;
        C_RopeKeyframe_CPhysicsDelegate m_physics_delegate;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
        int32_t m_texture_height;
        vector3d_t m_vec_impulse;
        vector3d_t m_vec_previous_impulse;
        float m_fl_current_gust_timer;
        float m_fl_current_gust_lifetime;
        float m_fl_time_to_next_gust;
        vector3d_t m_v_wind_dir;
        vector3d_t m_v_color_mod;
        VectorWS m_v_cached_end_point_attachment_pos;
        QAngle m_v_cached_end_point_attachment_angle;
        bool m_b_constrain_between_endpoints;
        uint32_t m_b_end_point_attachment_positions_dirty;
        uint32_t m_b_end_point_attachment_angles_dirty;
        uint32_t m_b_new_data_this_frame;
        uint32_t m_b_physics_initted;
    };

    struct c_ropekeyframe__cphysicsdelegate_t {
        C_RopeKeyframe* m_p_keyframe;
    };

    struct cinfodynamicshadowhint_t {
        bool m_b_disabled;
        float m_fl_range;
        int32_t m_n_importance;
        int32_t m_n_light_choice;
        CHandle_C_BaseEntity_ m_h_light;
    };

    struct cpathnode_t {
        vector3d_t m_v_in_tangent_local;
        vector3d_t m_v_out_tangent_local;
        CUtlString m_str_parent_path_unique_id;
        CUtlString m_str_path_node_parameter;
        CTransformWS m_x_wsprev_parent;
        CHandle_CPathWithDynamicNodes_ m_h_path;
    };

    struct c_envshakevolume_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        float m_fl_amplitude;
        float m_fl_frequency;
        float m_fl_falloff_distance;
        float m_fl_roll_scale;
    };

    struct cpulsecell_intervaltimer_t {
        CPulse_ResumePoint m_completed;
        SignatureOutflow_Continue m_on_interval;
    };

    struct c_soundeventobbentity_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct cpulsecell_baselerp_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct c_basepropdoor_t {
        DoorState_t m_e_door_state;
        bool m_model_changed;
        bool m_b_locked;
        bool m_b_no_npcs;
        VectorWS m_closed_position;
        QAngle m_closed_angles;
        CHandle_C_BasePropDoor_ m_h_master;
        VectorWS m_v_where_to_set_lighting_origin;
    };

    struct cnetworkedsequenceoperation_t {
        HSequence m_h_sequence;
        float m_fl_prev_cycle;
        float m_fl_cycle;
        CNetworkedQuantizedFloat m_fl_weight;
        bool m_b_sequence_change_networked;
        bool m_b_discontinuity;
        float m_fl_prev_cycle_from_discontinuity;
        float m_fl_prev_cycle_for_anim_event_detection;
    };

    struct ccscustomhudlayout_t {
        CUtlSymbolLarge m_str_layout;
        bool m_b_observable;
        C_UtlVectorEmbeddedNetworkVar_CCSCustomHudLayoutState_ m_vec_player_layout_states;
        CCSCustomHudLayoutState m_global_layout_state;
        C_NetworkUtlVectorBase_CUtlString_ m_vec_panel_ids;
        C_NetworkUtlVectorBase_CUtlString_ m_vec_class_names;
        C_NetworkUtlVectorBase_CUtlString_ m_vec_dialog_variable_names;
    };

    struct centityinstance_t {
        CUtlSymbolLarge m_isz_private_vscripts;
        CEntityIdentity* m_p_entity;
        CScriptComponent* m_cscript_component;
    };

    struct c_basemodelentity_t {
        CRenderComponent* m_crender_component;
        CHitboxComponent m_chitbox_component;
        CChoreoComponent* m_p_choreo_component;
        HitGroup_t m_n_destructible_part_initial_state_destructed0;
        HitGroup_t m_n_destructible_part_initial_state_destructed1;
        HitGroup_t m_n_destructible_part_initial_state_destructed2;
        HitGroup_t m_n_destructible_part_initial_state_destructed3;
        HitGroup_t m_n_destructible_part_initial_state_destructed4;
        int32_t m_n_destructible_part_initial_state_destructed0_part_index;
        int32_t m_n_destructible_part_initial_state_destructed1_part_index;
        int32_t m_n_destructible_part_initial_state_destructed2_part_index;
        int32_t m_n_destructible_part_initial_state_destructed3_part_index;
        int32_t m_n_destructible_part_initial_state_destructed4_part_index;
        bool m_b_destructible_part_initial_state_destructed0_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed1_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed2_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed3_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed4_generate_breakpieces;
        CDestructiblePartsComponent* m_p_destructible_parts_system_component;
        bool m_b_init_model_effects;
        bool m_b_doing_model_effects;
        int32_t m_i_old_health;
        RenderMode_t m_n_render_mode;
        RenderFx_t m_n_render_fx;
        bool m_b_allow_fade_in_view;
        color_t m_clr_render;
        C_UtlVectorEmbeddedNetworkVar_EntityRenderAttribute_t_ m_vec_render_attributes;
        bool m_b_render_to_cubemaps;
        bool m_b_expand_render_bounds_to_include_cloth;
        bool m_b_no_interpolate;
        CCollisionProperty m_collision;
        CGlowProperty m_glow;
        float m_fl_glow_backface_mult;
        float m_fade_min_dist;
        float m_fade_max_dist;
        float m_fl_fade_scale;
        float m_fl_shadow_strength;
        uint8_t m_n_object_culling;
        DecalRtEncoding_t m_n_required_decal_rt_encoding;
        uint32_t m_body_group_total_request_count;
        CUtlVectorFixedGrowable_C_BaseModelEntity_BodyGroupRequest_t_8_ m_body_group_requests;
        CUtlOrderedMap_CGlobalSymbol_int32_t_ m_body_group_choices;
        CNetworkViewOffsetVector m_vec_view_offset;
        CClientAlphaProperty* m_p_client_alpha_property;
        color_t m_client_override_tint;
        bool m_b_use_client_override_tint;
        uint32_t m_bv_disabled_hit_groups;
    };

    struct ccsplayer_bulletservices_t {
        int32_t m_total_hits_on_server;
    };

    struct c_envcombinedlightprobevolume_t {
        color_t m_entity_color;
        float m_entity_fl_brightness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_cubemap_texture;
        bool m_entity_b_custom_cubemap_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_ambient_cube;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sdf;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_dc;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_l1;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_indices_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_scalars_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_shadows_texture;
        vector3d_t m_entity_v_box_mins;
        vector3d_t m_entity_v_box_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_env_cube_map_array_index;
        int32_t m_entity_n_priority;
        bool m_entity_b_start_disabled;
        float m_entity_fl_edge_fade_dist;
        vector3d_t m_entity_v_edge_fade_dists;
        int32_t m_entity_n_light_probe_size_x;
        int32_t m_entity_n_light_probe_size_y;
        int32_t m_entity_n_light_probe_size_z;
        int32_t m_entity_n_light_probe_atlas_x;
        int32_t m_entity_n_light_probe_atlas_y;
        int32_t m_entity_n_light_probe_atlas_z;
        bool m_entity_b_enabled;
    };

    struct c_baseentity_t {
        CBodyComponent* m_cbody_component;
        CNetworkTransmitComponent m_network_transmit_component;
        GameTick_t m_n_last_think_tick;
        CGameSceneNode* m_p_game_scene_node;
        CRenderComponent* m_p_render_component;
        CCollisionProperty* m_p_collision;
        int32_t m_i_max_health;
        int32_t m_i_health;
        float m_fl_damage_accumulator;
        uint8_t m_life_state;
        bool m_b_takes_damage;
        TakeDamageFlags_t m_n_take_damage_flags;
        EntityPlatformTypes_t m_n_platform_type;
        uint8_t m_ub_interpolation_frame;
        CHandle_C_BaseEntity_ m_h_scene_object_controller;
        int32_t m_n_no_interpolation_tick;
        int32_t m_n_visibility_no_interpolation_tick;
        float m_fl_proxy_random_value;
        int32_t m_i_eflags;
        uint8_t m_n_water_type;
        bool m_b_interpolate_even_with_no_model;
        bool m_b_prediction_eligible;
        bool m_b_apply_layer_match_idto_model;
        CUtlStringToken m_tok_layer_match_id;
        CUtlStringToken m_n_subclass_id;
        int32_t m_n_simulation_tick;
        int32_t m_i_current_think_context;
        CUtlVector_thinkfunc_t_ m_a_think_functions;
        bool m_b_disabled_context_thinks;
        float m_fl_anim_time;
        float m_fl_simulation_time;
        uint8_t m_n_scene_object_override_flags;
        bool m_b_has_successfully_interpolated;
        bool m_b_has_added_vars_to_interpolation;
        bool m_b_render_even_when_not_successfully_interpolated;
        int32_t m_n_interpolation_latch_dirty_flags;
        uint16_t m_list_entry;
        GameTime_t m_fl_create_time;
        uint16_t m_ent_client_flags;
        bool m_b_client_side_ragdoll;
        uint8_t m_i_team_num;
        uint32_t m_spawnflags;
        GameTick_t m_n_next_think_tick;
        uint32_t m_f_flags;
        vector3d_t m_vec_abs_velocity;
        CNetworkVelocityVector m_vec_server_velocity;
        CNetworkVelocityVector m_vec_velocity;
        vector3d_t m_vec_base_velocity;
        CHandle_C_BaseEntity_ m_h_effect_entity;
        CHandle_C_BaseEntity_ m_h_owner_entity;
        MoveCollide_t m_move_collide;
        MoveType_t m_move_type;
        MoveType_t m_n_actual_move_type;
        float m_fl_water_level;
        uint32_t m_f_effects;
        CHandle_C_BaseEntity_ m_h_ground_entity;
        int32_t m_n_ground_body_index;
        float m_fl_friction;
        float m_fl_elasticity;
        float m_fl_gravity_scale;
        float m_fl_time_scale;
        bool m_b_animated_every_tick;
        bool m_b_gravity_disabled;
        GameTime_t m_fl_nav_ignore_until_time;
        uint16_t m_h_think;
        uint8_t m_f_bbox_vis_flags;
        float m_fl_actual_gravity_scale;
        bool m_b_gravity_actually_disabled;
        bool m_b_predictable;
        bool m_b_render_with_view_models;
        int32_t m_n_first_predictable_command;
        int32_t m_n_last_predictable_command;
        CHandle_C_BaseEntity_ m_h_old_move_parent;
        CParticleProperty m_particles;
        QAngle m_vec_ang_velocity;
        int32_t m_data_change_event_ref;
        CUtlVector_CEntityHandle_ m_dependencies;
        int32_t m_n_creation_tick;
        bool m_b_anim_time_changed;
        bool m_b_simulation_time_changed;
        CUtlString m_s_unique_hammer_id;
        BloodType m_n_blood_type;
    };

    struct activemodelconfig_t_t {
        ModelConfigHandle_t m_handle;
        CUtlSymbolLarge m_name;
        C_NetworkUtlVectorBase_CHandle_C_BaseModelEntity_ m_associated_entities;
        C_NetworkUtlVectorBase_CUtlSymbolLarge_ m_associated_entity_names;
    };

    struct cpulsecell_value_curve_t {
        CPiecewiseCurve m_curve;
    };

    struct c_chicken_t {
        CHandle_C_CSPlayerPawn_ m_leader;
        CHandle_CCSPlayerController_ m_owner;
        C_AttributeContainer m_attribute_manager;
        bool m_b_attributes_initialized;
        ParticleIndex_t m_h_water_wake_particles;
        bool m_b_is_preview_model;
        bool m_b_spawn_dying_particles;
    };

    struct c_baseplayerpawn_t {
        CPlayer_WeaponServices* m_p_weapon_services;
        CPlayer_ItemServices* m_p_item_services;
        CPlayer_AutoaimServices* m_p_autoaim_services;
        CPlayer_ObserverServices* m_p_observer_services;
        CPlayer_WaterServices* m_p_water_services;
        CPlayer_UseServices* m_p_use_services;
        CPlayer_FlashlightServices* m_p_flashlight_services;
        CPlayer_CameraServices* m_p_camera_services;
        CPlayer_MovementServices* m_p_movement_services;
        C_UtlVectorEmbeddedNetworkVar_ViewAngleServerChange_t_ m_server_view_angle_changes;
        QAngle v_angle;
        QAngle v_angle_previous;
        uint32_t m_i_hide_hud;
        sky3dparams_t m_skybox3d;
        GameTime_t m_fl_death_time;
        vector3d_t m_vec_prediction_error;
        GameTime_t m_fl_prediction_error_time;
        vector3d_t m_vec_last_camera_setup_local_origin;
        GameTime_t m_fl_last_camera_setup_time;
        float m_fl_fovsensitivity_adjust;
        float m_fl_mouse_sensitivity;
        vector3d_t m_v_old_origin;
        float m_fl_old_simulation_time;
        int32_t m_n_last_executed_command_number;
        int32_t m_n_last_executed_command_tick;
        CHandle_CBasePlayerController_ m_h_controller;
        CHandle_CBasePlayerController_ m_h_default_controller;
        bool m_b_is_swapping_to_predictable_controller;
    };

    struct c_stattrakmodule_t {
        bool m_b_knife;
    };

    struct ccsobserver_cameraservices_t {
        CHandle_C_PostProcessingVolume_ m_h_prev_post_processing_volume;
    };

    struct cenvsoundscapeproxy_t {
        CUtlSymbolLarge m_main_soundscape_name;
    };

    struct c_soundevententity_t {
        bool m_b_start_on_spawn;
        bool m_b_to_local_player;
        bool m_b_stop_on_new;
        bool m_b_save_restore;
        bool m_b_saved_is_playing;
        float m_fl_saved_elapsed_time;
        CUtlSymbolLarge m_isz_source_entity_name;
        CUtlSymbolLarge m_isz_attachment_name;
        CEntityOutputTemplate_SndOpEventGuid_t_ m_on_guidchanged;
        CEntityIOOutput m_on_sound_finished;
        float m_fl_client_cull_radius;
        CUtlSymbolLarge m_isz_sound_name;
        CEntityHandle m_h_source;
        int32_t m_n_entity_index_selection;
        uint32_t m_b_client_side_only;
    };

    struct cpulsecell_inflow_eventhandler_t {
        PulseSymbol_t m_event_name;
    };

    struct cbombtarget_t {
        bool m_b_bomb_planted_here;
    };

    struct c_knife_t {
        bool m_b_first_attack;
    };

    struct cskeletoninstance_t {
        CModelState m_model_state;
        bool m_b_use_parent_render_bounds;
        bool m_b_disable_solid_collisions_for_hierarchy;
        bool m_b_dirty_motion_type;
        bool m_b_is_generating_latched_parent_space_state;
        CUtlStringToken m_material_group;
        uint8_t m_n_hitbox_set;
    };

    struct c_itemdogtags_t {
        CHandle_C_CSPlayerPawn_ m_owning_player;
        CHandle_C_CSPlayerPawn_ m_killing_player;
    };

    struct cpulsecell_outflow_cycleshuffled__instancestate_t_t {
        CUtlVectorFixedGrowable_uint8_t_8_ m_shuffle;
        int32_t m_n_next_shuffle;
    };

    struct cpulsecell_baselerp__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
    };

    struct c_baseclientuientity_t {
        bool m_b_enabled;
        CUtlSymbolLarge m_dialog_xmlname;
        CUtlSymbolLarge m_panel_class_name;
        CUtlSymbolLarge m_panel_id;
    };

    struct c_molotovprojectile_t {
        bool m_b_is_inc_grenade;
    };

    struct cbaseprop_t {
        bool m_b_model_overrode_block_los;
        int32_t m_i_shape_type;
        bool m_b_conform_to_collision_bounds;
        transform_t m_m_preferred_catch_transform;
    };

    struct cinfooffscreenpanoramatexture_t {
        bool m_b_disabled;
        bool m_b_enable_mip_gen;
        int32_t m_n_resolution_x;
        int32_t m_n_resolution_y;
        CUtlSymbolLarge m_sz_panel_type;
        CUtlSymbolLarge m_sz_layout_file_name;
        CUtlSymbolLarge m_render_attr_name;
        C_NetworkUtlVectorBase_CHandle_C_BaseModelEntity_ m_target_entities;
        int32_t m_n_target_change_count;
        C_NetworkUtlVectorBase_CUtlSymbolLarge_ m_vec_cssclasses;
        CUtlSymbolLarge m_sz_targets_name;
        CUtlVector_CHandle_C_BaseModelEntity_ m_additional_target_entities;
        bool m_b_check_cssclasses;
    };

    struct ccsweaponbasevdata_t {
        CSWeaponType m_weapon_type;
        CSWeaponCategory m_weapon_category;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCNmSkeleton_ m_sz_anim_skeleton;
        vector3d_t m_vec_muzzle_pos0;
        vector3d_t m_vec_muzzle_pos1;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_tracer_particle;
        gear_slot_t m_gear_slot;
        int32_t m_gear_slot_position;
        loadout_slot_t m_default_loadout_slot;
        int32_t m_n_price;
        int32_t m_n_kill_award;
        int32_t m_n_primary_reserve_ammo_max;
        int32_t m_n_secondary_reserve_ammo_max;
        bool m_b_melee_weapon;
        bool m_b_has_burst_mode;
        bool m_b_is_revolver;
        bool m_b_cannot_shoot_underwater;
        CGlobalSymbol m_sz_name;
        CSWeaponSilencerType m_e_silencer_type;
        bool m_b_show_crosshair;
        bool m_b_is_full_auto;
        int32_t m_n_num_bullets;
        bool m_b_reloads_single_shells;
        CFiringModeFloat m_fl_cycle_time;
        float m_fl_cycle_time_when_in_burst_mode;
        float m_fl_time_between_burst_shots;
        CFiringModeFloat m_fl_max_speed;
        CFiringModeFloat m_fl_spread;
        CFiringModeFloat m_fl_inaccuracy_crouch;
        CFiringModeFloat m_fl_inaccuracy_stand;
        CFiringModeFloat m_fl_inaccuracy_jump;
        CFiringModeFloat m_fl_inaccuracy_land;
        CFiringModeFloat m_fl_inaccuracy_ladder;
        CFiringModeFloat m_fl_inaccuracy_fire;
        CFiringModeFloat m_fl_inaccuracy_move;
        CFiringModeFloat m_fl_recoil_angle;
        CFiringModeFloat m_fl_recoil_angle_variance;
        CFiringModeFloat m_fl_recoil_magnitude;
        CFiringModeFloat m_fl_recoil_magnitude_variance;
        CFiringModeInt m_n_tracer_frequency;
        float m_fl_inaccuracy_jump_initial;
        float m_fl_inaccuracy_jump_apex;
        float m_fl_inaccuracy_reload;
        float m_fl_deploy_duration;
        float m_fl_disallow_attack_after_reload_start_duration;
        int32_t m_n_burst_shot_count;
        bool m_b_allow_burst_holster;
        int32_t m_n_recoil_seed;
        int32_t m_n_spread_seed;
        float m_fl_attack_movespeed_factor;
        float m_fl_inaccuracy_pitch_shift;
        float m_fl_inaccuracy_alt_sound_threshold;
        CUtlString m_sz_use_radio_subtitle;
        bool m_b_unzooms_after_shot;
        bool m_b_hide_view_model_when_zoomed;
        int32_t m_n_zoom_levels;
        int32_t m_n_zoom_fov1;
        int32_t m_n_zoom_fov2;
        float m_fl_zoom_time0;
        float m_fl_zoom_time1;
        float m_fl_zoom_time2;
        float m_fl_iron_sight_pull_up_speed;
        float m_fl_iron_sight_put_down_speed;
        float m_fl_iron_sight_fov;
        float m_fl_iron_sight_pivot_forward;
        float m_fl_iron_sight_looseness;
        int32_t m_n_damage;
        float m_fl_headshot_multiplier;
        float m_fl_armor_ratio;
        float m_fl_penetration;
        float m_fl_range;
        float m_fl_range_modifier;
        float m_fl_flinch_velocity_modifier_large;
        float m_fl_flinch_velocity_modifier_small;
        float m_fl_recovery_time_crouch;
        float m_fl_recovery_time_stand;
        float m_fl_recovery_time_crouch_final;
        float m_fl_recovery_time_stand_final;
        int32_t m_n_recovery_transition_start_bullet;
        int32_t m_n_recovery_transition_end_bullet;
        float m_fl_throw_velocity;
        vector3d_t m_v_smoke_color;
        CGlobalSymbol m_sz_anim_class;
    };

    struct cattributemanager_t {
        CUtlVector_CHandle_C_BaseEntity_ m_providers;
        int32_t m_i_reapply_provision_parity;
        CHandle_C_BaseEntity_ m_h_outer;
        bool m_b_prevent_loopback;
        attributeprovidertypes_t m_provider_type;
        CUtlVector_CAttributeManager_cached_attribute_float_t_ m_cached_results;
    };

    struct cplayer_cameraservices_t {
        QAngle m_vec_cs_view_punch_angle;
        GameTick_t m_n_cs_view_punch_angle_tick;
        float m_fl_cs_view_punch_angle_tick_ratio;
        C_fogplayerparams_t m_player_fog;
        CHandle_C_ColorCorrection_ m_h_color_correction_ctrl;
        CHandle_C_BaseEntity_ m_h_view_entity;
        CHandle_C_TonemapController2_ m_h_tonemap_controller;
        audioparams_t m_audio;
        C_NetworkUtlVectorBase_CHandle_C_PostProcessingVolume_ m_post_processing_volumes;
        float m_fl_old_player_z;
        float m_fl_old_player_view_offset_z;
        fogparams_t m_current_fog;
        CHandle_C_FogController_ m_h_old_fog_controller;
        bool m_b_override_fog_color;
        Color m_override_fog_color;
        bool m_b_override_fog_start_end;
        float m_f_override_fog_start;
        float m_f_override_fog_end;
        CHandle_C_PostProcessingVolume_ m_h_active_post_processing_volume;
        QAngle m_ang_demo_view_angles;
    };

    struct cpulsecell_timeline_t {
        CUtlVector_CPulseCell_Timeline_TimelineEvent_t_ m_timeline_events;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_inflow_entoutputhandler_t {
        PulseSymbol_t m_source_entity;
        PulseSymbol_t m_source_output;
        CPulseValueFullType m_expected_param_type;
    };

    struct c_basecsgrenade_t {
        bool m_b_client_predict_delete;
        bool m_b_redraw;
        bool m_b_is_held_by_player;
        bool m_b_pin_pulled;
        bool m_b_jump_throw;
        bool m_b_throw_animating;
        GameTime_t m_f_throw_time;
        float m_fl_throw_strength;
        GameTime_t m_f_drop_time;
        GameTime_t m_f_pin_pull_time;
        bool m_b_just_pulled_pin;
        GameTick_t m_n_next_hold_tick;
        float m_fl_next_hold_frac;
        CHandle_C_CSWeaponBase_ m_h_switch_to_weapon_after_throw;
    };

    struct cfilterattributeint_t {
        CUtlSymbolLarge m_s_attribute_name;
    };

    struct cpointtemplate_t {
        CUtlSymbolLarge m_isz_world_name;
        CUtlSymbolLarge m_isz_source2_entity_lump_name;
        CUtlSymbolLarge m_isz_entity_filter_name;
        float m_fl_timeout_interval;
        bool m_b_asynchronously_spawn_entities;
        PointTemplateClientOnlyEntityBehavior_t m_client_only_entity_behavior;
        PointTemplateOwnerSpawnGroupType_t m_owner_spawn_group_type;
        CUtlVector_uint32_t_ m_created_spawn_group_handles;
        CUtlVector_CEntityHandle_ m_spawned_entity_handles;
        HSCRIPT m_script_spawn_callback;
        HSCRIPT m_script_callback_scope;
        CEntityOutputTemplate_CUtlVector_CEntityHandle_ m_on_entity_spawned;
    };

    struct ccsplayercontroller_t {
        CCSPlayerController_InGameMoneyServices* m_p_in_game_money_services;
        CCSPlayerController_InventoryServices* m_p_inventory_services;
        CCSPlayerController_ActionTrackingServices* m_p_action_tracking_services;
        CCSPlayerController_DamageServices* m_p_damage_services;
        uint32_t m_i_ping;
        bool m_b_has_communication_abuse_mute;
        uint32_t m_ui_communication_mute_flags;
        CUtlSymbolLarge m_sz_crosshair_codes;
        uint8_t m_i_pending_team_num;
        GameTime_t m_fl_force_team_time;
        int32_t m_i_comp_teammate_color;
        bool m_b_ever_played_on_team;
        GameTime_t m_fl_previous_force_join_team_time;
        CUtlSymbolLarge m_sz_clan;
        uint32_t m_un_clan_id32bit;
        CUtlString m_s_sanitized_player_name;
        CUtlString m_s_sanitized_clan_tag;
        int32_t m_i_coaching_team;
        uint64_t m_n_player_dominated;
        uint64_t m_n_player_dominating_me;
        int32_t m_i_competitive_ranking;
        int32_t m_i_competitive_wins;
        int8_t m_i_competitive_rank_type;
        int32_t m_i_competitive_ranking_predicted_win;
        int32_t m_i_competitive_ranking_predicted_loss;
        int32_t m_i_competitive_ranking_predicted_tie;
        int32_t m_n_end_match_next_map_vote;
        uint16_t m_un_active_quest_id;
        uint32_t m_rt_active_mission_period;
        QuestProgress_Reason m_n_quest_progress_reason;
        uint32_t m_un_player_tv_control_flags;
        int32_t m_i_draft_index;
        uint32_t m_ms_queued_mode_disconnection_timestamp;
        uint32_t m_ui_abandon_recorded_reason;
        uint32_t m_e_network_disconnection_reason;
        bool m_b_cannot_be_kicked;
        bool m_b_ever_fully_connected;
        bool m_b_abandon_allows_surrender;
        bool m_b_abandon_offers_instant_surrender;
        bool m_b_disconnection1_min_warning_printed;
        bool m_b_score_reported;
        int32_t m_n_disconnection_tick;
        bool m_b_controlling_bot;
        bool m_b_has_controlled_bot_this_round;
        bool m_b_has_been_controlled_by_player_this_round;
        int32_t m_n_bots_controlled_this_round;
        bool m_b_can_control_observed_bot;
        CHandle_C_CSPlayerPawn_ m_h_player_pawn;
        CHandle_C_CSObserverPawn_ m_h_observer_pawn;
        bool m_b_pawn_is_alive;
        uint32_t m_i_pawn_health;
        int32_t m_i_pawn_armor;
        bool m_b_pawn_has_defuser;
        bool m_b_pawn_has_helmet;
        uint16_t m_n_pawn_character_def_index;
        int32_t m_i_pawn_lifetime_start;
        int32_t m_i_pawn_lifetime_end;
        int32_t m_i_pawn_bot_difficulty;
        CHandle_CCSPlayerController_ m_h_original_controller_of_current_pawn;
        int32_t m_i_score;
        uint8_t m_recent_kill_queue;
        uint8_t m_n_first_kill;
        uint8_t m_n_kill_count;
        bool m_b_mvp_no_music;
        int32_t m_e_mvp_reason;
        int32_t m_i_music_kit_id;
        int32_t m_i_music_kit_mvps;
        int32_t m_i_mvps;
        bool m_b_is_player_name_dirty;
        bool m_b_fire_bullets_seed_synchronized;
    };

    struct c_csgo_previewmodel_t {
        CUtlString m_default_anim;
        AnimLoopMode_t m_n_default_anim_loop_mode;
        float m_fl_initial_model_scale;
        CUtlString m_s_initial_weapon_state;
    };

    struct cpulsecell_outflow_cycleordered__instancestate_t_t {
        int32_t m_n_next_index;
    };

    struct ccsobservableelement_t {
        CUtlSymbolLarge m_isz_observable_model_entity;
        CHandle_C_BaseEntity_ m_h_observable_model_entity;
        CHandle_C_BaseEntity_ m_h_observable_model_entity2;
        uint32_t m_n_team_filter;
    };

    struct c_soundeventaabbentity_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct ccsplayer_movementservices_t {
        CCSPlayerAnimationState m_animation_state;
        bool m_b_using_ground_topology_offset;
        float m_fl_using_ground_topology_offset_transition_smoothing;
        vector3d_t m_vec_ladder_normal;
        int32_t m_n_ladder_surface_prop_index;
        bool m_b_ducked;
        float m_fl_duck_amount;
        float m_fl_duck_speed;
        bool m_b_duck_override;
        bool m_b_desires_duck;
        bool m_b_ducking;
        float m_fl_duck_root_offset;
        float m_fl_duck_view_offset;
        float m_fl_last_duck_time;
        float m_fl_bomb_plant_view_offset;
        vector2d_t m_vec_last_position_at_full_crouch_speed;
        bool m_duck_until_on_ground;
        bool m_b_has_walk_moved_since_last_jump;
        bool m_b_in_stuck_test;
        int32_t m_n_trace_count;
        int32_t m_stuck_last;
        bool m_b_speed_cropped;
        int32_t m_n_old_water_level;
        float m_fl_water_entry_time;
        vector3d_t m_vec_forward;
        vector3d_t m_vec_left;
        vector3d_t m_vec_up;
        int32_t m_n_game_code_has_moved_player_after_command;
        GameTime_t m_f_stash_grenade_parameter_when;
        bool m_b_use_friction_stashed_speed;
        float m_fl_use_friction_stashed_speed_until_frac;
        float m_fl_friction_stashed_speed;
        float m_fl_stamina;
        float m_fl_height_at_jump_start;
        float m_fl_max_jump_height_this_jump;
        float m_fl_max_jump_height_last_jump;
        float m_fl_stamina_at_jump_start;
        float m_fl_vel_mul_at_jump_start;
        float m_fl_accumulated_jump_error;
        CCSPlayerLegacyJump m_legacy_jump;
        CCSPlayerModernJump m_modern_jump;
        GameTick_t m_n_last_jump_tick;
        float m_fl_last_jump_frac;
        float m_fl_last_jump_velocity_z;
        bool m_b_jump_apex_pending;
        float m_fl_ticks_since_last_surfing_detected;
        bool m_b_was_surfing;
        vector2d_t m_vec_walk_wish_vel;
        bool m_b_has_ever_processed_command;
    };

    struct sellbackpurchaseentry_t_t {
        uint16_t m_un_def_idx;
        int32_t m_n_cost;
        int32_t m_n_prev_armor;
        bool m_b_prev_helmet;
        CEntityHandle m_h_item;
    };

    struct c_weaponbaseitem_t {
        bool m_b_sequence_in_progress;
        bool m_b_redraw;
    };

    struct physicsragdollpose_t_t {
        C_NetworkUtlVectorBase_CTransform_ m_relative_transforms;
        CHandle_C_BaseEntity_ m_h_owner;
        bool m_b_set_from_debug_history;
    };

    struct cpropdatacomponent_t {
        float m_fl_dmg_mod_bullet;
        float m_fl_dmg_mod_club;
        float m_fl_dmg_mod_explosive;
        float m_fl_dmg_mod_fire;
        CUtlSymbolLarge m_isz_physics_damage_table_name;
        CUtlSymbolLarge m_isz_base_prop_data;
        int32_t m_n_interactions;
        bool m_b_spawn_motion_disabled;
        int32_t m_n_disable_take_physics_damage_spawn_flag;
        int32_t m_n_motion_disabled_spawn_flag;
    };

    struct cpulsecell_limitcount__instancestate_t_t {
        int32_t m_n_current_count;
    };

    struct c_weaponcz75a_t {
        bool m_b_magazine_removed;
    };

    struct c_dynamiclight_t {
        uint8_t m_flags;
        uint8_t m_light_style;
        float m_radius;
        int32_t m_exponent;
        float m_inner_angle;
        float m_outer_angle;
        float m_spot_radius;
    };

    struct ccs2pawngraphcontroller_t {
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_defusing;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_move_type;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_move_direction_id;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_x;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_y;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_horizontal;
        CAnimGraph2ParamOptionalRef_float_ m_fl_previous_move_speed_horizontal;
        CAnimGraph2ParamOptionalRef_float_ m_fl_crouch_amount;
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_walking;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_drop_amount;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_ground_action;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_ground_action_direction_id;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ground_turn_angle_or_velocity;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_cycle;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_yaw;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_yaw_backwards;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_air_action;
        CAnimGraph2ParamOptionalRef_float_ m_fl_air_height_above_ground;
        CAnimGraph2ParamOptionalRef_CNmTarget_ m_left_foot_target;
        CAnimGraph2ParamOptionalRef_CNmTarget_ m_right_foot_target;
        CAnimGraph2ParamOptionalRef_float_ m_fl_flashed_amount;
        CAnimGraph2ParamOptionalRef_float_ m_fl_aim_pitch_angle;
        CAnimGraph2ParamOptionalRef_float_ m_fl_aim_yaw_angle;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_flinch_head;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_head_restart;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_flinch_body;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_body_restart;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_is_on_fire;
    };

    struct enginecountdowntimer_t {
        float m_duration;
        float m_timestamp;
        float m_timescale;
    };

    struct c_soundeventsphereentity_t {
        float m_fl_radius;
    };

    struct ccsplayercontroller_damageservices_t {
        int32_t m_n_send_update;
        C_UtlVectorEmbeddedNetworkVar_CDamageRecord_ m_damage_list;
    };

    struct c_inferno_t {
        ParticleIndex_t m_nfx_fire_damage_effect;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_inferno_points_snapshot;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_inferno_filler_points_snapshot;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_inferno_outline_points_snapshot;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_inferno_climbing_outline_points_snapshot;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_inferno_decals_snapshot;
        VectorWS m_fire_positions;
        VectorWS m_fire_parent_positions;
        bool m_b_fire_is_burning;
        Vector m_burn_normal;
        int32_t m_fire_count;
        int32_t m_n_inferno_type;
        float m_n_fire_lifetime;
        bool m_b_in_post_effect_time;
        int32_t m_last_fire_count;
        int32_t m_n_fire_effect_tick_begin;
        int32_t m_drawable_count;
        bool m_blos_check;
        int32_t m_nlosperiod;
        float m_max_fire_half_width;
        float m_max_fire_height;
        VectorWS m_min_bounds;
        VectorWS m_max_bounds;
        float m_fl_last_grass_burn_think;
    };

    struct cpointorient_t {
        CUtlSymbolLarge m_isz_spawn_target_name;
        CHandle_C_BaseEntity_ m_h_target;
        bool m_b_active;
        PointOrientGoalDirectionType_t m_n_goal_direction;
        PointOrientConstraint_t m_n_constraint;
        float m_fl_max_turn_rate;
        GameTime_t m_fl_last_game_time;
    };

    struct c_globallight_t {
        uint16_t m_wind_cloth_force_handle;
    };

    struct c_envwindclientside_t {
        C_EnvWindShared m_env_wind_shared;
    };

    struct sky3dparams_t_t {
        int16_t scale;
        VectorWS origin;
        bool b_clip3_dsky_box_near_to_world_far;
        float fl_clip3_dsky_box_near_to_world_far_offset;
        fogparams_t fog;
        WorldGroupId_t m_n_world_group_id;
    };

    struct c_soundeventconeentity_t {
        float m_fl_emitter_angle;
        float m_fl_sweet_spot_angle;
        float m_fl_atten_min;
        float m_fl_atten_max;
        CUtlSymbolLarge m_isz_parameter_name;
    };

    struct cdestructiblepartscomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        CUtlVector_uint16_t_ m_vec_damage_taken_by_hit_group;
        CHandle_C_BaseModelEntity_ m_h_owner;
        CAnimGraphControllerPtr m_p_anim_graph_destructible_graph_controller;
    };

    struct c_envwind_t {
        C_EnvWindShared m_env_wind_shared;
    };

    struct c_pointdeathcambounds_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        float m_fl_lerp_distance;
    };

    struct ccsplayercontroller_actiontrackingservices_t {
        C_UtlVectorEmbeddedNetworkVar_CSPerRoundStats_t_ m_per_round_stats;
        CSMatchStats_t m_match_stats;
        int32_t m_i_num_round_kills;
        int32_t m_i_num_round_kills_headshots;
        float m_fl_total_round_damage_dealt;
    };

    struct cbodycomponentbaseanimgraph_t {
        CBaseAnimGraphController m_animation_controller;
    };

    struct cpulsecell_baseyieldinginflow_t {
        CPulse_ResumePoint m_base_flow_on_after_cancel;
        CPulse_ResumePoint m_base_flow_while_active;
    };

    struct pulsenodedynamicoutflows_t_t {
        CUtlVector_PulseNodeDynamicOutflows_t_DynamicOutflow_t_ m_outflows;
    };

    struct c_triggerbuoyancy_t {
        CBuoyancyHelper m_buoyancy_helper;
        float m_fl_fluid_density;
    };

    struct cplayer_movementservices_humanoid_t {
        float m_fl_step_sound_time;
        float m_fl_fall_velocity;
        vector3d_t m_ground_normal;
        float m_fl_surface_friction;
        CUtlStringToken m_surface_props;
        int32_t m_n_stepside;
    };

    struct cpulsecell_isrequirementvalid__criteria_t_t {
        bool m_b_is_valid;
    };

    struct c_physpropclientside_t {
        GameTime_t m_fl_touch_delta;
        GameTime_t m_f_death_time;
        VectorWS m_vec_damage_position;
        vector3d_t m_vec_damage_direction;
        DamageTypes_t m_n_damage_type;
    };

    struct c_basedoor_t {
        bool m_b_is_usable;
    };

    struct csmatchstats_t_t {
        int32_t m_i_enemy5_ks;
        int32_t m_i_enemy4_ks;
        int32_t m_i_enemy3_ks;
        int32_t m_i_enemy_knife_kills;
        int32_t m_i_enemy_taser_kills;
    };

    struct entityrenderattribute_t_t {
        CUtlStringToken m_id;
        vector4d_t m_values;
    };

    struct cpulsecell_inflow_observablevariablelistener_t {
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference;
        bool m_b_self_reference;
    };

    struct cmodelstate_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlSymbolLarge m_model_name;
        IPhysAggregateInstance* m_p_vphysics_aggregate;
        float m_fl_root_bone_offset_x;
        float m_fl_root_bone_offset_y;
        float m_fl_root_bone_offset_z;
        uint8_t m_n_root_bone_offset_reset_serial_number;
        bool m_b_client_cloth_creation_suppressed;
        uint8_t m_n_anim_state_no_interp_serial_number;
        uint64_t m_mesh_group_mask;
        C_NetworkUtlVectorBase_int32_t_ m_n_body_group_choices;
        int8_t m_n_ideal_motion_type;
        int8_t m_n_force_lod;
        int8_t m_n_cloth_update_flags;
    };

    struct cpulsecell_lerpcamerasettings__cursorstate_t_t {
        CHandle_C_PointCamera_ m_h_camera;
        PointCameraSettings_t m_overlaid_start;
        PointCameraSettings_t m_overlaid_end;
    };

    struct cpulsecell_outflow_cycleordered_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct c_csweaponbasegun_t {
        int32_t m_zoom_level;
        int32_t m_i_burst_shots_remaining;
        int32_t m_i_silencer_bodygroup;
        int32_t m_silenced_model_index;
        bool m_in_precache;
        bool m_b_needs_bolt_action;
        int32_t m_n_revolver_cylinder_idx;
    };

    struct c_csgamerulesproxy_t {
        C_CSGameRules* m_p_game_rules;
    };

    struct ccollisionproperty_t {
        VPhysicsCollisionAttribute_t m_collision_attribute;
        vector3d_t m_vec_mins;
        vector3d_t m_vec_maxs;
        uint8_t m_us_solid_flags;
        SolidType_t m_n_solid_type;
        uint8_t m_trigger_bloat;
        SurroundingBoundsType_t m_n_surround_type;
        uint8_t m_collision_group;
        uint8_t m_n_enable_physics;
        float m_fl_bounding_radius;
        vector3d_t m_vec_specified_surrounding_mins;
        vector3d_t m_vec_specified_surrounding_maxs;
        vector3d_t m_vec_surrounding_maxs;
        vector3d_t m_vec_surrounding_mins;
        vector3d_t m_v_capsule_center1;
        vector3d_t m_v_capsule_center2;
        float m_fl_capsule_radius;
    };

    struct cfiltermassgreater_t {
        float m_f_filter_mass;
    };

    struct c_shatterglassshardphysics_t {
        shard_model_desc_t m_shard_desc;
    };

    struct c_entitydissolve_t {
        GameTime_t m_fl_start_time;
        float m_fl_fade_in_start;
        float m_fl_fade_in_length;
        float m_fl_fade_out_model_start;
        float m_fl_fade_out_model_length;
        float m_fl_fade_out_start;
        float m_fl_fade_out_length;
        EntityDissolveType_t m_n_dissolve_type;
        uint32_t m_n_magnitude;
        VectorWS m_v_dissolver_origin;
        GameTime_t m_fl_next_spark_time;
        bool m_b_core_explode;
        bool m_b_linked_to_server_ent;
    };

    struct ccscustomplayercamera_t {
        CHandle_C_CSPlayerPawnBase_ m_h_pawn;
        CustomCameraMode_t m_n_camera_mode;
        CHandle_C_BaseEntity_ m_h_follow_entity;
        bool m_b_follow_eyes;
        vector3d_t m_vec_follow_offset;
        vector3d_t m_vec_camera_offset;
        bool m_b_clip_camera_offset;
        float m_fl_camera_offset_return_strength;
    };

    struct ccsgamemoderules_armsrace_t {
        C_NetworkUtlVectorBase_CUtlString_ m_weapon_sequence;
    };

    struct c_funcmonitor_t {
        CUtlString m_target_camera;
        int32_t m_n_resolution_enum;
        bool m_b_render_shadows;
        bool m_b_use_unique_color_target;
        CUtlString m_brush_model_name;
        CHandle_C_BaseEntity_ m_h_target_camera;
        bool m_b_enabled;
        bool m_b_draw3_dskybox;
    };

    struct c_clientragdoll_t {
        bool m_b_fade_out;
        bool m_b_important;
        GameTime_t m_fl_effect_time;
        GameTime_t m_gib_despawn_time;
        int32_t m_i_current_friction;
        int32_t m_i_min_friction;
        int32_t m_i_max_friction;
        int32_t m_i_friction_anim_state;
        bool m_b_release_ragdoll;
        AttachmentHandle_t m_i_eye_attachment;
        bool m_b_fading_out;
        float m_fl_scale_end;
        GameTime_t m_fl_scale_time_start;
        GameTime_t m_fl_scale_time_end;
    };

    struct pulseselectoroutflowlist_t_t {
        CUtlVector_OutflowWithRequirements_t_ m_outflows;
    };

    struct c_basemodelentity__bodygrouprequest_t_t {
        uint32_t m_u_request_id;
        CUtlStringToken m_n_group_name;
        CGlobalSymbol m_s_choice_name;
        int32_t m_n_group;
        uint16_t m_u_choice;
        uint16_t m_u_ref_count;
    };

    struct cpulsecell_playsequence__cursorstate_t_t {
        CHandle_CBaseAnimGraph_ m_h_target;
    };

    struct cbodycomponentskeletoninstance_t {
        CSkeletonInstance m_skeleton_instance;
    };

    struct c_csgo_teampreviewcharacterposition_t {
        int32_t m_n_variant;
        int32_t m_n_random;
        int32_t m_n_ordinal;
        CUtlString m_s_weapon_name;
        uint64_t m_xuid;
        C_EconItemView m_agent_item;
        C_EconItemView m_gloves_item;
        C_EconItemView m_weapon_item;
        C_EconItemView m_pet_item;
    };

    struct c_smokegrenadeprojectile_t {
        int32_t m_n_smoke_effect_tick_begin;
        bool m_b_did_smoke_effect;
        int32_t m_n_random_seed;
        vector3d_t m_v_smoke_color;
        VectorWS m_v_smoke_detonation_pos;
        C_NetworkUtlVectorBase_uint8_t_ m_voxel_frame_data;
        int32_t m_n_voxel_frame_data_size;
        int32_t m_n_voxel_update;
        uint8_t m_n_smoke_light_probe_regen;
        bool m_b_smoke_volume_data_received;
        bool m_b_smoke_effect_spawned;
    };

    struct cscriptcomponent_t {
        CUtlSymbolLarge m_script_class_name;
    };

    struct ccsplayer_buyservices_t {
        C_UtlVectorEmbeddedNetworkVar_SellbackPurchaseEntry_t_ m_vec_sellback_purchase_entries;
    };

    struct c_skycameravolumetarget_t {
        int16_t m_n_skybox_scale;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
    };

    struct c_dynamicprop_t {
        bool m_b_graph_controller_enabled;
        bool m_b_use_hitboxes_for_render_box;
        bool m_b_use_anim_graph;
        CEntityIOOutput m_p_output_anim_begun;
        CEntityIOOutput m_p_output_anim_over;
        CEntityIOOutput m_p_output_anim_loop_cycle_over;
        CEntityIOOutput m_on_anim_reached_start;
        CEntityIOOutput m_on_anim_reached_end;
        CUtlSymbolLarge m_isz_idle_anim;
        AnimLoopMode_t m_n_idle_anim_loop_mode;
        bool m_b_randomize_cycle;
        bool m_b_start_disabled;
        bool m_b_fired_start_end_output;
        bool m_b_force_npc_exclude;
        bool m_b_create_movable_surface_graph;
        bool m_b_create_non_solid;
        bool m_b_is_override_prop;
        int32_t m_i_initial_glow_state;
        int32_t m_n_glow_range;
        int32_t m_n_glow_range_min;
        color_t m_glow_color;
        int32_t m_n_glow_team;
        int32_t m_i_cached_frame_count;
        vector3d_t m_vec_cached_render_mins;
        vector3d_t m_vec_cached_render_maxs;
    };

    struct c_csteam_t {
        char m_sz_team_match_stat;
        int32_t m_num_map_victories;
        bool m_b_surrendered;
        int32_t m_score_first_half;
        int32_t m_score_second_half;
        int32_t m_score_overtime;
        char m_sz_clan_teamname;
        uint32_t m_i_clan_id;
        char m_sz_team_flag_image;
        char m_sz_team_logo_image;
    };

    struct c_texturebasedanimatable_t {
        bool m_b_loop;
        float m_fl_fps;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_position_keys;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_rotation_keys;
        vector3d_t m_v_animation_bounds_min;
        vector3d_t m_v_animation_bounds_max;
        float m_fl_start_time;
        float m_fl_start_frame;
    };

    struct c_triggerphysics_t {
        float m_gravity_scale;
        float m_linear_limit;
        float m_linear_damping;
        float m_angular_limit;
        float m_angular_damping;
        float m_linear_force;
        float m_fl_frequency;
        float m_fl_damping_ratio;
        vector3d_t m_vec_linear_force_point_at;
        bool m_b_collapse_to_force_point;
        VectorWS m_vec_linear_force_point_at_world;
        vector3d_t m_vec_linear_force_direction;
        bool m_b_force_direction_is_in_local_space;
        bool m_b_convert_to_debris_when_possible;
    };

    struct c_handletest_t {
        CHandle_C_BaseEntity_ m_handle;
        bool m_b_send_handle;
    };

    struct cinfoworldlayer_t {
        CEntityIOOutput m_p_output_on_entities_spawned;
        CUtlSymbolLarge m_world_name;
        CUtlSymbolLarge m_layer_name;
        bool m_b_world_layer_visible;
        bool m_b_entities_spawned;
        bool m_b_create_as_child_spawn_group;
        uint32_t m_h_layer_spawn_group;
        bool m_b_world_layer_actually_visible;
    };

    struct c_multimeter_t {
        CHandle_C_PlantedC4_ m_h_target_c4;
    };

    struct c_basetrigger_t {
        CEntityIOOutput m_on_start_touch;
        CEntityIOOutput m_on_start_touch_all;
        CEntityIOOutput m_on_end_touch;
        CEntityIOOutput m_on_end_touch_all;
        CEntityIOOutput m_on_touching;
        CEntityIOOutput m_on_touching_each_entity;
        CEntityIOOutput m_on_not_touching;
        CEntityIOOutput m_on_touching_changed;
        CUtlVector_CHandle_C_BaseEntity_ m_h_touching_entities;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseFilter_ m_h_filter;
        bool m_b_disabled;
    };

    struct filterdamagetype_t {
        int32_t m_i_damage_type;
    };

    struct cattributelist_t {
        C_UtlVectorEmbeddedNetworkVar_CEconItemAttribute_ m_attributes;
        CAttributeManager* m_p_manager;
    };

    struct cpulsecell_inflow_wait_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cfilterproximity_t {
        float m_fl_radius;
    };

    struct ccs2weapongraphcontroller_t {
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_action;
        CAnimGraph2ParamOptionalRef_bool_ m_b_action_reset;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_action_speed_scale;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_category;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_type;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_extra_info;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo_max;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo_reserve;
        CAnimGraph2ParamOptionalRef_bool_ m_b_weapon_is_silenced;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ironsight_amount;
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_using_legacy_model;
        CAnimGraph2ParamOptionalRef_float_ m_idle_variation;
        CAnimGraph2ParamOptionalRef_float_ m_deploy_variation;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_attack_type;
        CAnimGraph2ParamOptionalRef_float_ m_attack_throw_strength;
        CAnimGraph2ParamOptionalRef_float_ m_fl_attack_variation;
        CAnimGraph2ParamOptionalRef_float_ m_inspect_variation;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_inspect_extra_info;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_reload_stage;
    };

    struct ceffectdata_t {
        VectorWS m_v_origin;
        VectorWS m_v_start;
        vector3d_t m_v_normal;
        QAngle m_v_angles;
        CEntityHandle m_h_entity;
        CEntityHandle m_h_other_entity;
        float m_fl_scale;
        float m_fl_magnitude;
        float m_fl_radius;
        CUtlStringToken m_n_surface_prop;
        CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_n_effect_index;
        uint32_t m_n_damage_type;
        uint8_t m_n_penetrate;
        uint16_t m_n_material;
        int16_t m_n_hit_box;
        uint8_t m_n_color;
        uint8_t m_f_flags;
        AttachmentHandle_t m_n_attachment_index;
        CUtlStringToken m_n_attachment_name;
        uint16_t m_i_effect_name;
    };

    struct c_particlesystem_t {
        char m_sz_snapshot_file_name;
        bool m_b_active;
        bool m_b_frozen;
        float m_fl_freeze_transition_duration;
        int32_t m_n_stop_type;
        bool m_b_animate_during_gameplay_pause;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_i_effect_index;
        GameTime_t m_fl_start_time;
        float m_fl_pre_sim_time;
        Vector m_v_server_control_points;
        uint8_t m_i_server_control_point_assignments;
        CHandle_C_BaseEntity_ m_h_control_point_ents;
        bool m_b_data_string_localized;
        CUtlString m_str_data_string;
        bool m_b_no_save;
        bool m_b_no_freeze;
        bool m_b_no_ramp;
        bool m_b_start_active;
        CUtlSymbolLarge m_isz_effect_name;
        CUtlSymbolLarge m_isz_control_point_names;
        int32_t m_n_data_cp;
        vector3d_t m_vec_data_cpvalue;
        int32_t m_n_tint_cp;
        color_t m_clr_tint;
        bool m_b_old_active;
        bool m_b_old_frozen;
    };

    struct cpulsecell_outflow_cycleshuffled_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct ccsplayercontroller_inventoryservices__networkedloadoutslot_t_t {
        C_EconItemView* p_item;
        uint16_t team;
        uint16_t slot;
    };

    struct clightcomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        color_t m_color;
        color_t m_secondary_color;
        float m_fl_brightness;
        float m_fl_brightness_scale;
        float m_fl_brightness_mult;
        float m_fl_range;
        float m_fl_falloff;
        float m_fl_attenuation0;
        float m_fl_attenuation1;
        float m_fl_attenuation2;
        float m_fl_theta;
        float m_fl_phi;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_light_cookie;
        int32_t m_n_cascades;
        int32_t m_n_cast_shadows;
        int32_t m_n_shadow_width;
        int32_t m_n_shadow_height;
        bool m_b_render_diffuse;
        int32_t m_n_render_specular;
        bool m_b_render_transmissive;
        float m_fl_ortho_light_width;
        float m_fl_ortho_light_height;
        int32_t m_n_style;
        CUtlString m_pattern;
        int32_t m_n_cascade_render_static_objects;
        float m_fl_shadow_cascade_cross_fade;
        float m_fl_shadow_cascade_distance_fade;
        float m_fl_shadow_cascade_distance0;
        float m_fl_shadow_cascade_distance1;
        float m_fl_shadow_cascade_distance2;
        float m_fl_shadow_cascade_distance3;
        int32_t m_n_shadow_cascade_resolution0;
        int32_t m_n_shadow_cascade_resolution1;
        int32_t m_n_shadow_cascade_resolution2;
        int32_t m_n_shadow_cascade_resolution3;
        bool m_b_uses_baked_shadowing;
        int32_t m_n_shadow_priority;
        int32_t m_n_baked_shadow_index;
        int32_t m_n_light_path_unique_id;
        int32_t m_n_light_map_unique_id;
        bool m_b_render_to_cubemaps;
        bool m_b_allow_sstgeneration;
        int32_t m_n_direct_light;
        int32_t m_n_bounce_light;
        float m_fl_bounce_scale;
        float m_fl_fade_min_dist;
        float m_fl_fade_max_dist;
        float m_fl_shadow_fade_min_dist;
        float m_fl_shadow_fade_max_dist;
        bool m_b_enabled;
        bool m_b_flicker;
        bool m_b_precomputed_fields_valid;
        vector3d_t m_v_precomputed_bounds_mins;
        vector3d_t m_v_precomputed_bounds_maxs;
        vector3d_t m_v_precomputed_obborigin;
        QAngle m_v_precomputed_obbangles;
        vector3d_t m_v_precomputed_obbextent;
        float m_fl_precomputed_max_range;
        int32_t m_n_fog_lighting_mode;
        float m_fl_fog_contribution_stength;
        float m_fl_near_clip_plane;
        color_t m_sky_color;
        float m_fl_sky_intensity;
        color_t m_sky_ambient_bounce;
        bool m_b_use_secondary_color;
        bool m_b_mixed_shadows;
        GameTime_t m_fl_light_style_start_time;
        float m_fl_capsule_length;
        float m_fl_min_roughness;
        bool m_b_ambient_occlusion_proxy_override;
        CHandle_C_BaseEntity_ m_h_ambient_occlusion_proxy_position0;
        CHandle_C_BaseEntity_ m_h_ambient_occlusion_proxy_position1;
        CHandle_C_BaseEntity_ m_h_ambient_occlusion_proxy_position2;
        CHandle_C_BaseEntity_ m_h_ambient_occlusion_proxy_position3;
        float m_fl_ambient_occlusion_proxy_strength0;
        float m_fl_ambient_occlusion_proxy_strength1;
        float m_fl_ambient_occlusion_proxy_strength2;
        float m_fl_ambient_occlusion_proxy_strength3;
        float m_fl_ambient_occlusion_proxy_ambient_strength;
        float m_fl_ambient_occlusion_proxy_cone_angle0;
        float m_fl_ambient_occlusion_proxy_cone_angle1;
        float m_fl_ambient_occlusion_proxy_cone_angle2;
        float m_fl_ambient_occlusion_proxy_cone_angle3;
    };

    struct ccsplayer_actiontrackingservices_t {
        CHandle_C_BasePlayerWeapon_ m_h_last_weapon_before_c4_auto_switch;
        bool m_b_is_rescuing;
        WeaponPurchaseTracker_t m_weapon_purchases_this_match;
        WeaponPurchaseTracker_t m_weapon_purchases_this_round;
        WeaponPurchaseTracker_t m_weapon_carry_over_into_this_round;
    };

    struct c_envcubemap_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_cubemap_texture;
        bool m_entity_b_custom_cubemap_texture;
        float m_entity_fl_influence_radius;
        vector3d_t m_entity_v_box_project_mins;
        vector3d_t m_entity_v_box_project_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_env_cube_map_array_index;
        int32_t m_entity_n_priority;
        float m_entity_fl_edge_fade_dist;
        vector3d_t m_entity_v_edge_fade_dists;
        float m_entity_fl_diffuse_scale;
        bool m_entity_b_start_disabled;
        bool m_entity_b_default_env_map;
        bool m_entity_b_default_spec_env_map;
        bool m_entity_b_indoor_cube_map;
        bool m_entity_b_copy_diffuse_from_default_cubemap;
        bool m_entity_b_enabled;
    };

    struct cbodycomponent_t {
        CGameSceneNode* m_p_scene_node;
        CNetworkVarChainer __m_p_chain_entity;
    };

    struct cpulsecell_inflow_method_t {
        PulseSymbol_t m_method_name;
        CUtlString m_description;
        bool m_b_is_public;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_return_values;
    };

    struct c_basecombatcharacter_t {
        C_NetworkUtlVectorBase_CHandle_C_EconWearable_ m_h_my_wearables;
        AttachmentHandle_t m_left_foot_attachment;
        AttachmentHandle_t m_right_foot_attachment;
        C_BaseCombatCharacter_WaterWakeMode_t m_n_water_wake_mode;
        float m_fl_water_world_z;
        float m_fl_water_next_trace_time;
    };

    struct cglowproperty_t {
        vector3d_t m_f_glow_color;
        int32_t m_i_glow_type;
        int32_t m_i_glow_team;
        int32_t m_n_glow_range;
        int32_t m_n_glow_range_min;
        color_t m_glow_color_override;
        bool m_b_flashing;
        float m_fl_glow_time;
        float m_fl_glow_start_time;
        bool m_b_eligible_for_screen_highlight;
        bool m_b_glowing;
    };

    struct c_pointclientuidialog_t {
        CHandle_C_BaseEntity_ m_h_activator;
        bool m_b_start_enabled;
    };

    struct c_footstepcontrol_t {
        CUtlSymbolLarge m_source;
        CUtlSymbolLarge m_destination;
    };

    struct ccitadelsoundopvarsetobb_t {
        CUtlSymbolLarge m_isz_stack_name;
        CUtlSymbolLarge m_isz_operator_name;
        CUtlSymbolLarge m_isz_opvar_name;
        vector3d_t m_v_distance_inner_mins;
        vector3d_t m_v_distance_inner_maxs;
        vector3d_t m_v_distance_outer_mins;
        vector3d_t m_v_distance_outer_maxs;
        int32_t m_n_aabbdirection;
    };

    struct cpulsecell_booleanswitchstate_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_OutflowConnection m_when_true;
        CPulse_OutflowConnection m_when_false;
    };

    struct cdamagerecord_t {
        CHandle_C_CSPlayerPawn_ m_player_damager;
        CHandle_C_CSPlayerPawn_ m_player_recipient;
        CHandle_CCSPlayerController_ m_h_player_controller_damager;
        CHandle_CCSPlayerController_ m_h_player_controller_recipient;
        CUtlString m_sz_player_damager_name;
        CUtlString m_sz_player_recipient_name;
        uint64_t m_damager_xuid;
        uint64_t m_recipient_xuid;
        float m_fl_bullets_damage;
        float m_fl_damage;
        float m_fl_actual_health_removed;
        int32_t m_i_num_hits;
        int32_t m_i_last_bullet_update;
        bool m_b_is_other_enemy;
        EKillTypes_t m_kill_type;
    };

    struct vphysicscollisionattribute_t_t {
        uint64_t m_n_interacts_as;
        uint64_t m_n_interacts_with;
        uint64_t m_n_interacts_exclude;
        uint32_t m_n_entity_id;
        uint32_t m_n_owner_id;
        uint16_t m_n_hierarchy_id;
        uint16_t m_n_detail_layer_mask;
        uint8_t m_n_detail_layer_mask_type;
        uint8_t m_n_target_detail_layer;
        uint8_t m_n_collision_group;
        uint8_t m_n_collision_function_mask;
    };

    struct c_omnilight_t {
        float m_fl_inner_angle;
        float m_fl_outer_angle;
        bool m_b_show_light;
    };

    struct c_sceneentity_t {
        bool m_b_is_playing_back;
        bool m_b_paused;
        bool m_b_multiplayer;
        bool m_b_autogenerated;
        bool m_b_all_requirements_complete;
        float m_fl_force_client_time;
        uint16_t m_n_scene_string_index;
        bool m_b_client_only;
        CHandle_C_BaseModelEntity_ m_h_owner;
        C_NetworkUtlVectorBase_CHandle_C_BaseModelEntity_ m_h_actor_list;
        bool m_b_was_playing;
        CUtlVector_C_SceneEntity_QueuedEvents_t_ m_queued_events;
        float m_fl_current_time;
    };

    struct cpulsecell_inflow_yield_t {
        CPulse_ResumePoint m_unyield_resume;
    };

    struct c_nametagmodule_t {
        CUtlString m_str_nametag_string;
    };

    struct c_econentity_t {
        float m_fl_flex_delay_time;
        float* m_fl_flex_delayed_weight;
        bool m_b_attributes_initialized;
        C_AttributeContainer m_attribute_manager;
        uint32_t m_original_owner_xuid_low;
        uint32_t m_original_owner_xuid_high;
        int32_t m_n_fallback_paint_kit;
        int32_t m_n_fallback_seed;
        float m_fl_fallback_wear;
        int32_t m_n_fallback_stat_trak;
        bool m_b_clientside;
        bool m_b_particle_systems_created;
        CUtlVector_int32_t_ m_vec_attached_particles;
        CHandle_CBaseAnimGraph_ m_h_viewmodel_attachment;
        int32_t m_i_old_team;
        bool m_b_attachment_dirty;
        int32_t m_n_unloaded_model_index;
        int32_t m_i_num_owner_validation_retries;
        CHandle_C_BaseEntity_ m_h_old_providee;
        CUtlVector_C_EconEntity_AttachedModelData_t_ m_vec_attached_models;
    };

    struct c_pointvalueremapper_t {
        bool m_b_disabled;
        bool m_b_disabled_old;
        bool m_b_update_on_client;
        ValueRemapperInputType_t m_n_input_type;
        CHandle_C_BaseEntity_ m_h_remap_line_start;
        CHandle_C_BaseEntity_ m_h_remap_line_end;
        float m_fl_maximum_change_per_second;
        float m_fl_disengage_distance;
        float m_fl_engage_distance;
        bool m_b_requires_use_key;
        ValueRemapperOutputType_t m_n_output_type;
        C_NetworkUtlVectorBase_CHandle_C_BaseEntity_ m_h_output_entities;
        ValueRemapperHapticsType_t m_n_haptics_type;
        ValueRemapperMomentumType_t m_n_momentum_type;
        float m_fl_momentum_modifier;
        float m_fl_snap_value;
        float m_fl_current_momentum;
        ValueRemapperRatchetType_t m_n_ratchet_type;
        float m_fl_ratchet_offset;
        float m_fl_input_offset;
        bool m_b_engaged;
        bool m_b_first_update;
        float m_fl_previous_value;
        GameTime_t m_fl_previous_update_tick_time;
        VectorWS m_vec_previous_test_point;
    };

    struct cgamescenenodehandle_t {
        CEntityHandle m_h_owner;
        CUtlStringToken m_name;
    };

    struct cpulsecell_unknown_t {
        KeyValues3 m_unknown_keys;
    };

    struct csperroundstats_t_t {
        int32_t m_i_kills;
        int32_t m_i_deaths;
        int32_t m_i_assists;
        int32_t m_i_damage;
        int32_t m_i_equipment_value;
        int32_t m_i_money_saved;
        int32_t m_i_kill_reward;
        int32_t m_i_live_time;
        int32_t m_i_head_shot_kills;
        int32_t m_i_objective;
        int32_t m_i_cash_earned;
        int32_t m_i_utility_damage;
        int32_t m_i_enemies_flashed;
    };

    struct cpulsecell_outflow_cyclerandom_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_step_publicoutput_t {
        PulseRuntimeOutputIndex_t m_output_index;
    };

    struct c_csgamerules_t {
        bool m_b_freeze_period;
        bool m_b_warmup_period;
        GameTime_t m_f_warmup_period_end;
        GameTime_t m_f_warmup_period_start;
        bool m_b_terrorist_time_out_active;
        bool m_b_cttime_out_active;
        float m_fl_terrorist_time_out_remaining;
        float m_fl_cttime_out_remaining;
        int32_t m_n_terrorist_time_outs;
        int32_t m_n_cttime_outs;
        bool m_b_technical_time_out;
        bool m_b_match_waiting_for_resume;
        int32_t m_i_freeze_time;
        int32_t m_i_round_time;
        float m_f_match_start_time;
        GameTime_t m_f_round_start_time;
        GameTime_t m_fl_restart_round_time;
        bool m_b_game_restart;
        float m_fl_game_start_time;
        float m_time_until_next_phase_starts;
        int32_t m_game_phase;
        int32_t m_total_rounds_played;
        int32_t m_n_rounds_played_this_phase;
        int32_t m_n_overtime_playing;
        int32_t m_i_hostages_remaining;
        bool m_b_any_hostage_reached;
        bool m_b_map_has_bomb_target;
        bool m_b_map_has_rescue_zone;
        bool m_b_map_has_buy_zone;
        bool m_b_is_queued_matchmaking;
        int32_t m_n_queued_matchmaking_mode;
        bool m_b_is_valve_ds;
        bool m_b_logo_map;
        bool m_b_play_all_step_sounds_on_server;
        int32_t m_i_spectator_slot_count;
        int32_t m_match_device;
        bool m_b_has_match_started;
        int32_t m_n_next_map_in_mapgroup;
        char m_sz_tournament_event_name;
        char m_sz_tournament_event_stage;
        char m_sz_match_stat_txt;
        char m_sz_tournament_predictions_txt;
        int32_t m_n_tournament_predictions_pct;
        GameTime_t m_fl_cmmitem_drop_reveal_start_time;
        GameTime_t m_fl_cmmitem_drop_reveal_end_time;
        bool m_b_is_dropping_items;
        bool m_b_is_quest_eligible;
        bool m_b_is_hltv_active;
        bool m_b_bomb_planted;
        uint16_t m_arr_prohibited_item_indices;
        uint32_t m_arr_tournament_active_caster_accounts;
        int32_t m_num_best_of_maps;
        int32_t m_n_halloween_mask_list_seed;
        bool m_b_bomb_dropped;
        int32_t m_i_round_win_status;
        int32_t m_e_round_win_reason;
        bool m_b_tcant_buy;
        bool m_b_ctcant_buy;
        int32_t m_i_match_stats_round_results;
        int32_t m_i_match_stats_players_alive_ct;
        int32_t m_i_match_stats_players_alive_t;
        float m_team_respawn_wave_times;
        int32_t m_n_active_mutators;
        GameTime_t m_fl_next_respawn_wave;
        VectorWS m_v_minimap_mins;
        VectorWS m_v_minimap_maxs;
        float m_minimap_vertical_section_heights;
        uint64_t m_ull_local_match_id;
        int32_t m_n_end_match_map_group_vote_types;
        int32_t m_n_end_match_map_group_vote_options;
        int32_t m_n_end_match_map_vote_winner;
        int32_t m_i_num_consecutive_ctloses;
        int32_t m_i_num_consecutive_terrorist_loses;
        int32_t m_n_match_aborted_early_reason;
        bool m_b_has_triggered_round_start_music;
        bool m_b_switching_teams_at_round_reset;
        CCSGameModeRules* m_p_game_mode_rules;
        C_RetakeGameRules m_retake_rules;
        uint8_t m_n_match_end_count;
        int32_t m_n_tteam_intro_variant;
        int32_t m_n_ctteam_intro_variant;
        bool m_b_team_intro_period;
        int32_t m_i_round_end_winner_team;
        int32_t m_e_round_end_reason;
        bool m_b_round_end_show_timer_defend;
        int32_t m_i_round_end_timer_time;
        CUtlString m_s_round_end_fun_fact_token;
        CPlayerSlot m_i_round_end_fun_fact_player_slot;
        int32_t m_i_round_end_fun_fact_data1;
        int32_t m_i_round_end_fun_fact_data2;
        int32_t m_i_round_end_fun_fact_data3;
        CUtlString m_s_round_end_message;
        int32_t m_i_round_end_player_count;
        bool m_b_round_end_no_music;
        int32_t m_i_round_end_legacy;
        uint8_t m_n_round_end_count;
        int32_t m_i_round_start_round_number;
        uint8_t m_n_round_start_count;
        double m_fl_last_perf_sample_time;
    };

    struct cgrenadetracer_t {
        float m_fl_tracer_duration;
        GrenadeType_t m_n_type;
    };

    struct cpulse_blackboardreference_t {
        CStrongHandle_InfoForResourceTypeIPulseGraphDef_ m_h_blackboard_resource;
        PulseSymbol_t m_blackboard_resource;
        PulseDocNodeID_t m_n_node_id;
        CGlobalSymbol m_node_name;
    };

    struct c_basecsgrenadeprojectile_t {
        VectorWS m_v_initial_position;
        vector3d_t m_v_initial_velocity;
        int32_t m_n_bounces;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_n_explode_effect_index;
        int32_t m_n_explode_effect_tick_begin;
        VectorWS m_vec_explode_effect_origin;
        GameTime_t m_fl_spawn_time;
        vector3d_t vec_last_trail_line_pos;
        GameTime_t fl_next_trail_line_time;
        bool m_b_explode_effect_began;
        bool m_b_can_create_grenade_trail;
        ParticleIndex_t m_n_snapshot_trajectory_effect_index;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_snapshot_trajectory_particle_snapshot;
        CUtlVector_Vector_ m_arr_trajectory_trail_points;
        CUtlVector_float_ m_arr_trajectory_trail_point_creation_times;
        float m_fl_trajectory_trail_effect_creation_time;
    };

    struct c_gradientfog_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_gradient_fog_texture;
        float m_fl_fog_start_distance;
        float m_fl_fog_end_distance;
        bool m_b_height_fog_enabled;
        float m_fl_fog_start_height;
        float m_fl_fog_end_height;
        float m_fl_far_z;
        float m_fl_fog_max_opacity;
        float m_fl_fog_falloff_exponent;
        float m_fl_fog_vertical_exponent;
        color_t m_fog_color;
        float m_fl_fog_strength;
        float m_fl_fade_time;
        bool m_b_start_disabled;
        bool m_b_is_enabled;
        bool m_b_gradient_fog_needs_textures;
    };

    struct ccsplayercontroller_ingamemoneyservices_t {
        int32_t m_i_account;
        int32_t m_i_start_account;
        int32_t m_i_total_cash_spent;
        int32_t m_i_cash_spent_this_round;
    };

    struct ccsplayer_aimpunchservices_t {
        GameTick_t m_predictable_base_tick;
        float m_predictable_base_tick_interp_amount;
        QAngle m_predictable_base_angle;
        QAngle m_predictable_base_angle_vel;
        GameTick_t m_unpredictable_base_tick;
        QAngle m_unpredictable_base_angle;
    };

    struct cfiltermodel_t {
        CUtlSymbolLarge m_i_filter_model;
    };

    struct c_soundareaentityorientedbox_t {
        vector3d_t m_v_min;
        vector3d_t m_v_max;
    };

    struct cpulsegameblackboard_t {
        CUtlString m_str_graph_name;
        CUtlString m_str_state_blob;
    };

    struct cchoreocomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        CHandle_C_BaseModelEntity_ m_h_owner;
        int32_t m_n_exernal_choreo_graph_count;
        CGlobalSymbol m_s_active_external_choreo_graph_slot_id;
        SceneEventId_t m_n_next_scene_event_id;
        GameTime_t m_fl_allow_responses_end_time;
    };

    struct c_ragdollpropattached_t {
        uint32_t m_bone_index_attached;
        uint32_t m_ragdoll_attached_object_index;
        vector3d_t m_attachment_point_bone_space;
        vector3d_t m_attachment_point_ragdoll_space;
        vector3d_t m_vec_offset;
        float m_parent_time;
        bool m_b_has_parent;
    };

    struct c_csgo_previewplayer_t {
        CGlobalSymbol m_animgraph_character_mode_string;
        float m_fl_initial_model_scale;
    };

    struct c_rectlight_t {
        bool m_b_show_light;
    };

    struct ccsradarelement_t {
        uint32_t m_n_element_type;
        uint32_t m_n_element_color;
        uint32_t m_n_team_filter;
    };

    struct cpathsimple_t {
        CPathQueryComponent m_cpath_query_component;
        CUtlString m_path_string;
        bool m_b_closed_loop;
    };

    struct c_functracktrain_t {
        int32_t m_n_long_axis;
        float m_fl_radius;
        float m_fl_line_length;
    };

    struct c_econwearable_t {
        int32_t m_n_force_skin;
        bool m_b_always_allow;
    };

    struct c_envdecal_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_decal_material;
        float m_fl_width;
        float m_fl_height;
        float m_fl_depth;
        uint32_t m_n_render_order;
        bool m_b_project_on_world;
        bool m_b_project_on_characters;
        bool m_b_project_on_water;
        float m_fl_depth_sort_bias;
    };

    struct entityspottedstate_t_t {
        bool m_b_spotted;
        uint32_t m_b_spotted_by_mask;
    };

    struct fogparams_t_t {
        vector3d_t dir_primary;
        color_t color_primary;
        color_t color_secondary;
        color_t color_primary_lerp_to;
        color_t color_secondary_lerp_to;
        float start;
        float end;
        float farz;
        float maxdensity;
        float exponent;
        float hdrcolor_scale;
        float skybox_fog_factor;
        float skybox_fog_factor_lerp_to;
        float start_lerp_to;
        float end_lerp_to;
        float maxdensity_lerp_to;
        GameTime_t lerptime;
        float duration;
        float blendtobackground;
        float scattering;
        float locallightscale;
        bool enable;
        bool blend;
        bool m_b_padding2;
        bool m_b_padding;
    };

    struct c_item_t {
        char m_p_reticle_hint_text_name;
    };

    struct c_beam_t {
        float m_fl_frame_rate;
        float m_fl_hdrcolor_scale;
        GameTime_t m_fl_fire_time;
        float m_fl_damage;
        uint8_t m_n_num_beam_ents;
        int32_t m_query_handle_halo;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_base_material;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_n_halo_index;
        BeamType_t m_n_beam_type;
        uint32_t m_n_beam_flags;
        CHandle_C_BaseEntity_ m_h_attach_entity;
        AttachmentHandle_t m_n_attach_index;
        float m_f_width;
        float m_f_end_width;
        float m_f_fade_length;
        float m_f_halo_scale;
        float m_f_amplitude;
        float m_f_start_frame;
        float m_f_speed;
        float m_fl_frame;
        bool m_b_turned_off;
        VectorWS m_vec_end_pos;
        CHandle_C_BaseEntity_ m_h_end_entity;
    };

    struct c_envlightprobevolume_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_ambient_cube;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sdf;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_dc;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_l1;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_indices_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_scalars_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_shadows_texture;
        vector3d_t m_entity_v_box_mins;
        vector3d_t m_entity_v_box_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_priority;
        bool m_entity_b_start_disabled;
        int32_t m_entity_n_light_probe_size_x;
        int32_t m_entity_n_light_probe_size_y;
        int32_t m_entity_n_light_probe_size_z;
        int32_t m_entity_n_light_probe_atlas_x;
        int32_t m_entity_n_light_probe_atlas_y;
        int32_t m_entity_n_light_probe_atlas_z;
        bool m_entity_b_enabled;
    };

    struct cexplosiontypedata_t {
        CSoundEventName m_sound_name;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_particle_effect;
        bool m_b_is_incindiary;
        bool m_b_has_forces;
        CGlobalSymbol m_decal_type;
    };

    struct c_funcconveyor_t {
        vector3d_t m_vec_move_dir_entity_space;
        float m_fl_target_speed;
        GameTick_t m_n_transition_start_tick;
        int32_t m_n_transition_duration_ticks;
        float m_fl_transition_start_speed;
        float m_fl_friction_scale;
        C_NetworkUtlVectorBase_CHandle_C_BaseEntity_ m_h_conveyor_models;
        float m_fl_current_conveyor_offset;
        float m_fl_current_conveyor_speed;
    };

    struct ccsplayer_weaponservices_t {
        GameTime_t m_fl_next_attack;
        uint32_t m_n_old_total_shoot_position_history_count;
        uint32_t m_n_old_total_input_history_count;
        C_NetworkUtlVectorBase_uint8_t_ m_network_anim_timing;
        bool m_b_block_inspect_until_next_graph_update;
    };

    struct c_physmagnet_t {
        CUtlVector_int32_t_ m_a_attached_objects_from_server;
        CUtlVector_CHandle_C_BaseEntity_ m_a_attached_objects;
    };

    struct c_plantedc4_t {
        bool m_b_bomb_ticking;
        int32_t m_n_bomb_site;
        int32_t m_n_source_soundscape_hash;
        EntitySpottedState_t m_entity_spotted_state;
        GameTime_t m_fl_next_glow;
        GameTime_t m_fl_next_beep;
        GameTime_t m_fl_c4_blow;
        bool m_b_cannot_be_defused;
        bool m_b_has_exploded;
        float m_fl_timer_length;
        bool m_b_being_defused;
        float m_b_trigger_warning;
        float m_b_explode_warning;
        bool m_b_c4_activated;
        bool m_b_ten_sec_warning;
        float m_fl_defuse_length;
        GameTime_t m_fl_defuse_count_down;
        bool m_b_bomb_defused;
        CHandle_C_CSPlayerPawn_ m_h_bomb_defuser;
        C_AttributeContainer m_attribute_manager;
        CHandle_C_Multimeter_ m_h_defuser_multimeter;
        GameTime_t m_fl_next_radar_flash_time;
        bool m_b_radar_flash;
        CHandle_C_CSPlayerPawn_ m_p_bomb_defuser;
        GameTime_t m_f_last_defuse_time;
        CBasePlayerController* m_p_prediction_owner;
        VectorWS m_vec_c4_explode_spectate_pos;
        QAngle m_vec_c4_explode_spectate_ang;
        float m_fl_c4_explode_spectate_duration;
    };

    struct ccscustomhudlayoutstate_t {
        CPlayerSlot m_player_slot;
        bool m_b_input_capture_enabled;
        C_NetworkUtlVectorBase_HUDPanelHasClass_t_ m_vec_has_classes;
        C_NetworkUtlVectorBase_HUDPanelDialogVariableString_t_ m_vec_dialog_variable_strings;
    };

    struct cfiltername_t {
        CUtlSymbolLarge m_i_filter_name;
    };

    struct c_ragdollprop_t {
        C_NetworkUtlVectorBase_bool_ m_rag_enabled;
        C_NetworkUtlVectorBase_Vector_ m_rag_pos;
        C_NetworkUtlVectorBase_QAngle_ m_rag_angles;
        float m_fl_blend_weight;
        CHandle_C_BaseEntity_ m_h_ragdoll_source;
        AttachmentHandle_t m_i_eye_attachment;
        float m_fl_blend_weight_current;
        CUtlVector_int32_t_ m_parent_physics_bone_indices;
        CUtlVector_int32_t_ m_world_space_bone_computation_order;
    };

    struct cpulse_callinfo_t {
        PulseSymbol_t m_port_name;
        PulseDocNodeID_t m_n_editor_node_id;
        PulseRegisterMap_t m_register_map;
        PulseDocNodeID_t m_call_method_id;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
        PulseRuntimeChunkIndex_t m_n_break_dest_chunk;
        int32_t m_n_break_dest_instruction;
    };

    struct cbaseanimgraph_t {
        CAnimGraphControllerManager m_graph_controller_manager;
        CAnimGraphControllerPtr m_p_main_graph_controller;
        bool m_b_initially_populate_interp_history;
        bool m_b_suppress_anim_event_sounds;
        CEntityOutputTemplate_float_ m_on_layer_cycle_updated;
        CEntityIOOutput m_on_external_choreo_graph_changed;
        bool m_b_anim_graph_update_enabled;
        bool m_b_animation_update_scheduled;
        vector3d_t m_vec_force;
        int32_t m_n_force_bone;
        CBaseAnimGraph* m_p_clientside_ragdoll;
        bool m_b_built_ragdoll;
        IPhysicsRagdollControl* m_p_ragdoll_control;
        PhysicsRagdollPose_t m_ragdoll_pose;
        bool m_b_ragdoll_enabled;
        bool m_b_ragdoll_client_side;
        bool m_b_should_update_transformations;
        bool m_b_has_animated_material_attributes;
    };

    struct cpulsecell_inlinenodeskipselector_t {
        PulseDocNodeID_t m_n_flow_node_id;
        bool m_b_and;
        PulseSelectorOutflowList_t m_pass_outflow;
        CPulse_OutflowConnection m_fail_outflow;
    };

    struct c_lightentity_t {
        CLightComponent* m_clight_component;
    };

    struct c_localtempentity_t {
        int32_t flags;
        GameTime_t die;
        float m_fl_frame_max;
        float x;
        float y;
        float fade_speed;
        float bounce_factor;
        int32_t hit_sound;
        int32_t priority;
        vector3d_t tent_offset;
        QAngle m_vec_temp_ent_ang_velocity;
        int32_t tempent_renderamt;
        vector3d_t m_vec_normal;
        float m_fl_sprite_scale;
        int32_t m_n_flicker_frame;
        float m_fl_frame_rate;
        float m_fl_frame;
        char* m_psz_impact_effect;
        char* m_psz_particle_effect;
        bool m_b_particle_collision;
        int32_t m_i_last_collision_frame;
        VectorWS m_v_last_collision_origin;
        vector3d_t m_vec_temp_ent_velocity;
        VectorWS m_vec_prev_abs_origin;
        vector3d_t m_vec_temp_ent_acceleration;
    };

    struct c_weapontaser_t {
        GameTime_t m_f_fire_time;
        int32_t m_n_last_attack_tick;
    };

    struct cplayer_weaponservices_t {
        C_NetworkUtlVectorBase_CHandle_C_BasePlayerWeapon_ m_h_my_weapons;
        CHandle_C_BasePlayerWeapon_ m_h_active_weapon;
        CHandle_C_BasePlayerWeapon_ m_h_last_weapon;
        uint16_t m_i_ammo;
    };

    struct cpulsecell_limitcount_t {
        int32_t m_n_limit_count;
    };

    struct cpulsecell_step_callexternalmethod_t {
        PulseSymbol_t m_method_name;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_index;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_expected_args;
        PulseMethodCallMode_t m_n_async_call_mode;
        CPulse_ResumePoint m_on_finished;
    };

    struct c_playerping_t {
        CHandle_C_CSPlayerPawn_ m_h_player;
        CHandle_C_BaseEntity_ m_h_pinged_entity;
        int32_t m_i_type;
        bool m_b_urgent;
        char m_sz_place_name;
    };

    struct c_csgo_mappreviewcamerapathnode_t {
        CUtlSymbolLarge m_sz_parent_path_unique_id;
        int32_t m_n_path_index;
        vector3d_t m_v_in_tangent_local;
        vector3d_t m_v_out_tangent_local;
        float m_fl_fov;
        float m_fl_camera_speed;
        float m_fl_ease_in;
        float m_fl_ease_out;
        vector3d_t m_v_in_tangent_world;
        vector3d_t m_v_out_tangent_world;
    };

    struct c_csplayerresource_t {
        bool m_b_hostage_alive;
        bool m_is_hostage_following_someone;
        CEntityIndex m_i_hostage_entity_ids;
        VectorWS m_bombsite_center_a;
        VectorWS m_bombsite_center_b;
        int32_t m_hostage_rescue_x;
        int32_t m_hostage_rescue_y;
        int32_t m_hostage_rescue_z;
        bool m_b_end_match_next_map_all_voted;
        bool m_found_goal_positions;
    };

    struct cskyboxreference_t {
        WorldGroupId_t m_world_group_id;
        CHandle_C_SkyCamera_ m_h_sky_camera;
    };

    struct cfilterclass_t {
        CUtlSymbolLarge m_i_filter_class;
    };

    struct c_pointcameravfov_t {
        float m_fl_vertical_fov;
    };

    struct c_pointcamera_t {
        float m_fov;
        float m_resolution;
        bool m_b_fog_enable;
        color_t m_fog_color;
        float m_fl_fog_start;
        float m_fl_fog_end;
        float m_fl_fog_max_density;
        bool m_b_active;
        bool m_b_use_screen_aspect_ratio;
        float m_fl_aspect_ratio;
        bool m_b_no_sky;
        float m_f_brightness;
        float m_fl_zfar;
        float m_fl_znear;
        bool m_b_can_hltvuse;
        bool m_b_align_with_parent;
        bool m_b_dof_enabled;
        float m_fl_dof_near_blurry;
        float m_fl_dof_near_crisp;
        float m_fl_dof_far_crisp;
        float m_fl_dof_far_blurry;
        float m_fl_dof_tilt_to_ground;
        float m_target_fov;
        float m_degrees_per_second;
        bool m_b_is_on;
        C_PointCamera* m_p_next;
    };

    struct cpathwithdynamicnodes_t {
        C_NetworkUtlVectorBase_CHandle_CPathNode_ m_vec_path_nodes;
        transform_t m_x_initial_path_world_to_local;
        DirectionAlongSimplePath_t m_e_desired_direction;
        bool m_b_ignore_parent_rotation;
    };

    struct cbasefilter_t {
        bool m_b_negated;
        CEntityIOOutput m_on_pass;
        CEntityIOOutput m_on_fail;
    };

    struct weaponpurchasetracker_t_t {
        C_UtlVectorEmbeddedNetworkVar_WeaponPurchaseCount_t_ m_weapon_purchases;
    };

    struct cmapinfo_t {
        int32_t m_i_buying_status;
        float m_fl_bomb_radius;
        int32_t m_i_pet_population;
        bool m_b_use_normal_spawns_for_dm;
        bool m_b_disable_auto_generated_dmspawns;
        float m_fl_bot_max_vision_distance;
        int32_t m_i_hostage_count;
        bool m_b_fade_player_visibility_far_z;
        bool m_b_rain_trace_to_sky_enabled;
        bool m_b_gpucull_skybox;
        float m_fl_env_rain_strength;
        float m_fl_env_puddle_ripple_strength;
        float m_fl_env_puddle_ripple_direction;
        float m_fl_env_wetness_coverage;
        float m_fl_env_wetness_drying_amount;
        bool m_b_frost_enabled;
    };

    struct c_basegrenade_t {
        bool m_b_has_warned_ai;
        bool m_b_is_smoke_grenade;
        bool m_b_is_live;
        float m_dmg_radius;
        GameTime_t m_fl_detonate_time;
        float m_fl_warn_aitime;
        float m_fl_damage;
        CUtlSymbolLarge m_isz_bounce_sound;
        CUtlString m_explosion_sound;
        CHandle_C_CSPlayerPawn_ m_h_thrower;
        GameTime_t m_fl_next_attack;
        CHandle_C_CSPlayerPawn_ m_h_original_thrower;
    };

    struct c_playerspraydecal_t {
        int32_t m_n_unique_id;
        uint32_t m_un_account_id;
        uint32_t m_un_trace_id;
        uint32_t m_rt_gc_time;
        VectorWS m_vec_end_pos;
        VectorWS m_vec_start;
        vector3d_t m_vec_left;
        vector3d_t m_vec_normal;
        int32_t m_n_player;
        int32_t m_n_entity;
        int32_t m_n_hitbox;
        float m_fl_creation_time;
        int32_t m_n_tint_id;
        uint8_t m_n_version;
        uint8_t m_ub_signature;
        CPlayerSprayDecalRenderHelper m_spray_render_helper;
    };

    struct centityidentity_t {
        int32_t m_name_string_table_index;
        CUtlSymbolLarge m_name;
        CUtlSymbolLarge m_designer_name;
        uint32_t m_flags;
        WorldGroupId_t m_world_group_id;
        uint32_t m_f_data_object_types;
        ChangeAccessorFieldPathIndex_t m_path_index;
        CEntityAttributeTable* m_p_attributes;
        CEntityIdentity* m_p_prev;
        CEntityIdentity* m_p_next;
        CEntityIdentity* m_p_prev_by_class;
        CEntityIdentity* m_p_next_by_class;
    };

    struct cpulsecell_limitcount__criteria_t_t {
        bool m_b_limit_count_passes;
    };

    struct cbaseplayervdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_model_name;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_model_name_ag2_override;
        CSkillFloat m_fl_head_damage_multiplier;
        CSkillFloat m_fl_chest_damage_multiplier;
        CSkillFloat m_fl_stomach_damage_multiplier;
        CSkillFloat m_fl_arm_damage_multiplier;
        CSkillFloat m_fl_leg_damage_multiplier;
        float m_fl_hold_breath_time;
        float m_fl_drowning_damage_interval;
        int32_t m_n_drowning_damage_initial;
        int32_t m_n_drowning_damage_max;
        int32_t m_n_water_speed;
        float m_fl_use_range;
        float m_fl_use_angle_tolerance;
        float m_fl_crouch_time;
    };

    struct ccsgamemoderules_deathmatch_t {
        GameTime_t m_fl_dmbonus_start_time;
        float m_fl_dmbonus_time_length;
        CUtlString m_s_dmbonus_weapon;
    };

    struct cpulsecell_cursorqueue_t {
        int32_t m_n_cursors_allowed_to_run_parallel;
    };

    struct c_sprite_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sprite_material;
        CHandle_C_BaseEntity_ m_h_attached_to_entity;
        AttachmentHandle_t m_n_attachment;
        float m_fl_sprite_framerate;
        float m_fl_frame;
        GameTime_t m_fl_die_time;
        uint32_t m_n_brightness;
        float m_fl_brightness_duration;
        float m_fl_sprite_scale;
        float m_fl_scale_duration;
        bool m_b_world_space_scale;
        float m_fl_glow_proxy_size;
        float m_fl_hdrcolor_scale;
        GameTime_t m_fl_last_time;
        float m_fl_max_frame;
        float m_fl_start_scale;
        float m_fl_dest_scale;
        GameTime_t m_fl_scale_time_start;
        int32_t m_n_start_brightness;
        int32_t m_n_dest_brightness;
        GameTime_t m_fl_brightness_time_start;
        int32_t m_n_sprite_width;
        int32_t m_n_sprite_height;
        float m_fl_speed;
    };

    struct c_csmfovoverride_t {
        CUtlString m_camera_name;
        float m_fl_csm_fov_override_value;
    };

    struct c_physicsprop_t {
        bool m_b_awake;
    };

    struct cfilterteam_t {
        int32_t m_i_filter_team;
    };

    struct cbaseplayerweaponvdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_sz_world_model;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_sz_world_model_ag2_override;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_tools_only_owner_model_name;
        bool m_b_built_right_handed;
        bool m_b_allow_flipping;
        CAttachmentNameSymbolWithStorage m_s_muzzle_attachment;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_muzzle_flash_particle;
        CUtlString m_sz_muzzle_flash_particle_config;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_barrel_smoke_particle;
        uint8_t m_n_muzzle_smoke_shot_threshold;
        float m_fl_muzzle_smoke_timeout;
        float m_fl_muzzle_smoke_decrement_rate;
        bool m_b_generate_muzzle_light;
        bool m_b_should_animate_in_world;
        bool m_b_linked_cooldowns;
        ItemFlagTypes_t m_i_flags;
        int32_t m_i_weight;
        bool m_b_auto_switch_to;
        bool m_b_auto_switch_from;
        AmmoIndex_t m_n_primary_ammo_type;
        AmmoIndex_t m_n_secondary_ammo_type;
        int32_t m_i_max_clip1;
        int32_t m_i_max_clip2;
        int32_t m_i_default_clip1;
        int32_t m_i_default_clip2;
        bool m_b_reserve_ammo_as_clips;
        bool m_b_treat_as_single_clip;
        bool m_b_keep_loaded_ammo;
        RumbleEffect_t m_i_rumble_effect;
        float m_fl_drop_speed;
        int32_t m_i_slot;
        int32_t m_i_position;
        CUtlOrderedMap_WeaponSound_t_CSoundEventName_ m_a_shoot_sounds;
    };

    struct c_pointclientuiworldpanel_t {
        bool m_b_force_recreate_next_update;
        bool m_b_move_view_to_player_next_think;
        bool m_b_check_cssclasses;
        transform_t m_anchor_delta_transform;
        CPointOffScreenIndicatorUi* m_p_off_screen_indicator;
        bool m_b_ignore_input;
        bool m_b_lit;
        bool m_b_follow_player_across_teleport;
        float m_fl_width;
        float m_fl_height;
        float m_fl_dpi;
        float m_fl_window_uiscale;
        float m_fl_interact_distance;
        float m_fl_depth_offset;
        uint32_t m_un_owner_context;
        uint32_t m_un_horizontal_align;
        uint32_t m_un_vertical_align;
        uint32_t m_un_orientation;
        bool m_b_allow_interaction_from_all_scene_worlds;
        C_NetworkUtlVectorBase_CUtlSymbolLarge_ m_vec_cssclasses;
        bool m_b_opaque;
        bool m_b_no_depth;
        bool m_b_visible_when_parent_no_draw;
        bool m_b_render_backface;
        bool m_b_use_off_screen_indicator;
        bool m_b_exclude_from_save_games;
        bool m_b_grabbable;
        bool m_b_only_render_to_texture;
        bool m_b_disable_mip_gen;
        int32_t m_n_explicit_image_layout;
        bool m_b_ignore_parent_orientation;
    };

    struct c_entityflame_t {
        CHandle_C_BaseEntity_ m_h_ent_attached;
        CHandle_C_BaseEntity_ m_h_old_attached;
        bool m_b_cheap_effect;
    };

    struct cbaseplayercontroller_t {
        C_CommandContext m_command_context;
        uint64_t m_n_in_buttons_which_are_toggles;
        uint32_t m_n_tick_base;
        CHandle_C_BasePlayerPawn_ m_h_pawn;
        bool m_b_known_team_mismatch;
        CHandle_C_BasePlayerPawn_ m_h_predicted_pawn;
        CSplitScreenSlot m_n_split_screen_slot;
        CHandle_CBasePlayerController_ m_h_split_owner;
        CUtlVector_CHandle_CBasePlayerController_ m_h_split_screen_players;
        bool m_b_is_hltv;
        PlayerConnectedState m_i_connected;
        PlayerConnectedState m_i_most_connected;
        char m_isz_player_name;
        uint64_t m_steam_id;
        bool m_b_is_local_player_controller;
        bool m_b_no_clip_enabled;
        uint32_t m_i_desired_fov;
    };

    struct generatedtexturehandle_t_t {
        CUtlString m_str_bitmap_name;
    };

    struct compositematerialinputcontainer_t_t {
        bool m_b_enabled;
        CompositeMaterialInputContainerSourceType_t m_n_composite_material_input_container_source_type;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIMaterial2_ m_str_specific_container_material;
        CUtlString m_str_attr_name;
        CUtlString m_str_alias;
        CUtlVector_CompositeMaterialInputLooseVariable_t_ m_vec_loose_variables;
        CUtlString m_str_attr_name_for_var;
        bool m_b_expose_externally;
    };

    struct compositematerialassemblyprocedure_t_t {
        CUtlVector_CResourceNameTyped_CWeakHandle_InfoForResourceTypeCCompositeMaterialKit_ m_vec_comp_mat_includes;
        CUtlVector_CompositeMaterialMatchFilter_t_ m_vec_match_filters;
        CUtlVector_CompositeMaterialInputContainer_t_ m_vec_composite_input_containers;
        CUtlVector_CompMatPropertyMutator_t_ m_vec_property_mutators;
    };

    struct compositematerialinputloosevariable_t_t {
        CUtlString m_str_name;
        bool m_b_expose_externally;
        CUtlString m_str_exposed_friendly_name;
        CUtlString m_str_exposed_friendly_group_name;
        bool m_b_exposed_variable_is_fixed_range;
        CUtlString m_str_exposed_visible_when_true;
        CUtlString m_str_exposed_hidden_when_true;
        CUtlString m_str_exposed_value_list;
        CompositeMaterialInputLooseVariableType_t m_n_variable_type;
        bool m_b_value_boolean;
        int32_t m_n_value_int_x;
        int32_t m_n_value_int_y;
        int32_t m_n_value_int_z;
        int32_t m_n_value_int_w;
        bool m_b_has_float_bounds;
        float m_fl_value_float_x;
        float m_fl_value_float_x_min;
        float m_fl_value_float_x_max;
        float m_fl_value_float_y;
        float m_fl_value_float_y_min;
        float m_fl_value_float_y_max;
        float m_fl_value_float_z;
        float m_fl_value_float_z_min;
        float m_fl_value_float_z_max;
        float m_fl_value_float_w;
        float m_fl_value_float_w_min;
        float m_fl_value_float_w_max;
        color_t m_c_value_color4;
        CompositeMaterialVarSystemVar_t m_n_value_system_var;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIMaterial2_ m_str_resource_material;
        CUtlString m_str_texture_content_asset_path;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCTextureBase_ m_str_texture_runtime_resource_path;
        CUtlString m_str_texture_compilation_vtex_template;
        CompositeMaterialInputTextureType_t m_n_texture_type;
        CUtlString m_str_string;
        CUtlString m_str_panorama_panel_path;
        int32_t m_n_panorama_render_res;
    };

    struct screenshake_t_t {
        GameTime_t endtime;
        float duration;
        float amplitude;
        float frequency;
        GameTime_t next_shake;
        vector3d_t offset;
        float angle;
        vector3d_t direction;
        uint8_t n_shake_type;
    };

    struct ccs2uipawngraphcontroller_t {
        CAnimGraph2ParamOptionalRef_float_ m_n_animation_seed;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_character_mode;
        CAnimGraph2ParamOptionalRef_bool_ m_b_character_mode_reset;
        CAnimGraph2ParamOptionalRef_float_ m_n_team_preview_variant;
        CAnimGraph2ParamOptionalRef_float_ m_n_team_preview_random;
        CAnimGraph2ParamOptionalRef_float_ m_n_team_preview_position;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_end_of_match_celebration;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_action;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_banner_animation;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_category;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_type;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_state;
        CAnimGraph2ParamOptionalRef_float_ m_inspect_turn_angle;
        CAnimGraph2ParamOptionalRef_float_ m_n_chick_snapshot_variant;
        CAnimGraph2ParamOptionalRef_float_ m_n_chick_life_stage;
        CAnimGraph2ParamOptionalRef_bool_ m_b_ct;
    };

    struct inv_image_light_barn_t_t {
        vector3d_t color;
        QAngle angle;
        float brightness;
        float orbit_distance;
    };

    struct inv_image_map_t_t {
        CUtlString map_name;
        float map_rotation;
    };

    struct inv_image_light_fill_t_t {
        vector3d_t color;
        QAngle angle;
        float brightness;
    };

    struct cinterpolatedvalue_t {
        float m_fl_start_time;
        float m_fl_end_time;
        float m_fl_start_value;
        float m_fl_end_value;
        int32_t m_n_interp_type;
    };

    struct inv_image_item_t_t {
        vector3d_t position;
        QAngle angle;
        CUtlString pose_sequence;
    };

    struct timedevent_t {
        float m_time_between_events;
        float m_f_next_event;
    };

    struct cflashlighteffect_t {
        bool m_b_is_on;
        bool m_b_muzzle_flash_enabled;
        float m_fl_muzzle_flash_brightness;
        quaternion_t m_quat_muzzle_flash_orientation;
        VectorWS m_vec_muzzle_flash_origin;
        float m_fl_fov;
        float m_fl_far_z;
        float m_fl_linear_atten;
        bool m_b_casts_shadows;
        float m_fl_current_pull_back_dist;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_flashlight_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_muzzle_flash_texture;
        char m_texture_name;
    };

    struct inv_image_camera_t_t {
        QAngle angle;
        float fov_h;
        float fov_v;
        float znear;
        float zfar;
        vector3d_t target;
        vector3d_t target_nudge;
        float orbit_distance;
    };

    struct cinventoryimagedata_t {
        InventoryNodeType_t m_n_node_type;
        CUtlString name;
        inv_image_data_t inventory_image_data;
    };

    struct inv_image_clearcolor_t_t {
        vector3d_t color;
    };

    struct c_commandcontext_t {
        bool needsprocessing;
        int32_t command_number;
    };

    struct compositematerialeditorpoint_t_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_model_name;
        int32_t m_n_sequence_index;
        float m_fl_cycle;
        KeyValues3 m_kvmodel_state_choices;
        bool m_b_enable_child_model;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_child_model_name;
        CUtlVector_CompositeMaterialAssemblyProcedure_t_ m_vec_composite_material_assembly_procedures;
        CUtlVector_CompositeMaterial_t_ m_vec_composite_materials;
    };

    struct c_ironsightcontroller_t {
        bool m_b_iron_sight_available;
        float m_fl_iron_sight_amount;
        float m_fl_iron_sight_amount_gained;
        float m_fl_iron_sight_amount_biased;
        float m_fl_iron_sight_amount_interpolated;
        float m_fl_iron_sight_amount_gained_interpolated;
        float m_fl_iron_sight_amount_biased_interpolated;
        float m_fl_interpolation_last_updated;
        QAngle m_ang_delta_average;
        QAngle m_ang_view_last;
        vector2d_t m_vec_dot_coords;
        float m_fl_firing_inaccuracy_extra_width_multiplier;
        float m_fl_speed_ratio;
    };

    struct compmatmutatorcondition_t_t {
        CompMatPropertyMutatorConditionType_t m_n_mutator_condition;
        CUtlString m_str_mutator_condition_container_name;
        CUtlString m_str_mutator_condition_container_var_name;
        CUtlString m_str_mutator_condition_container_var_value;
        bool m_b_pass_when_true;
    };

    struct inv_image_data_t_t {
        inv_image_map_t map;
        inv_image_item_t item;
        inv_image_camera_t camera;
        inv_image_light_sun_t lightsun;
        inv_image_light_fill_t lightfill;
        inv_image_light_barn_t light0;
        inv_image_light_barn_t light1;
        inv_image_clearcolor_t clearcolor;
    };

    struct compmatpropertymutator_t_t {
        bool m_b_enabled;
        CompMatPropertyMutatorType_t m_n_mutator_command_type;
        CUtlString m_str_init_with_container;
        CUtlString m_str_copy_property_input_container_src;
        CUtlString m_str_copy_property_input_container_property;
        CUtlString m_str_copy_property_target_property;
        CUtlString m_str_random_roll_input_vars_seed_input_var;
        CUtlVector_CUtlString_ m_vec_random_roll_input_vars_input_vars_to_roll;
        CUtlString m_str_copy_matching_keys_input_container_src;
        CUtlString m_str_copy_keys_with_suffix_input_container_src;
        CUtlString m_str_copy_keys_with_suffix_find_suffix;
        CUtlString m_str_copy_keys_with_suffix_replace_suffix;
        CompositeMaterialInputLooseVariable_t m_n_set_value_value;
        CUtlString m_str_generate_texture_target_param;
        CUtlString m_str_generate_texture_initial_container;
        int32_t m_n_resolution;
        bool m_b_is_scratch_target;
        CUtlString m_str_compression_format;
        bool m_b_splat_debug_info;
        bool m_b_capture_in_render_doc;
        CUtlVector_CompMatPropertyMutator_t_ m_vec_tex_gen_instructions;
        CUtlVector_CompMatPropertyMutator_t_ m_vec_conditional_mutators;
        CUtlString m_str_pop_input_queue_container;
        CUtlString m_str_draw_text_input_container_src;
        CUtlString m_str_draw_text_input_container_property;
        vector2d_t m_vec_draw_text_position;
        color_t m_col_draw_text_color;
        CUtlString m_str_draw_text_font;
        CUtlVector_CompMatMutatorCondition_t_ m_vec_conditions;
    };

    struct ccompositematerialeditordoc_t {
        int32_t m_n_version;
        CUtlVector_CompositeMaterialEditorPoint_t_ m_points;
        KeyValues3 m_kvthumbnail;
    };

    struct cclientalphaproperty_t {
        uint16_t m_n_dist_fade_start;
        uint16_t m_n_dist_fade_end;
        uint32_t m_n_desync_offset;
        uint32_t m_b_alpha_override;
        uint32_t m_b_shadow_alpha_override;
        uint32_t m_n_render_mode;
        uint32_t m_n_render_fx;
        uint8_t m_n_alpha;
        float m_fl_fade_scale;
        GameTime_t m_fl_render_fx_start_time;
        float m_fl_render_fx_duration;
    };

    struct screenfade_t_t {
        float speed;
        float end;
        float reset;
        color_t m_color;
        int32_t flags;
    };

    struct cgloballightbase_t {
        bool m_b_spot_light;
        VectorWS m_spot_light_origin;
        QAngle m_spot_light_angles;
        vector3d_t m_shadow_direction;
        vector3d_t m_ambient_direction;
        vector3d_t m_specular_direction;
        vector3d_t m_inspector_specular_direction;
        float m_fl_specular_power;
        float m_fl_specular_independence;
        color_t m_specular_color;
        bool m_b_start_disabled;
        bool m_b_enabled;
        color_t m_light_color;
        color_t m_ambient_color1;
        color_t m_ambient_color2;
        color_t m_ambient_color3;
        float m_fl_sun_distance;
        float m_fl_fov;
        float m_fl_near_z;
        float m_fl_far_z;
        bool m_b_enable_shadows;
        bool m_b_old_enable_shadows;
        bool m_b_background_clear_not_required;
        float m_fl_cloud_scale;
        float m_fl_cloud1_speed;
        float m_fl_cloud1_direction;
        float m_fl_cloud2_speed;
        float m_fl_cloud2_direction;
        float m_fl_ambient_scale1;
        float m_fl_ambient_scale2;
        float m_fl_ground_scale;
        float m_fl_light_scale;
        float m_fl_fo_wdarkness;
        bool m_b_enable_separate_skybox_fog;
        vector3d_t m_v_fow_color;
        VectorWS m_view_origin;
        QAngle m_view_angles;
        float m_fl_view_fo_v;
        VectorWS m_world_points;
        vector2d_t m_v_fog_offset_layer0;
        vector2d_t m_v_fog_offset_layer1;
        CHandle_C_BaseEntity_ m_h_env_wind;
        CHandle_C_BaseEntity_ m_h_env_sky;
    };

    struct inv_image_light_sun_t_t {
        vector3d_t color;
        QAngle angle;
        float brightness;
    };

    struct compositematerialmatchfilter_t_t {
        CompositeMaterialMatchFilterType_t m_n_composite_material_match_filter_type;
        CUtlString m_str_match_filter;
        CUtlString m_str_match_value;
        bool m_b_pass_when_true;
    };

    struct compositematerial_t_t {
        KeyValues3 m_target_kvs;
        KeyValues3 m_pre_generation_kvs;
        KeyValues3 m_final_kvs;
        CUtlVector_GeneratedTextureHandle_t_ m_vec_generated_textures;
    };

}

namespace engine2 {

    struct centityinstance_t {
        CUtlSymbolLarge m_isz_private_vscripts;
        CEntityIdentity* m_p_entity;
        CScriptComponent* m_cscript_component;
    };

    struct cscriptcomponent_t {
        CUtlSymbolLarge m_script_class_name;
    };

    struct centityidentity_t {
        int32_t m_name_string_table_index;
        CUtlSymbolLarge m_name;
        CUtlSymbolLarge m_designer_name;
        uint32_t m_flags;
        WorldGroupId_t m_world_group_id;
        uint32_t m_f_data_object_types;
        ChangeAccessorFieldPathIndex_t m_path_index;
        CEntityAttributeTable* m_p_attributes;
        CEntityIdentity* m_p_prev;
        CEntityIdentity* m_p_next;
        CEntityIdentity* m_p_prev_by_class;
        CEntityIdentity* m_p_next_by_class;
    };

    struct eventsimpleloopframeupdate_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_real_time;
        float m_fl_frame_time;
    };

    struct eventpostadvancetick_t_t {
        int32_t m_n_current_tick;
        int32_t m_n_current_tick_this_frame;
        int32_t m_n_total_ticks_this_frame;
        int32_t m_n_total_ticks;
    };

    struct eventclientscenesystemthreadstatechange_t_t {
        bool m_b_threads_active;
    };

    struct eventclientoutput_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_render_time;
        float m_fl_real_time;
        float m_fl_render_frame_time_unbounded;
        bool m_b_render_only;
    };

    struct eventserverpostsimulate_t_t {
        bool m_b_last_tick_before_client_update;
    };

    struct centitycomponenthelper_t {
        uint32_t m_flags;
        EntComponentInfo_t* m_p_info;
        int32_t m_n_priority;
        CEntityComponentHelper* m_p_next;
    };

    struct gametime_t_t {
        float m_value;
    };

    struct entityioqueueprioritizedevent_t_t {
        GameTime_t m_fl_fire_time;
        EntityIOTargetType_t m_target_type;
        CUtlSymbolLarge m_p_target;
        CUtlSymbolLarge m_p_target_input;
        CEntityHandle m_h_activator;
        CEntityHandle m_h_caller;
        CEntityHandle m_h_ent_target;
        CVariantBase_CVariantDefaultAllocator_ m_variant_value;
        CPulseArgumentPack m_pulse_arguments;
        CPulseInputParamMap m_param_map;
    };

    struct cnetworkvarchainer_t {
        ChangeAccessorFieldPathIndex_t m_path_index;
    };

    struct eventclientpostoutput_t_t {
        EngineLoopState_t m_loop_state;
        double m_fl_render_time;
        float m_fl_render_frame_time;
        float m_fl_render_frame_time_unbounded;
        bool m_b_render_only;
    };

    struct gametick_t_t {
        int32_t m_value;
    };

    struct eventclientpollinput_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_real_time;
    };

    struct eventpredataupdate_t_t {
        int32_t m_n_count;
    };

    struct eventclientprocessgameinput_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_real_time;
        float m_fl_frame_time;
    };

    struct eventframeboundary_t_t {
        float m_fl_frame_time;
    };

    struct eventappshutdown_t_t {
        int32_t m_n_dummy0;
    };

    struct eventserverpostadvancetick_t_t {
        bool m_b_last_tick_before_client_update;
    };

    struct eventprofilestorageavailable_t_t {
        CSplitScreenSlot m_n_split_screen_slot;
    };

    struct eventpostdataupdate_t_t {
        int32_t m_n_count;
    };

    struct eventclientprocessnetworking_t_t {
        int32_t m_n_tick_count;
    };

    struct centityattributetable_t {
        CUtlOrderedMap_CUtlStringTokenNoRegistration_Attribute_t_ m_attributes;
        CUtlOrderedMap_CUtlStringTokenNoRegistration_CUtlString_ m_names;
    };

    struct eventadvancetick_t_t {
        int32_t m_n_current_tick;
        int32_t m_n_current_tick_this_frame;
        int32_t m_n_total_ticks_this_frame;
        int32_t m_n_total_ticks;
    };

    struct eventbugbugcomplete_t_t {
        EventBugBug_t* m_p_payload;
    };

    struct eventclientpreoutput_t_t {
        EngineLoopState_t m_loop_state;
        double m_fl_render_time;
        double m_fl_render_frame_time;
        double m_fl_render_frame_time_unbounded;
        float m_fl_real_time;
        bool m_b_render_only;
    };

    struct eventclientframesimulate_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_real_time;
        float m_fl_frame_time;
        bool m_b_schedule_send_tick_packet;
    };

    struct eventsettime_t_t {
        EngineLoopState_t m_loop_state;
        int32_t m_n_client_output_frames;
        double m_fl_real_time;
        double m_fl_render_time;
        double m_fl_render_frame_time;
        double m_fl_render_frame_time_unbounded;
        double m_fl_render_frame_time_unscaled;
        double m_fl_tick_remainder;
    };

    struct eventsimulate_t_t {
        EngineLoopState_t m_loop_state;
        bool m_b_first_tick;
        bool m_b_last_tick;
    };

    struct entcomponentinfo_t_t {
        char* m_p_name;
        char* m_p_cppclassname;
        char* m_p_network_data_referenced_description;
        char* m_p_network_data_referenced_ptr_prop_description;
        int32_t m_n_runtime_index;
        uint32_t m_n_flags;
        CEntityComponentHelper* m_p_base_class_component_helper;
    };

    struct engineloopstate_t_t {
        int32_t m_n_plat_window_width;
        int32_t m_n_plat_window_height;
        int32_t m_n_render_width;
        int32_t m_n_render_height;
    };

    struct eventclientpollnetworking_t_t {
        int32_t m_n_tick_count;
        int32_t m_n_total_ticks;
    };

    struct eventserverbeginasyncposttickwork_t_t {
        bool m_b_is_once_per_frame_async_work_phase;
    };

    struct eventclientprocessinput_t_t {
        EngineLoopState_t m_loop_state;
        float m_fl_real_time;
        float m_fl_tick_interval;
        double m_fl_tick_start_time;
    };

    struct eventserverendsimulate_t_t {
        bool m_b_last_tick;
    };

}

namespace host {

    struct emptytestscript_t {
        CAnimScriptParam_float_ m_h_test;
    };

    struct canimscriptbase_t {
        bool m_b_is_valid;
    };

}

namespace materialsystem2 {

    struct materialparam_t_t {
        CUtlString m_name;
    };

    struct materialparamvector_t_t {
        vector4d_t m_value;
    };

    struct materialparamstring_t_t {
        CUtlString m_value;
    };

    struct postprocessingresource_t_t {
        bool m_b_has_tonemap_params;
        PostProcessingTonemapParameters_t m_tone_map_params;
        bool m_b_has_bloom_params;
        PostProcessingBloomParameters_t m_bloom_params;
        bool m_b_has_vignette_params;
        PostProcessingVignetteParameters_t m_vignette_params;
        bool m_b_has_local_contrast_params;
        PostProcessingLocalContrastParameters_t m_local_constrast_params;
        int32_t m_n_color_correction_volume_dim;
        CUtlBinaryBlock m_color_correction_volume_data;
        bool m_b_has_color_correction;
        bool m_b_has_fog_scattering_params;
        PostProcessingFogScatteringParameters_t m_fog_scattering_params;
        bool m_b_has_local_exposure_params;
        PostProcessingLocalExposureParameters_t m_local_exposure_params;
    };

    struct materialparamint_t_t {
        int32_t m_n_value;
    };

    struct postprocessingvignetteparameters_t_t {
        float m_fl_vignette_strength;
        vector2d_t m_v_center;
        float m_fl_radius;
        float m_fl_roundness;
        float m_fl_feather;
        vector3d_t m_v_color_tint;
    };

    struct postprocessinglocalcontrastparameters_t_t {
        float m_fl_local_contrast_strength;
        float m_fl_local_contrast_edge_strength;
        float m_fl_local_contrast_vignette_start;
        float m_fl_local_contrast_vignette_end;
        float m_fl_local_contrast_vignette_blur;
    };

    struct postprocessingtonemapparameters_t_t {
        float m_fl_exposure_bias;
        float m_fl_shoulder_strength;
        float m_fl_linear_strength;
        float m_fl_linear_angle;
        float m_fl_toe_strength;
        float m_fl_toe_num;
        float m_fl_toe_denom;
        float m_fl_white_point;
        float m_fl_luminance_source;
        float m_fl_exposure_bias_shadows;
        float m_fl_exposure_bias_highlights;
        float m_fl_min_shadow_lum;
        float m_fl_max_shadow_lum;
        float m_fl_min_highlight_lum;
        float m_fl_max_highlight_lum;
    };

    struct postprocessingfogscatteringparameters_t_t {
        float m_f_radius;
        float m_f_scale;
        float m_f_cubemap_scale;
        float m_f_volumetric_scale;
        float m_f_gradient_scale;
        float m_f_water_scale;
        float m_f_water_density;
        float m_f_water_depth_blur_radius;
    };

    struct materialparambuffer_t_t {
        CUtlBinaryBlock m_value;
    };

    struct materialresourcedata_t_t {
        CUtlString m_material_name;
        CUtlString m_shader_name;
        CUtlVector_MaterialParamInt_t_ m_int_params;
        CUtlVector_MaterialParamFloat_t_ m_float_params;
        CUtlVector_MaterialParamVector_t_ m_vector_params;
        CUtlVector_MaterialParamTexture_t_ m_texture_params;
        CUtlVector_MaterialParamBuffer_t_ m_dynamic_params;
        CUtlVector_MaterialParamBuffer_t_ m_dynamic_texture_params;
        CUtlVector_MaterialParamInt_t_ m_int_attributes;
        CUtlVector_MaterialParamFloat_t_ m_float_attributes;
        CUtlVector_MaterialParamVector_t_ m_vector_attributes;
        CUtlVector_MaterialParamTexture_t_ m_texture_attributes;
        CUtlVector_MaterialParamString_t_ m_string_attributes;
        CUtlVector_CUtlString_ m_render_attributes_used;
    };

    struct postprocessingbloomparameters_t_t {
        BloomBlendMode_t m_blend_mode;
        float m_fl_bloom_strength;
        float m_fl_screen_bloom_strength;
        float m_fl_blur_bloom_strength;
        float m_fl_bloom_threshold;
        float m_fl_bloom_threshold_width;
        float m_fl_skybox_bloom_strength;
        float m_fl_bloom_start_value;
        float m_fl_compute_bloom_strength;
        float m_fl_compute_bloom_threshold;
        float m_fl_compute_bloom_radius;
        float m_fl_compute_bloom_effects_scale;
        float m_fl_compute_bloom_lens_dirt_strength;
        float m_fl_compute_bloom_lens_dirt_black_level;
        float m_fl_blur_weight;
        Vector m_v_blur_tint;
    };

    struct materialparamfloat_t_t {
        float m_fl_value;
    };

    struct postprocessinglocalexposureparameters_t_t {
        float m_f_shadow_offset_ev;
        float m_f_highlight_offset_ev;
        float m_f_sigma;
        float m_f_boost_local_contrast;
    };

    struct materialparamtexture_t_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_value;
    };

}

namespace networksystem {

    struct changeaccessorfieldpathindex_t_t {
        int32_t m_value;
    };

}

namespace particles {

    struct cpulsecell_waitforcursorswithtag_t {
        bool m_b_tag_self_when_complete;
        PulseCursorCancelPriority_t m_n_desired_kill_priority;
    };

    struct cpulsecell_racecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_base_t {
        PulseDocNodeID_t m_n_editor_node_id;
    };

    struct cpulsecell_pickbestoutflowselector_t {
        PulseBestOutflowRules_t m_n_check_type;
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cpulsecell_waitforobservable_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_ResumePoint m_on_true;
    };

    struct cpulse_outflowconnection_t {
        PulseSymbol_t m_source_outflow_name;
        PulseRuntimeChunkIndex_t m_n_dest_chunk;
        int32_t m_n_instruction;
        PulseRegisterMap_t m_outflow_register_map;
    };

    struct cpulsegraphdef_t {
        PulseSymbol_t m_domain_identifier;
        CPulseValueFullType m_domain_sub_type;
        PulseSymbol_t m_parent_map_name;
        PulseSymbol_t m_parent_xml_name;
        CUtlVector_CPulse_Chunk_ m_chunks;
        CUtlVector_CPulseCell_Base_ m_cells;
        CUtlVector_CPulse_Variable_ m_vars;
        CUtlVector_CPulse_TempVarBankDefinition_ m_temp_var_banks;
        CUtlVector_CPulse_PublicOutput_ m_public_outputs;
        CUtlVector_CPulse_InvokeBinding_ m_invoke_bindings;
        CUtlVector_CPulse_CallInfo_ m_call_infos;
        CUtlVector_CPulse_Constant_ m_constants;
        CUtlVector_CPulse_DomainValue_ m_domain_values;
        CUtlVector_CPulse_BlackboardReference_ m_blackboard_references;
        CUtlVector_CPulse_OutputConnection_ m_output_connections;
    };

    struct cpulsecell_firecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_timeline__timelineevent_t_t {
        float m_fl_time_from_previous;
        CPulse_OutflowConnection m_event_outflow;
    };

    struct cpulsecell_intervaltimer__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
        float m_fl_wait_interval;
        float m_fl_wait_interval_high;
        bool m_b_complete_on_next_wake;
    };

    struct outflowwithrequirements_t_t {
        CPulse_OutflowConnection m_connection;
        PulseDocNodeID_t m_destination_flow_node_id;
        CUtlVector_PulseDocNodeID_t_ m_requirement_node_ids;
        CUtlVector_int32_t_ m_n_cursor_state_block_index;
    };

    struct cpulsecell_value_gradient_t {
        CColorGradient m_gradient;
    };

    struct pulsenodedynamicoutflows_t__dynamicoutflow_t_t {
        CGlobalSymbol m_outflow_id;
        CPulse_OutflowConnection m_connection;
    };

    struct cpulsecell_inflow_graphhook_t {
        PulseSymbol_t m_hook_name;
    };

    struct cpulsecell_inflow_baseentrypoint_t {
        PulseRuntimeChunkIndex_t m_entry_chunk;
        PulseRegisterMap_t m_register_map;
    };

    struct cpulsecell_waitforcursorswithtagbase_t {
        int32_t m_n_cursors_allowed_to_wait;
        CPulse_ResumePoint m_wait_complete;
    };

    struct cpulse_invokebinding_t {
        PulseRegisterMap_t m_register_map;
        PulseSymbol_t m_func_name;
        PulseRuntimeCellIndex_t m_n_cell_index;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
    };

    struct cpulsecell_intervaltimer_t {
        CPulse_ResumePoint m_completed;
        SignatureOutflow_Continue m_on_interval;
    };

    struct cpulsecell_baselerp_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_value_curve_t {
        CPiecewiseCurve m_curve;
    };

    struct cpulsecell_inflow_eventhandler_t {
        PulseSymbol_t m_event_name;
    };

    struct cpulsecell_outflow_cycleshuffled__instancestate_t_t {
        CUtlVectorFixedGrowable_uint8_t_8_ m_shuffle;
        int32_t m_n_next_shuffle;
    };

    struct cpulsecell_baselerp__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
    };

    struct cpulsecell_timeline_t {
        CUtlVector_CPulseCell_Timeline_TimelineEvent_t_ m_timeline_events;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_inflow_entoutputhandler_t {
        PulseSymbol_t m_source_entity;
        PulseSymbol_t m_source_output;
        CPulseValueFullType m_expected_param_type;
    };

    struct cpulsecell_outflow_cycleordered__instancestate_t_t {
        int32_t m_n_next_index;
    };

    struct cpulsecell_limitcount__instancestate_t_t {
        int32_t m_n_current_count;
    };

    struct cpulsecell_baseyieldinginflow_t {
        CPulse_ResumePoint m_base_flow_on_after_cancel;
        CPulse_ResumePoint m_base_flow_while_active;
    };

    struct pulsenodedynamicoutflows_t_t {
        CUtlVector_PulseNodeDynamicOutflows_t_DynamicOutflow_t_ m_outflows;
    };

    struct cpulsecell_isrequirementvalid__criteria_t_t {
        bool m_b_is_valid;
    };

    struct cpulsecell_inflow_observablevariablelistener_t {
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference;
        bool m_b_self_reference;
    };

    struct cpulsecell_outflow_cycleordered_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct pulseselectoroutflowlist_t_t {
        CUtlVector_OutflowWithRequirements_t_ m_outflows;
    };

    struct cpulsecell_inflow_wait_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_outflow_cycleshuffled_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_inflow_method_t {
        PulseSymbol_t m_method_name;
        CUtlString m_description;
        bool m_b_is_public;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_return_values;
    };

    struct cpulsecell_booleanswitchstate_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_OutflowConnection m_when_true;
        CPulse_OutflowConnection m_when_false;
    };

    struct cpulsecell_inflow_yield_t {
        CPulse_ResumePoint m_unyield_resume;
    };

    struct cpulsecell_unknown_t {
        KeyValues3 m_unknown_keys;
    };

    struct cpulsecell_outflow_cyclerandom_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_step_publicoutput_t {
        PulseRuntimeOutputIndex_t m_output_index;
    };

    struct cpulse_blackboardreference_t {
        CStrongHandle_InfoForResourceTypeIPulseGraphDef_ m_h_blackboard_resource;
        PulseSymbol_t m_blackboard_resource;
        PulseDocNodeID_t m_n_node_id;
        CGlobalSymbol m_node_name;
    };

    struct cpulse_callinfo_t {
        PulseSymbol_t m_port_name;
        PulseDocNodeID_t m_n_editor_node_id;
        PulseRegisterMap_t m_register_map;
        PulseDocNodeID_t m_call_method_id;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
        PulseRuntimeChunkIndex_t m_n_break_dest_chunk;
        int32_t m_n_break_dest_instruction;
    };

    struct cpulsecell_inlinenodeskipselector_t {
        PulseDocNodeID_t m_n_flow_node_id;
        bool m_b_and;
        PulseSelectorOutflowList_t m_pass_outflow;
        CPulse_OutflowConnection m_fail_outflow;
    };

    struct cpulsecell_limitcount_t {
        int32_t m_n_limit_count;
    };

    struct cpulsecell_step_callexternalmethod_t {
        PulseSymbol_t m_method_name;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_index;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_expected_args;
        PulseMethodCallMode_t m_n_async_call_mode;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_limitcount__criteria_t_t {
        bool m_b_limit_count_passes;
    };

    struct cpulsecell_cursorqueue_t {
        int32_t m_n_cursors_allowed_to_run_parallel;
    };

    struct c_op_remapgravitytovector_t {
        CPerParticleVecInput m_v_input1;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_normalized_output;
    };

    struct c_op_decay_t {
        bool m_b_rope_decay;
        bool m_b_force_preserve_particle_order;
    };

    struct c_op_renderdeferredlight_t {
        float m_fl_radius_scale;
        float m_fl_alpha_scale;
        ParticleAttributeIndex_t m_n_alpha2_field;
        CParticleCollectionVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
        bool m_b_use_texture;
        bool m_b_use_alpha_test_window;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_texture;
        ParticleAttributeIndex_t m_n_alpha_test_point_field;
        ParticleAttributeIndex_t m_n_alpha_test_range_field;
        ParticleAttributeIndex_t m_n_alpha_test_sharpness_field;
        float m_fl_light_distance;
        float m_fl_start_falloff;
        float m_fl_distance_falloff;
        float m_fl_spot_fo_v;
        int32_t m_n_hsvshift_control_point;
    };

    struct c_op_remapspeedtocp_t {
        int32_t m_n_in_control_point_number;
        int32_t m_n_out_control_point_number;
        int32_t m_n_field;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_use_delta_v;
    };

    struct c_op_remaptransformtovelocity_t {
        CParticleTransformInput m_transform_input;
    };

    struct collisiongroupcontext_t_t {
        int32_t m_n_collision_group_number;
    };

    struct cparticlefunctionpreemission_t {
        bool m_b_run_once;
    };

    struct c_op_fadeoutsimple_t {
        float m_fl_fade_out_time;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_op_springtovectorconstraint_t {
        CPerParticleFloatInput m_fl_rest_length;
        CPerParticleFloatInput m_fl_min_distance;
        CPerParticleFloatInput m_fl_max_distance;
        CPerParticleFloatInput m_fl_resting_length;
        CPerParticleVecInput m_vec_anchor_vector;
    };

    struct c_op_renderropes_t {
        bool m_b_enable_fading_and_clamping;
        float m_fl_min_size;
        float m_fl_max_size;
        float m_fl_start_fade_size;
        float m_fl_end_fade_size;
        float m_fl_start_fade_dot;
        float m_fl_end_fade_dot;
        CParticleCollectionRendererFloatInput m_fl_sub_pixel_aascale;
        float m_fl_radius_taper;
        int32_t m_n_min_tesselation;
        int32_t m_n_max_tesselation;
        float m_fl_tess_scale;
        CParticleCollectionRendererFloatInput m_fl_texture_vworld_size;
        CParticleCollectionRendererFloatInput m_fl_texture_vscroll_rate;
        CParticleCollectionRendererFloatInput m_fl_texture_voffset;
        int32_t m_n_texture_vparams_cp;
        bool m_b_clamp_v;
        int32_t m_n_scale_cp1;
        int32_t m_n_scale_cp2;
        float m_fl_scale_vsize_by_control_point_distance;
        float m_fl_scale_vscroll_by_control_point_distance;
        float m_fl_scale_voffset_by_control_point_distance;
        bool m_b_use_scalar_for_texture_coordinate;
        ParticleAttributeIndex_t m_n_scalar_field_for_texture_coordinate;
        float m_fl_scalar_attribute_texture_coord_scale;
        bool m_b_reverse_order;
        bool m_b_closed_loop;
        ParticleAttributeIndex_t m_n_split_field;
        bool m_b_sort_by_segment_id;
        ParticleOrientationChoiceList_t m_n_orientation_type;
        ParticleAttributeIndex_t m_n_vector_field_for_orientation;
        bool m_b_draw_as_opaque;
        bool m_b_generate_normals;
    };

    struct c_init_statuseffectcitadel_t {
        float m_fl_sfxcolor_warp_amount;
        float m_fl_sfxnormal_amount;
        float m_fl_sfxmetalness_amount;
        float m_fl_sfxroughness_amount;
        float m_fl_sfxself_illum_amount;
        float m_fl_sfxsscale;
        float m_fl_sfxsscroll_x;
        float m_fl_sfxsscroll_y;
        float m_fl_sfxsscroll_z;
        float m_fl_sfxsoffset_x;
        float m_fl_sfxsoffset_y;
        float m_fl_sfxsoffset_z;
        DetailCombo_t m_n_detail_combo;
        float m_fl_sfxsdetail_amount;
        float m_fl_sfxsdetail_scale;
        float m_fl_sfxsdetail_scroll_x;
        float m_fl_sfxsdetail_scroll_y;
        float m_fl_sfxsdetail_scroll_z;
        float m_fl_sfxsuse_model_uvs;
    };

    struct c_op_rendersound_t {
        float m_fl_duration_scale;
        float m_fl_snd_lvl_scale;
        float m_fl_pitch_scale;
        float m_fl_volume_scale;
        ParticleAttributeIndex_t m_n_snd_lvl_field;
        ParticleAttributeIndex_t m_n_duration_field;
        ParticleAttributeIndex_t m_n_pitch_field;
        ParticleAttributeIndex_t m_n_volume_field;
        int32_t m_n_channel;
        int32_t m_n_cpreference;
        char m_psz_sound_name;
        bool m_b_suppress_stop_sound_event;
    };

    struct cparticlevisibilityinputs_t {
        float m_fl_camera_bias;
        int32_t m_n_cpin;
        float m_fl_proxy_radius;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_input_pixel_vis_fade;
        float m_fl_no_pixel_visibility_fallback;
        float m_fl_distance_input_min;
        float m_fl_distance_input_max;
        float m_fl_dot_input_min;
        float m_fl_dot_input_max;
        bool m_b_dot_cpangles;
        bool m_b_dot_camera_angles;
        float m_fl_alpha_scale_min;
        float m_fl_alpha_scale_max;
        float m_fl_radius_scale_min;
        float m_fl_radius_scale_max;
        float m_fl_radius_scale_fovbase;
        bool m_b_right_eye;
    };

    struct c_op_setcontrolpointstoparticle_t {
        int32_t m_n_child_group_id;
        int32_t m_n_first_control_point;
        int32_t m_n_num_control_points;
        int32_t m_n_first_source_point;
        bool m_b_reverse;
        bool m_b_set_orientation;
        ParticleOrientationSetMode_t m_n_orientation_mode;
        ParticleParentSetMode_t m_n_set_parent;
    };

    struct c_op_remapcpvelocitytovector_t {
        int32_t m_n_control_point;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
        bool m_b_normalize;
    };

    struct c_op_pointvectoratnextparticle_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_interpolation;
        bool m_b_previous;
    };

    struct particlepreviewbodygroup_t_t {
        CUtlString m_body_group_name;
        int32_t m_n_value;
    };

    struct c_op_oscillatescalarsimple_t {
        float m_rate;
        float m_frequency;
        ParticleAttributeIndex_t m_n_field;
        float m_fl_osc_mult;
        float m_fl_osc_add;
    };

    struct c_init_statuseffect_t {
        Detail2Combo_t m_n_detail2_combo;
        float m_fl_detail2_rotation;
        float m_fl_detail2_scale;
        float m_fl_detail2_blend_factor;
        float m_fl_color_warp_intensity;
        float m_fl_diffuse_warp_blend_to_full;
        float m_fl_env_map_intensity;
        float m_fl_ambient_scale;
        color_t m_specular_color;
        float m_fl_specular_scale;
        float m_fl_specular_exponent;
        float m_fl_specular_exponent_blend_to_full;
        float m_fl_specular_blend_to_full;
        color_t m_rim_light_color;
        float m_fl_rim_light_scale;
        float m_fl_reflections_tint_by_base_blend_to_none;
        float m_fl_metalness_blend_to_full;
        float m_fl_self_illum_blend_to_full;
    };

    struct c_init_rtenvcull_t {
        vector3d_t m_vec_test_dir;
        vector3d_t m_vec_test_normal;
        bool m_b_use_velocity;
        bool m_b_cull_on_miss;
        bool m_b_life_adjust;
        char m_rt_env_name;
        int32_t m_n_rtenv_cp;
        int32_t m_n_component;
    };

    struct c_op_constraindistance_t {
        CParticleCollectionFloatInput m_f_min_distance;
        CParticleCollectionFloatInput m_f_max_distance;
        CParticleTransformInput m_n_control_point_number;
        CParticleCollectionVecInput m_center_offset;
        bool m_b_global_center;
    };

    struct c_init_randomvector_t {
        vector3d_t m_vec_min;
        vector3d_t m_vec_max;
        ParticleAttributeIndex_t m_n_field_output;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_init_initialvelocitynoise_t {
        vector3d_t m_vec_abs_val;
        vector3d_t m_vec_abs_val_inv;
        CPerParticleVecInput m_vec_offset_loc;
        CPerParticleFloatInput m_fl_offset;
        CPerParticleVecInput m_vec_output_min;
        CPerParticleVecInput m_vec_output_max;
        CPerParticleFloatInput m_fl_noise_scale;
        CPerParticleFloatInput m_fl_noise_scale_loc;
        CParticleTransformInput m_transform_input;
        bool m_b_ignore_dt;
    };

    struct particlechildreninfo_t_t {
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_child_ref;
        float m_fl_delay;
        bool m_b_end_cap;
        bool m_b_disable_child;
        ParticleDetailLevel_t m_n_detail_level;
    };

    struct c_op_remapscalaroncetimed_t {
        bool m_b_proportional;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_remap_time;
    };

    struct c_op_planecull_t {
        int32_t m_n_plane_control_point;
        CParticleCollectionVecInput m_vec_plane_direction;
        bool m_b_local_space;
        float m_fl_plane_offset;
    };

    struct c_init_velocityrandom_t {
        int32_t m_n_control_point_number;
        CPerParticleFloatInput m_f_speed_min;
        CPerParticleFloatInput m_f_speed_max;
        CPerParticleVecInput m_local_coordinate_system_speed_min;
        CPerParticleVecInput m_local_coordinate_system_speed_max;
        bool m_b_ignore_dt;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_op_modeldampenmovement_t {
        int32_t m_n_control_point_number;
        bool m_b_bound_box;
        bool m_b_outside;
        bool m_b_use_bones;
        char m_hitbox_set_name;
        CPerParticleVecInput m_vec_pos_offset;
        float m_f_drag;
    };

    struct c_op_twistaroundaxis_t {
        float m_f_force_amount;
        vector3d_t m_twist_axis;
        bool m_b_local_space;
        int32_t m_n_control_point_number;
    };

    struct c_op_teleportbeam_t {
        int32_t m_n_cpposition;
        int32_t m_n_cpvelocity;
        int32_t m_n_cpmisc;
        int32_t m_n_cpcolor;
        int32_t m_n_cpinvalid_color;
        int32_t m_n_cpextra_arc_data;
        vector3d_t m_v_gravity;
        float m_fl_arc_max_duration;
        float m_fl_segment_break;
        float m_fl_arc_speed;
        float m_fl_alpha;
    };

    struct c_op_remapexternalwindtocp_t {
        int32_t m_n_cp;
        int32_t m_n_cpoutput;
        CParticleCollectionVecInput m_vec_scale;
        bool m_b_set_magnitude;
        int32_t m_n_out_vector_field;
    };

    struct cbaserenderersource2_t {
        CParticleCollectionRendererFloatInput m_fl_radius_scale;
        CParticleCollectionRendererFloatInput m_fl_alpha_scale;
        CParticleCollectionRendererFloatInput m_fl_roll_scale;
        ParticleAttributeIndex_t m_n_alpha2_field;
        CParticleCollectionRendererVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
        SpriteCardShaderType_t m_n_shader_type;
        CUtlString m_str_shader_override;
        CParticleCollectionRendererFloatInput m_fl_center_xoffset;
        CParticleCollectionRendererFloatInput m_fl_center_yoffset;
        float m_fl_bump_strength;
        ParticleSequenceCropOverride_t m_n_crop_texture_override;
        CUtlLeanVector_TextureGroup_t_ m_vec_textures_input;
        float m_fl_animation_rate;
        AnimationType_t m_n_animation_type;
        bool m_b_animate_in_fps;
        CParticleCollectionRendererFloatInput m_fl_motion_vector_scale_u;
        CParticleCollectionRendererFloatInput m_fl_motion_vector_scale_v;
        CParticleCollectionRendererFloatInput m_fl_self_illum_amount;
        CParticleCollectionRendererFloatInput m_fl_diffuse_amount;
        CParticleCollectionRendererFloatInput m_fl_diffuse_clamp;
        int32_t m_n_lighting_control_point;
        ParticleOutputBlendMode_t m_n_output_blend_mode;
        bool m_b_gamma_correct_vertex_colors;
        bool m_b_saturate_color_pre_alpha_blend;
        CParticleCollectionRendererFloatInput m_fl_add_self_amount;
        CParticleCollectionRendererFloatInput m_fl_desaturation;
        CParticleCollectionRendererFloatInput m_fl_overbright_factor;
        int32_t m_n_hsvshift_control_point;
        ParticleFogType_t m_n_fog_type;
        CParticleCollectionRendererFloatInput m_fl_fog_amount;
        bool m_b_tint_by_fow;
        bool m_b_tint_by_global_light;
        SpriteCardPerParticleScale_t m_n_per_particle_alpha_reference;
        SpriteCardPerParticleScale_t m_n_per_particle_alpha_ref_window;
        ParticleAlphaReferenceType_t m_n_alpha_reference_type;
        CParticleCollectionRendererFloatInput m_fl_alpha_reference_softness;
        CParticleCollectionRendererFloatInput m_fl_source_alpha_value_to_map_to_zero;
        CParticleCollectionRendererFloatInput m_fl_source_alpha_value_to_map_to_one;
        bool m_b_refract;
        bool m_b_refract_solid;
        bool m_b_refract2_passes;
        CParticleCollectionRendererFloatInput m_fl_refract_amount;
        int32_t m_n_refract_blur_radius;
        BlurFilterType_t m_n_refract_blur_type;
        bool m_b_only_render_in_effects_bloom_pass;
        bool m_b_only_render_in_effects_water_pass;
        bool m_b_use_mixed_resolution_rendering;
        bool m_b_only_render_in_effecs_game_overlay;
        char m_stencil_test_id;
        bool m_b_stencil_test_exclude;
        char m_stencil_write_id;
        bool m_b_write_stencil_on_depth_pass;
        bool m_b_write_stencil_on_depth_fail;
        bool m_b_reverse_zbuffering;
        bool m_b_disable_zbuffering;
        ParticleDepthFeatheringMode_t m_n_feathering_mode;
        CParticleCollectionRendererFloatInput m_fl_feathering_min_dist;
        CParticleCollectionRendererFloatInput m_fl_feathering_max_dist;
        CParticleCollectionRendererFloatInput m_fl_feathering_filter;
        CParticleCollectionRendererFloatInput m_fl_feathering_depth_map_filter;
        CParticleCollectionRendererFloatInput m_fl_depth_bias;
        ParticleSortingChoiceList_t m_n_sort_method;
        bool m_b_blend_frames_seq0;
        bool m_b_max_luminance_blending_sequence0;
    };

    struct c_op_orientto2ddirection_t {
        CPerParticleVecInput m_vec_input;
        float m_fl_rot_offset;
        float m_fl_spin_strength;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_op_remapdotproducttocp_t {
        int32_t m_n_input_cp1;
        int32_t m_n_input_cp2;
        int32_t m_n_output_cp;
        int32_t m_n_out_vector_field;
        CParticleCollectionFloatInput m_fl_input_min;
        CParticleCollectionFloatInput m_fl_input_max;
        CParticleCollectionFloatInput m_fl_output_min;
        CParticleCollectionFloatInput m_fl_output_max;
    };

    struct c_init_remapparticlecounttonamedmodelelementscalar_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlString m_output_min_name;
        CUtlString m_output_max_name;
        bool m_b_model_from_renderer;
    };

    struct c_op_rendertrails_t {
        bool m_b_enable_fading_and_clamping;
        float m_fl_start_fade_dot;
        float m_fl_end_fade_dot;
        ParticleAttributeIndex_t m_n_prev_pnt_source;
        float m_fl_max_length;
        float m_fl_min_length;
        bool m_b_ignore_dt;
        float m_fl_constrain_radius_to_length_ratio;
        float m_fl_length_scale;
        float m_fl_length_fade_in_time;
        CPerParticleFloatInput m_fl_radius_head_taper;
        CParticleCollectionVecInput m_vec_head_color_scale;
        CPerParticleFloatInput m_fl_head_alpha_scale;
        CPerParticleFloatInput m_fl_radius_taper;
        CParticleCollectionVecInput m_vec_tail_color_scale;
        CPerParticleFloatInput m_fl_tail_alpha_scale;
        ParticleAttributeIndex_t m_n_horiz_crop_field;
        ParticleAttributeIndex_t m_n_vert_crop_field;
        float m_fl_forward_shift;
        bool m_b_flip_uvbased_on_pitch_yaw;
    };

    struct c_op_setcontrolpointpositiontotimeofdayvalue_t {
        int32_t m_n_control_point_number;
        char m_psz_time_of_day_parameter;
        vector3d_t m_vec_default_value;
    };

    struct c_op_decaymaintaincount_t {
        int32_t m_n_particles_to_maintain;
        float m_fl_decay_delay;
        int32_t m_n_snapshot_control_point;
        CUtlString m_str_snapshot_subset;
        bool m_b_lifespan_decay;
        CParticleCollectionFloatInput m_fl_scale;
        bool m_b_kill_newest;
    };

    struct c_init_randommodelsequence_t {
        char m_activity_name;
        char m_sequence_name;
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
    };

    struct c_op_externalgameimpulseforce_t {
        CPerParticleFloatInput m_fl_force_scale;
        bool m_b_ropes;
        bool m_b_ropes_zonly;
        bool m_b_explosions;
        bool m_b_particles;
    };

    struct c_op_remapaveragehitboxspeedtocp_t {
        int32_t m_n_in_control_point_number;
        int32_t m_n_out_control_point_number;
        int32_t m_n_field;
        ParticleHitboxDataSelection_t m_n_hitbox_data_type;
        CParticleCollectionFloatInput m_fl_input_min;
        CParticleCollectionFloatInput m_fl_input_max;
        CParticleCollectionFloatInput m_fl_output_min;
        CParticleCollectionFloatInput m_fl_output_max;
        int32_t m_n_height_control_point_number;
        CParticleCollectionVecInput m_vec_comparison_velocity;
        char m_hitbox_set_name;
    };

    struct c_init_randomalpha_t {
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_alpha_min;
        int32_t m_n_alpha_max;
        float m_fl_alpha_rand_exponent;
    };

    struct c_op_normalizevector_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
    };

    struct c_op_fadeinsimple_t {
        float m_fl_fade_in_time;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_op_repeatedtriggerchildgroup_t {
        int32_t m_n_child_group_id;
        CParticleCollectionFloatInput m_fl_cluster_refire_time;
        CParticleCollectionFloatInput m_fl_cluster_size;
        CParticleCollectionFloatInput m_fl_cluster_cooldown;
        bool m_b_limit_child_count;
    };

    struct c_op_remapvelocitytovector_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
        bool m_b_normalize;
    };

    struct c_init_sethitboxtoclosest_t {
        int32_t m_n_control_point_number;
        int32_t m_n_desired_hitbox;
        CParticleCollectionVecInput m_vec_hit_box_scale;
        char m_hitbox_set_name;
        bool m_b_use_bones;
        bool m_b_use_closest_point_on_hitbox;
        ClosestPointTestType_t m_n_test_type;
        CParticleCollectionFloatInput m_fl_hybrid_ratio;
        bool m_b_update_position;
    };

    struct c_init_ringwave_t {
        CParticleTransformInput m_transform_input;
        CParticleCollectionFloatInput m_fl_particles_per_orbit;
        CPerParticleFloatInput m_fl_initial_radius;
        CPerParticleFloatInput m_fl_thickness;
        CPerParticleFloatInput m_fl_initial_speed_min;
        CPerParticleFloatInput m_fl_initial_speed_max;
        CPerParticleFloatInput m_fl_roll;
        CPerParticleFloatInput m_fl_pitch;
        CPerParticleFloatInput m_fl_yaw;
        bool m_b_even_distribution;
        bool m_b_xyvelocity_only;
    };

    struct c_init_randomtraillength_t {
        float m_fl_min_length;
        float m_fl_max_length;
        float m_fl_length_rand_exponent;
    };

    struct c_op_remapscalar_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_old_code;
    };

    struct c_op_distancebetweentransforms_t {
        ParticleAttributeIndex_t m_n_field_output;
        CParticleTransformInput m_transform_start;
        CParticleTransformInput m_transform_end;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        float m_fl_max_trace_length;
        float m_fl_losscale;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        bool m_b_los;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_decayoffscreen_t {
        CParticleCollectionFloatInput m_fl_offscreen_time;
    };

    struct c_init_createsequentialpath_t {
        float m_f_max_distance;
        float m_fl_num_to_assign;
        bool m_b_loop;
        bool m_b_cppairs;
        bool m_b_save_offset;
        CPathParameters m_path_params;
    };

    struct c_op_endcaptimeddecay_t {
        CParticleCollectionFloatInput m_fl_decay_time;
    };

    struct c_op_remapdistancetolinesegmentbase_t {
        int32_t m_n_cp0;
        int32_t m_n_cp1;
        float m_fl_min_input_value;
        float m_fl_max_input_value;
        bool m_b_infinite_line;
    };

    struct c_op_continuousemitter_t {
        CParticleCollectionFloatInput m_fl_emission_duration;
        CParticleCollectionFloatInput m_fl_start_time;
        CParticleCollectionFloatInput m_fl_emit_rate;
        float m_fl_emission_scale;
        float m_fl_scale_per_parent_particle;
        bool m_b_init_from_killed_parent_particles;
        EventTypeSelection_t m_n_event_type;
        int32_t m_n_snapshot_control_point;
        CUtlString m_str_snapshot_subset;
        int32_t m_n_limit_per_update;
        bool m_b_force_emit_on_first_update;
        bool m_b_force_emit_on_last_update;
    };

    struct c_op_oscillatevectorsimple_t {
        vector3d_t m_rate;
        vector3d_t m_frequency;
        ParticleAttributeIndex_t m_n_field;
        float m_fl_osc_mult;
        float m_fl_osc_add;
        bool m_b_offset;
    };

    struct c_init_sequencelifetime_t {
        float m_fl_framerate;
    };

    struct c_init_movebetweenpoints_t {
        CPerParticleFloatInput m_fl_speed_min;
        CPerParticleFloatInput m_fl_speed_max;
        CPerParticleFloatInput m_fl_end_spread;
        CPerParticleFloatInput m_fl_start_offset;
        CPerParticleFloatInput m_fl_end_offset;
        int32_t m_n_end_control_point_number;
        bool m_b_trail_bias;
    };

    struct c_init_statuseffecttf_t {
        float m_fl_sfxcolor_warp_amount;
        float m_fl_sfxnormal_amount;
        float m_fl_sfxmetalness_amount;
        float m_fl_sfxroughness_amount;
        float m_fl_sfxself_illum_amount;
        float m_fl_sfxsscale;
        float m_fl_sfxsscroll_x;
        float m_fl_sfxsscroll_y;
        float m_fl_sfxsscroll_z;
        float m_fl_sfxsoffset_x;
        float m_fl_sfxsoffset_y;
        float m_fl_sfxsoffset_z;
        DetailCombo_t m_n_detail_combo;
        float m_fl_sfxsdetail_amount;
        float m_fl_sfxsdetail_scale;
        float m_fl_sfxsdetail_scroll_x;
        float m_fl_sfxsdetail_scroll_y;
        float m_fl_sfxsdetail_scroll_z;
        float m_fl_sfxsuse_model_uvs;
        float m_fl_sfxenv_map_amount;
    };

    struct c_op_setuserevent_t {
        CPerParticleFloatInput m_fl_input;
        CPerParticleFloatInput m_fl_rising_edge;
        EventTypeSelection_t m_n_rising_event_type;
        CPerParticleFloatInput m_fl_falling_edge;
        EventTypeSelection_t m_n_falling_event_type;
    };

    struct c_op_quantizefloat_t {
        CPerParticleFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
    };

    struct c_op_basicmovement_t {
        CParticleCollectionVecInput m_gravity;
        CParticleCollectionFloatInput m_f_drag;
        CParticleMassCalculationParameters m_mass_controls;
        int32_t m_n_max_constraint_passes;
        bool m_b_use_new_code;
    };

    struct c_init_randomnamedmodelelement_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlVector_CUtlString_ m_names;
        bool m_b_shuffle;
        bool m_b_linear;
        bool m_b_model_from_renderer;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_init_initfromparentkilled_t {
        ParticleAttributeIndex_t m_n_attribute_to_copy;
        EventTypeSelection_t m_n_event_type;
    };

    struct cparticlefunction_t {
        CParticleCollectionFloatInput m_fl_op_strength;
        ParticleEndcapMode_t m_n_op_end_cap_state;
        ParticleToolsState_t m_n_tools_state;
        float m_fl_op_start_fade_in_time;
        float m_fl_op_end_fade_in_time;
        float m_fl_op_start_fade_out_time;
        float m_fl_op_end_fade_out_time;
        float m_fl_op_fade_oscillate_period;
        bool m_b_normalize_to_stop_time;
        float m_fl_op_time_offset_min;
        float m_fl_op_time_offset_max;
        int32_t m_n_op_time_offset_seed;
        int32_t m_n_op_time_scale_seed;
        float m_fl_op_time_scale_min;
        float m_fl_op_time_scale_max;
        bool m_b_disable_operator;
        CUtlString m_notes;
    };

    struct c_op_globallight_t {
        float m_fl_scale;
        bool m_b_clamp_lower_range;
        bool m_b_clamp_upper_range;
    };

    struct c_init_offsetvectortovector_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_op_setperchildcontrolpointfromattribute_t {
        int32_t m_n_child_group_id;
        int32_t m_n_first_control_point;
        int32_t m_n_num_control_points;
        int32_t m_n_particle_increment;
        int32_t m_n_first_source_point;
        bool m_b_num_based_on_particle_count;
        ParticleAttributeIndex_t m_n_attribute_to_read;
        int32_t m_n_cpfield;
    };

    struct c_op_setparentcontrolpointstochildcp_t {
        int32_t m_n_child_group_id;
        int32_t m_n_child_control_point;
        int32_t m_n_num_control_points;
        int32_t m_n_first_source_point;
        bool m_b_set_orientation;
    };

    struct c_op_boxconstraint_t {
        CParticleCollectionVecInput m_vec_min;
        CParticleCollectionVecInput m_vec_max;
        int32_t m_n_cp;
        bool m_b_local_space;
        bool m_b_account_for_radius;
    };

    struct c_init_createphyllotaxis_t {
        int32_t m_n_control_point_number;
        int32_t m_n_scale_cp;
        int32_t m_n_component;
        float m_f_rad_cent_core;
        float m_f_rad_per_point;
        float m_f_rad_per_point_to;
        float m_fpoint_angle;
        float m_fsize_overall;
        float m_f_rad_bias;
        float m_f_min_rad;
        float m_f_dist_bias;
        bool m_b_use_local_coords;
        bool m_b_use_with_cont_emit;
        bool m_b_use_orig_radius;
    };

    struct c_op_attracttocontrolpoint_t {
        vector3d_t m_vec_component_scale;
        CPerParticleFloatInput m_f_force_amount;
        CPerParticleFloatInput m_f_minimum_distance;
        float m_f_falloff_power;
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_f_force_amount_min;
        bool m_b_apply_min_force;
    };

    struct c_init_randomlifetime_t {
        float m_f_lifetime_min;
        float m_f_lifetime_max;
        float m_f_lifetime_rand_exponent;
    };

    struct c_init_velocityradialrandom_t {
        bool m_b_per_particle_center;
        int32_t m_n_control_point_number;
        CPerParticleVecInput m_vec_position;
        CPerParticleVecInput m_vec_fwd;
        CPerParticleFloatInput m_f_speed_min;
        CPerParticleFloatInput m_f_speed_max;
        vector3d_t m_vec_local_coordinate_system_speed_scale;
        bool m_b_ignore_delta;
    };

    struct c_init_randomradius_t {
        float m_fl_radius_min;
        float m_fl_radius_max;
        float m_fl_radius_rand_exponent;
    };

    struct c_op_orient2dreltocp_t {
        float m_fl_rot_offset;
        float m_fl_spin_strength;
        int32_t m_n_cp;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct texturecontrols_t_t {
        CParticleCollectionRendererFloatInput m_fl_final_texture_scale_u;
        CParticleCollectionRendererFloatInput m_fl_final_texture_scale_v;
        CParticleCollectionRendererFloatInput m_fl_final_texture_offset_u;
        CParticleCollectionRendererFloatInput m_fl_final_texture_offset_v;
        CParticleCollectionRendererFloatInput m_fl_final_texture_uvrotation;
        CParticleCollectionRendererFloatInput m_fl_zoom_scale;
        CParticleCollectionRendererFloatInput m_fl_distortion;
        bool m_b_randomize_offsets;
        bool m_b_clamp_uvs;
        SpriteCardPerParticleScale_t m_n_per_particle_blend;
        SpriteCardPerParticleScale_t m_n_per_particle_scale;
        SpriteCardPerParticleScale_t m_n_per_particle_offset_u;
        SpriteCardPerParticleScale_t m_n_per_particle_offset_v;
        SpriteCardPerParticleScale_t m_n_per_particle_rotation;
        SpriteCardPerParticleScale_t m_n_per_particle_zoom;
        SpriteCardPerParticleScale_t m_n_per_particle_distortion;
    };

    struct controlpointreference_t_t {
        int32_t m_control_point_name_string;
        vector3d_t m_v_offset_from_control_point;
        bool m_b_offset_in_local_space;
    };

    struct c_op_setcontrolpointtovectorexpression_t {
        VectorExpressionType_t m_n_expression;
        int32_t m_n_output_cp;
        CParticleCollectionVecInput m_v_input1;
        CParticleCollectionVecInput m_v_input2;
        CPerParticleFloatInput m_fl_lerp;
        bool m_b_normalized_output;
    };

    struct c_op_lightningsnapshotgenerator_t {
        int32_t m_n_cpsnapshot;
        int32_t m_n_cpstart_pnt;
        int32_t m_n_cpend_pnt;
        CParticleCollectionFloatInput m_fl_segments;
        CParticleCollectionFloatInput m_fl_offset;
        CParticleCollectionFloatInput m_fl_offset_decay;
        CParticleCollectionFloatInput m_fl_recalc_rate;
        CParticleCollectionFloatInput m_fl_uvscale;
        CParticleCollectionFloatInput m_fl_uvoffset;
        CParticleCollectionFloatInput m_fl_split_rate;
        CParticleCollectionFloatInput m_fl_recursion_split_scale;
        bool m_b_scale_branch_distance;
        CParticleCollectionFloatInput m_fl_branch_distance_scale;
        bool m_b_scale_branch_offset;
        CParticleCollectionFloatInput m_fl_branch_offset_scale;
        CParticleCollectionFloatInput m_fl_branch_twist;
        ParticleLightnintBranchBehavior_t m_n_branch_behavior;
        CParticleCollectionFloatInput m_fl_radius_start;
        CParticleCollectionFloatInput m_fl_radius_end;
        CParticleCollectionFloatInput m_fl_dedicated_pool;
    };

    struct c_init_remapqanglestorotation_t {
        CParticleTransformInput m_transform_input;
    };

    struct c_init_positionwarp_t {
        CParticleCollectionVecInput m_vec_warp_min;
        CParticleCollectionVecInput m_vec_warp_max;
        int32_t m_n_scale_control_point_number;
        int32_t m_n_control_point_number;
        int32_t m_n_radius_component;
        float m_fl_warp_time;
        float m_fl_warp_start_time;
        float m_fl_prev_pos_scale;
        bool m_b_invert_warp;
        bool m_b_use_count;
    };

    struct c_op_setcontrolpointfieldtoscalarexpression_t {
        ScalarExpressionType_t m_n_expression;
        CParticleCollectionFloatInput m_fl_input1;
        CParticleCollectionFloatInput m_fl_input2;
        CParticleRemapFloatInput m_fl_output_remap;
        int32_t m_n_output_cp;
        int32_t m_n_out_vector_field;
        CParticleCollectionFloatInput m_fl_interpolation;
    };

    struct c_op_createparticlesystemrenderer_t {
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_effect;
        EventTypeSelection_t m_n_event_type;
        CUtlLeanVector_CPAssignment_t_ m_vec_cps;
        CUtlString m_sz_particle_config;
        CPerParticleVecInput m_aggregation_pos;
    };

    struct c_init_randomvectorcomponent_t {
        float m_fl_min;
        float m_fl_max;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_component;
    };

    struct c_op_inheritfromparentparticles_t {
        float m_fl_scale;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_increment;
        bool m_b_random_distribution;
    };

    struct c_init_setvectorattributetovectorexpression_t {
        VectorExpressionType_t m_n_expression;
        CPerParticleVecInput m_v_input1;
        CPerParticleVecInput m_v_input2;
        CPerParticleFloatInput m_fl_lerp;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_normalized_output;
    };

    struct c_op_remaptransformvisibilitytovector_t {
        ParticleSetMethod_t m_n_set_method;
        CParticleTransformInput m_transform_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        float m_fl_radius;
    };

    struct c_op_directionbetweenvecstovec_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleVecInput m_vec_point1;
        CPerParticleVecInput m_vec_point2;
    };

    struct c_op_movementloopinsidesphere_t {
        int32_t m_n_cp;
        CParticleCollectionFloatInput m_fl_distance;
        CParticleCollectionVecInput m_vec_scale;
        ParticleAttributeIndex_t m_n_dist_sqr_attr;
    };

    struct c_op_rendersimplemodelcollection_t {
        bool m_b_center_offset;
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CParticleModelInput m_model_input;
        CParticleCollectionFloatInput m_f_size_cull_scale;
        bool m_b_disable_shadows;
        bool m_b_disable_motion_blur;
        bool m_b_accepts_decals;
        CPerParticleFloatInput m_f_draw_filter;
        ParticleAttributeIndex_t m_n_angular_velocity_field;
    };

    struct c_op_quantizecpcomponent_t {
        CParticleCollectionFloatInput m_fl_input_value;
        int32_t m_n_cpoutput;
        int32_t m_n_out_vector_field;
        CParticleCollectionFloatInput m_fl_quantize_value;
    };

    struct c_op_playendcapwhenfinished_t {
        bool m_b_fire_on_emission_end;
        bool m_b_include_children;
    };

    struct c_init_initfloatcollection_t {
        CParticleCollectionFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
    };

    struct cpathparameters_t {
        int32_t m_n_start_control_point_number;
        int32_t m_n_mid_control_point_number;
        int32_t m_n_end_control_point_number;
        int32_t m_n_bulge_control;
        float m_fl_bulge;
        float m_fl_mid_point;
        vector3d_t m_v_start_point_offset;
        vector3d_t m_v_mid_point_offset;
        vector3d_t m_v_end_offset;
    };

    struct c_op_remapscalarendcap_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
    };

    struct c_init_createfromplanecache_t {
        vector3d_t m_vec_offset_min;
        vector3d_t m_vec_offset_max;
        bool m_b_use_normal;
    };

    struct c_op_lazycullcomparefloat_t {
        CPerParticleFloatInput m_fl_comparsion1;
        CPerParticleFloatInput m_fl_comparsion2;
        CPerParticleFloatInput m_fl_cull_time;
    };

    struct c_op_controlpointtoradialscreenspace_t {
        int32_t m_n_cpin;
        vector3d_t m_vec_cp1_pos;
        int32_t m_n_cpout;
        int32_t m_n_cpout_field;
        int32_t m_n_cpsspos_out;
    };

    struct c_init_normaloffset_t {
        vector3d_t m_offset_min;
        vector3d_t m_offset_max;
        int32_t m_n_control_point_number;
        bool m_b_local_coords;
        bool m_b_normalize;
    };

    struct c_op_remapdistancetolinesegmenttovector_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_v_min_output_value;
        vector3d_t m_v_max_output_value;
    };

    struct c_op_renderasmodels_t {
        CUtlVector_ModelReference_t_ m_model_list;
        float m_fl_model_scale;
        bool m_b_fit_to_model_size;
        bool m_b_non_uniform_scaling;
        ParticleAttributeIndex_t m_n_xaxis_scaling_attribute;
        ParticleAttributeIndex_t m_n_yaxis_scaling_attribute;
        ParticleAttributeIndex_t m_n_zaxis_scaling_attribute;
        int32_t m_n_size_cull_bloat;
    };

    struct c_init_creationnoise_t {
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_abs_val;
        bool m_b_abs_val_inv;
        float m_fl_offset;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_noise_scale;
        float m_fl_noise_scale_loc;
        vector3d_t m_vec_offset_loc;
        float m_fl_world_time_scale;
    };

    struct c_op_gameliquidspill_t {
        CParticleCollectionFloatInput m_fl_liquid_contents_field;
        CParticleCollectionFloatInput m_fl_expiration_time;
        CParticleCollectionFloatInput m_fl_radius;
        bool m_b_check_exposed_to_sky;
        ParticleAttributeIndex_t m_n_amount_attribute;
    };

    struct c_op_instantaneousemitter_t {
        CParticleCollectionFloatInput m_n_particles_to_emit;
        CParticleCollectionFloatInput m_fl_start_time;
        float m_fl_init_from_killed_parent_particles;
        EventTypeSelection_t m_n_event_type;
        CParticleCollectionFloatInput m_fl_parent_particle_scale;
        int32_t m_n_max_emitted_per_frame;
        int32_t m_n_snapshot_control_point;
        CUtlString m_str_snapshot_subset;
    };

    struct c_op_constrainlinelength_t {
        float m_fl_min_distance;
        float m_fl_max_distance;
    };

    struct c_init_lifespanfromvelocity_t {
        vector3d_t m_vec_component_scale;
        float m_fl_trace_offset;
        float m_fl_max_trace_length;
        float m_fl_trace_tolerance;
        int32_t m_n_max_planes;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        bool m_b_include_water;
    };

    struct cbasetrailrenderer_t {
        ParticleOrientationChoiceList_t m_n_orientation_type;
        int32_t m_n_orientation_control_point;
        float m_fl_min_size;
        float m_fl_max_size;
        CParticleCollectionRendererFloatInput m_fl_start_fade_size;
        CParticleCollectionRendererFloatInput m_fl_end_fade_size;
        CParticleCollectionRendererFloatInput m_fl_sub_pixel_aascale;
        bool m_b_clamp_v;
    };

    struct c_init_velocityfromcp_t {
        CParticleCollectionVecInput m_velocity_input;
        CParticleTransformInput m_transform_input;
        float m_fl_velocity_scale;
        bool m_b_direction_only;
    };

    struct c_op_setcontrolpointorientation_t {
        bool m_b_use_world_location;
        bool m_b_randomize;
        bool m_b_set_once;
        int32_t m_n_cp;
        int32_t m_n_head_location;
        QAngle m_vec_rotation;
        QAngle m_vec_rotation_b;
        CParticleCollectionFloatInput m_fl_interpolation;
    };

    struct c_op_movementskinnedpositionfromcpsnapshot_t {
        int32_t m_n_snapshot_control_point_number;
        int32_t m_n_control_point_number;
        bool m_b_random;
        int32_t m_n_random_seed;
        bool m_b_set_normal;
        bool m_b_set_radius;
        SnapshotIndexType_t m_n_index_type;
        CPerParticleFloatInput m_fl_read_index;
        CParticleCollectionFloatInput m_fl_increment;
        CParticleCollectionFloatInput m_n_full_loop_increment;
        CParticleCollectionFloatInput m_n_snap_shot_start_point;
        CPerParticleFloatInput m_fl_interpolation;
    };

    struct c_op_multisegmentdisplaysnapshotgenerator_t {
        int32_t m_n_cpsnapshot;
        ParticleMultiSegmentCountSelection_t m_n_seg_count;
        ParticleMultiSegmentInputSelection_t m_n_input_type;
        CUtlString m_str_default_string;
        CParticleCollectionFloatInput m_fl_value;
        CParticleCollectionFloatInput m_fl_scoll_offset;
        CUtlVector_ParticleMultiSegmentSpecialCharacter_t_ m_special_char_list;
        CParticleCollectionVecInput m_vec_color_unlit;
        CParticleCollectionVecInput m_vec_color_lit;
        CParticleCollectionFloatInput m_fl_radius;
        CParticleCollectionFloatInput m_fl_spacing;
        CParticleCollectionFloatInput m_fl_min_count;
        CParticleCollectionFloatInput m_fl_max_count;
        bool m_b_prepend_empty;
        CParticleCollectionFloatInput m_fl_digits_after_decimal;
    };

    struct c_op_oscillatevector_t {
        vector3d_t m_rate_min;
        vector3d_t m_rate_max;
        vector3d_t m_frequency_min;
        vector3d_t m_frequency_max;
        ParticleAttributeIndex_t m_n_field;
        bool m_b_proportional;
        bool m_b_proportional_op;
        bool m_b_offset;
        float m_fl_start_time_min;
        float m_fl_start_time_max;
        float m_fl_end_time_min;
        float m_fl_end_time_max;
        CPerParticleFloatInput m_fl_osc_mult;
        CPerParticleFloatInput m_fl_osc_add;
        CPerParticleFloatInput m_fl_rate_scale;
    };

    struct c_op_positionlock_t {
        CParticleTransformInput m_transform_input;
        float m_fl_start_time_min;
        float m_fl_start_time_max;
        float m_fl_start_time_exp;
        float m_fl_end_time_min;
        float m_fl_end_time_max;
        float m_fl_end_time_exp;
        float m_fl_range;
        CParticleCollectionFloatInput m_fl_range_bias;
        float m_fl_jump_threshold;
        float m_fl_prev_pos_scale;
        bool m_b_lock_rot;
        CParticleCollectionVecInput m_vec_scale;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_output_prev;
    };

    struct c_op_rendervrhapticevent_t {
        ParticleVRHandChoiceList_t m_n_hand;
        int32_t m_n_output_hand_cp;
        int32_t m_n_output_field;
        CPerParticleFloatInput m_fl_amplitude;
    };

    struct c_op_setcontrolpointtoimpactpoint_t {
        int32_t m_n_cpout;
        int32_t m_n_cpin;
        float m_fl_update_rate;
        CParticleCollectionFloatInput m_fl_trace_length;
        float m_fl_start_offset;
        float m_fl_offset;
        vector3d_t m_vec_trace_dir;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        bool m_b_set_to_endpoint;
        bool m_b_trace_to_closest_surface;
        bool m_b_include_water;
    };

    struct c_op_interpolateradius_t {
        float m_fl_start_time;
        float m_fl_end_time;
        float m_fl_start_scale;
        float m_fl_end_scale;
        bool m_b_ease_in_and_out;
        float m_fl_bias;
    };

    struct c_op_reinitializescalarendcap_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_output_min;
        float m_fl_output_max;
    };

    struct c_op_turbulenceforce_t {
        float m_fl_noise_coord_scale0;
        float m_fl_noise_coord_scale1;
        float m_fl_noise_coord_scale2;
        float m_fl_noise_coord_scale3;
        vector3d_t m_vec_noise_amount0;
        vector3d_t m_vec_noise_amount1;
        vector3d_t m_vec_noise_amount2;
        vector3d_t m_vec_noise_amount3;
    };

    struct c_op_remapnamedmodelelementoncetimed_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlVector_CUtlString_ m_in_names;
        CUtlVector_CUtlString_ m_out_names;
        CUtlVector_CUtlString_ m_fallback_names;
        bool m_b_model_from_renderer;
        bool m_b_proportional;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_remap_time;
    };

    struct c_op_setcontrolpointtoplayer_t {
        int32_t m_n_cp1;
        vector3d_t m_vec_cp1_pos;
        bool m_b_orient_to_eyes;
        ParticleEntityPos_t m_n_position;
        int32_t m_n_radius_cp;
        int32_t m_n_radius_cpfield;
    };

    struct c_op_endcaptimedfreeze_t {
        CParticleCollectionFloatInput m_fl_freeze_time;
    };

    struct c_op_rendergpuimplicit_t {
        bool m_b_use_per_particle_radius;
        uint32_t m_n_vertex_count_kb;
        uint32_t m_n_index_count_kb;
        CParticleCollectionRendererFloatInput m_f_grid_size;
        CParticleCollectionRendererFloatInput m_f_radius_scale;
        CParticleCollectionRendererFloatInput m_f_isosurface_threshold;
        int32_t m_n_scale_cp;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
    };

    struct c_op_setrandomcontrolpointposition_t {
        bool m_b_use_world_location;
        bool m_b_orient;
        int32_t m_n_cp1;
        int32_t m_n_head_location;
        CParticleCollectionFloatInput m_fl_re_random_rate;
        vector3d_t m_vec_cpmin_pos;
        vector3d_t m_vec_cpmax_pos;
        CParticleCollectionFloatInput m_fl_interpolation;
    };

    struct c_op_rendervolumetricemitter_t {
        CUtlString m_str_channel_type;
        ParticleVolumetricSmokeType_t m_n_type;
        ParticleVolumetricSmokeCreationType_t m_n_creation_type;
        EventTypeSelection_t m_n_event_type;
        CPerParticleVecInput m_vec_pos;
        CPerParticleVecInput m_vec_velocity;
        CPerParticleVecInput m_v_prev_position;
        CPerParticleFloatInput m_fl_speed;
        CPerParticleFloatInput m_fl_radius;
        CPerParticleFloatInput m_fl_density;
        CPerParticleFloatInput m_fl_temperature;
        CPerParticleFloatInput m_fl_magnitude;
        CPerParticleFloatInput m_fl_kill_radius;
        CPerParticleFloatInput m_fl_kill_density_scale;
        CPerParticleFloatInput m_fl_falloff;
    };

    struct c_op_remaptransformvisibilitytoscalar_t {
        ParticleSetMethod_t m_n_set_method;
        CParticleTransformInput m_transform_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_radius;
    };

    struct c_op_remapcontrolpointdirectiontovector_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
        int32_t m_n_control_point_number;
    };

    struct c_op_screenspacepositionoftarget_t {
        CPerParticleVecInput m_vec_target_position;
        bool m_b_outut_behindness;
        ParticleAttributeIndex_t m_n_behind_field_output;
        CParticleRemapFloatInput m_fl_behind_output_remap;
        ParticleSetMethod_t m_n_behind_set_method;
    };

    struct c_op_dragrelativetoplane_t {
        CParticleCollectionFloatInput m_fl_drag_at_plane;
        CParticleCollectionFloatInput m_fl_falloff;
        bool m_b_directional;
        CParticleCollectionVecInput m_vec_plane_normal;
        int32_t m_n_control_point_number;
    };

    struct c_op_setcptovector_t {
        int32_t m_n_cpinput;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_op_snapshotrigidskintobones_t {
        bool m_b_transform_normals;
        bool m_b_transform_radii;
        int32_t m_n_control_point_number;
    };

    struct c_op_setsinglecontrolpointposition_t {
        bool m_b_set_once;
        int32_t m_n_cp1;
        CParticleCollectionVecInput m_vec_cp1_pos;
        CParticleTransformInput m_transform_input;
    };

    struct c_init_distancetoneighborcull_t {
        CPerParticleFloatInput m_fl_distance;
        bool m_b_include_radii;
        CPerParticleFloatInput m_fl_lifespan_overlap;
        ParticleAttributeIndex_t m_n_field_modify;
        CPerParticleFloatInput m_fl_modify;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_use_neighbor;
    };

    struct c_op_remapcptoscalar_t {
        int32_t m_n_cpinput;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_field;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_start_time;
        float m_fl_end_time;
        float m_fl_interp_rate;
        ParticleSetMethod_t m_n_set_method;
    };

    struct cparticlefunctionrenderer_t {
        CParticleVisibilityInputs visibility_inputs;
        bool m_b_cannot_be_refracted;
    };

    struct cparticlesystemdefinition_t {
        int32_t m_n_behavior_version;
        CUtlVector_CParticleFunctionPreEmission_ m_pre_emission_operators;
        CUtlVector_CParticleFunctionEmitter_ m_emitters;
        CUtlVector_CParticleFunctionInitializer_ m_initializers;
        CUtlVector_CParticleFunctionOperator_ m_operators;
        CUtlVector_CParticleFunctionForce_ m_force_generators;
        CUtlVector_CParticleFunctionConstraint_ m_constraints;
        CUtlVector_CParticleFunctionRenderer_ m_renderers;
        CUtlVector_ParticleChildrenInfo_t_ m_children;
        int32_t m_n_first_multiple_override_backward_compat;
        int32_t m_n_initial_particles;
        int32_t m_n_max_particles;
        int32_t m_n_group_id;
        vector3d_t m_bounding_box_min;
        vector3d_t m_bounding_box_max;
        float m_fl_depth_sort_bias;
        int32_t m_n_sort_override_position_cp;
        bool m_b_infinite_bounds;
        bool m_b_enable_named_values;
        CUtlString m_named_value_domain;
        CUtlVector_ParticleNamedValueSource_t_ m_named_value_locals;
        color_t m_constant_color;
        vector3d_t m_constant_normal;
        float m_fl_constant_radius;
        float m_fl_constant_rotation;
        float m_fl_constant_rotation_speed;
        float m_fl_constant_lifespan;
        int32_t m_n_constant_sequence_number;
        int32_t m_n_constant_sequence_number1;
        int32_t m_n_snapshot_control_point;
        CStrongHandle_InfoForResourceTypeIParticleSnapshot_ m_h_snapshot;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_psz_cull_replacement_name;
        float m_fl_cull_radius;
        float m_fl_cull_fill_cost;
        int32_t m_n_cull_control_point;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_fallback;
        int32_t m_n_fallback_max_count;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_low_violence_def;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_reference_replacement;
        float m_fl_pre_simulation_time;
        float m_fl_stop_simulation_after_time;
        float m_fl_maximum_time_step;
        float m_fl_maximum_sim_time;
        float m_fl_minimum_sim_time;
        float m_fl_minimum_time_step;
        int32_t m_n_minimum_frames;
        bool m_b_is_gpuparticle_system;
        int32_t m_n_min_cpulevel;
        int32_t m_n_min_gpulevel;
        float m_fl_no_draw_time_to_go_to_sleep;
        float m_fl_max_draw_distance;
        float m_fl_start_fade_distance;
        float m_fl_max_creation_distance;
        int32_t m_n_aggregation_min_available_particles;
        float m_fl_aggregate_radius;
        bool m_b_should_batch;
        bool m_b_should_hitboxes_fallback_to_render_bounds;
        bool m_b_should_hitboxes_fallback_to_snapshot;
        bool m_b_should_hitboxes_fallback_to_collision_hulls;
        InheritableBoolType_t m_n_view_model_effect;
        bool m_b_screen_space_effect;
        CUtlSymbolLarge m_psz_target_layer_id;
        int32_t m_n_skip_render_control_point;
        int32_t m_n_allow_render_control_point;
        bool m_b_should_sort;
        CUtlVector_ParticleControlPointConfiguration_t_ m_control_point_configurations;
    };

    struct c_op_percentagebetweentransformsvector_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        CParticleTransformInput m_transform_start;
        CParticleTransformInput m_transform_end;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_radial_check;
    };

    struct c_op_renderscreenvelocityrotate_t {
        float m_fl_rotate_rate_degrees;
        float m_fl_forward_degrees;
    };

    struct c_op_updatelightsource_t {
        color_t m_v_color_tint;
        float m_fl_brightness_scale;
        float m_fl_radius_scale;
        float m_fl_minimum_lighting_radius;
        float m_fl_maximum_lighting_radius;
        float m_fl_position_damping_constant;
    };

    struct c_init_createwithinbox_t {
        CPerParticleVecInput m_vec_min;
        CPerParticleVecInput m_vec_max;
        int32_t m_n_control_point_number;
        bool m_b_local_space;
        CRandomNumberGeneratorParameters m_randomness_parameters;
        bool m_b_use_new_code;
    };

    struct c_op_chooserandomchildreningroup_t {
        int32_t m_n_child_group_id;
        CParticleCollectionFloatInput m_fl_number_of_children;
    };

    struct c_op_controlpointlight_t {
        float m_fl_scale;
        int32_t m_n_control_point1;
        int32_t m_n_control_point2;
        int32_t m_n_control_point3;
        int32_t m_n_control_point4;
        vector3d_t m_vec_cpoffset1;
        vector3d_t m_vec_cpoffset2;
        vector3d_t m_vec_cpoffset3;
        vector3d_t m_vec_cpoffset4;
        float m_light_fifty_dist1;
        float m_light_zero_dist1;
        float m_light_fifty_dist2;
        float m_light_zero_dist2;
        float m_light_fifty_dist3;
        float m_light_zero_dist3;
        float m_light_fifty_dist4;
        float m_light_zero_dist4;
        color_t m_light_color1;
        color_t m_light_color2;
        color_t m_light_color3;
        color_t m_light_color4;
        bool m_b_light_type1;
        bool m_b_light_type2;
        bool m_b_light_type3;
        bool m_b_light_type4;
        bool m_b_light_dynamic1;
        bool m_b_light_dynamic2;
        bool m_b_light_dynamic3;
        bool m_b_light_dynamic4;
        bool m_b_use_normal;
        bool m_b_use_hlambert;
        bool m_b_clamp_lower_range;
        bool m_b_clamp_upper_range;
    };

    struct c_op_vectorfieldsnapshot_t {
        int32_t m_n_control_point_number;
        ParticleAttributeIndex_t m_n_attribute_to_write;
        int32_t m_n_local_space_cp;
        CPerParticleFloatInput m_fl_interpolation;
        CPerParticleVecInput m_vec_scale;
        float m_fl_boundary_dampening;
        bool m_b_set_velocity;
        bool m_b_lock_to_surface;
        float m_fl_grid_spacing;
    };

    struct c_op_cylindricaldistancetotransform_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        CParticleTransformInput m_transform_start;
        CParticleTransformInput m_transform_end;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_additive;
        bool m_b_capsule;
    };

    struct c_init_positionplaceonground_t {
        CPerParticleFloatInput m_fl_offset;
        CPerParticleFloatInput m_fl_max_trace_length;
        CPerParticleVecInput m_vec_trace_dir;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        ParticleTraceMissBehavior_t m_n_trace_miss_behavior;
        bool m_b_include_water;
        ParticleAttributeIndex_t m_n_attribute;
        bool m_b_set_pxyzonly;
        bool m_b_set_normal;
        ParticleAttributeIndex_t m_n_ground_normal_attribute;
        bool m_b_offseton_col_only;
        float m_fl_offset_by_radius_factor;
        int32_t m_n_preserve_offset_cp;
        int32_t m_n_ignore_cp;
    };

    struct c_init_randomscalar_t {
        float m_fl_min;
        float m_fl_max;
        float m_fl_exponent;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_op_renderpostprocessing_t {
        CPerParticleFloatInput m_fl_post_process_strength;
        CStrongHandle_InfoForResourceTypeCPostProcessingResource_ m_h_post_texture;
        ParticlePostProcessPriorityGroup_t m_n_priority;
    };

    struct c_op_worldtraceconstraint_t {
        int32_t m_n_cp;
        vector3d_t m_vec_cp_offset;
        ParticleCollisionMode_t m_n_collision_mode;
        ParticleCollisionMode_t m_n_collision_mode_min;
        ParticleTraceSet_t m_n_trace_set;
        char m_collision_group_name;
        bool m_b_world_only;
        bool m_b_brush_only;
        bool m_b_include_water;
        int32_t m_n_ignore_cp;
        float m_fl_cp_movement_tolerance;
        float m_fl_retest_rate;
        float m_fl_trace_tolerance;
        float m_fl_collision_confirmation_speed;
        float m_n_max_traces_per_frame;
        CPerParticleFloatInput m_fl_radius_scale;
        CPerParticleFloatInput m_fl_bounce_amount;
        CPerParticleFloatInput m_fl_slide_amount;
        CPerParticleFloatInput m_fl_random_dir_scale;
        bool m_b_decay_bounce;
        bool m_b_killon_contact;
        float m_fl_min_speed;
        bool m_b_killon_contact_bounce;
        bool m_b_set_normal;
        ParticleAttributeIndex_t m_n_stick_on_collision_field;
        CPerParticleFloatInput m_fl_stop_speed;
        ParticleAttributeIndex_t m_n_entity_stick_data_field;
        ParticleAttributeIndex_t m_n_entity_stick_normal_field;
    };

    struct c_op_renderblobs_t {
        CParticleCollectionRendererFloatInput m_cube_width;
        CParticleCollectionRendererFloatInput m_cutoff_radius;
        CParticleCollectionRendererFloatInput m_render_radius;
        uint32_t m_n_vertex_count_kb;
        uint32_t m_n_index_count_kb;
        int32_t m_n_scale_cp;
        CUtlVector_MaterialVariable_t_ m_material_vars;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
    };

    struct c_op_oscillatescalar_t {
        float m_rate_min;
        float m_rate_max;
        float m_frequency_min;
        float m_frequency_max;
        ParticleAttributeIndex_t m_n_field;
        bool m_b_proportional;
        bool m_b_proportional_op;
        float m_fl_start_time_min;
        float m_fl_start_time_max;
        float m_fl_end_time_min;
        float m_fl_end_time_max;
        float m_fl_osc_mult;
        float m_fl_osc_add;
    };

    struct c_op_fadeout_t {
        float m_fl_fade_out_time_min;
        float m_fl_fade_out_time_max;
        float m_fl_fade_out_time_exp;
        float m_fl_fade_bias;
        bool m_b_proportional;
        bool m_b_ease_in_and_out;
    };

    struct c_op_waterimpulserenderer_t {
        CPerParticleVecInput m_vec_pos;
        CPerParticleFloatInput m_fl_radius;
        CPerParticleFloatInput m_fl_magnitude;
        CPerParticleFloatInput m_fl_shape;
        CPerParticleFloatInput m_fl_wind_speed;
        CPerParticleFloatInput m_fl_wobble;
        bool m_b_is_radial_wind;
        EventTypeSelection_t m_n_event_type;
    };

    struct c_init_randomsequence_t {
        int32_t m_n_sequence_min;
        int32_t m_n_sequence_max;
        bool m_b_shuffle;
        bool m_b_linear;
        CUtlVector_SequenceWeightedList_t_ m_weighted_list;
    };

    struct c_op_rampscalarsplinesimple_t {
        float m_rate;
        float m_fl_start_time;
        float m_fl_end_time;
        ParticleAttributeIndex_t m_n_field;
        bool m_b_ease_out;
    };

    struct c_init_distancecull_t {
        int32_t m_n_control_point;
        CParticleCollectionFloatInput m_fl_distance;
        bool m_b_cull_inside;
    };

    struct c_op_collidewithparentparticles_t {
        CPerParticleFloatInput m_fl_parent_radius_scale;
        CPerParticleFloatInput m_fl_radius_scale;
    };

    struct c_init_initfromvectorfieldsnapshot_t {
        int32_t m_n_control_point_number;
        int32_t m_n_local_space_cp;
        int32_t m_n_weight_update_cp;
        bool m_b_use_vertical_velocity;
        CPerParticleVecInput m_vec_scale;
    };

    struct c_op_setvectorattributetovectorexpression_t {
        VectorExpressionType_t m_n_expression;
        CPerParticleVecInput m_v_input1;
        CPerParticleVecInput m_v_input2;
        CPerParticleFloatInput m_fl_lerp;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_normalized_output;
    };

    struct c_init_addvectortovector_t {
        vector3d_t m_vec_scale;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_input;
        vector3d_t m_v_offset_min;
        vector3d_t m_v_offset_max;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_init_remapinitialvisibilityscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
    };

    struct c_op_remaptransformorientationtoyaw_t {
        CParticleTransformInput m_transform_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_rot_offset;
        float m_fl_spin_strength;
    };

    struct c_op_renderstatuseffect_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_color_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_detail2;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_diffuse_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_fresnel_color_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_fresnel_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_specular_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_env_map;
    };

    struct c_op_randomforce_t {
        vector3d_t m_min_force;
        vector3d_t m_max_force;
    };

    struct c_op_remapparticlecountonscalarendcap_t {
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_input_min;
        int32_t m_n_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_backwards;
        ParticleSetMethod_t m_n_set_method;
    };

    struct particlepreviewstate_t_t {
        CUtlString m_preview_model;
        uint32_t m_n_mod_specific_data;
        PetGroundType_t m_ground_type;
        CUtlString m_sequence_name;
        int32_t m_n_fire_particle_on_sequence_frame;
        CUtlString m_hitbox_set_name;
        CUtlString m_material_group_name;
        CUtlVector_ParticlePreviewBodyGroup_t_ m_vec_body_groups;
        float m_fl_playback_speed;
        float m_fl_particle_simulation_rate;
        bool m_b_should_draw_hitboxes;
        bool m_b_should_draw_attachments;
        bool m_b_should_draw_attachment_names;
        bool m_b_should_draw_control_point_axes;
        bool m_b_animation_non_looping;
        bool m_b_sequence_name_is_anim_clip_path;
        vector3d_t m_vec_preview_gravity;
        vector3d_t m_vec_preview_wind;
    };

    struct c_op_localaccelerationforce_t {
        int32_t m_n_cp;
        int32_t m_n_scale_cp;
        CParticleCollectionVecInput m_vec_accel;
    };

    struct c_op_modelcull_t {
        int32_t m_n_control_point_number;
        bool m_b_bound_box;
        bool m_b_cull_outside;
        bool m_b_use_bones;
        char m_hitbox_set_name;
    };

    struct c_op_setfloat_t {
        CPerParticleFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        CPerParticleFloatInput m_lerp;
    };

    struct c_init_remaptransformtovector_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_v_input_min;
        vector3d_t m_v_input_max;
        vector3d_t m_v_output_min;
        vector3d_t m_v_output_max;
        CParticleTransformInput m_transform_input;
        CParticleTransformInput m_local_space_transform;
        float m_fl_start_time;
        float m_fl_end_time;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_offset;
        bool m_b_accelerate;
        float m_fl_remap_bias;
    };

    struct c_op_screenspacedistancetoedge_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_max_dist_from_edge;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_renderstatuseffecttf_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_color_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_normal;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_metalness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_roughness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_self_illum;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_detail;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_env_map;
    };

    struct c_op_remapdistancetolinesegmenttoscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_min_output_value;
        float m_fl_max_output_value;
    };

    struct c_op_remapvectortocp_t {
        int32_t m_n_out_control_point_number;
        ParticleAttributeIndex_t m_n_field_input;
        int32_t m_n_particle_number;
    };

    struct c_op_setfromcpsnapshot_t {
        int32_t m_n_control_point_number;
        CUtlString m_str_snapshot_subset;
        ParticleAttributeIndex_t m_n_attribute_to_read;
        ParticleAttributeIndex_t m_n_attribute_to_write;
        int32_t m_n_local_space_cp;
        bool m_b_random;
        bool m_b_reverse;
        int32_t m_n_random_seed;
        CParticleCollectionFloatInput m_n_snap_shot_start_point;
        CParticleCollectionFloatInput m_n_snap_shot_increment;
        CPerParticleFloatInput m_fl_interpolation;
        bool m_b_sub_sample;
        bool m_b_prev;
    };

    struct c_op_distancebetweencpstocp_t {
        int32_t m_n_start_cp;
        int32_t m_n_end_cp;
        int32_t m_n_output_cp;
        int32_t m_n_output_cpfield;
        bool m_b_set_once;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_max_trace_length;
        float m_fl_losscale;
        bool m_b_los;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        ParticleParentSetMode_t m_n_set_parent;
    };

    struct c_op_setcontrolpointtohand_t {
        int32_t m_n_cp1;
        int32_t m_n_hand;
        vector3d_t m_vec_cp1_pos;
        bool m_b_orient_to_hand;
    };

    struct c_op_constraindistancetopath_t {
        float m_f_min_distance;
        float m_fl_max_distance0;
        float m_fl_max_distance_mid;
        float m_fl_max_distance1;
        CPathParameters m_path_parameters;
        float m_fl_travel_time;
        ParticleAttributeIndex_t m_n_field_scale;
        ParticleAttributeIndex_t m_n_manual_tfield;
    };

    struct c_op_distancecull_t {
        int32_t m_n_control_point;
        vector3d_t m_vec_point_offset;
        CParticleCollectionFloatInput m_fl_distance;
        bool m_b_cull_inside;
        ParticleAttributeIndex_t m_n_attribute;
    };

    struct c_init_createalongpath_t {
        CPerParticleFloatInput m_f_max_distance;
        CPerParticleFloatInput m_f_t;
        CPathParameters m_path_params;
        bool m_b_use_random_cps;
        vector3d_t m_v_end_offset;
        bool m_b_save_offset;
    };

    struct c_op_gamedecalrenderer_t {
        CGlobalSymbol m_s_decal_group_name;
        EventTypeSelection_t m_n_event_type;
        ParticleCollisionMask_t m_n_interaction_mask;
        ParticleCollisionGroup_t m_n_collision_group;
        CPerParticleVecInput m_vec_start_pos;
        CPerParticleVecInput m_vec_end_pos;
        CPerParticleFloatInput m_fl_trace_bloat;
        CPerParticleFloatInput m_fl_decal_size;
        CPerParticleFloatInput m_n_decal_group_index;
        CPerParticleFloatInput m_fl_decal_rotation;
        CPerParticleVecInput m_v_modulation_color;
        bool m_b_use_game_default_decal_size;
        bool m_b_random_decal_rotation;
        bool m_b_randomly_select_decal_in_group;
        bool m_b_no_decals_on_owner;
        bool m_b_visualize_traces;
    };

    struct c_op_setcontrolpointstomodelparticles_t {
        char m_hitbox_set_name;
        char m_attachment_name;
        int32_t m_n_first_control_point;
        int32_t m_n_num_control_points;
        int32_t m_n_first_source_point;
        bool m_b_skin;
        bool m_b_attachment;
    };

    struct c_op_colorinterpolaterandom_t {
        color_t m_color_fade_min;
        color_t m_color_fade_max;
        float m_fl_fade_start_time;
        float m_fl_fade_end_time;
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_ease_in_out;
    };

    struct c_op_renderlights_t {
        float m_fl_animation_rate;
        AnimationType_t m_n_animation_type;
        bool m_b_animate_in_fps;
        float m_fl_min_size;
        float m_fl_max_size;
        float m_fl_start_fade_size;
        float m_fl_end_fade_size;
    };

    struct c_op_decayclampcount_t {
        CParticleCollectionFloatInput m_n_count;
    };

    struct crandomnumbergeneratorparameters_t {
        bool m_b_distribute_evenly;
        int32_t m_n_seed;
    };

    struct c_init_colorlitperparticle_t {
        color_t m_color_min;
        color_t m_color_max;
        color_t m_tint_min;
        color_t m_tint_max;
        float m_fl_tint_perc;
        ParticleColorBlendMode_t m_n_tint_blend_mode;
        float m_fl_light_amplification;
    };

    struct c_op_renderpoints_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
    };

    struct c_init_setattributetoscalarexpression_t {
        ScalarExpressionType_t m_n_expression;
        CPerParticleFloatInput m_fl_input1;
        CPerParticleFloatInput m_fl_input2;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_init_createongrid_t {
        CParticleCollectionFloatInput m_n_xcount;
        CParticleCollectionFloatInput m_n_ycount;
        CParticleCollectionFloatInput m_n_zcount;
        CParticleCollectionFloatInput m_n_xspacing;
        CParticleCollectionFloatInput m_n_yspacing;
        CParticleCollectionFloatInput m_n_zspacing;
        int32_t m_n_control_point_number;
        bool m_b_local_space;
        bool m_b_center;
        bool m_b_hollow;
    };

    struct c_op_rampcplinearrandom_t {
        int32_t m_n_out_control_point_number;
        vector3d_t m_vec_rate_min;
        vector3d_t m_vec_rate_max;
    };

    struct c_op_velocitymatchingforce_t {
        float m_fl_dir_scale;
        float m_fl_spd_scale;
        float m_fl_neighbor_distance;
        float m_fl_facing_strength;
        bool m_b_use_aabb;
        int32_t m_n_cpbroadcast;
    };

    struct c_init_randomalphawindowthreshold_t {
        float m_fl_min;
        float m_fl_max;
        float m_fl_exponent;
    };

    struct c_init_createonmodelatheight_t {
        bool m_b_use_bones;
        bool m_b_force_z;
        int32_t m_n_control_point_number;
        int32_t m_n_height_cp;
        bool m_b_use_water_height;
        CParticleCollectionFloatInput m_fl_desired_height;
        CParticleCollectionVecInput m_vec_hit_box_scale;
        CParticleCollectionVecInput m_vec_direction_bias;
        ParticleHitboxBiasType_t m_n_bias_type;
        bool m_b_local_coords;
        bool m_b_prefer_moving_boxes;
        char m_hitbox_set_name;
        CParticleCollectionFloatInput m_fl_hitbox_velocity_scale;
        CParticleCollectionFloatInput m_fl_max_bone_velocity;
    };

    struct c_op_modelsurfacesnapshotgenerator_t {
        int32_t m_n_cpsnapshot;
        CParticleModelInput m_model_input;
        CParticleCollectionFloatInput m_fl_recalc_rate;
        CParticleCollectionFloatInput m_fl_uspacing;
        CParticleCollectionFloatInput m_fl_vspacing;
        CParticleCollectionFloatInput m_fl_surface_offset;
        bool m_b_set_normal;
        bool m_b_set_up;
        bool m_b_set_gravity;
        bool m_b_set_uv;
    };

    struct c_op_restartafterduration_t {
        float m_fl_duration_min;
        float m_fl_duration_max;
        int32_t m_n_cp;
        int32_t m_n_cpfield;
        int32_t m_n_child_group_id;
        bool m_b_only_children;
    };

    struct c_op_remapvisibilityscalar_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_radius_scale;
    };

    struct c_init_createsequentialpathv2_t {
        CPerParticleFloatInput m_f_max_distance;
        CParticleCollectionFloatInput m_fl_num_to_assign;
        bool m_b_loop;
        bool m_b_cppairs;
        bool m_b_save_offset;
        CPathParameters m_path_params;
    };

    struct vecinputmaterialvariable_t_t {
        CUtlString m_str_variable;
        CParticleCollectionVecInput m_vec_input;
    };

    struct c_init_remapinitialdirectiontotransformtovector_t {
        CParticleTransformInput m_transform_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
        float m_fl_offset_rot;
        vector3d_t m_vec_offset_axis;
        bool m_b_normalize;
    };

    struct c_op_locktosavedsequentialpathv2_t {
        float m_fl_fade_start;
        float m_fl_fade_end;
        bool m_b_cppairs;
        CPathParameters m_path_params;
    };

    struct c_op_normallock_t {
        int32_t m_n_control_point_number;
    };

    struct c_init_remaptransformorientationtorotations_t {
        CParticleTransformInput m_transform_input;
        vector3d_t m_vec_rotation;
        bool m_b_use_quat;
        bool m_b_write_normal;
    };

    struct c_op_cull_t {
        float m_fl_cull_perc;
        float m_fl_cull_start;
        float m_fl_cull_end;
        float m_fl_cull_exp;
    };

    struct c_init_randomyawflip_t {
        float m_fl_percent;
    };

    struct sequenceweightedlist_t_t {
        int32_t m_n_sequence;
        float m_fl_relative_weight;
    };

    struct c_op_readfromneighboringparticle_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_increment;
        CPerParticleFloatInput m_distance_check;
        CPerParticleFloatInput m_fl_interpolation;
    };

    struct c_op_rendertext_t {
        color_t m_outline_color;
        CUtlString m_default_text;
    };

    struct c_op_lerptoinitialposition_t {
        int32_t m_n_control_point_number;
        CPerParticleFloatInput m_fl_interpolation;
        ParticleAttributeIndex_t m_n_cache_field;
        CParticleCollectionFloatInput m_fl_scale;
        CParticleCollectionVecInput m_vec_scale;
    };

    struct c_op_lerpendcapvector_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_vec_output;
        float m_fl_lerp_time;
    };

    struct c_op_velocitydecay_t {
        float m_fl_min_velocity;
    };

    struct c_op_setcporientationtopointatcp_t {
        int32_t m_n_input_cp;
        int32_t m_n_output_cp;
        CParticleCollectionFloatInput m_fl_interpolation;
        bool m_b2_dorientation;
        bool m_b_avoid_singularity;
        bool m_b_point_away;
    };

    struct c_op_locktopointlist_t {
        ParticleAttributeIndex_t m_n_field_output;
        CUtlVector_PointDefinition_t_ m_point_list;
        bool m_b_place_along_path;
        bool m_b_closed_loop;
        int32_t m_n_num_points_along_path;
    };

    struct c_init_createwithincone_t {
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_fl_inner_angle;
        CPerParticleFloatInput m_fl_outer_angle;
        CPerParticleFloatInput m_fl_speed;
        CPerParticleFloatInput m_fl_offset;
        bool m_b_collapse_offset;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_op_movementplaceonground_t {
        CPerParticleFloatInput m_fl_offset;
        float m_fl_max_trace_length;
        float m_fl_tolerance;
        CPerParticleVecInput m_vec_trace_dir;
        float m_fl_trace_offset;
        float m_fl_lerp_rate;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        int32_t m_n_ref_cp1;
        int32_t m_n_ref_cp2;
        int32_t m_n_lerp_cp;
        ParticleTraceMissBehavior_t m_n_trace_miss_behavior;
        bool m_b_include_shot_hull;
        bool m_b_include_water;
        bool m_b_set_normal;
        bool m_b_scale_offset;
        int32_t m_n_preserve_offset_cp;
        int32_t m_n_ignore_cp;
    };

    struct c_op_setcporientationtodirection_t {
        int32_t m_n_input_control_point;
        int32_t m_n_output_control_point;
    };

    struct c_op_remapcrossproductoftwovectorstovector_t {
        CPerParticleVecInput m_input_vec1;
        CPerParticleVecInput m_input_vec2;
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_normalize;
    };

    struct c_op_remaptransformorientationtorotations_t {
        CParticleTransformInput m_transform_input;
        vector3d_t m_vec_rotation;
        bool m_b_use_quat;
        bool m_b_write_normal;
    };

    struct c_op_inheritfromparentparticlesv2_t {
        CPerParticleFloatInput m_fl_scale;
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_n_increment;
        bool m_b_sub_sample;
        bool m_b_random_distribution;
        bool m_b_reverse;
        MissingParentInheritBehavior_t m_n_missing_parent_behavior;
        CPerParticleFloatInput m_fl_interpolation;
    };

    struct c_init_randomsecondsequence_t {
        int32_t m_n_sequence_min;
        int32_t m_n_sequence_max;
    };

    struct c_op_setfloatcollection_t {
        CParticleCollectionFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        CParticleCollectionFloatInput m_lerp;
    };

    struct pointdefinition_t_t {
        int32_t m_n_control_point;
        bool m_b_local_coords;
        vector3d_t m_v_offset;
    };

    struct c_op_setcontrolpointpositiontorandomactivecp_t {
        int32_t m_n_cp1;
        int32_t m_n_head_location_min;
        int32_t m_n_head_location_max;
        CParticleCollectionFloatInput m_fl_reset_rate;
    };

    struct c_op_diffusion_t {
        float m_fl_radius_scale;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_voxel_grid_resolution;
    };

    struct c_init_agenoise_t {
        bool m_b_abs_val;
        bool m_b_abs_val_inv;
        float m_fl_offset;
        float m_fl_age_min;
        float m_fl_age_max;
        float m_fl_noise_scale;
        float m_fl_noise_scale_loc;
        vector3d_t m_vec_offset_loc;
    };

    struct c_op_remapvectorcomponenttoscalar_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_component;
    };

    struct cgeneralrandomrotation_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_degrees;
        float m_fl_degrees_min;
        float m_fl_degrees_max;
        float m_fl_rotation_rand_exponent;
        bool m_b_randomly_flip_direction;
    };

    struct c_op_distancebetweenvecs_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleVecInput m_vec_point1;
        CPerParticleVecInput m_vec_point2;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_delta_time;
    };

    struct c_op_dampentocp_t {
        int32_t m_n_control_point_number;
        float m_fl_range;
        float m_fl_scale;
    };

    struct c_op_calculatevectorattribute_t {
        vector3d_t m_v_start_value;
        ParticleAttributeIndex_t m_n_field_input1;
        float m_fl_input_scale1;
        ParticleAttributeIndex_t m_n_field_input2;
        float m_fl_input_scale2;
        ControlPointReference_t m_n_control_point_input1;
        float m_fl_control_point_scale1;
        ControlPointReference_t m_n_control_point_input2;
        float m_fl_control_point_scale2;
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_v_final_output_scale;
    };

    struct c_op_locktobone_t {
        CParticleModelInput m_model_input;
        CParticleTransformInput m_transform_input;
        float m_fl_life_time_fade_start;
        float m_fl_life_time_fade_end;
        float m_fl_jump_threshold;
        float m_fl_prev_pos_scale;
        char m_hitbox_set_name;
        bool m_b_rigid;
        bool m_b_use_bones;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_output_prev;
        ParticleRotationLockType_t m_n_rotation_set_type;
        bool m_b_rigid_rotation_lock;
        CPerParticleVecInput m_vec_rotation;
        CPerParticleFloatInput m_fl_rot_lerp;
    };

    struct c_op_screenspacerotatetowardtarget_t {
        CPerParticleVecInput m_vec_target_position;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleSetMethod_t m_n_set_method;
        CPerParticleFloatInput m_fl_screen_edge_alignment_distance;
    };

    struct c_op_movementmaintainoffset_t {
        vector3d_t m_vec_offset;
        int32_t m_n_cp;
        bool m_b_radius_scale;
    };

    struct c_init_createwithincapsuletransform_t {
        CPerParticleFloatInput m_f_radius_min;
        CPerParticleFloatInput m_f_radius_max;
        CPerParticleFloatInput m_f_height;
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_f_speed_min;
        CPerParticleFloatInput m_f_speed_max;
        float m_f_speed_rand_exp;
        CPerParticleVecInput m_local_coordinate_system_speed_min;
        CPerParticleVecInput m_local_coordinate_system_speed_max;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_velocity;
    };

    struct c_op_setvec_t {
        CPerParticleVecInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        CPerParticleFloatInput m_lerp;
        bool m_b_normalized_output;
    };

    struct c_init_createfromparentparticles_t {
        float m_fl_velocity_scale;
        float m_fl_increment;
        bool m_b_random_distribution;
        int32_t m_n_random_seed;
        bool m_b_sub_frame;
        bool m_b_set_rope_segment_id;
    };

    struct c_init_checkparticleforwater_t {
        CPerParticleFloatInput m_fl_radius;
        ParticleAttributeIndex_t m_n_field_output;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_renderomni2light_t {
        ParticleOmni2LightTypeChoiceList_t m_n_light_type;
        uint16_t m_n_max_allowed;
        CParticleCollectionVecInput m_v_color_blend;
        ParticleColorBlendType_t m_n_color_blend_type;
        CUtlString m_str_light_style;
        CPerParticleFloatInput m_fl_light_style_time;
        ParticleLightUnitChoiceList_t m_n_brightness_unit;
        CPerParticleFloatInput m_fl_brightness_lumens;
        CPerParticleFloatInput m_fl_brightness_candelas;
        bool m_b_cast_shadows;
        bool m_b_dynamic_bounce;
        CParticleCollectionFloatInput m_fl_bounce_scale;
        bool m_b_fog;
        CPerParticleFloatInput m_fl_fog_scale;
        CPerParticleFloatInput m_fl_luminaire_radius;
        ParticleOmni2LighOrientationChoiceList_t m_n_orientation_type;
        CPerParticleVecInput m_v_normal;
        CPerParticleVecInput m_v_target;
        CPerParticleFloatInput m_fl_fovangle;
        CPerParticleFloatInput m_fl_barn_shape;
        CPerParticleFloatInput m_fl_barn_near_size_x;
        CPerParticleFloatInput m_fl_barn_near_size_y;
        CPerParticleFloatInput m_fl_barn_soft_x;
        CPerParticleFloatInput m_fl_barn_soft_y;
        CPerParticleFloatInput m_fl_skirt;
        CPerParticleFloatInput m_fl_range;
        CPerParticleFloatInput m_fl_inner_cone_angle;
        CPerParticleFloatInput m_fl_outer_cone_angle;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_light_cookie;
        bool m_b_spherical_cookie;
    };

    struct c_op_connectparentparticletonearest_t {
        int32_t m_n_first_control_point;
        int32_t m_n_second_control_point;
        bool m_b_use_radius;
        CParticleCollectionFloatInput m_fl_radius_scale;
        CParticleCollectionFloatInput m_fl_parent_radius_scale;
    };

    struct cpassignment_t_t {
        int32_t m_n_cpnumber;
        CPerParticleVecInput m_pos;
        ParticleOrientationSetMode_t m_n_orientation_mode;
    };

    struct c_init_initskinnedpositionfromcpsnapshot_t {
        int32_t m_n_snapshot_control_point_number;
        int32_t m_n_control_point_number;
        bool m_b_random;
        int32_t m_n_random_seed;
        bool m_b_rigid;
        bool m_b_set_normal;
        bool m_b_ignore_dt;
        float m_fl_min_normal_velocity;
        float m_fl_max_normal_velocity;
        SnapshotIndexType_t m_n_index_type;
        CPerParticleFloatInput m_fl_read_index;
        float m_fl_increment;
        int32_t m_n_full_loop_increment;
        int32_t m_n_snap_shot_start_point;
        float m_fl_bone_velocity;
        float m_fl_bone_velocity_max;
        bool m_b_copy_color;
        bool m_b_copy_alpha;
        bool m_b_set_radius;
    };

    struct c_op_lagcompensation_t {
        int32_t m_n_desired_velocity_cp;
        int32_t m_n_latency_cp;
        int32_t m_n_latency_cpfield;
        int32_t m_n_desired_velocity_cpfield;
    };

    struct c_op_collidewithself_t {
        CPerParticleFloatInput m_fl_radius_scale;
        CPerParticleFloatInput m_fl_minimum_speed;
    };

    struct c_op_noise_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl4_noise_scale;
        bool m_b_additive;
        float m_fl_noise_animation_time_scale;
    };

    struct c_op_fadeandkillfortracers_t {
        float m_fl_start_fade_in_time;
        float m_fl_end_fade_in_time;
        float m_fl_start_fade_out_time;
        float m_fl_end_fade_out_time;
        float m_fl_start_alpha;
        float m_fl_end_alpha;
    };

    struct c_op_coloradjusthsl_t {
        CPerParticleFloatInput m_fl_hue_adjust;
        CPerParticleFloatInput m_fl_saturation_adjust;
        CPerParticleFloatInput m_fl_lightness_adjust;
    };

    struct cparticlemasscalculationparameters_t {
        ParticleMassMode_t m_n_mass_mode;
        CPerParticleFloatInput m_fl_radius;
        CPerParticleFloatInput m_fl_nominal_radius;
        CPerParticleFloatInput m_fl_scale;
    };

    struct c_op_sequencefrommodel_t {
        int32_t m_n_control_point_number;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_output_anim;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_alphadecay_t {
        float m_fl_min_alpha;
    };

    struct c_op_remapdensitygradienttovectorattribute_t {
        float m_fl_radius_scale;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_init_initvec_t {
        CPerParticleVecInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_normalized_output;
        bool m_b_write_previous_position;
    };

    struct c_init_sethitboxtomodel_t {
        int32_t m_n_control_point_number;
        int32_t m_n_force_in_model;
        bool m_b_even_distribution;
        int32_t m_n_desired_hitbox;
        CParticleCollectionVecInput m_vec_hit_box_scale;
        vector3d_t m_vec_direction_bias;
        bool m_b_maintain_hitbox;
        bool m_b_use_bones;
        char m_hitbox_set_name;
        CParticleCollectionFloatInput m_fl_shell_size;
    };

    struct c_op_movementmovealongskinnedcpsnapshot_t {
        int32_t m_n_control_point_number;
        int32_t m_n_snapshot_control_point_number;
        bool m_b_set_normal;
        bool m_b_set_radius;
        CPerParticleFloatInput m_fl_interpolation;
        CPerParticleFloatInput m_fl_tvalue;
    };

    struct c_op_lerpscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_output;
        float m_fl_start_time;
        float m_fl_end_time;
    };

    struct c_init_initialrepulsionvelocity_t {
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        int32_t m_n_control_point_number;
        bool m_b_per_particle;
        bool m_b_translate;
        bool m_b_proportional;
        float m_fl_trace_length;
        bool m_b_per_particle_tr;
        bool m_b_inherit;
        int32_t m_n_child_cp;
        int32_t m_n_child_group_id;
    };

    struct c_op_clampscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
    };

    struct c_op_setcontrolpointtohmd_t {
        int32_t m_n_cp1;
        vector3d_t m_vec_cp1_pos;
        bool m_b_orient_to_hmd;
    };

    struct c_op_differencepreviousparticle_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_set_previous_particle;
    };

    struct c_op_setcontrolpointfieldfromvectorexpression_t {
        VectorFloatExpressionType_t m_n_expression;
        CParticleCollectionVecInput m_vec_input1;
        CParticleCollectionVecInput m_vec_input2;
        CPerParticleFloatInput m_fl_lerp;
        CParticleRemapFloatInput m_fl_output_remap;
        int32_t m_n_output_cp;
        int32_t m_n_out_vector_field;
    };

    struct c_op_percentagebetweentransforms_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        CParticleTransformInput m_transform_start;
        CParticleTransformInput m_transform_end;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_radial_check;
    };

    struct c_init_planecull_t {
        int32_t m_n_control_point;
        CParticleCollectionFloatInput m_fl_distance;
        bool m_b_cull_inside;
    };

    struct c_init_initfromcpsnapshot_t {
        int32_t m_n_control_point_number;
        CUtlString m_str_snapshot_subset;
        ParticleAttributeIndex_t m_n_attribute_to_read;
        ParticleAttributeIndex_t m_n_attribute_to_write;
        int32_t m_n_local_space_cp;
        bool m_b_random;
        bool m_b_reverse;
        CParticleCollectionFloatInput m_n_snap_shot_increment;
        CPerParticleFloatInput m_n_manual_snapshot_index;
        int32_t m_n_random_seed;
        bool m_b_local_space_angles;
    };

    struct c_op_rendercables_t {
        CParticleCollectionFloatInput m_fl_radius_scale;
        CParticleCollectionFloatInput m_fl_alpha_scale;
        CParticleCollectionVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
        TextureRepetitionMode_t m_n_texture_repetition_mode;
        CParticleCollectionFloatInput m_fl_texture_repeats_per_segment;
        CParticleCollectionFloatInput m_fl_texture_repeats_circumference;
        CParticleCollectionFloatInput m_fl_color_map_offset_v;
        CParticleCollectionFloatInput m_fl_color_map_offset_u;
        CParticleCollectionFloatInput m_fl_normal_map_offset_v;
        CParticleCollectionFloatInput m_fl_normal_map_offset_u;
        bool m_b_draw_cable_caps;
        float m_fl_cap_roundness;
        float m_fl_cap_offset_amount;
        float m_fl_tess_scale;
        int32_t m_n_min_tesselation;
        int32_t m_n_max_tesselation;
        int32_t m_n_roundness;
        bool m_n_force_roundness_fixed;
        bool m_b_only_render_in_effects_bloom_pass;
        CParticleTransformInput m_lighting_transform;
        CUtlLeanVector_FloatInputMaterialVariable_t_ m_material_float_vars;
        CUtlLeanVector_VecInputMaterialVariable_t_ m_material_vec_vars;
    };

    struct c_init_inheritvelocity_t {
        int32_t m_n_control_point_number;
        float m_fl_velocity_scale;
    };

    struct c_op_setcontrolpointtowatersurface_t {
        int32_t m_n_source_cp;
        int32_t m_n_dest_cp;
        int32_t m_n_flow_cp;
        int32_t m_n_active_cp;
        int32_t m_n_active_cpfield;
        CParticleCollectionFloatInput m_fl_retest_rate;
        bool m_b_adaptive_threshold;
    };

    struct c_init_positionoffset_t {
        CPerParticleVecInput m_offset_min;
        CPerParticleVecInput m_offset_max;
        CParticleTransformInput m_transform_input;
        bool m_b_local_coords;
        bool m_b_proportional;
        CRandomNumberGeneratorParameters m_randomness_parameters;
    };

    struct c_init_normalaligntocp_t {
        CParticleTransformInput m_transform_input;
        ParticleControlPointAxis_t m_n_control_point_axis;
    };

    struct c_op_shapematchingconstraint_t {
        float m_fl_shape_restoration_time;
    };

    struct c_op_setchildcontrolpoints_t {
        int32_t m_n_child_group_id;
        int32_t m_n_first_control_point;
        int32_t m_n_num_control_points;
        CParticleCollectionFloatInput m_n_first_source_point;
        bool m_b_reverse;
        bool m_b_set_orientation;
        ParticleOrientationType_t m_n_orientation;
    };

    struct c_op_chladniwave_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        CPerParticleVecInput m_vec_wave_length;
        CPerParticleVecInput m_vec_harmonics;
        ParticleSetMethod_t m_n_set_method;
        int32_t m_n_local_space_control_point;
        bool m_b3_d;
    };

    struct c_op_remapdirectiontocptovector_t {
        int32_t m_n_cp;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_scale;
        float m_fl_offset_rot;
        vector3d_t m_vec_offset_axis;
        bool m_b_normalize;
        ParticleAttributeIndex_t m_n_field_strength;
    };

    struct c_op_drivecpfromglobalsoundfloat_t {
        int32_t m_n_output_control_point;
        int32_t m_n_output_field;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        CUtlString m_stack_name;
        CUtlString m_operator_name;
        CUtlString m_field_name;
    };

    struct c_init_screenspacepositionoftarget_t {
        CPerParticleVecInput m_vec_target_position;
        bool m_b_outut_behindness;
        ParticleAttributeIndex_t m_n_behind_field_output;
        CParticleRemapFloatInput m_fl_behind_output_remap;
    };

    struct c_op_rtenvcull_t {
        vector3d_t m_vec_test_dir;
        vector3d_t m_vec_test_normal;
        bool m_b_cull_on_miss;
        bool m_b_stick_instead_of_cull;
        char m_rt_env_name;
        int32_t m_n_rtenv_cp;
        int32_t m_n_component;
    };

    struct c_op_pinparticletocp_t {
        int32_t m_n_control_point_number;
        CParticleCollectionVecInput m_vec_offset;
        bool m_b_offset_local;
        ParticleSelection_t m_n_particle_selection;
        CParticleCollectionFloatInput m_n_particle_number;
        ParticlePinDistance_t m_n_pin_break_type;
        CParticleCollectionFloatInput m_fl_break_distance;
        CParticleCollectionFloatInput m_fl_break_speed;
        CParticleCollectionFloatInput m_fl_age;
        int32_t m_n_break_control_point_number;
        int32_t m_n_break_control_point_number2;
        CParticleCollectionFloatInput m_fl_break_value;
        CPerParticleFloatInput m_fl_interpolation;
        bool m_b_retain_initial_velocity;
    };

    struct c_op_remapcptovector_t {
        int32_t m_n_cpinput;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_local_space_cp;
        vector3d_t m_v_input_min;
        vector3d_t m_v_input_max;
        vector3d_t m_v_output_min;
        vector3d_t m_v_output_max;
        float m_fl_start_time;
        float m_fl_end_time;
        float m_fl_interp_rate;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_offset;
        bool m_b_accelerate;
    };

    struct c_init_createparticleimpulse_t {
        CPerParticleFloatInput m_input_radius;
        CPerParticleFloatInput m_input_magnitude;
        ParticleFalloffFunction_t m_n_falloff_function;
        CPerParticleFloatInput m_input_falloff_exp;
        ParticleImpulseType_t m_n_impulse_type;
    };

    struct c_op_densityforce_t {
        float m_fl_radius_scale;
        float m_fl_force_scale;
        float m_fl_target_density;
    };

    struct c_init_createinepitrochoid_t {
        int32_t m_n_component1;
        int32_t m_n_component2;
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_fl_particle_density;
        CPerParticleFloatInput m_fl_offset;
        CPerParticleFloatInput m_fl_radius1;
        CPerParticleFloatInput m_fl_radius2;
        bool m_b_use_count;
        bool m_b_use_local_coords;
        bool m_b_offset_existing_pos;
    };

    struct c_op_constraindistancetouserspecifiedpath_t {
        float m_f_min_distance;
        float m_fl_max_distance;
        float m_fl_time_scale;
        bool m_b_looped_path;
        CUtlVector_PointDefinitionWithTimeValues_t_ m_point_list;
    };

    struct c_op_setcontrolpointpositions_t {
        bool m_b_use_world_location;
        bool m_b_orient;
        bool m_b_set_once;
        int32_t m_n_cp1;
        int32_t m_n_cp2;
        int32_t m_n_cp3;
        int32_t m_n_cp4;
        vector3d_t m_vec_cp1_pos;
        vector3d_t m_vec_cp2_pos;
        vector3d_t m_vec_cp3_pos;
        vector3d_t m_vec_cp4_pos;
        int32_t m_n_head_location;
    };

    struct c_op_setfloatattributetovectorexpression_t {
        VectorFloatExpressionType_t m_n_expression;
        CPerParticleVecInput m_v_input1;
        CPerParticleVecInput m_v_input2;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_movementrotateparticlearoundaxis_t {
        CParticleCollectionVecInput m_vec_rot_axis;
        CParticleCollectionFloatInput m_fl_rot_rate;
        CParticleTransformInput m_transform_input;
        bool m_b_local_space;
    };

    struct c_op_intraparticleforce_t {
        float m_fl_attraction_min_distance;
        float m_fl_attraction_max_distance;
        float m_fl_attraction_max_strength;
        float m_fl_repulsion_min_distance;
        float m_fl_repulsion_max_distance;
        float m_fl_repulsion_max_strength;
        bool m_b_use_aabb;
    };

    struct c_init_initfloat_t {
        CPerParticleFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
        CPerParticleFloatInput m_input_strength;
    };

    struct c_init_createonmodel_t {
        CParticleModelInput m_model_input;
        CParticleTransformInput m_transform_input;
        int32_t m_n_force_in_model;
        bool m_b_scale_to_volume;
        bool m_b_even_distribution;
        CParticleCollectionFloatInput m_n_desired_hitbox;
        int32_t m_n_hitbox_value_from_control_point_index;
        CParticleCollectionVecInput m_vec_hit_box_scale;
        float m_fl_bone_velocity;
        float m_fl_max_bone_velocity;
        CParticleCollectionVecInput m_vec_direction_bias;
        char m_hitbox_set_name;
        bool m_b_local_coords;
        bool m_b_use_bones;
        bool m_b_use_mesh;
        CParticleCollectionFloatInput m_fl_shell_size;
    };

    struct c_op_inheritfrompeersystem_t {
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_input;
        int32_t m_n_increment;
        int32_t m_n_group_id;
    };

    struct c_op_perparticleforce_t {
        CPerParticleFloatInput m_fl_force_scale;
        CPerParticleVecInput m_v_force;
        int32_t m_n_cp;
    };

    struct c_op_renderprojected_t {
        bool m_b_project_character;
        bool m_b_project_world;
        bool m_b_project_water;
        bool m_b_flip_horizontal;
        bool m_b_enable_projected_depth_controls;
        float m_fl_min_projection_depth;
        float m_fl_max_projection_depth;
        CUtlVector_RenderProjectedMaterial_t_ m_vec_projected_materials;
        CPerParticleFloatInput m_fl_material_selection;
        float m_fl_animation_time_scale;
        bool m_b_orient_to_normal;
        CUtlVector_MaterialVariable_t_ m_material_vars;
        CParticleCollectionFloatInput m_fl_radius_scale;
        CParticleCollectionFloatInput m_fl_alpha_scale;
        CParticleCollectionFloatInput m_fl_roll_scale;
        ParticleAttributeIndex_t m_n_alpha2_field;
        CParticleCollectionVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
    };

    struct c_op_maxvelocity_t {
        CPerParticleFloatInput m_fl_max_velocity;
        CPerParticleFloatInput m_fl_min_velocity;
    };

    struct c_init_velocityfromnormal_t {
        float m_f_speed_min;
        float m_f_speed_max;
        bool m_b_ignore_dt;
    };

    struct c_op_maintainemitter_t {
        CParticleCollectionFloatInput m_n_particles_to_maintain;
        float m_fl_start_time;
        CParticleCollectionFloatInput m_fl_emission_duration;
        float m_fl_emission_rate;
        int32_t m_n_snapshot_control_point;
        CUtlString m_str_snapshot_subset;
        bool m_b_emit_instantaneously;
        bool m_b_final_emit_on_stop;
        CParticleCollectionFloatInput m_fl_scale;
    };

    struct c_init_positionoffsettocp_t {
        int32_t m_n_control_point_number_start;
        int32_t m_n_control_point_number_end;
        bool m_b_local_coords;
    };

    struct c_init_remapinitialtransformdirectiontorotation_t {
        CParticleTransformInput m_transform_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_offset_rot;
        int32_t m_n_component;
    };

    struct c_op_fadeandkill_t {
        float m_fl_start_fade_in_time;
        float m_fl_end_fade_in_time;
        float m_fl_start_fade_out_time;
        float m_fl_end_fade_out_time;
        float m_fl_start_alpha;
        float m_fl_end_alpha;
        bool m_b_force_preserve_particle_order;
    };

    struct c_op_colorinterpolate_t {
        color_t m_color_fade;
        float m_fl_fade_start_time;
        float m_fl_fade_end_time;
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_ease_in_out;
    };

    struct c_op_rampscalarspline_t {
        float m_rate_min;
        float m_rate_max;
        float m_fl_start_time_min;
        float m_fl_start_time_max;
        float m_fl_end_time_min;
        float m_fl_end_time_max;
        float m_fl_bias;
        ParticleAttributeIndex_t m_n_field;
        bool m_b_proportional_op;
        bool m_b_ease_out;
    };

    struct c_op_setcontrolpointfromobjectscale_t {
        int32_t m_n_cpinput;
        int32_t m_n_cpoutput;
    };

    struct c_op_maintainsequentialpath_t {
        CParticleCollectionFloatInput m_f_max_distance;
        CParticleCollectionFloatInput m_fl_num_to_assign;
        CParticleCollectionFloatInput m_fl_cohesion_strength;
        float m_fl_tolerance;
        bool m_b_loop;
        bool m_b_use_particle_count;
        CPathParameters m_path_params;
    };

    struct c_op_stopaftercpduration_t {
        CParticleCollectionFloatInput m_fl_duration;
        bool m_b_destroy_immediately;
        bool m_b_play_end_cap;
    };

    struct cgeneralspin_t {
        int32_t m_n_spin_rate_degrees;
        int32_t m_n_spin_rate_min_degrees;
        float m_f_spin_rate_stop_time;
    };

    struct c_op_locktosavedsequentialpath_t {
        float m_fl_fade_start;
        float m_fl_fade_end;
        bool m_b_cppairs;
        CPathParameters m_path_params;
    };

    struct c_init_remapnamedmodelelementtoscalar_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlVector_CUtlString_ m_names;
        CUtlVector_float_ m_values;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_model_from_renderer;
    };

    struct c_op_clampvector_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleVecInput m_vec_output_min;
        CPerParticleVecInput m_vec_output_max;
    };

    struct c_op_renderstatuseffectcitadel_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_color_warp;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_normal;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_metalness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_roughness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_self_illum;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_p_texture_detail;
    };

    struct c_op_windforce_t {
        vector3d_t m_v_force;
    };

    struct c_op_setvariable_t {
        CParticleVariableRef m_variable_reference;
        CParticleTransformInput m_transform_input;
        vector3d_t m_position_offset;
        QAngle m_rotation_offset;
        CParticleCollectionVecInput m_vec_input;
        CParticleCollectionFloatInput m_float_input;
    };

    struct c_op_renderstandardlight_t {
        ParticleLightTypeChoiceList_t m_n_light_type;
        uint16_t m_n_max_allowed;
        CParticleCollectionVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
        CUtlString m_str_light_style;
        CPerParticleFloatInput m_fl_light_style_time;
        CPerParticleFloatInput m_fl_intensity;
        bool m_b_cast_shadows;
        bool m_b_dynamic_bounce;
        CParticleCollectionFloatInput m_fl_bounce_scale;
        CParticleCollectionFloatInput m_fl_theta;
        CParticleCollectionFloatInput m_fl_phi;
        CParticleCollectionFloatInput m_fl_radius_multiplier;
        StandardLightingAttenuationStyle_t m_n_attenuation_style;
        CParticleCollectionFloatInput m_fl_falloff_linearity;
        CParticleCollectionFloatInput m_fl_fifty_percent_falloff;
        CParticleCollectionFloatInput m_fl_zero_percent_falloff;
        bool m_b_render_diffuse;
        bool m_b_render_specular;
        CUtlString m_light_cookie;
        int32_t m_n_priority;
        ParticleLightFogLightingMode_t m_n_fog_lighting_mode;
        CParticleCollectionRendererFloatInput m_fl_fog_contribution;
        ParticleLightBehaviorChoiceList_t m_n_capsule_light_behavior;
        float m_fl_capsule_length;
        bool m_b_reverse_order;
        bool m_b_closed_loop;
        ParticleAttributeIndex_t m_n_prev_pnt_source;
        float m_fl_max_length;
        float m_fl_min_length;
        bool m_b_ignore_dt;
        float m_fl_constrain_radius_to_length_ratio;
        float m_fl_length_scale;
        float m_fl_length_fade_in_time;
    };

    struct c_op_distancetotransform_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        CParticleTransformInput m_transform_start;
        bool m_b_los;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        float m_fl_max_trace_length;
        float m_fl_losscale;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_additive;
        CPerParticleVecInput m_vec_component_scale;
    };

    struct c_op_remapcontrolpointorientationtorotation_t {
        int32_t m_n_cp;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_offset_rot;
        int32_t m_n_component;
    };

    struct c_op_setcontrolpointtocenter_t {
        int32_t m_n_cp1;
        vector3d_t m_vec_cp1_pos;
        bool m_b_use_avg_particle_pos;
        ParticleParentSetMode_t m_n_set_parent;
    };

    struct c_op_remapaveragescalarvaluetocp_t {
        SetStatisticExpressionType_t m_n_expression;
        CParticleCollectionFloatInput m_fl_decimal_places;
        int32_t m_n_out_control_point_number;
        int32_t m_n_out_vector_field;
        ParticleAttributeIndex_t m_n_field;
        CParticleRemapFloatInput m_fl_output_remap;
    };

    struct c_op_remapdotproducttoscalar_t {
        int32_t m_n_input_cp1;
        int32_t m_n_input_cp2;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_use_particle_velocity;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_use_particle_normal;
    };

    struct c_op_remapcptocp_t {
        int32_t m_n_input_control_point;
        int32_t m_n_output_control_point;
        int32_t m_n_input_field;
        int32_t m_n_output_field;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_derivative;
        float m_fl_interp_rate;
    };

    struct c_op_setcontrolpointrotation_t {
        CParticleCollectionVecInput m_vec_rot_axis;
        CParticleCollectionFloatInput m_fl_rot_rate;
        int32_t m_n_cp;
        int32_t m_n_local_cp;
    };

    struct c_op_curlnoiseforce_t {
        ParticleDirectionNoiseType_t m_n_noise_type;
        CPerParticleVecInput m_vec_noise_freq;
        CPerParticleVecInput m_vec_noise_scale;
        CPerParticleVecInput m_vec_offset;
        CPerParticleVecInput m_vec_offset_rate;
        CPerParticleFloatInput m_fl_worley_seed;
        CPerParticleFloatInput m_fl_worley_jitter;
    };

    struct c_init_orient2dreltocp_t {
        int32_t m_n_cp;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_rot_offset;
    };

    struct c_op_setsimulationrate_t {
        CParticleCollectionFloatInput m_fl_simulation_scale;
    };

    struct c_op_fadein_t {
        float m_fl_fade_in_time_min;
        float m_fl_fade_in_time_max;
        float m_fl_fade_in_time_exp;
        bool m_b_proportional;
    };

    struct c_op_renderscreenshake_t {
        float m_fl_duration_scale;
        float m_fl_radius_scale;
        float m_fl_frequency_scale;
        float m_fl_amplitude_scale;
        ParticleAttributeIndex_t m_n_radius_field;
        ParticleAttributeIndex_t m_n_duration_field;
        ParticleAttributeIndex_t m_n_frequency_field;
        ParticleAttributeIndex_t m_n_amplitude_field;
        int32_t m_n_filter_cp;
    };

    struct c_op_remapboundingvolumetocp_t {
        int32_t m_n_out_control_point_number;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
    };

    struct c_op_hsvshifttocp_t {
        int32_t m_n_color_cp;
        int32_t m_n_color_gem_enable_cp;
        int32_t m_n_output_cp;
        color_t m_default_hsvcolor;
    };

    struct c_op_remapvectortorotations_t {
        CPerParticleVecInput m_vec_input;
        CPerParticleVecInput m_vec_rotation;
    };

    struct c_init_globalscale_t {
        float m_fl_scale;
        int32_t m_n_scale_control_point_number;
        int32_t m_n_control_point_number;
        bool m_b_scale_radius;
        bool m_b_scale_position;
        bool m_b_scale_velocity;
    };

    struct c_init_radiusfromcpobject_t {
        int32_t m_n_control_point;
    };

    struct c_init_initialvelocityfromhitbox_t {
        float m_fl_velocity_min;
        float m_fl_velocity_max;
        int32_t m_n_control_point_number;
        char m_hitbox_set_name;
        bool m_b_use_bones;
    };

    struct c_op_lerpvector_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_vec_output;
        float m_fl_start_time;
        float m_fl_end_time;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_setcontrolpointfieldtowater_t {
        int32_t m_n_source_cp;
        int32_t m_n_dest_cp;
        int32_t m_n_cpfield;
    };

    struct texturegroup_t_t {
        bool m_b_enabled;
        bool m_b_replace_texture_with_gradient;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_texture;
        CColorGradient m_gradient;
        SpriteCardTextureType_t m_n_texture_type;
        SpriteCardTextureChannel_t m_n_texture_channels;
        ParticleTextureLayerBlendType_t m_n_texture_blend_mode;
        CParticleCollectionRendererFloatInput m_fl_texture_blend;
        TextureControls_t m_texture_controls;
    };

    struct c_op_timevaryingforce_t {
        float m_fl_start_lerp_time;
        vector3d_t m_starting_force;
        float m_fl_end_lerp_time;
        vector3d_t m_ending_force;
    };

    struct c_op_setcporientationtogroundnormal_t {
        float m_fl_interp_rate;
        float m_fl_max_trace_length;
        float m_fl_tolerance;
        float m_fl_trace_offset;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        int32_t m_n_input_cp;
        int32_t m_n_output_cp;
        bool m_b_include_water;
    };

    struct c_op_snapshotskintobones_t {
        bool m_b_transform_normals;
        bool m_b_transform_radii;
        int32_t m_n_control_point_number;
        float m_fl_life_time_fade_start;
        float m_fl_life_time_fade_end;
        float m_fl_jump_threshold;
        float m_fl_prev_pos_scale;
    };

    struct c_init_createwithinspheretransform_t {
        CPerParticleFloatInput m_f_radius_min;
        CPerParticleFloatInput m_f_radius_max;
        CPerParticleVecInput m_vec_distance_bias;
        vector3d_t m_vec_distance_bias_abs;
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_f_speed_min;
        CPerParticleFloatInput m_f_speed_max;
        float m_f_speed_rand_exp;
        bool m_b_local_coords;
        CPerParticleVecInput m_local_coordinate_system_speed_min;
        CPerParticleVecInput m_local_coordinate_system_speed_max;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_velocity;
    };

    struct c_op_radiusdecay_t {
        float m_fl_min_radius;
    };

    struct c_init_remapscalartovector_t {
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        float m_fl_start_time;
        float m_fl_end_time;
        ParticleSetMethod_t m_n_set_method;
        int32_t m_n_control_point_number;
        bool m_b_local_coords;
        float m_fl_remap_bias;
    };

    struct c_init_initialsequencefrommodel_t {
        int32_t m_n_control_point_number;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleAttributeIndex_t m_n_field_output_anim;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_noiseemitter_t {
        float m_fl_emission_duration;
        float m_fl_start_time;
        float m_fl_emission_scale;
        int32_t m_n_scale_control_point;
        int32_t m_n_scale_control_point_field;
        int32_t m_n_world_noise_point;
        bool m_b_abs_val;
        bool m_b_abs_val_inv;
        float m_fl_offset;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_noise_scale;
        float m_fl_world_noise_scale;
        vector3d_t m_vec_offset_loc;
        float m_fl_world_time_scale;
    };

    struct cparticlefunctioninitializer_t {
        int32_t m_n_associated_emitter_index;
    };

    struct c_op_selectivelyenablechildren_t {
        CParticleCollectionFloatInput m_n_child_group_id;
        CParticleCollectionFloatInput m_n_first_child;
        CParticleCollectionFloatInput m_n_num_children_to_enable;
        bool m_b_play_endcap_on_stop;
        bool m_b_destroy_immediately;
    };

    struct modelreference_t_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_model;
        float m_fl_relative_probability_of_spawn;
    };

    struct c_op_planarconstraint_t {
        vector3d_t m_point_on_plane;
        vector3d_t m_plane_normal;
        int32_t m_n_control_point_number;
        bool m_b_global_origin;
        bool m_b_global_normal;
        CPerParticleFloatInput m_fl_radius_scale;
        CParticleCollectionFloatInput m_fl_maximum_distance_to_cp;
        bool m_b_use_old_code;
    };

    struct c_init_createfromcps_t {
        int32_t m_n_increment;
        int32_t m_n_min_cp;
        int32_t m_n_max_cp;
        CParticleCollectionFloatInput m_n_dynamic_cpcount;
    };

    struct c_op_lockpoints_t {
        int32_t m_n_min_col;
        int32_t m_n_max_col;
        int32_t m_n_min_row;
        int32_t m_n_max_row;
        int32_t m_n_control_point;
        float m_fl_blend_value;
    };

    struct c_init_createspiralsphere_t {
        CParticleTransformInput m_transform_input;
        CPerParticleFloatInput m_fl_density;
        CPerParticleFloatInput m_fl_initial_radius;
        CPerParticleFloatInput m_fl_initial_speed_min;
        CPerParticleFloatInput m_fl_initial_speed_max;
        bool m_b_use_particle_count;
    };

    struct c_op_cpvelocityforce_t {
        int32_t m_n_control_point_number;
        CPerParticleFloatInput m_fl_scale;
    };

    struct c_op_remapnamedmodelelementendcap_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlVector_CUtlString_ m_in_names;
        CUtlVector_CUtlString_ m_out_names;
        CUtlVector_CUtlString_ m_fallback_names;
        bool m_b_model_from_renderer;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_init_scalevelocity_t {
        CParticleCollectionVecInput m_vec_scale;
    };

    struct c_op_movetohitbox_t {
        CParticleModelInput m_model_input;
        CParticleTransformInput m_transform_input;
        float m_fl_life_time_lerp_start;
        float m_fl_life_time_lerp_end;
        float m_fl_prev_pos_scale;
        char m_hitbox_set_name;
        bool m_b_use_bones;
        HitboxLerpType_t m_n_lerp_type;
        CPerParticleFloatInput m_fl_interpolation;
    };

    struct c_op_pinropesegmentparticletoparent_t {
        ParticleSelection_t m_n_particle_selection;
        CParticleCollectionFloatInput m_n_particle_number;
        CPerParticleFloatInput m_fl_interpolation;
    };

    struct c_init_pointlist_t {
        ParticleAttributeIndex_t m_n_field_output;
        CUtlVector_PointDefinition_t_ m_point_list;
        bool m_b_place_along_path;
        bool m_b_closed_loop;
        int32_t m_n_num_points_along_path;
    };

    struct c_op_lerptootherattribute_t {
        CPerParticleFloatInput m_fl_interpolation;
        ParticleAttributeIndex_t m_n_field_input_from;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
    };

    struct c_init_randomcolor_t {
        color_t m_color_min;
        color_t m_color_max;
        color_t m_tint_min;
        color_t m_tint_max;
        float m_fl_tint_perc;
        float m_fl_update_threshold;
        int32_t m_n_tint_cp;
        ParticleAttributeIndex_t m_n_field_output;
        ParticleColorBlendMode_t m_n_tint_blend_mode;
        float m_fl_light_amplification;
    };

    struct c_op_setgravitytocp_t {
        int32_t m_n_cpinput;
        int32_t m_n_cpoutput;
        CParticleCollectionFloatInput m_fl_scale;
        bool m_b_set_position;
        bool m_b_set_orientation;
        bool m_b_set_zdown;
    };

    struct c_init_remapparticlecounttoscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_input_min;
        int32_t m_n_input_max;
        int32_t m_n_scale_control_point;
        int32_t m_n_scale_control_point_field;
        float m_fl_output_min;
        float m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_invert;
        bool m_b_wrap;
        float m_fl_remap_bias;
    };

    struct c_init_inheritfromparentparticles_t {
        float m_fl_scale;
        ParticleAttributeIndex_t m_n_field_output;
        int32_t m_n_increment;
        bool m_b_random_distribution;
        int32_t m_n_random_seed;
    };

    struct c_op_rampscalarlinearsimple_t {
        float m_rate;
        float m_fl_start_time;
        float m_fl_end_time;
        ParticleAttributeIndex_t m_n_field;
    };

    struct c_init_chaoticattractor_t {
        float m_fl_aparm;
        float m_fl_bparm;
        float m_fl_cparm;
        float m_fl_dparm;
        float m_fl_scale;
        float m_fl_speed_min;
        float m_fl_speed_max;
        int32_t m_n_base_cp;
        bool m_b_uniform_speed;
    };

    struct c_op_movementrigidattachtocp_t {
        int32_t m_n_control_point_number;
        int32_t m_n_scale_control_point;
        int32_t m_n_scale_cpfield;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_offset_local;
    };

    struct c_op_renderflattengrass_t {
        float m_fl_flatten_strength;
        ParticleAttributeIndex_t m_n_strength_field_override;
        float m_fl_radius_scale;
    };

    struct c_op_renderlightbeam_t {
        uint16_t m_n_max_allowed;
        CParticleCollectionVecInput m_v_color_blend;
        ParticleColorBlendType_t m_n_color_blend_type;
        CUtlString m_str_light_style;
        CPerParticleFloatInput m_fl_light_style_time;
        CParticleCollectionFloatInput m_fl_brightness_lumens_per_meter;
        CParticleCollectionFloatInput m_fl_number_of_lights_to_create;
        bool m_b_cast_shadows;
        bool m_b_dynamic_bounce;
        CParticleCollectionFloatInput m_fl_bounce_scale;
        CParticleCollectionFloatInput m_fl_skirt;
        CParticleCollectionFloatInput m_fl_range;
        CParticleCollectionFloatInput m_fl_thickness;
        CParticleCollectionFloatInput m_fl_inner_cone_angle;
        CParticleCollectionFloatInput m_fl_outer_cone_angle;
        CParticleCollectionVecInput m_vec_cone_rotation_offset;
        ParticleLightFogLightingMode_t m_n_fog_lighting_mode;
        CParticleCollectionRendererFloatInput m_fl_fog_contribution;
        CPerParticleFloatInput m_fl_render_filter;
        bool m_b_debug_orientation;
    };

    struct c_init_skyviscull_t {
        CParticleCollectionVecInput m_vec_test_dir;
        ParticleTraceSet_t m_n_trace_set;
        bool m_b_cull_on_sky;
    };

    struct c_op_enablechildrenfromparentparticlecount_t {
        int32_t m_n_child_group_id;
        int32_t m_n_first_child;
        CParticleCollectionFloatInput m_n_num_children_to_enable;
        bool m_b_disable_children;
        bool m_b_play_endcap_on_stop;
        bool m_b_destroy_immediately;
    };

    struct c_init_distancetocpinit_t {
        ParticleAttributeIndex_t m_n_field_output;
        CPerParticleFloatInput m_fl_input_min;
        CPerParticleFloatInput m_fl_input_max;
        CPerParticleFloatInput m_fl_output_min;
        CPerParticleFloatInput m_fl_output_max;
        int32_t m_n_start_cp;
        bool m_b_los;
        char m_collision_group_name;
        ParticleTraceSet_t m_n_trace_set;
        CPerParticleFloatInput m_fl_max_trace_length;
        float m_fl_losscale;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        vector3d_t m_vec_distance_scale;
        float m_fl_remap_bias;
    };

    struct c_op_forcebasedondistancetoplane_t {
        float m_fl_min_dist;
        vector3d_t m_vec_force_at_min_dist;
        float m_fl_max_dist;
        vector3d_t m_vec_force_at_max_dist;
        vector3d_t m_vec_plane_normal;
        int32_t m_n_control_point_number;
        float m_fl_exponent;
    };

    struct c_op_remapdensitytovector_t {
        float m_fl_radius_scale;
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_density_min;
        float m_fl_density_max;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        bool m_b_use_parent_density;
        int32_t m_n_voxel_grid_resolution;
    };

    struct particlecontrolpointconfiguration_t_t {
        CUtlString m_name;
        CUtlVector_ParticleControlPointDriver_t_ m_drivers;
        ParticlePreviewState_t m_preview_state;
    };

    struct c_init_setrigidattachment_t {
        int32_t m_n_control_point_number;
        ParticleAttributeIndex_t m_n_field_input;
        ParticleAttributeIndex_t m_n_field_output;
        bool m_b_local_space;
    };

    struct materialvariable_t_t {
        CUtlString m_str_variable;
        ParticleAttributeIndex_t m_n_variable_field;
        float m_fl_scale;
    };

    struct c_op_remapspeed_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_ignore_delta;
    };

    struct c_op_rendermodels_t {
        bool m_b_only_render_in_effects_bloom_pass;
        bool m_b_only_render_in_effects_water_pass;
        bool m_b_use_mixed_resolution_rendering;
        bool m_b_only_render_in_effecs_game_overlay;
        CUtlVector_ModelReference_t_ m_model_list;
        ParticleAttributeIndex_t m_n_body_group_field;
        ParticleAttributeIndex_t m_n_sub_model_field;
        bool m_b_ignore_normal;
        bool m_b_orient_z;
        bool m_b_center_offset;
        CPerParticleVecInput m_vec_local_offset;
        CPerParticleVecInput m_vec_local_rotation;
        bool m_b_ignore_radius;
        int32_t m_n_model_scale_cp;
        CPerParticleVecInput m_vec_component_scale;
        bool m_b_local_scale;
        int32_t m_n_size_cull_bloat;
        bool m_b_animated;
        CPerParticleFloatInput m_fl_animation_rate;
        bool m_b_scale_animation_rate;
        bool m_b_force_looping_animation;
        bool m_b_reset_anim_on_stop;
        bool m_b_manual_anim_frame;
        ParticleAttributeIndex_t m_n_animation_scale_field;
        ParticleAttributeIndex_t m_n_animation_field;
        ParticleAttributeIndex_t m_n_manual_frame_field;
        char m_activity_name;
        char m_sequence_name;
        bool m_b_enable_cloth_simulation;
        bool m_b_disable_cloth_ground_collision;
        char m_cloth_effect_name;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_override_material;
        bool m_b_override_translucent_materials;
        CPerParticleFloatInput m_n_skin;
        CUtlVector_MaterialVariable_t_ m_material_vars;
        CPerParticleFloatInput m_fl_render_filter;
        CPerParticleFloatInput m_fl_manual_model_selection;
        CParticleModelInput m_model_input;
        int32_t m_n_lod;
        char m_econ_slot_name;
        bool m_b_original_model;
        bool m_b_suppress_tint;
        RenderModelSubModelFieldType_t m_n_sub_model_field_type;
        bool m_b_disable_shadows;
        bool m_b_disable_depth_prepass;
        bool m_b_accepts_decals;
        bool m_b_force_draw_interleved_with_siblings;
        bool m_b_do_not_draw_in_particle_pass;
        bool m_b_allow_approximate_transforms;
        char m_sz_render_attribute;
        CParticleCollectionFloatInput m_fl_radius_scale;
        CParticleCollectionFloatInput m_fl_alpha_scale;
        CParticleCollectionFloatInput m_fl_roll_scale;
        ParticleAttributeIndex_t m_n_alpha2_field;
        CParticleCollectionVecInput m_vec_color_scale;
        ParticleColorBlendType_t m_n_color_blend_type;
        CUtlString m_str_light_style;
        CPerParticleFloatInput m_fl_light_style_time;
    };

    struct c_op_renderclientphysicsimpulse_t {
        CPerParticleFloatInput m_fl_radius;
        CPerParticleFloatInput m_fl_magnitude;
        int32_t m_n_sim_id_filter;
    };

    struct cparticlefunctionemitter_t {
        int32_t m_n_emitter_index;
    };

    struct c_op_setcontrolpointorientationtocpvelocity_t {
        int32_t m_n_cpinput;
        int32_t m_n_cpoutput;
    };

    struct c_op_ropespringconstraint_t {
        CParticleCollectionFloatInput m_fl_rest_length;
        CParticleCollectionFloatInput m_fl_min_distance;
        CParticleCollectionFloatInput m_fl_max_distance;
        float m_fl_adjustment_scale;
        CParticleCollectionFloatInput m_fl_initial_resting_length;
    };

    struct c_init_positionwarpscalar_t {
        vector3d_t m_vec_warp_min;
        vector3d_t m_vec_warp_max;
        CPerParticleFloatInput m_input_value;
        float m_fl_prev_pos_scale;
        int32_t m_n_scale_control_point_number;
        int32_t m_n_control_point_number;
    };

    struct c_op_forcecontrolpointstub_t {
        int32_t m_control_point;
    };

    struct c_op_vectornoise_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_vec_output_min;
        vector3d_t m_vec_output_max;
        float m_fl4_noise_scale;
        bool m_b_additive;
        bool m_b_offset;
        float m_fl_noise_animation_time_scale;
    };

    struct c_op_remapparticlecounttoscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        CParticleCollectionFloatInput m_n_input_min;
        CParticleCollectionFloatInput m_n_input_max;
        CParticleCollectionFloatInput m_fl_output_min;
        CParticleCollectionFloatInput m_fl_output_max;
        bool m_b_active_range;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_init_quantizefloat_t {
        CPerParticleFloatInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
    };

    struct c_op_remapmodelvolumetocp_t {
        BBoxVolumeType_t m_n_bbox_type;
        int32_t m_n_in_control_point_number;
        int32_t m_n_out_control_point_number;
        int32_t m_n_out_control_point_max_number;
        int32_t m_n_field;
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_output_min;
        float m_fl_output_max;
        bool m_b_bbox_only;
        bool m_b_cube_root;
    };

    struct c_op_settocp_t {
        int32_t m_n_control_point_number;
        vector3d_t m_vec_offset;
        bool m_b_offset_local;
    };

    struct particlecontrolpointdriver_t_t {
        ParticleParamID_t m_i_control_point;
        ParticleAttachment_t m_i_attach_type;
        CUtlString m_attachment_name;
        vector3d_t m_vec_offset;
        QAngle m_ang_offset;
        CUtlString m_entity_name;
    };

    struct c_op_parentvortices_t {
        float m_fl_force_scale;
        vector3d_t m_vec_twist_axis;
        bool m_b_flip_based_on_yaw;
    };

    struct c_op_setcontrolpointtocpvelocity_t {
        int32_t m_n_cpinput;
        int32_t m_n_cpoutput_vel;
        bool m_b_normalize;
        int32_t m_n_cpoutput_mag;
        int32_t m_n_cpfield;
        CParticleCollectionVecInput m_vec_comparison_velocity;
    };

    struct c_op_clientphysics_t {
        CUtlString m_str_physics_type;
        bool m_b_start_asleep;
        CParticleCollectionFloatInput m_fl_player_wake_radius;
        CParticleCollectionFloatInput m_fl_vehicle_wake_radius;
        bool m_b_use_high_quality_simulation;
        int32_t m_n_max_particle_count;
        bool m_b_respect_exclusion_volumes;
        bool m_b_kill_particles;
        bool m_b_delete_sim;
        int32_t m_n_control_point;
        int32_t m_n_forced_sim_id;
        ParticleColorBlendType_t m_n_color_blend_type;
        ParticleAttrBoxFlags_t m_n_forced_status_effects;
        ParticleAttributeIndex_t m_n_no_collision_attribute;
        ParticleAttributeIndex_t m_n_zero_gravity_attribute;
    };

    struct pointdefinitionwithtimevalues_t_t {
        float m_fl_time_duration;
    };

    struct renderprojectedmaterial_t_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
    };

    struct c_init_setfloatattributetovectorexpression_t {
        VectorFloatExpressionType_t m_n_expression;
        CPerParticleVecInput m_v_input1;
        CPerParticleVecInput m_v_input2;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_externalwindforce_t {
        CPerParticleVecInput m_vec_sample_position;
        CPerParticleVecInput m_vec_scale;
        bool m_b_sample_wind;
        bool m_b_sample_water;
        bool m_b_dampen_near_water_plane;
        bool m_b_sample_gravity;
        CPerParticleVecInput m_vec_gravity_force;
        bool m_b_use_basic_movement_gravity;
        CPerParticleFloatInput m_fl_local_gravity_scale;
        CPerParticleFloatInput m_fl_local_buoyancy_scale;
        CPerParticleVecInput m_vec_buoyancy_force;
    };

    struct c_init_modelcull_t {
        int32_t m_n_control_point_number;
        bool m_b_bound_box;
        bool m_b_cull_outside;
        bool m_b_use_bones;
        char m_hitbox_set_name;
    };

    struct c_op_rendersprites_t {
        CParticleCollectionRendererFloatInput m_n_sequence_override;
        bool m_b_sequence_numbers_are_raw_sequence_indices;
        ParticleOrientationChoiceList_t m_n_orientation_type;
        int32_t m_n_orientation_control_point;
        bool m_b_use_yaw_with_normal_aligned;
        CParticleCollectionRendererFloatInput m_fl_min_size;
        CParticleCollectionRendererFloatInput m_fl_max_size;
        CParticleCollectionRendererFloatInput m_fl_sub_pixel_aascale;
        CParticleCollectionRendererFloatInput m_fl_start_fade_size;
        CParticleCollectionRendererFloatInput m_fl_end_fade_size;
        float m_fl_start_fade_dot;
        float m_fl_end_fade_dot;
        bool m_b_distance_alpha;
        bool m_b_soft_edges;
        float m_fl_edge_softness_start;
        float m_fl_edge_softness_end;
        bool m_b_outline;
        color_t m_outline_color;
        int32_t m_n_outline_alpha;
        float m_fl_outline_start0;
        float m_fl_outline_start1;
        float m_fl_outline_end0;
        float m_fl_outline_end1;
        ParticleLightingQuality_t m_n_lighting_mode;
        CParticleCollectionRendererVecInput m_vec_lighting_override;
        CParticleCollectionRendererFloatInput m_fl_lighting_tessellation;
        CParticleCollectionRendererFloatInput m_fl_lighting_directionality;
        bool m_b_particle_shadows;
        float m_fl_shadow_density;
    };

    struct c_op_percentagebetweentransformlerpcps_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_input_min;
        float m_fl_input_max;
        CParticleTransformInput m_transform_start;
        CParticleTransformInput m_transform_end;
        int32_t m_n_output_start_cp;
        int32_t m_n_output_start_field;
        int32_t m_n_output_end_cp;
        int32_t m_n_output_end_field;
        ParticleSetMethod_t m_n_set_method;
        bool m_b_active_range;
        bool m_b_radial_check;
    };

    struct c_op_setperchildcontrolpoint_t {
        int32_t m_n_child_group_id;
        int32_t m_n_first_control_point;
        int32_t m_n_num_control_points;
        CParticleCollectionFloatInput m_n_particle_increment;
        CParticleCollectionFloatInput m_n_first_source_point;
        bool m_b_set_orientation;
        ParticleAttributeIndex_t m_n_orientation_field;
        bool m_b_num_based_on_particle_count;
    };

    struct c_op_rendertreeshake_t {
        float m_fl_peak_strength;
        ParticleAttributeIndex_t m_n_peak_strength_field_override;
        float m_fl_radius;
        ParticleAttributeIndex_t m_n_radius_field_override;
        float m_fl_shake_duration;
        float m_fl_transition_time;
        float m_fl_twist_amount;
        float m_fl_radial_amount;
        float m_fl_control_point_orientation_amount;
        int32_t m_n_control_point_for_linear_direction;
    };

    struct c_op_setattributetoscalarexpression_t {
        ScalarExpressionType_t m_n_expression;
        CPerParticleFloatInput m_fl_input1;
        CPerParticleFloatInput m_fl_input2;
        CParticleRemapFloatInput m_fl_output_remap;
        ParticleAttributeIndex_t m_n_output_field;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_cyclescalar_t {
        ParticleAttributeIndex_t m_n_dest_field;
        float m_fl_start_value;
        float m_fl_end_value;
        float m_fl_cycle_time;
        bool m_b_do_not_repeat_cycle;
        bool m_b_synchronize_particles;
        int32_t m_n_cpscale;
        int32_t m_n_cpfield_min;
        int32_t m_n_cpfield_max;
        ParticleSetMethod_t m_n_set_method;
    };

    struct c_op_rendermaterialproxy_t {
        int32_t m_n_material_control_point;
        MaterialProxyType_t m_n_proxy_type;
        CUtlVector_MaterialVariable_t_ m_material_vars;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_override_material;
        CParticleCollectionFloatInput m_fl_material_override_enabled;
        CParticleCollectionVecInput m_vec_color_scale;
        CPerParticleFloatInput m_fl_alpha;
        ParticleColorBlendType_t m_n_color_blend_type;
    };

    struct floatinputmaterialvariable_t_t {
        CUtlString m_str_variable;
        CParticleCollectionFloatInput m_fl_input;
    };

    struct c_op_rampscalarlinear_t {
        float m_rate_min;
        float m_rate_max;
        float m_fl_start_time_min;
        float m_fl_start_time_max;
        float m_fl_end_time_min;
        float m_fl_end_time_max;
        ParticleAttributeIndex_t m_n_field;
        bool m_b_proportional_op;
    };

    struct c_op_rotatevector_t {
        ParticleAttributeIndex_t m_n_field_output;
        vector3d_t m_vec_rot_axis_min;
        vector3d_t m_vec_rot_axis_max;
        float m_fl_rot_rate_min;
        float m_fl_rot_rate_max;
        bool m_b_normalize;
        CPerParticleFloatInput m_fl_scale;
    };

    struct c_init_initveccollection_t {
        CParticleCollectionVecInput m_input_value;
        ParticleAttributeIndex_t m_n_output_field;
    };

    struct c_init_sequencefromcp_t {
        bool m_b_kill_unused;
        bool m_b_radius_scale;
        int32_t m_n_cp;
        vector3d_t m_vec_offset;
    };

    struct c_op_cpoffsettopercentagebetweencps_t {
        float m_fl_input_min;
        float m_fl_input_max;
        float m_fl_input_bias;
        int32_t m_n_start_cp;
        int32_t m_n_end_cp;
        int32_t m_n_offset_cp;
        int32_t m_n_ouput_cp;
        int32_t m_n_input_cp;
        bool m_b_radial_check;
        bool m_b_scale_offset;
        vector3d_t m_vec_offset;
    };

    struct c_op_lerpendcapscalar_t {
        ParticleAttributeIndex_t m_n_field_output;
        float m_fl_output;
        float m_fl_lerp_time;
    };

}

namespace pulse_system {

    struct cpulsecell_waitforcursorswithtag_t {
        bool m_b_tag_self_when_complete;
        PulseCursorCancelPriority_t m_n_desired_kill_priority;
    };

    struct cpulsecell_racecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_base_t {
        PulseDocNodeID_t m_n_editor_node_id;
    };

    struct ctestdomainderived_cursor_t {
        int32_t m_n_cursor_value_a;
        int32_t m_n_cursor_value_b;
    };

    struct cpulsecell_pickbestoutflowselector_t {
        PulseBestOutflowRules_t m_n_check_type;
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cpulsecell_waitforobservable_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_ResumePoint m_on_true;
    };

    struct cpulse_outflowconnection_t {
        PulseSymbol_t m_source_outflow_name;
        PulseRuntimeChunkIndex_t m_n_dest_chunk;
        int32_t m_n_instruction;
        PulseRegisterMap_t m_outflow_register_map;
    };

    struct cpulsegraphdef_t {
        PulseSymbol_t m_domain_identifier;
        CPulseValueFullType m_domain_sub_type;
        PulseSymbol_t m_parent_map_name;
        PulseSymbol_t m_parent_xml_name;
        CUtlVector_CPulse_Chunk_ m_chunks;
        CUtlVector_CPulseCell_Base_ m_cells;
        CUtlVector_CPulse_Variable_ m_vars;
        CUtlVector_CPulse_TempVarBankDefinition_ m_temp_var_banks;
        CUtlVector_CPulse_PublicOutput_ m_public_outputs;
        CUtlVector_CPulse_InvokeBinding_ m_invoke_bindings;
        CUtlVector_CPulse_CallInfo_ m_call_infos;
        CUtlVector_CPulse_Constant_ m_constants;
        CUtlVector_CPulse_DomainValue_ m_domain_values;
        CUtlVector_CPulse_BlackboardReference_ m_blackboard_references;
        CUtlVector_CPulse_OutputConnection_ m_output_connections;
    };

    struct cpulsecell_testwaitwithcursorstate__instancestate_t_t {
        int32_t m_n_dummy;
    };

    struct cpulsecell_firecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_timeline__timelineevent_t_t {
        float m_fl_time_from_previous;
        CPulse_OutflowConnection m_event_outflow;
    };

    struct cpulsecell_intervaltimer__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
        float m_fl_wait_interval;
        float m_fl_wait_interval_high;
        bool m_b_complete_on_next_wake;
    };

    struct outflowwithrequirements_t_t {
        CPulse_OutflowConnection m_connection;
        PulseDocNodeID_t m_destination_flow_node_id;
        CUtlVector_PulseDocNodeID_t_ m_requirement_node_ids;
        CUtlVector_int32_t_ m_n_cursor_state_block_index;
    };

    struct cpulsecell_value_gradient_t {
        CColorGradient m_gradient;
    };

    struct cpulsecell_testwaitwithautotracepoints_t {
        CUtlString m_trace_prefix;
        CPulse_ResumePoint m_wake_resume;
    };

    struct pulsenodedynamicoutflows_t__dynamicoutflow_t_t {
        CGlobalSymbol m_outflow_id;
        CPulse_OutflowConnection m_connection;
    };

    struct cpulsecell_test_multioutflow_withparams_t {
        SignatureOutflow_Continue m_out1;
        SignatureOutflow_Continue m_out2;
    };

    struct cpulsecell_inflow_graphhook_t {
        PulseSymbol_t m_hook_name;
    };

    struct cpulsecell_test_multioutflow_withparams_yielding__cursorstate_t_t {
        int32_t n_test_step;
    };

    struct cpulseturtlegraphicscursor_t {
        color_t m_color;
        vector2d_t m_v_pos;
        float m_fl_heading_deg;
        bool m_b_pen_up;
    };

    struct cpulsecell_testwaitwithcursorstate__cursorstate_t_t {
        float fl_wait_value;
        bool b_fail;
        HYieldedCursor m_h_self_cursor;
        HPulseCellBase m_h_self_cell_instance_untyped;
        HPulseCell_CPulseCell_TestWaitWithCursorState_ m_h_self_cell_instance;
    };

    struct cpulsecell_inflow_baseentrypoint_t {
        PulseRuntimeChunkIndex_t m_entry_chunk;
        PulseRegisterMap_t m_register_map;
    };

    struct cpulsecell_waitforcursorswithtagbase_t {
        int32_t m_n_cursors_allowed_to_wait;
        CPulse_ResumePoint m_wait_complete;
    };

    struct cpulse_invokebinding_t {
        PulseRegisterMap_t m_register_map;
        PulseSymbol_t m_func_name;
        PulseRuntimeCellIndex_t m_n_cell_index;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
    };

    struct cpulsecell_intervaltimer_t {
        CPulse_ResumePoint m_completed;
        SignatureOutflow_Continue m_on_interval;
    };

    struct cpulsecell_baselerp_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_test_multioutflow_withparams_yielding_t {
        SignatureOutflow_Continue m_out1;
        SignatureOutflow_Continue m_async_child1;
        SignatureOutflow_Continue m_async_child2;
        SignatureOutflow_Resume m_yield_resume1;
        SignatureOutflow_Resume m_yield_resume2;
    };

    struct cpulsecell_value_curve_t {
        CPiecewiseCurve m_curve;
    };

    struct cpulsecell_inflow_eventhandler_t {
        PulseSymbol_t m_event_name;
    };

    struct cpulsecell_outflow_cycleshuffled__instancestate_t_t {
        CUtlVectorFixedGrowable_uint8_t_8_ m_shuffle;
        int32_t m_n_next_shuffle;
    };

    struct cpulsecell_baselerp__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
    };

    struct cpulsegraphinstance_testdomain_derived_t {
        int32_t m_n_instance_value_x;
    };

    struct cpulsegraphinstance_testdomain_t {
        bool m_b_is_running_unit_tests;
        bool m_b_explicit_time_stepping;
        bool m_b_expecting_to_destroy_with_yielded_cursors;
        bool m_b_quiet_tracepoints;
        bool m_b_expecting_cursor_terminated_due_to_max_instructions;
        int32_t m_n_cursors_terminated_due_to_max_instructions;
        int32_t m_n_next_validate_index;
        CUtlVector_CUtlString_ m_tracepoints;
        bool m_b_test_yes_or_no_path;
    };

    struct cpulsecell_timeline_t {
        CUtlVector_CPulseCell_Timeline_TimelineEvent_t_ m_timeline_events;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_inflow_entoutputhandler_t {
        PulseSymbol_t m_source_entity;
        PulseSymbol_t m_source_output;
        CPulseValueFullType m_expected_param_type;
    };

    struct cpulsecell_outflow_testexplicityesno_t {
        CPulse_OutflowConnection m_yes;
        CPulse_OutflowConnection m_no;
    };

    struct cpulsecell_outflow_testrandomyesno_t {
        CPulse_OutflowConnection m_yes;
        CPulse_OutflowConnection m_no;
    };

    struct cpulsecell_outflow_cycleordered__instancestate_t_t {
        int32_t m_n_next_index;
    };

    struct cpulsecell_limitcount__instancestate_t_t {
        int32_t m_n_current_count;
    };

    struct cpulsecell_baseyieldinginflow_t {
        CPulse_ResumePoint m_base_flow_on_after_cancel;
        CPulse_ResumePoint m_base_flow_while_active;
    };

    struct pulsenodedynamicoutflows_t_t {
        CUtlVector_PulseNodeDynamicOutflows_t_DynamicOutflow_t_ m_outflows;
    };

    struct cpulsecell_isrequirementvalid__criteria_t_t {
        bool m_b_is_valid;
    };

    struct cpulsecell_inflow_observablevariablelistener_t {
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference;
        bool m_b_self_reference;
    };

    struct cpulsecell_outflow_cycleordered_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct pulseselectoroutflowlist_t_t {
        CUtlVector_OutflowWithRequirements_t_ m_outflows;
    };

    struct cpulsecell_inflow_wait_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_testwaitwithcursorstate_t {
        CPulse_ResumePoint m_wake_resume;
        CPulse_ResumePoint m_wake_fail;
    };

    struct cpulsecell_outflow_cycleshuffled_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_inflow_method_t {
        PulseSymbol_t m_method_name;
        CUtlString m_description;
        bool m_b_is_public;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_return_values;
    };

    struct cpulsecell_booleanswitchstate_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_OutflowConnection m_when_true;
        CPulse_OutflowConnection m_when_false;
    };

    struct cpulsecell_inflow_yield_t {
        CPulse_ResumePoint m_unyield_resume;
    };

    struct cpulsecell_unknown_t {
        KeyValues3 m_unknown_keys;
    };

    struct cpulsecell_outflow_cyclerandom_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_step_publicoutput_t {
        PulseRuntimeOutputIndex_t m_output_index;
    };

    struct cpulse_blackboardreference_t {
        CStrongHandle_InfoForResourceTypeIPulseGraphDef_ m_h_blackboard_resource;
        PulseSymbol_t m_blackboard_resource;
        PulseDocNodeID_t m_n_node_id;
        CGlobalSymbol m_node_name;
    };

    struct cpulsecell_testenums_t {
        PulseTestEnumColor_t m_n_reference_color;
        PulseTestEnumFlags_t m_n_reference_flags;
    };

    struct cpulsecell_step_testdomainentfire_t {
        CUtlString m_input;
    };

    struct cpulsecell_exampleselector_t {
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cpulse_callinfo_t {
        PulseSymbol_t m_port_name;
        PulseDocNodeID_t m_n_editor_node_id;
        PulseRegisterMap_t m_register_map;
        PulseDocNodeID_t m_call_method_id;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
        PulseRuntimeChunkIndex_t m_n_break_dest_chunk;
        int32_t m_n_break_dest_instruction;
    };

    struct cpulsecell_inlinenodeskipselector_t {
        PulseDocNodeID_t m_n_flow_node_id;
        bool m_b_and;
        PulseSelectorOutflowList_t m_pass_outflow;
        CPulse_OutflowConnection m_fail_outflow;
    };

    struct cpulsecell_examplecriteria__criteria_t_t {
        float m_fl_float_value1;
        float m_fl_float_value2;
        bool m_b_my_bool;
    };

    struct cpulsecell_limitcount_t {
        int32_t m_n_limit_count;
    };

    struct cpulsecell_step_callexternalmethod_t {
        PulseSymbol_t m_method_name;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_index;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_expected_args;
        PulseMethodCallMode_t m_n_async_call_mode;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_limitcount__criteria_t_t {
        bool m_b_limit_count_passes;
    };

    struct cpulsecell_testyieldwithobservables_t {
        float m_fl_watch_for_float_value;
        CPulseObservableExpression_float_ m_live_float_value;
        CUtlString m_watch_for_string_value;
        CPulseObservableExpression_CUtlString_ m_live_string_value;
        CPulse_ResumePoint m_wake_resume;
    };

    struct cpulsecell_cursorqueue_t {
        int32_t m_n_cursors_allowed_to_run_parallel;
    };

    struct testcomponent_t_t {
        CUtlString m_component_data;
    };

}

namespace rendersystemdx11 {

    struct rsdepthstencilstatedesc_t_t {
        uint32_t m_b_depth_test_enable;
        uint32_t m_b_depth_write_enable;
        uint32_t m_depth_func;
        RsStencilStateDesc_t m_stencil_state;
    };

    struct sheetsequenceintegerid_t_t {
        uint32_t m_value;
    };

    struct rsblendstatedesc_t_t {
        uint32_t m_src_blend_bits;
        uint32_t m_dest_blend_bits;
        uint32_t m_src_blend_alpha_bits;
        uint32_t m_dest_blend_alpha_bits;
        uint32_t m_render_target_write_mask_bits;
        uint32_t m_blend_op_bits;
        uint32_t m_b_alpha_to_coverage_enable;
        uint32_t m_b_independent_blend_enable;
        uint32_t m_blend_op_alpha_bits;
        uint8_t m_blend_enable_bits;
        uint8_t m_srgb_write_enable_bits;
    };

    struct vsinputsignatureelement_t_t {
        char m_p_name;
        char m_p_semantic;
        char m_p_d3_dsemantic_name;
        int32_t m_n_d3_dsemantic_index;
    };

    struct rsrasterizerstatedesc_t_t {
        RsFillMode_t m_n_fill_mode;
        RsCullMode_t m_n_cull_mode;
        bool m_b_depth_clip_enable;
        bool m_b_multisample_enable;
        int32_t m_n_depth_bias;
        float m_fl_depth_bias_clamp;
        float m_fl_slope_scaled_depth_bias;
    };

    struct rsstencilstatedesc_t_t {
        uint32_t m_front_stencil_func;
        uint32_t m_back_stencil_func;
        uint32_t m_b_stencil_enable;
        uint32_t m_front_stencil_fail_op;
        uint32_t m_front_stencil_depth_fail_op;
        uint32_t m_front_stencil_pass_op;
        uint32_t m_back_stencil_fail_op;
        uint32_t m_back_stencil_depth_fail_op;
        uint32_t m_back_stencil_pass_op;
        uint8_t m_n_stencil_read_mask;
        uint8_t m_n_stencil_write_mask;
    };

    struct vsinputsignature_t_t {
        CUtlVector_VsInputSignatureElement_t_ m_elems;
        CUtlVector_VsInputSignatureElement_t_ m_depth_elems;
    };

    struct renderinputlayoutfield_t_t {
        char m_p_semantic_name;
        int8_t m_n_semantic_index;
        int16_t m_n_offset;
        int8_t m_n_slot;
        RenderSlotType_t m_n_slot_type;
        char m_sz_shader_semantic;
    };

}

namespace resourcesystem {

    struct aabbws_t_t {
        VectorWS m_v_min_bounds;
        VectorWS m_v_max_bounds;
    };

    struct packedaabb_t_t {
        uint32_t m_n_packed_min;
        uint32_t m_n_packed_max;
    };

    struct constantinfo_t_t {
        CUtlString m_name;
        CUtlStringToken m_name_token;
        float m_fl_value;
    };

    struct fusefunctionindex_t_t {
        uint16_t m_value;
    };

    struct cfusesymboltable_t {
        CUtlVector_ConstantInfo_t_ m_constants;
        CUtlVector_VariableInfo_t_ m_variables;
        CUtlVector_FunctionInfo_t_ m_functions;
        CUtlHashtable_CUtlStringToken_int32_t_ m_constant_map;
        CUtlHashtable_CUtlStringToken_int32_t_ m_variable_map;
        CUtlHashtable_CUtlStringToken_int32_t_ m_function_map;
    };

    struct aabb_t_t {
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
    };

    struct variableinfo_t_t {
        CUtlString m_name;
        CUtlStringToken m_name_token;
        FuseVariableIndex_t m_n_index;
        uint8_t m_n_num_components;
        FuseVariableType_t m_e_var_type;
        FuseVariableAccess_t m_e_access;
    };

    struct fourquaternions_t {
        fltx4 x;
        fltx4 y;
        fltx4 z;
        fltx4 w;
    };

    struct cfuseprogram_t {
        CUtlVector_uint8_t_ m_program_buffer;
        CUtlVector_FuseVariableIndex_t_ m_variables_read;
        CUtlVector_FuseVariableIndex_t_ m_variables_written;
        int32_t m_n_max_temp_vars_used;
    };

    struct functioninfo_t_t {
        CUtlString m_name;
        CUtlStringToken m_name_token;
        int32_t m_n_param_count;
        FuseFunctionIndex_t m_n_index;
        bool m_b_is_pure;
    };

    struct noiseoscillatordef_t_t {
        float m_fl_phase;
        float m_fl_frequency;
        float m_fl_amplitude;
    };

    struct noisestreamdef_t_t {
        NoiseStreamType_t m_n_type;
        NoiseStreamModifier_t m_n_modifier;
        NoiseStreamTurbulence_t m_n_turbulence;
        float m_fl_output_min;
        float m_fl_output_max;
        float m_fl_scale;
        vector3d_t m_v_offset_rate;
        float m_fl_offset;
        int32_t m_n_octaves;
        float m_fl_turbulence_scale;
        float m_fl_turbulence_mix;
        CUtlVector_NoiseOscillatorDef_t_ m_oscillators;
    };

    struct fusevariableindex_t_t {
        uint16_t m_value;
    };

    struct manifesttestresource_t_t {
        CUtlString m_name;
        CStrongHandle_InfoForResourceTypeManifestTestResource_t_ m_child;
    };

}

namespace scenesystem {

    struct cssdsmsg_viewtarget_t {
        CUtlString m_name;
        uint64_t m_texture_id;
        int32_t m_n_width;
        int32_t m_n_height;
        int32_t m_n_requested_width;
        int32_t m_n_requested_height;
        int32_t m_n_num_mip_levels;
        int32_t m_n_depth;
        int32_t m_n_multisample_num_samples;
        int32_t m_n_format;
    };

    struct sceneviewid_t_t {
        uint64_t m_n_view_id;
        uint64_t m_n_frame_count;
    };

    struct cssdsendframeviewinfo_t {
        uint64_t m_n_view_id;
        CUtlString m_view_name;
    };

    struct cssdsmsg_layerbase_t {
        SceneViewId_t m_view_id;
        CUtlString m_view_name;
        uint64_t m_n_layer_id;
        CUtlString m_layer_name;
        CUtlString m_display_text;
    };

    struct cssdsmsg_viewtargetlist_t {
        SceneViewId_t m_view_id;
        CUtlString m_view_name;
        CUtlVector_CSSDSMsg_ViewTarget_ m_targets;
    };

    struct cssdsmsg_viewrender_t {
        SceneViewId_t m_view_id;
        CUtlString m_view_name;
    };

    struct cssdsmsg_endframe_t {
        CUtlVector_CSSDSEndFrameViewInfo_ m_views;
    };

}

namespace schemasystem {

    struct cschemasysteminternalregistration_t {
        vector2d_t m_vector2_d;
        vector3d_t m_vector;
        VectorWS m_vector_ws;
        VectorAligned m_vector_aligned;
        quaternion_t m_quaternion;
        QAngle m_qangle;
        RotationVector m_rotation_vector;
        RadianEuler m_radian_euler;
        DegreeEuler m_degree_euler;
        QuaternionStorage m_quaternion_storage;
        matrix3x4_t m_matrix3x4_t;
        matrix3x4a_t m_matrix3x4a_t;
        color_t m_color;
        vector4d_t m_vector4_d;
        transform_t m_ctransform;
        KeyValues* m_p_key_values;
        CUtlBinaryBlock m_cutl_binary_block;
        CUtlString m_cutl_string;
        CUtlSymbol m_cutl_symbol;
        CUtlStringToken m_string_token;
        CUtlStringTokenWithStorage m_string_token_with_storage;
        CResourceArray_CResourcePointer_CResourceString_ m_resource_types;
        KeyValues3 m_kv3;
    };

    struct cexampleschemavdata_polymorphicderiveda_t {
        int32_t m_n_derived_a;
    };

    struct cexampleschemavdata_polymorphicbase_t {
        int32_t m_n_base;
    };

    struct cexampleschemavdata_polymorphicderivedb_t {
        int32_t m_n_derived_b;
    };

    struct resourceid_t_t {
        uint64_t m_value;
    };

    struct cexampleschemavdata_monomorphic_t {
        int32_t m_n_example1;
        int32_t m_n_example2;
    };

}

namespace server {

    struct cpointworldtext_t {
        char m_message_text;
        char m_font_name;
        char m_background_material_name;
        bool m_b_enabled;
        bool m_b_fullbright;
        float m_fl_world_units_per_px;
        float m_fl_font_size;
        float m_fl_depth_offset;
        bool m_b_draw_background;
        float m_fl_background_border_width;
        float m_fl_background_border_height;
        float m_fl_background_world_to_uv;
        color_t m_color;
        PointWorldTextJustifyHorizontal_t m_n_justify_horizontal;
        PointWorldTextJustifyVertical_t m_n_justify_vertical;
        PointWorldTextReorientMode_t m_n_reorient_mode;
    };

    struct cambientgeneric_t {
        float m_radius;
        float m_fl_max_radius;
        soundlevel_t m_i_sound_level;
        dynpitchvol_t m_dpv;
        bool m_f_active;
        bool m_f_looping;
        CGameSoundEventName m_isz_sound;
        CUtlSymbolLarge m_s_source_ent_name;
        CHandle_CBaseEntity_ m_h_sound_source;
        CEntityIndex m_n_sound_source_ent_index;
    };

    struct cenventitymaker_t {
        vector3d_t m_vec_entity_mins;
        vector3d_t m_vec_entity_maxs;
        CHandle_CBaseEntity_ m_h_current_instance;
        CHandle_CBaseEntity_ m_h_current_blocker;
        VectorWS m_vec_blocker_origin;
        QAngle m_ang_post_spawn_direction;
        float m_fl_post_spawn_direction_variance;
        float m_fl_post_spawn_speed;
        bool m_b_post_spawn_use_angles;
        CUtlSymbolLarge m_isz_template;
        CEntityIOOutput m_p_output_on_spawned;
        CEntityIOOutput m_p_output_on_failed_spawn;
    };

    struct cfilterenemy_t {
        CUtlSymbolLarge m_isz_enemy_name;
        float m_fl_radius;
        float m_fl_outer_radius;
        int32_t m_n_max_squadmates_per_enemy;
        CUtlSymbolLarge m_isz_player_name;
    };

    struct cpulsecell_waitforcursorswithtag_t {
        bool m_b_tag_self_when_complete;
        PulseCursorCancelPriority_t m_n_desired_kill_priority;
    };

    struct cscriptedsequence_t {
        CUtlSymbolLarge m_isz_entry;
        CUtlSymbolLarge m_isz_pre_idle;
        CUtlSymbolLarge m_isz_play;
        CUtlSymbolLarge m_isz_post_idle;
        CUtlSymbolLarge m_isz_modifier_to_add_on_play;
        CUtlSymbolLarge m_isz_next_script;
        CUtlSymbolLarge m_isz_entity;
        CUtlSymbolLarge m_isz_sync_group;
        ScriptedMoveTo_t m_n_move_to;
        SharedMovementGait_t m_n_move_to_gait;
        ScriptedHeldWeaponBehavior_t m_n_held_weapon_behavior;
        ForcedCrouchState_t m_n_forced_crouch_state;
        bool m_b_is_playing_pre_idle;
        bool m_b_is_playing_entry;
        bool m_b_is_playing_action;
        bool m_b_is_playing_post_idle;
        bool m_b_dont_rotate_other;
        bool m_b_is_repeatable;
        bool m_b_should_leave_corpse;
        bool m_b_start_on_spawn;
        bool m_b_disallow_interrupts;
        bool m_b_can_override_npcstate;
        bool m_b_dont_teleport_at_end;
        bool m_b_high_priority;
        bool m_b_hide_debug_complaints;
        bool m_b_continue_on_death;
        bool m_b_loop_pre_idle_sequence;
        bool m_b_loop_action_sequence;
        bool m_b_loop_post_idle_sequence;
        bool m_b_synch_post_idles;
        bool m_b_ignore_look_at;
        bool m_b_ignore_gravity;
        bool m_b_disable_npccollisions;
        bool m_b_keep_animgraph_locked_post;
        bool m_b_dont_add_modifiers;
        bool m_b_disable_aiming_while_moving;
        bool m_b_ignore_rotation;
        float m_fl_radius;
        float m_fl_repeat;
        float m_fl_play_anim_fade_in_time;
        float m_fl_move_interp_time;
        float m_fl_ang_rate;
        float m_fl_move_speed;
        bool m_b_wait_until_move_completes_to_start_animation;
        int32_t m_n_not_ready_sequence_count;
        GameTime_t m_start_time;
        bool m_b_wait_for_begin_sequence;
        int32_t m_saved_effects;
        int32_t m_saved_flags;
        int32_t m_saved_collision_group;
        bool m_b_interruptable;
        bool m_sequence_started;
        bool m_b_position_relative_to_other_entity;
        CHandle_CBaseEntity_ m_h_target_ent;
        CHandle_CScriptedSequence_ m_h_next_cine;
        bool m_b_thinking;
        bool m_b_initiated_self_delete;
        bool m_b_is_teleporting_due_to_move_to;
        bool m_b_allow_custom_interrupt_conditions;
        CHandle_CBaseAnimGraph_ m_h_forced_target;
        bool m_b_dont_cancel_other_sequences;
        bool m_b_force_synch;
        bool m_b_prevent_update_yaw_on_finish;
        bool m_b_ensure_on_navmesh_on_finish;
        ScriptedOnDeath_t m_on_death_behavior;
        ScriptedConflictResponse_t m_conflict_response;
        CEntityIOOutput m_on_begin_sequence;
        CEntityIOOutput m_on_action_start_or_loop;
        CEntityIOOutput m_on_end_sequence;
        CEntityIOOutput m_on_post_idle_end_sequence;
        CEntityIOOutput m_on_cancel_sequence;
        CEntityIOOutput m_on_cancel_failed_sequence;
        CEntityIOOutput m_on_script_event;
        transform_t m_mat_other_to_main;
        CHandle_CBaseEntity_ m_h_interaction_main_entity;
        int32_t m_i_player_death_behavior;
        bool m_b_skip_fade_in;
    };

    struct cfogtrigger_t {
        fogparams_t m_fog;
    };

    struct ccsplayer_pingservices_t {
        GameTime_t m_fl_player_ping_tokens;
        CHandle_CPlayerPing_ m_h_player_ping;
    };

    struct cphysicsspring_t {
        IPhysicsJoint* m_p_spring_joint;
        float m_fl_frequency;
        float m_fl_damping_ratio;
        float m_fl_rest_length;
        CUtlSymbolLarge m_name_attach_start;
        CUtlSymbolLarge m_name_attach_end;
        VectorWS m_start;
        VectorWS m_end;
        uint32_t m_teleport_tick;
    };

    struct cenvmuzzleflash_t {
        float m_fl_scale;
        CUtlSymbolLarge m_isz_parent_attachment;
    };

    struct ceconitemattribute_t {
        uint16_t m_i_attribute_definition_index;
        float m_fl_value;
        float m_fl_initial_value;
        int32_t m_n_refundable_currency;
        bool m_b_set_bonus;
    };

    struct cpulsecell_racecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cbtactioncombatpositioning_t {
        CUtlString m_sz_sensor_input_key;
        CUtlString m_sz_is_attacking_key;
        CountdownTimer m_action_timer;
        bool m_b_crouching;
    };

    struct ctriggerbuoyancy_t {
        CBuoyancyHelper m_buoyancy_helper;
        float m_fl_fluid_density;
    };

    struct cpathtrack_t {
        CHandle_CPathTrack_ m_pnext;
        CHandle_CPathTrack_ m_pprevious;
        CHandle_CPathTrack_ m_paltpath;
        float m_fl_speed;
        float m_fl_radius;
        float m_length;
        CUtlSymbolLarge m_alt_name;
        int32_t m_n_iter_val;
        TrackOrientationType_t m_e_orientation_type;
        CEntityIOOutput m_on_pass;
    };

    struct cpulsecell_base_t {
        PulseDocNodeID_t m_n_editor_node_id;
    };

    struct ctriggerproximity_t {
        CHandle_CBaseEntity_ m_h_measure_target;
        CUtlSymbolLarge m_isz_measure_target;
        float m_f_radius;
        int32_t m_n_touchers;
        CEntityOutputTemplate_float_ m_nearest_entity_distance;
    };

    struct ctanktrainai_t {
        CHandle_CFuncTrackTrain_ m_h_train;
        CHandle_CBaseEntity_ m_h_target_entity;
        int32_t m_sound_playing;
        CUtlSymbolLarge m_start_sound_name;
        CUtlSymbolLarge m_engine_sound_name;
        CUtlSymbolLarge m_movement_sound_name;
        CUtlSymbolLarge m_target_entity_name;
    };

    struct cgametext_t {
        CUtlSymbolLarge m_isz_message;
        hudtextparms_t m_text_parms;
    };

    struct ccsplayercontroller_inventoryservices_t {
        uint16_t m_un_music_id;
        MedalRank_t m_rank;
        int32_t m_n_persona_data_public_level;
        int32_t m_n_persona_data_public_commends_leader;
        int32_t m_n_persona_data_public_commends_teacher;
        int32_t m_n_persona_data_public_commends_friendly;
        int32_t m_n_persona_data_xp_trail_level;
        uint32_t m_un_equipped_player_spray_ids;
        uint64_t m_un_current_loadout_hash;
        CUtlVectorEmbeddedNetworkVar_ServerAuthoritativeWeaponSlot_t_ m_vec_server_authoritative_weapon_slots;
    };

    struct ccsplayermodernjump_t {
        GameTick_t m_n_last_actual_jump_press_tick;
        float m_fl_last_actual_jump_press_frac;
        GameTick_t m_n_last_usable_jump_press_tick;
        float m_fl_last_usable_jump_press_frac;
        GameTick_t m_n_last_landed_tick;
        float m_fl_last_landed_frac;
        float m_fl_last_landed_velocity_x;
        float m_fl_last_landed_velocity_y;
        float m_fl_last_landed_velocity_z;
    };

    struct ctriggerfan_t {
        vector3d_t m_v_fan_origin_offset;
        vector3d_t m_v_direction;
        bool m_b_push_towards_info_target;
        bool m_b_push_away_from_info_target;
        quaternion_t m_q_noise_delta;
        CHandle_CInfoFan_ m_h_info_fan;
        float m_fl_force;
        bool m_b_falloff;
        CountdownTimer m_ramp_timer;
        VectorWS m_v_fan_origin_ws;
        vector3d_t m_v_fan_origin_ls;
        vector3d_t m_v_fan_end_ls;
        vector3d_t m_v_noise_direction_target;
        CUtlSymbolLarge m_isz_info_fan;
        float m_fl_rope_force_scale;
        float m_fl_particle_force_scale;
        float m_fl_player_force;
        bool m_b_player_windblock;
        float m_fl_npcforce;
        float m_fl_ramp_time;
        float m_f_noise_degrees;
        float m_f_noise_speed;
        bool m_b_push_player;
        bool m_b_ramp_down;
        int32_t m_n_manager_fan_idx;
    };

    struct clogiccase_t {
        CUtlSymbolLarge m_n_case;
        int32_t m_n_shuffle_cases;
        int32_t m_n_last_shuffle_case;
        uint8_t m_uch_shuffle_case_map;
        CEntityIOOutput m_on_case;
        CEntityOutputTemplate_CUtlString_ m_on_default;
    };

    struct cpulsecell_outflow_playvoline_t {
        CPulse_ResumePoint m_on_finished;
    };

    struct cinfogameeventproxy_t {
        CUtlSymbolLarge m_isz_event_name;
        float m_fl_range;
    };

    struct cgameplayerzone_t {
        CEntityIOOutput m_on_player_in_zone;
        CEntityIOOutput m_on_player_out_zone;
        CEntityOutputTemplate_int32_t_ m_players_in_count;
        CEntityOutputTemplate_int32_t_ m_players_out_count;
    };

    struct cbasetoggle_t {
        TOGGLE_STATE m_toggle_state;
        float m_fl_move_distance;
        float m_fl_wait;
        float m_fl_lip;
        bool m_b_always_fire_blocked_outputs;
        vector3d_t m_vec_position1;
        vector3d_t m_vec_position2;
        QAngle m_vec_move_ang;
        QAngle m_vec_angle1;
        QAngle m_vec_angle2;
        float m_fl_height;
        CHandle_CBaseEntity_ m_h_activator;
        vector3d_t m_vec_final_dest;
        QAngle m_vec_final_angle;
        int32_t m_movement_type;
        CUtlSymbolLarge m_s_master;
    };

    struct cpulseservercursor_t {
        CHandle_CBaseEntity_ m_h_activator;
        CHandle_CBaseEntity_ m_h_caller;
    };

    struct cpulsecell_playsequence_t {
        CUtlString m_sequence_name;
        PulseNodeDynamicOutflows_t m_pulse_anim_events;
        CPulse_ResumePoint m_on_finished;
    };

    struct cinferno_t {
        VectorWS m_fire_positions;
        VectorWS m_fire_parent_positions;
        bool m_b_fire_is_burning;
        Vector m_burn_normal;
        int32_t m_fire_count;
        int32_t m_n_inferno_type;
        int32_t m_n_fire_effect_tick_begin;
        float m_n_fire_lifetime;
        bool m_b_in_post_effect_time;
        bool m_b_was_created_in_smoke;
        Extent m_extent;
        CountdownTimer m_damage_timer;
        CountdownTimer m_damage_ramp_timer;
        vector3d_t m_splash_velocity;
        vector3d_t m_initial_splash_velocity;
        VectorWS m_start_pos;
        VectorWS m_vec_original_spawn_location;
        IntervalTimer m_active_timer;
        int32_t m_fire_spawn_offset;
        int32_t m_n_max_flames;
        int32_t m_n_spread_count;
        CountdownTimer m_bookkeeping_timer;
        CountdownTimer m_next_spread_timer;
        uint16_t m_n_source_item_def_index;
    };

    struct cpulsecell_outflow_playscenebase_t {
        CPulse_ResumePoint m_on_finished;
        CUtlVector_CPulse_OutflowConnection_ m_triggers;
    };

    struct cpulsecell_lerpcamerasettings_t {
        float m_fl_seconds;
        PointCameraSettings_t m_start;
        PointCameraSettings_t m_end;
    };

    struct cfuncinteractionlayerclip_t {
        bool m_b_disabled;
        CUtlSymbolLarge m_isz_interacts_as;
        CUtlSymbolLarge m_isz_interacts_with;
    };

    struct ccsminimapvolume_t {
        CUtlString m_str_minimap_name;
    };

    struct ctriggerdetectbulletfire_t {
        bool m_b_player_fire_only;
        CEntityIOOutput m_on_detected_bullet_fire;
    };

    struct ccsplayer_useservices_t {
        CHandle_CBaseEntity_ m_h_last_known_use_entity;
        GameTime_t m_fl_last_use_time_stamp;
        GameTime_t m_fl_time_last_used_window;
    };

    struct cpulsecell_pickbestoutflowselector_t {
        PulseBestOutflowRules_t m_n_check_type;
        PulseSelectorOutflowList_t m_outflow_list;
    };

    struct cinfofan_t {
        float m_f_fan_force_max_radius;
        float m_f_fan_force_min_radius;
        float m_fl_curve_dist_range;
        CUtlSymbolLarge m_fan_force_curve_string;
    };

    struct cgamerules_t {
        CNetworkVarChainer __m_p_chain_entity;
        char m_sz_quest_name;
        int32_t m_n_quest_phase;
        uint32_t m_n_last_match_time;
        uint64_t m_n_last_match_time_match_id64;
        int32_t m_n_total_paused_ticks;
        int32_t m_n_pause_start_tick;
        bool m_b_game_paused;
    };

    struct cfish_t {
        CHandle_CFishPool_ m_pool;
        uint32_t m_id;
        float m_x;
        float m_y;
        float m_z;
        float m_angle;
        float m_angle_change;
        vector3d_t m_forward;
        vector3d_t m_perp;
        VectorWS m_pool_origin;
        float m_water_level;
        float m_speed;
        float m_desired_speed;
        float m_calm_speed;
        float m_panic_speed;
        float m_avoid_range;
        CountdownTimer m_turn_timer;
        bool m_turn_clockwise;
        CountdownTimer m_go_timer;
        CountdownTimer m_move_timer;
        CountdownTimer m_panic_timer;
        CountdownTimer m_disperse_timer;
        CountdownTimer m_proximity_timer;
        CUtlVector_CFish_ m_visible;
    };

    struct ccsbot_t {
        VectorWS m_eye_position;
        char m_name;
        float m_combat_range;
        bool m_is_rogue;
        CountdownTimer m_rogue_timer;
        bool m_died_last_round;
        float m_safe_time;
        bool m_was_safe;
        bool m_blind_fire;
        CountdownTimer m_surprise_timer;
        bool m_b_allow_active;
        bool m_is_following;
        CHandle_CCSPlayerPawn_ m_leader;
        float m_follow_timestamp;
        float m_allow_auto_follow_time;
        CountdownTimer m_hurry_timer;
        CountdownTimer m_alert_timer;
        CountdownTimer m_sneak_timer;
        CountdownTimer m_panic_timer;
        float m_state_timestamp;
        bool m_is_attacking;
        bool m_is_opening_door;
        CHandle_CBaseEntity_ m_task_entity;
        VectorWS m_goal_position;
        CHandle_CBaseEntity_ m_goal_entity;
        CHandle_CBaseEntity_ m_avoid;
        float m_avoid_timestamp;
        bool m_is_stopping;
        bool m_has_visited_enemy_spawn;
        IntervalTimer m_still_timer;
        bool m_b_eye_angles_under_path_finder_control;
        int32_t m_path_index;
        GameTime_t m_area_entered_timestamp;
        CountdownTimer m_repath_timer;
        CountdownTimer m_avoid_friend_timer;
        bool m_is_friend_in_the_way;
        CountdownTimer m_polite_timer;
        bool m_is_waiting_behind_friend;
        float m_path_ladder_end;
        CountdownTimer m_must_run_timer;
        CountdownTimer m_wait_timer;
        CountdownTimer m_update_travel_distance_timer;
        float m_player_travel_distance;
        uint8_t m_travel_distance_phase;
        uint8_t m_hostage_escort_count;
        float m_hostage_escort_count_timestamp;
        int32_t m_desired_team;
        bool m_has_joined;
        bool m_is_waiting_for_hostage;
        CountdownTimer m_inhibit_waiting_for_hostage_timer;
        CountdownTimer m_wait_for_hostage_timer;
        VectorWS m_noise_position;
        float m_noise_travel_distance;
        float m_noise_timestamp;
        CCSPlayerPawn* m_noise_source;
        CountdownTimer m_noise_bend_timer;
        VectorWS m_bent_noise_position;
        bool m_bend_noise_position_valid;
        float m_look_around_state_timestamp;
        float m_look_ahead_angle;
        float m_look_up_angle;
        float m_forward_angle;
        float m_inhibit_look_around_timestamp;
        VectorWS m_look_at_spot;
        float m_look_at_spot_duration;
        float m_look_at_spot_timestamp;
        float m_look_at_spot_angle_tolerance;
        bool m_look_at_spot_clear_if_close;
        bool m_look_at_spot_attack;
        char* m_look_at_desc;
        float m_peripheral_timestamp;
        uint8_t m_approach_point_count;
        VectorWS m_approach_point_view_position;
        IntervalTimer m_view_steady_timer;
        CountdownTimer m_toss_grenade_timer;
        CountdownTimer m_is_avoiding_grenade;
        float m_spot_check_timestamp;
        int32_t m_checked_hiding_spot_count;
        float m_look_pitch;
        float m_look_pitch_vel;
        float m_look_yaw;
        float m_look_yaw_vel;
        VectorWS m_target_spot;
        vector3d_t m_target_spot_velocity;
        VectorWS m_target_spot_predicted;
        QAngle m_aim_error;
        QAngle m_aim_goal;
        GameTime_t m_target_spot_time;
        float m_aim_focus;
        float m_aim_focus_interval;
        GameTime_t m_aim_focus_next_update;
        CountdownTimer m_ignore_enemies_timer;
        CHandle_CCSPlayerPawn_ m_enemy;
        bool m_is_enemy_visible;
        uint8_t m_visible_enemy_parts;
        VectorWS m_last_enemy_position;
        float m_last_saw_enemy_timestamp;
        float m_first_saw_enemy_timestamp;
        float m_current_enemy_acquire_timestamp;
        float m_enemy_death_timestamp;
        float m_friend_death_timestamp;
        bool m_is_last_enemy_dead;
        int32_t m_nearby_enemy_count;
        CHandle_CCSPlayerPawn_ m_bomber;
        int32_t m_nearby_friend_count;
        CHandle_CCSPlayerPawn_ m_closest_visible_friend;
        CHandle_CCSPlayerPawn_ m_closest_visible_human_friend;
        IntervalTimer m_attention_interval;
        CHandle_CCSPlayerPawn_ m_attacker;
        float m_attacked_timestamp;
        IntervalTimer m_burned_by_flames_timer;
        int32_t m_last_victim_id;
        bool m_is_aiming_at_enemy;
        bool m_is_rapid_firing;
        IntervalTimer m_equip_timer;
        CountdownTimer m_zoom_timer;
        GameTime_t m_fire_weapon_timestamp;
        CountdownTimer m_look_for_weapons_on_ground_timer;
        bool m_b_is_sleeping;
        bool m_is_enemy_sniper_visible;
        CountdownTimer m_saw_enemy_sniper_timer;
        uint8_t m_enemy_queue_index;
        uint8_t m_enemy_queue_count;
        uint8_t m_enemy_queue_attend_index;
        bool m_is_stuck;
        GameTime_t m_stuck_timestamp;
        VectorWS m_stuck_spot;
        CountdownTimer m_wiggle_timer;
        CountdownTimer m_stuck_jump_timer;
        GameTime_t m_next_cleanup_check_timestamp;
        float m_avg_vel;
        int32_t m_avg_vel_index;
        int32_t m_avg_vel_count;
        VectorWS m_last_origin;
        float m_last_radio_recieved_timestamp;
        float m_last_radio_sent_timestamp;
        CHandle_CCSPlayerPawn_ m_radio_subject;
        VectorWS m_radio_position;
        float m_voice_end_timestamp;
        int32_t m_last_valid_reaction_queue_frame;
    };

    struct chandletest_t {
        CHandle_CBaseEntity_ m_handle;
        bool m_b_send_handle;
    };

    struct clogicnpccounter_t {
        CEntityIOOutput m_on_min_count_all;
        CEntityIOOutput m_on_max_count_all;
        CEntityOutputTemplate_float_ m_on_factor_all;
        CEntityOutputTemplate_float_ m_on_min_player_dist_all;
        CEntityIOOutput m_on_min_count_1;
        CEntityIOOutput m_on_max_count_1;
        CEntityOutputTemplate_float_ m_on_factor_1;
        CEntityOutputTemplate_float_ m_on_min_player_dist_1;
        CEntityIOOutput m_on_min_count_2;
        CEntityIOOutput m_on_max_count_2;
        CEntityOutputTemplate_float_ m_on_factor_2;
        CEntityOutputTemplate_float_ m_on_min_player_dist_2;
        CEntityIOOutput m_on_min_count_3;
        CEntityIOOutput m_on_max_count_3;
        CEntityOutputTemplate_float_ m_on_factor_3;
        CEntityOutputTemplate_float_ m_on_min_player_dist_3;
        CEntityHandle m_h_source;
        CUtlSymbolLarge m_isz_source_entity_name;
        float m_fl_distance_max;
        bool m_b_disabled;
        int32_t m_n_min_count_all;
        int32_t m_n_max_count_all;
        int32_t m_n_min_factor_all;
        int32_t m_n_max_factor_all;
        CUtlSymbolLarge m_isz_npcclassname_1;
        int32_t m_n_npcstate_1;
        bool m_b_invert_state_1;
        int32_t m_n_min_count_1;
        int32_t m_n_max_count_1;
        int32_t m_n_min_factor_1;
        int32_t m_n_max_factor_1;
        float m_fl_default_dist_1;
        CUtlSymbolLarge m_isz_npcclassname_2;
        int32_t m_n_npcstate_2;
        bool m_b_invert_state_2;
        int32_t m_n_min_count_2;
        int32_t m_n_max_count_2;
        int32_t m_n_min_factor_2;
        int32_t m_n_max_factor_2;
        float m_fl_default_dist_2;
        CUtlSymbolLarge m_isz_npcclassname_3;
        int32_t m_n_npcstate_3;
        bool m_b_invert_state_3;
        int32_t m_n_min_count_3;
        int32_t m_n_max_count_3;
        int32_t m_n_min_factor_3;
        int32_t m_n_max_factor_3;
        float m_fl_default_dist_3;
    };

    struct ccsplayer_radioservices_t {
        GameTime_t m_fl_got_hostage_talk_timer;
        GameTime_t m_fl_defusing_talk_timer;
        GameTime_t m_fl_c4_plant_talk_timer;
        GameTime_t m_fl_radio_token_slots;
        bool m_b_ignore_radio;
    };

    struct cragdollconstraint_t {
        float m_xmin;
        float m_xmax;
        float m_ymin;
        float m_ymax;
        float m_zmin;
        float m_zmax;
        float m_xfriction;
        float m_yfriction;
        float m_zfriction;
    };

    struct cenvsplash_t {
        float m_fl_scale;
    };

    struct cpointcameravfov_t {
        float m_fl_vertical_fov;
    };

    struct cfuncmovelinear_t {
        MoveLinearAuthoredPos_t m_authored_position;
        QAngle m_ang_move_entity_space;
        vector3d_t m_vec_move_dir_parent_space;
        CGameSoundEventName m_sound_start;
        CGameSoundEventName m_sound_stop;
        CUtlSymbolLarge m_current_sound;
        float m_fl_block_damage;
        float m_fl_start_position;
        CEntityIOOutput m_on_fully_open;
        CEntityIOOutput m_on_fully_closed;
        float m_fl_speed;
        bool m_b_create_movable_nav_mesh;
        bool m_b_allow_movable_nav_mesh_docking_on_entire_entity;
        bool m_b_create_nav_obstacle;
    };

    struct cprecipitationvdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_effect;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_puddle_effect;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_particle_precipitation_post_effect;
        float m_fl_inner_distance;
        ParticleAttachment_t m_n_attach_type;
        bool m_b_batch_same_volume_type;
        int32_t m_n_rtenv_cp;
        int32_t m_n_rtenv_cpcomponent;
        CUtlString m_sz_modifier;
        int32_t m_n_use_snapshot_from_surface_graph;
        PrecipitationFilter_t m_snapshot_filter;
    };

    struct cpulsecell_waitforobservable_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_ResumePoint m_on_true;
    };

    struct cscriptitem_t {
        MoveType_t m_move_type_override;
    };

    struct cbasetrigger_t {
        CEntityIOOutput m_on_start_touch;
        CEntityIOOutput m_on_start_touch_all;
        CEntityIOOutput m_on_end_touch;
        CEntityIOOutput m_on_end_touch_all;
        CEntityIOOutput m_on_touching;
        CEntityIOOutput m_on_touching_each_entity;
        CEntityIOOutput m_on_not_touching;
        CEntityIOOutput m_on_touching_changed;
        CUtlVector_CHandle_CBaseEntity_ m_h_touching_entities;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseFilter_ m_h_filter;
        bool m_b_disabled;
        bool m_b_use_async_queries;
    };

    struct cpointpush_t {
        bool m_b_enabled;
        float m_fl_magnitude;
        float m_fl_radius;
        float m_fl_inner_radius;
        float m_fl_cone_of_influence;
        CUtlSymbolLarge m_isz_filter_name;
        CHandle_CBaseFilter_ m_h_filter;
    };

    struct cpulsecell_step_entfire_t {
        CUtlString m_input;
    };

    struct cplayerping_t {
        CHandle_CCSPlayerPawn_ m_h_player;
        CHandle_CBaseEntity_ m_h_pinged_entity;
        int32_t m_i_type;
        bool m_b_urgent;
        char m_sz_place_name;
    };

    struct chitboxcomponent_t {
        float m_fl_bounds_expand_radius;
    };

    struct cropekeyframe_t {
        uint16_t m_rope_flags;
        CUtlSymbolLarge m_i_next_link_name;
        int16_t m_slack;
        float m_width;
        float m_texture_scale;
        uint8_t m_n_segments;
        bool m_b_constrain_between_endpoints;
        CUtlSymbolLarge m_str_rope_material_model;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_i_rope_material_model_index;
        uint8_t m_subdiv;
        uint8_t m_n_change_count;
        int16_t m_rope_length;
        uint8_t m_f_locked_points;
        bool m_b_created_from_map_file;
        float m_fl_scroll_speed;
        bool m_b_start_point_valid;
        bool m_b_end_point_valid;
        CHandle_CBaseEntity_ m_h_start_point;
        CHandle_CBaseEntity_ m_h_end_point;
        AttachmentHandle_t m_i_start_attachment;
        AttachmentHandle_t m_i_end_attachment;
    };

    struct cbasecombatcharacter_t {
        bool m_b_force_server_ragdoll;
        CNetworkUtlVectorBase_CHandle_CEconWearable_ m_h_my_wearables;
        float m_impact_energy_scale;
        bool m_b_apply_stress_damage;
        bool m_b_death_events_dispatched;
        CUtlVector_RelationshipOverride_t_ m_vec_relationships;
        CUtlSymbolLarge m_str_relationships;
        Hull_t m_e_hull;
        uint32_t m_n_nav_hull_idx;
        CMovementStatsProperty m_movement_stats;
    };

    struct clogicgamestatereport_t {
        bool m_b_disabled;
    };

    struct serverauthoritativeweaponslot_t_t {
        uint16_t un_class;
        uint16_t un_slot;
        uint16_t un_item_def_idx;
    };

    struct clogicrelay_t {
        CEntityIOOutput m_on_spawn;
        CEntityIOOutput m_on_trigger;
        bool m_b_disabled;
        bool m_b_wait_for_refire;
        bool m_b_trigger_once;
        bool m_b_fast_retrigger;
        bool m_b_passthough_caller;
    };

    struct sequencehistory_t_t {
        HSequence m_h_sequence;
        GameTime_t m_fl_seq_start_time;
        float m_fl_seq_fixed_cycle;
        AnimLoopMode_t m_n_seq_loop_mode;
        float m_fl_playback_rate;
        float m_fl_cycles_per_second;
    };

    struct cpulse_outflowconnection_t {
        PulseSymbol_t m_source_outflow_name;
        PulseRuntimeChunkIndex_t m_n_dest_chunk;
        int32_t m_n_instruction;
        PulseRegisterMap_t m_outflow_register_map;
    };

    struct ctestpulseio_t {
        CEntityIOOutput m_on_variant_void;
        CEntityOutputTemplate_bool_ m_on_variant_bool;
        CEntityOutputTemplate_int32_t_ m_on_variant_int;
        CEntityOutputTemplate_float_ m_on_variant_float;
        CEntityOutputTemplate_CUtlSymbolLarge_ m_on_variant_string;
        CEntityOutputTemplate_Color_ m_on_variant_color;
        CEntityOutputTemplate_Vector_ m_on_variant_vector;
        bool m_b_allow_empty_inputs;
        CTestPulseIOComponent_Derived m_test_component;
        CEntityIOOutput m_on_internal_test_void;
        CEntityOutputTemplate_bool_ m_on_internal_test_bool;
        CEntityOutputTemplate_int32_t_ m_on_internal_test_int;
        CEntityOutputTemplate_float_ m_on_internal_test_float;
        CEntityOutputTemplate_CUtlSymbolLarge_ m_on_internal_test_string;
        CEntityOutputTemplate_Color_ m_on_internal_test_color;
        CEntityOutputTemplate_Vector_ m_on_internal_test_vector;
        CEntityOutputTemplate_CEntityNameString_ m_on_internal_test_entity_name;
        CEntityOutputTemplate_CHandle_CBaseEntity_ m_on_internal_test_entity_handle;
        CEntityOutputTemplate_TestInputOutputCombinationsEnum_t_ m_on_internal_test_schema_enum;
        CEntityOutputTemplate_CTestPulseIO_FloatStringArgs_t_ m_on_internal_test_float_string;
        CEntityOutputTemplate_CTestPulseIO_EntityNameStringArgs_t_ m_on_internal_test_entity_name_string;
        CEntityOutputTemplate_CTestPulseIO_EntityHandleIntArgs_t_ m_on_internal_test_entity_handle_int;
        CEntityOutputTemplate_CTestPulseIO_ThreeStringArgs_t_ m_on_internal_test_string_string_string;
    };

    struct cpointentityfinder_t {
        CHandle_CBaseEntity_ m_h_entity;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseFilter_ m_h_filter;
        CUtlSymbolLarge m_i_ref_name;
        CHandle_CBaseEntity_ m_h_reference;
        EntFinderMethod_t m_find_method;
        CEntityIOOutput m_on_found_entity;
    };

    struct cpulsegraphdef_t {
        PulseSymbol_t m_domain_identifier;
        CPulseValueFullType m_domain_sub_type;
        PulseSymbol_t m_parent_map_name;
        PulseSymbol_t m_parent_xml_name;
        CUtlVector_CPulse_Chunk_ m_chunks;
        CUtlVector_CPulseCell_Base_ m_cells;
        CUtlVector_CPulse_Variable_ m_vars;
        CUtlVector_CPulse_TempVarBankDefinition_ m_temp_var_banks;
        CUtlVector_CPulse_PublicOutput_ m_public_outputs;
        CUtlVector_CPulse_InvokeBinding_ m_invoke_bindings;
        CUtlVector_CPulse_CallInfo_ m_call_infos;
        CUtlVector_CPulse_Constant_ m_constants;
        CUtlVector_CPulse_DomainValue_ m_domain_values;
        CUtlVector_CPulse_BlackboardReference_ m_blackboard_references;
        CUtlVector_CPulse_OutputConnection_ m_output_connections;
    };

    struct cknife_t {
        bool m_b_first_attack;
    };

    struct ccsplayer_hostageservices_t {
        CHandle_CBaseEntity_ m_h_carried_hostage;
        CHandle_CBaseEntity_ m_h_carried_hostage_prop;
    };

    struct crendercomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        bool m_b_is_rendering_with_view_models;
        uint32_t m_n_splitscreen_flags;
        bool m_b_enable_rendering;
        bool m_b_interpolation_ready_to_draw;
    };

    struct ctriggersoundscape_t {
        CHandle_CEnvSoundscapeTriggerable_ m_h_soundscape;
        CUtlSymbolLarge m_soundscape_name;
        CUtlVector_CHandle_CBasePlayerPawn_ m_spectators;
    };

    struct cpulsecell_outflow_playvoline__cursorstate_t_t {
        CHandle_CBaseEntity_ m_scene_instance;
    };

    struct chostageexpressershim_t {
        CAI_Expresser* m_p_expresser;
    };

    struct cpointchildmodifier_t {
        bool m_b_orphan_instead_of_deleting_children_on_remove;
    };

    struct ccsplayerlegacyjump_t {
        bool m_b_old_jump_pressed;
        float m_fl_jump_pressed_time;
    };

    struct cshatterglassshardphysics_t {
        uint32_t m_h_parent_shard;
        shard_model_desc_t m_shard_desc;
        ShatterGlassEntityPoolState_t m_n_pool_state;
        bool m_b_touched_by_player;
    };

    struct cpathparticlerope_t {
        bool m_b_start_active;
        float m_fl_max_simulation_time;
        CUtlSymbolLarge m_isz_effect_name;
        CUtlVector_CUtlSymbolLarge_ m_path_nodes_name;
        float m_fl_particle_spacing;
        float m_fl_slack;
        float m_fl_radius;
        color_t m_color_tint;
        int32_t m_n_effect_state;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_i_effect_index;
        CNetworkUtlVectorBase_Vector_ m_path_nodes_position;
        CNetworkUtlVectorBase_Vector_ m_path_nodes_tangent_in;
        CNetworkUtlVectorBase_Vector_ m_path_nodes_tangent_out;
        CNetworkUtlVectorBase_Vector_ m_path_nodes_color;
        CNetworkUtlVectorBase_bool_ m_path_nodes_pin_enabled;
        CNetworkUtlVectorBase_float_ m_path_nodes_radius_scale;
    };

    struct ccredits_t {
        CEntityIOOutput m_on_credits_done;
        bool m_b_rolled_outro_credits;
        float m_fl_logo_length;
    };

    struct cfishpool_t {
        int32_t m_fish_count;
        float m_max_range;
        float m_swim_depth;
        float m_water_level;
        bool m_is_dormant;
        CUtlVector_CHandle_CFish_ m_fishes;
        CountdownTimer m_vis_timer;
    };

    struct cplayer_movementservices_t {
        int32_t m_n_impulse;
        CInButtonState m_n_buttons;
        uint64_t m_n_queued_button_down_mask;
        uint64_t m_n_queued_button_change_mask;
        uint64_t m_n_button_double_pressed;
        uint32_t m_p_button_pressed_cmd_number;
        uint32_t m_n_last_command_number_processed;
        uint64_t m_n_toggle_button_down_mask;
        float m_fl_cmd_forward_move;
        float m_fl_cmd_left_move;
        float m_fl_cmd_up_move;
        float m_fl_maxspeed;
        float m_arr_force_subtick_move_when;
        float m_fl_forward_move;
        float m_fl_left_move;
        float m_fl_up_move;
        vector3d_t m_vec_last_movement_impulses;
        QAngle m_vec_old_view_angles;
    };

    struct cbreakableprop_t {
        CPropDataComponent m_cprop_data_component;
        CEntityIOOutput m_on_start_death;
        CEntityIOOutput m_on_break;
        CEntityOutputTemplate_float_ m_on_health_changed;
        CEntityIOOutput m_on_take_damage;
        float m_impact_energy_scale;
        int32_t m_i_min_health_dmg;
        QAngle m_preferred_carry_angles;
        float m_fl_pressure_delay;
        float m_fl_def_burst_scale;
        vector3d_t m_v_def_burst_offset;
        CHandle_CBaseEntity_ m_h_breaker;
        PerformanceMode_t m_performance_mode;
        GameTime_t m_fl_prevent_damage_before_time;
        BreakableContentsType_t m_breakable_contents_type;
        CUtlString m_str_breakable_contents_prop_group_override;
        CUtlString m_str_breakable_contents_particle_override;
        bool m_b_has_break_pieces_or_commands;
        float m_explode_damage;
        float m_explode_radius;
        CGlobalSymbol m_s_explosion_type;
        float m_explosion_delay;
        CUtlSymbolLarge m_explosion_buildup_sound;
        CUtlSymbolLarge m_explosion_custom_effect;
        CUtlSymbolLarge m_explosion_custom_sound;
        CUtlSymbolLarge m_explosion_modifier;
        CHandle_CBasePlayerPawn_ m_h_physics_attacker;
        GameTime_t m_fl_last_physics_influence_time;
        float m_fl_default_fade_scale;
        CHandle_CBaseEntity_ m_h_last_attacker;
        CUtlSymbolLarge m_isz_punt_sound;
        bool m_b_use_punt_sound;
        bool m_b_original_block_los;
    };

    struct clightentity_t {
        CLightComponent* m_clight_component;
    };

    struct cinfodynamicshadowhintbox_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
    };

    struct cbaseanimgraphcontroller_t {
        AnimationAlgorithm_t m_n_animation_algorithm;
        ExternalAnimGraphHandle_t m_n_next_external_graph_handle;
        CNetworkUtlVectorBase_CGlobalSymbol_ m_vec_secondary_skeleton_slot_ids;
        CNetworkUtlVectorBase_CHandle_CBaseAnimGraph_ m_vec_secondary_skeletons;
        int32_t m_n_secondary_skeleton_master_count;
        float m_fl_sound_sync_time;
        uint32_t m_n_active_ikchain_mask;
        HSequence m_h_sequence;
        GameTime_t m_fl_seq_start_time;
        float m_fl_seq_fixed_cycle;
        AnimLoopMode_t m_n_anim_loop_mode;
        CNetworkedQuantizedFloat m_fl_playback_rate;
        SequenceFinishNotifyState_t m_n_notify_state;
        bool m_b_networked_animation_inputs_changed;
        bool m_b_networked_sequence_changed;
        bool m_b_last_update_skipped;
        bool m_b_sequence_finished;
        GameTick_t m_n_prev_anim_update_tick;
        CStrongHandle_InfoForResourceTypeCNmGraphDefinition_ m_h_graph_definition_ag2;
        CUtlVectorEmbeddedNetworkVar_AnimGraph2SerializedPoseRecipeSlot_t_ m_serialize_pose_recipe_ag2_slots;
        CNetworkUtlVectorBase_uint8_t_ m_serialize_pose_recipe_ag2_dynamic;
        uint32_t m_n_serialize_pose_recipe_ag2_active_slot;
        int32_t m_n_serialize_pose_recipe_version_ag2;
        int32_t m_n_server_graph_instance_iteration;
        int32_t m_n_server_serialization_context_iteration;
        ResourceId_t m_primary_graph_id;
        CNetworkUtlVectorBase_ResourceId_t_ m_vec_external_graph_ids;
        CNetworkUtlVectorBase_ResourceId_t_ m_vec_external_clip_ids;
        CGlobalSymbol m_s_anim_graph2_identifier;
        CAnimGraph2InstancePtr m_p_graph_instance_ag2;
        CExternalAnimGraphList m_vec_external_graphs;
    };

    struct animgraph2serializedposerecipeslot_t_t {
        CUtlBinaryBlock m_topology;
    };

    struct cbuoyancyhelper_t {
        IPhysicsMotionController* m_p_controller;
        CUtlStringToken m_n_fluid_type;
        float m_fl_fluid_density;
        float m_fl_neutrally_buoyant_gravity;
        float m_fl_neutrally_buoyant_linear_damping;
        float m_fl_neutrally_buoyant_angular_damping;
        bool m_b_neutrally_buoyant;
        CUtlVector_float_ m_vec_fraction_of_wheel_submerged_for_wheel_friction;
        CUtlVector_float_ m_vec_wheel_friction_scales;
        CUtlVector_float_ m_vec_fraction_of_wheel_submerged_for_wheel_drag;
        CUtlVector_float_ m_vec_wheel_drag;
    };

    struct cornamentprop_t {
        CUtlSymbolLarge m_initial_owner;
    };

    struct crectlight_t {
        bool m_b_show_light;
    };

    struct cfiltermultiple_t {
        filter_t m_n_filter_type;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseEntity_ m_h_filter;
    };

    struct ccsplayerresource_t {
        bool m_b_hostage_alive;
        bool m_is_hostage_following_someone;
        CEntityIndex m_i_hostage_entity_ids;
        VectorWS m_bombsite_center_a;
        VectorWS m_bombsite_center_b;
        int32_t m_hostage_rescue_x;
        int32_t m_hostage_rescue_y;
        int32_t m_hostage_rescue_z;
        bool m_b_end_match_next_map_all_voted;
        bool m_found_goal_positions;
    };

    struct cpulsecell_firecursors_t {
        CUtlVector_CPulse_OutflowConnection_ m_outflows;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cfuncnavblocker_t {
        bool m_b_disabled;
        int32_t m_n_blocked_team_number;
    };

    struct cmoverpathnode_t {
        CEntityOutputTemplate_CUtlString_ m_on_start_from_or_in_segment;
        CEntityOutputTemplate_CUtlString_ m_on_stopped_at_or_in_segment;
        CEntityOutputTemplate_CUtlString_ m_on_pass_through;
        CEntityOutputTemplate_CUtlString_ m_on_pass_through_forward;
        CEntityOutputTemplate_CUtlString_ m_on_pass_through_reverse;
    };

    struct cenvsoundscape_t {
        CEntityIOOutput m_on_play;
        float m_fl_radius;
        CGameSoundEventName m_sound_event_name;
        bool m_b_override_with_event;
        int32_t m_soundscape_index;
        int32_t m_soundscape_entity_list_id;
        CUtlSymbolLarge m_position_names;
        CHandle_CEnvSoundscape_ m_h_proxy_soundscape;
        bool m_b_disabled;
        CUtlSymbolLarge m_soundscape_name;
        uint32_t m_sound_event_hash;
    };

    struct cfuncbrush_t {
        BrushSolidities_e m_i_solidity;
        int32_t m_i_disabled;
        bool m_b_solid_bsp;
        CUtlSymbolLarge m_isz_excluded_class;
        bool m_b_invert_exclusion;
        bool m_b_scripted_movement;
    };

    struct cbodycomponentpoint_t {
        CGameSceneNode m_scene_node;
    };

    struct cphysbox_t {
        int32_t m_damage_type;
        int32_t m_damage_to_enable_motion;
        float m_fl_force_to_enable_motion;
        vector3d_t m_v_hover_pose_position;
        QAngle m_ang_hover_pose_angles;
        bool m_b_not_solid_to_world;
        bool m_b_enable_use_output;
        HoverPoseFlags_t m_n_hover_pose_flags;
        float m_fl_touch_output_per_entity_delay;
        CUtlSymbolLarge m_isz_collision_group;
        CUtlSymbolLarge m_isz_interacts_as;
        CUtlSymbolLarge m_isz_interacts_with;
        CUtlSymbolLarge m_isz_interacts_exclude;
        CEntityIOOutput m_on_damaged;
        CEntityIOOutput m_on_awakened;
        CEntityIOOutput m_on_motion_enabled;
        CEntityIOOutput m_on_player_use;
        CEntityIOOutput m_on_start_touch;
    };

    struct csoundeventaabbentity_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct cpulsecell_timeline__timelineevent_t_t {
        float m_fl_time_from_previous;
        CPulse_OutflowConnection m_event_outflow;
    };

    struct comnilight_t {
        float m_fl_inner_angle;
        float m_fl_outer_angle;
        bool m_b_show_light;
    };

    struct ctriggervolume_t {
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseFilter_ m_h_filter;
    };

    struct cbtnodecondition_t {
        bool m_b_negated;
    };

    struct cpulsecell_intervaltimer__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
        float m_fl_wait_interval;
        float m_fl_wait_interval_high;
        bool m_b_complete_on_next_wake;
    };

    struct cenvexplosion_t {
        int32_t m_i_magnitude;
        float m_fl_player_damage;
        int32_t m_i_radius_override;
        float m_fl_inner_radius;
        float m_fl_damage_force;
        CHandle_CBaseEntity_ m_h_inflictor;
        DamageTypes_t m_i_custom_damage_type;
        bool m_b_has_custom_damage_type;
        bool m_b_create_debris;
        CUtlSymbolLarge m_isz_custom_effect_name;
        CUtlSymbolLarge m_isz_custom_sound_name;
        bool m_b_suppress_particle_impulse;
        Class_T m_i_class_ignore;
        Class_T m_i_class_ignore2;
        CUtlSymbolLarge m_isz_entity_ignore_name;
        CHandle_CBaseEntity_ m_h_entity_ignore;
    };

    struct outflowwithrequirements_t_t {
        CPulse_OutflowConnection m_connection;
        PulseDocNodeID_t m_destination_flow_node_id;
        CUtlVector_PulseDocNodeID_t_ m_requirement_node_ids;
        CUtlVector_int32_t_ m_n_cursor_state_block_index;
    };

    struct ctestpulseio__threestringargs_t_t {
        CUtlString str_arg1;
        CUtlString str_arg2;
        CUtlString str_arg3;
    };

    struct cfootstepcontrol_t {
        CUtlSymbolLarge m_source;
        CUtlSymbolLarge m_destination;
    };

    struct ccsplayer_itemservices_t {
        bool m_b_has_defuser;
        bool m_b_has_helmet;
    };

    struct cpulsecell_value_gradient_t {
        CColorGradient m_gradient;
    };

    struct cparticlesystem_t {
        char m_sz_snapshot_file_name;
        bool m_b_active;
        bool m_b_frozen;
        float m_fl_freeze_transition_duration;
        int32_t m_n_stop_type;
        bool m_b_animate_during_gameplay_pause;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_i_effect_index;
        GameTime_t m_fl_start_time;
        float m_fl_pre_sim_time;
        Vector m_v_server_control_points;
        uint8_t m_i_server_control_point_assignments;
        CHandle_CBaseEntity_ m_h_control_point_ents;
        bool m_b_data_string_localized;
        CUtlString m_str_data_string;
        bool m_b_no_save;
        bool m_b_no_freeze;
        bool m_b_no_ramp;
        bool m_b_start_active;
        CUtlSymbolLarge m_isz_effect_name;
        CUtlSymbolLarge m_isz_control_point_names;
        int32_t m_n_data_cp;
        vector3d_t m_vec_data_cpvalue;
        int32_t m_n_tint_cp;
        color_t m_clr_tint;
    };

    struct ctriggerbrush_t {
        CEntityIOOutput m_on_start_touch;
        CEntityIOOutput m_on_end_touch;
        CEntityIOOutput m_on_use;
        int32_t m_i_input_filter;
        int32_t m_i_dont_message_parent;
    };

    struct intervaltimer_t {
        GameTime_t m_timestamp;
        WorldGroupId_t m_n_world_group_id;
    };

    struct audioparams_t_t {
        VectorWS local_sound;
        int32_t soundscape_index;
        uint8_t local_bits;
        int32_t soundscape_entity_list_index;
        uint32_t sound_event_hash;
    };

    struct csoundeventmultipointentity_t {
        int32_t m_i_count_max;
        float m_fl_distance_max;
        float m_fl_dist_max_sqr;
        float m_fl_dot_product_max;
        bool m_b_playing;
    };

    struct csoundareaentitybase_t {
        bool m_b_disabled;
        CUtlSymbolLarge m_isz_sound_area_type;
        vector3d_t m_v_pos;
    };

    struct ctimeline_t {
        float m_fl_values;
        int32_t m_n_value_counts;
        int32_t m_n_bucket_count;
        float m_fl_interval;
        float m_fl_final_value;
        TimelineCompression_t m_n_compression_type;
        bool m_b_stopped;
    };

    struct ctestpulseio__floatstringargs_t_t {
        float fl_out_float;
        CUtlSymbolLarge str_out_string;
    };

    struct countdowntimer_t {
        float m_duration;
        GameTime_t m_timestamp;
        float m_timescale;
        WorldGroupId_t m_n_world_group_id;
    };

    struct cnoisestreamdata_t {
        NoiseStreamDef_t m_stream;
    };

    struct pulsenodedynamicoutflows_t__dynamicoutflow_t_t {
        CGlobalSymbol m_outflow_id;
        CPulse_OutflowConnection m_connection;
    };

    struct cbeam_t {
        float m_fl_frame_rate;
        float m_fl_hdrcolor_scale;
        GameTime_t m_fl_fire_time;
        float m_fl_damage;
        uint8_t m_n_num_beam_ents;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_base_material;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_n_halo_index;
        BeamType_t m_n_beam_type;
        uint32_t m_n_beam_flags;
        CHandle_CBaseEntity_ m_h_attach_entity;
        AttachmentHandle_t m_n_attach_index;
        float m_f_width;
        float m_f_end_width;
        float m_f_fade_length;
        float m_f_halo_scale;
        float m_f_amplitude;
        float m_f_start_frame;
        float m_f_speed;
        float m_fl_frame;
        bool m_b_turned_off;
        VectorWS m_vec_end_pos;
        CHandle_CBaseEntity_ m_h_end_entity;
        int32_t m_n_dissolve_type;
    };

    struct clogiceventlistener_t {
        CUtlString m_str_event_name;
        bool m_b_is_enabled;
        int32_t m_n_team;
        CEntityOutputTemplate_CUtlString_ m_on_event_fired;
    };

    struct cbaseplayerpawn_t {
        CPlayer_WeaponServices* m_p_weapon_services;
        CPlayer_ItemServices* m_p_item_services;
        CPlayer_AutoaimServices* m_p_autoaim_services;
        CPlayer_ObserverServices* m_p_observer_services;
        CPlayer_WaterServices* m_p_water_services;
        CPlayer_UseServices* m_p_use_services;
        CPlayer_FlashlightServices* m_p_flashlight_services;
        CPlayer_CameraServices* m_p_camera_services;
        CPlayer_MovementServices* m_p_movement_services;
        CUtlVectorEmbeddedNetworkVar_ViewAngleServerChange_t_ m_server_view_angle_changes;
        QAngle v_angle;
        QAngle v_angle_previous;
        uint32_t m_i_hide_hud;
        sky3dparams_t m_skybox3d;
        GameTime_t m_f_time_last_hurt;
        GameTime_t m_fl_death_time;
        GameTime_t m_f_next_suicide_time;
        bool m_f_init_hud;
        CAI_Expresser* m_p_expresser;
        CHandle_CBasePlayerController_ m_h_controller;
        CHandle_CBasePlayerController_ m_h_default_controller;
        float m_f_hltv_replay_delay;
        float m_f_hltv_replay_end;
        CEntityIndex m_i_hltv_replay_entity;
        CUtlVector_sndopvarlatchdata_t_ m_snd_opvar_latch_data;
    };

    struct weaponpurchasecount_t_t {
        uint16_t m_n_item_def_index;
        uint16_t m_n_count;
    };

    struct filterhealth_t {
        bool m_b_adrenaline_active;
        int32_t m_i_health_min;
        int32_t m_i_health_max;
    };

    struct cmathcolorblend_t {
        float m_fl_in_min;
        float m_fl_in_max;
        color_t m_out_color1;
        color_t m_out_color2;
        CEntityOutputTemplate_Color_ m_out_value;
    };

    struct cshower_t {
        float m_fl_speed;
    };

    struct cpulsecell_inflow_graphhook_t {
        PulseSymbol_t m_hook_name;
    };

    struct cscriptnavblocker_t {
        vector3d_t m_v_extent;
    };

    struct csoundopvarsetdomeentity_t {
        CUtlVector_Vector_ m_ar_directions;
        CUtlVector_float_ m_ar_openness;
        CUtlVector_int32_t_ m_ar_neighbors;
        int32_t m_n_current_index;
        CUtlVector_int32_t_ m_ar_cluster_parent;
        CUtlVector_int32_t_ m_ar_cluster_size;
        CUtlVector_float_ m_ar_cluster_weight;
        CUtlVector_Vector_ m_ar_cluster_dir_sum;
        int32_t m_n_cluster_index;
        float m_fl_clustered_openness;
        vector3d_t m_v_cluster_direction;
        vector3d_t m_v_smoothed_open_dir;
        int32_t m_n_dir_warmup_thinks_remaining;
        VectorWS m_v_last_trace_origin;
        bool m_b_trace_origin_valid;
        int32_t m_n_catch_up_thinks_remaining;
        bool m_b_discontinuity_pending;
        float m_fl_smoothed_openness;
        GameTime_t m_fl_last_smooth_time;
        float m_fl_size;
        int32_t m_n_total_directions;
        int32_t m_n_traces_per_frame;
        bool m_b_dome_mode;
        bool m_b_multi_wall;
        float m_fl_wall_transmission;
        int32_t m_n_cluster_k;
        float m_fl_cluster_p;
        float m_fl_cluster_blend;
        float m_fl_openness_exponent;
        float m_fl_shoulder_exponent;
        float m_fl_smooth_half_life;
    };

    struct ctriggeractiveweapondetect_t {
        CEntityIOOutput m_on_touched_active_weapon;
        CUtlSymbolLarge m_isz_weapon_class_name;
    };

    struct shard_model_desc_t_t {
        int32_t m_n_model_id;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material_base;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material_damage_overlay;
        ShardSolid_t m_solid;
        vector2d_t m_vec_panel_size;
        vector2d_t m_vec_stress_position_a;
        vector2d_t m_vec_stress_position_b;
        CNetworkUtlVectorBase_Vector2D_ m_vec_panel_vertices;
        CNetworkUtlVectorBase_Vector4D_ m_v_initial_panel_vertices;
        float m_fl_glass_half_thickness;
        bool m_b_has_parent;
        bool m_b_parent_frozen;
        CUtlStringToken m_surface_prop_string_token;
    };

    struct cplayerspraydecal_t {
        int32_t m_n_unique_id;
        uint32_t m_un_account_id;
        uint32_t m_un_trace_id;
        uint32_t m_rt_gc_time;
        VectorWS m_vec_end_pos;
        VectorWS m_vec_start;
        vector3d_t m_vec_left;
        vector3d_t m_vec_normal;
        int32_t m_n_player;
        int32_t m_n_entity;
        int32_t m_n_hitbox;
        float m_fl_creation_time;
        int32_t m_n_tint_id;
        uint8_t m_n_version;
        uint8_t m_ub_signature;
    };

    struct cfuncwater_t {
        CBuoyancyHelper m_buoyancy_helper;
    };

    struct ccsgamemoderules_t {
        CNetworkVarChainer __m_p_chain_entity;
    };

    struct cpulsecell_outflow_playvcd__vcdrequirementinfo_t_t {
        int32_t m_n_event_id;
        CPulse_OutflowConnection m_outflow;
    };

    struct ceconentity_t {
        CAttributeContainer m_attribute_manager;
        uint32_t m_original_owner_xuid_low;
        uint32_t m_original_owner_xuid_high;
        int32_t m_n_fallback_paint_kit;
        int32_t m_n_fallback_seed;
        float m_fl_fallback_wear;
        int32_t m_n_fallback_stat_trak;
        CHandle_CBaseEntity_ m_h_old_providee;
        int32_t m_i_old_owner_class;
    };

    struct ctanktargetchange_t {
        CVariantBase_CVariantDefaultAllocator_ m_new_target;
        CUtlSymbolLarge m_new_target_name;
    };

    struct ccsplayer_waterservices_t {
        GameTime_t m_next_drown_damage_time;
        int32_t m_n_drown_dmg_rate;
        GameTime_t m_air_finished_time;
        float m_fl_water_jump_time;
        vector3d_t m_vec_water_jump_vel;
        float m_fl_swim_sound_time;
    };

    struct clogicdistancecheck_t {
        CUtlSymbolLarge m_isz_entity_a;
        CUtlSymbolLarge m_isz_entity_b;
        float m_fl_zone1_distance;
        float m_fl_zone2_distance;
        CEntityIOOutput m_in_zone1;
        CEntityIOOutput m_in_zone2;
        CEntityIOOutput m_in_zone3;
    };

    struct cenvcombinedlightprobevolume_t {
        color_t m_entity_color;
        float m_entity_fl_brightness;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_cubemap_texture;
        bool m_entity_b_custom_cubemap_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_ambient_cube;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sdf;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_dc;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_l1;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_indices_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_scalars_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_shadows_texture;
        vector3d_t m_entity_v_box_mins;
        vector3d_t m_entity_v_box_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_env_cube_map_array_index;
        int32_t m_entity_n_priority;
        bool m_entity_b_start_disabled;
        float m_entity_fl_edge_fade_dist;
        vector3d_t m_entity_v_edge_fade_dists;
        int32_t m_entity_n_light_probe_size_x;
        int32_t m_entity_n_light_probe_size_y;
        int32_t m_entity_n_light_probe_size_z;
        int32_t m_entity_n_light_probe_atlas_x;
        int32_t m_entity_n_light_probe_atlas_y;
        int32_t m_entity_n_light_probe_atlas_z;
        bool m_entity_b_enabled;
    };

    struct viewangleserverchange_t_t {
        FixAngleSet_t n_type;
        QAngle q_angle;
        uint32_t n_index;
    };

    struct clogicdistanceautosave_t {
        CUtlSymbolLarge m_isz_target_entity;
        float m_fl_distance_to_player;
        bool m_b_force_new_level_unit;
        bool m_b_check_cough;
        bool m_b_think_dangerous;
        float m_fl_dangerous_time;
    };

    struct clogicbranch_t {
        bool m_b_in_value;
        CUtlVector_CHandle_CBaseEntity_ m_listeners;
        CEntityIOOutput m_on_true;
        CEntityIOOutput m_on_false;
    };

    struct cpulsecell_outflow_scriptedsequence_t {
        CUtlString m_sz_sync_group;
        int32_t m_n_expected_num_sequences_in_sync_group;
        bool m_b_ensure_on_navmesh_on_finish;
        bool m_b_dont_teleport_at_end;
        bool m_b_disallow_interrupts;
        PulseScriptedSequenceData_t m_scripted_sequence_data_main;
        CUtlVector_PulseScriptedSequenceData_t_ m_vec_additional_actors;
        CPulse_ResumePoint m_on_finished;
        CUtlVector_CPulse_OutflowConnection_ m_triggers;
    };

    struct cfunctrackchange_t {
        CHandle_CPathTrack_ m_track_top;
        CHandle_CPathTrack_ m_track_bottom;
        CHandle_CFuncTrackTrain_ m_train;
        CUtlSymbolLarge m_track_top_name;
        CUtlSymbolLarge m_track_bottom_name;
        CUtlSymbolLarge m_train_name;
        TRAIN_CODE m_code;
        int32_t m_target_state;
        int32_t m_use;
    };

    struct cfunctracktrain_t {
        CHandle_CPathTrack_ m_ppath;
        float m_length;
        vector3d_t m_v_pos_prev;
        QAngle m_ang_prev;
        float m_fl_speed;
        vector3d_t m_control_mins;
        vector3d_t m_control_maxs;
        VectorWS m_last_block_pos;
        int32_t m_last_block_tick;
        float m_fl_volume;
        float m_fl_bank;
        float m_old_speed;
        float m_fl_block_damage;
        float m_height;
        float m_max_speed;
        float m_dir;
        CGameSoundEventName m_isz_sound_move;
        CGameSoundEventName m_isz_sound_move_ping;
        CGameSoundEventName m_isz_sound_start;
        CGameSoundEventName m_isz_sound_stop;
        CGameSoundEventName m_str_path_target;
        float m_fl_move_sound_min_duration;
        float m_fl_move_sound_max_duration;
        GameTime_t m_fl_next_move_sound_time;
        float m_fl_move_sound_min_pitch;
        float m_fl_move_sound_max_pitch;
        TrainOrientationType_t m_e_orientation_type;
        TrainVelocityType_t m_e_velocity_type;
        CEntityIOOutput m_on_start;
        CEntityIOOutput m_on_next;
        CEntityIOOutput m_on_arrived_at_destination_node;
        bool m_b_manual_speed_changes;
        float m_fl_desired_speed;
        GameTime_t m_fl_speed_change_time;
        float m_fl_accel_speed;
        float m_fl_decel_speed;
        bool m_b_accel_to_speed;
        GameTime_t m_fl_next_mpsound_time;
    };

    struct cenvinstructorhint_t {
        CUtlSymbolLarge m_isz_name;
        CUtlSymbolLarge m_isz_replace_key;
        CUtlSymbolLarge m_isz_hint_target_entity;
        int32_t m_i_timeout;
        int32_t m_i_display_limit;
        CUtlSymbolLarge m_isz_icon_onscreen;
        CUtlSymbolLarge m_isz_icon_offscreen;
        CUtlSymbolLarge m_isz_caption;
        CUtlSymbolLarge m_isz_activator_caption;
        color_t m_color;
        float m_f_icon_offset;
        float m_f_range;
        uint8_t m_i_pulse_option;
        uint8_t m_i_alpha_option;
        uint8_t m_i_shake_option;
        bool m_b_static;
        bool m_b_no_offscreen;
        bool m_b_force_caption;
        int32_t m_i_instance_type;
        bool m_b_suppress_rest;
        CUtlSymbolLarge m_isz_binding;
        bool m_b_allow_no_draw_target;
        bool m_b_auto_start;
        bool m_b_local_player_only;
    };

    struct cenvwind_t {
        CEnvWindShared m_env_wind_shared;
    };

    struct csoundeventpathcornerentity_t {
        CUtlSymbolLarge m_isz_path_corner;
        CNetworkUtlVectorBase_SoundeventPathCornerPairNetworked_t_ m_vec_corner_pairs_networked;
    };

    struct ccsplayerbase_cameraservices_t {
        uint32_t m_i_fov;
        uint32_t m_i_fovstart;
        GameTime_t m_fl_fovtime;
        float m_fl_fovrate;
        CHandle_CBaseEntity_ m_h_zoom_owner;
        CUtlVector_CHandle_CBaseEntity_ m_h_trigger_fog_list;
        CHandle_CBaseEntity_ m_h_last_fog_trigger;
    };

    struct cpulsecell_applyanimgraphparam__cursorstate_t_t {
        CHandle_CBaseEntity_ h_entity;
        CUtlString s_param_name;
        bool b_apply_to_external_graphs;
    };

    struct cpulsecell_inflow_baseentrypoint_t {
        PulseRuntimeChunkIndex_t m_entry_chunk;
        PulseRegisterMap_t m_register_map;
    };

    struct cdynamicnavconnectionsvolume_t {
        CUtlSymbolLarge m_isz_connection_target;
        CUtlVector_DynamicVolumeDef_t_ m_vec_connections;
        CGlobalSymbol m_s_transition_type;
        bool m_b_connections_enabled;
        float m_fl_target_area_search_radius;
        float m_fl_update_distance;
        float m_fl_max_connection_distance;
    };

    struct cconstraintanchor_t {
        float m_mass_scale;
    };

    struct cpulsecell_waitforcursorswithtagbase_t {
        int32_t m_n_cursors_allowed_to_wait;
        CPulse_ResumePoint m_wait_complete;
    };

    struct ccsplayerpawn_t {
        CCSPlayer_BulletServices* m_p_bullet_services;
        CCSPlayer_HostageServices* m_p_hostage_services;
        CCSPlayer_BuyServices* m_p_buy_services;
        CCSPlayer_ActionTrackingServices* m_p_action_tracking_services;
        CCSPlayer_AimPunchServices* m_p_aim_punch_services;
        CCSPlayer_RadioServices* m_p_radio_services;
        CCSPlayer_DamageReactServices* m_p_damage_react_services;
        uint16_t m_n_character_def_index;
        bool m_b_has_female_voice;
        CUtlString m_str_voprefix;
        char m_sz_last_place_name;
        bool m_b_in_hostage_reset_zone;
        bool m_b_in_buy_zone;
        CUtlVector_CHandle_CBaseEntity_ m_touching_buy_zones;
        bool m_b_was_in_buy_zone;
        bool m_b_in_hostage_rescue_zone;
        bool m_b_in_bomb_zone;
        bool m_b_was_in_hostage_rescue_zone;
        int32_t m_i_retakes_offering;
        int32_t m_i_retakes_offering_card;
        bool m_b_retakes_has_defuse_kit;
        bool m_b_retakes_mvplast_round;
        int32_t m_i_retakes_mvpboost_item;
        loadout_slot_t m_retakes_mvpboost_extra_utility;
        GameTime_t m_fl_health_shot_boost_expiration_time;
        float m_fl_landing_time_seconds;
        bool m_b_is_buy_menu_open;
        GameTime_t m_last_land_time;
        bool m_b_on_ground_last_tick;
        int32_t m_i_player_locked;
        GameTime_t m_fl_time_of_last_injury;
        GameTime_t m_fl_next_spray_decal_time;
        bool m_b_next_spray_decal_time_expedited;
        int32_t m_n_ragdoll_damage_bone;
        vector3d_t m_v_ragdoll_damage_force;
        char m_sz_ragdoll_damage_weapon_name;
        bool m_b_ragdoll_damage_headshot;
        VectorWS m_v_ragdoll_server_origin;
        CEconItemView m_econ_gloves;
        uint8_t m_n_econ_gloves_changed;
        QAngle m_q_death_eye_angles;
        bool m_b_left_handed;
        GameTime_t m_f_switched_handedness_time;
        float m_fl_viewmodel_offset_x;
        float m_fl_viewmodel_offset_y;
        float m_fl_viewmodel_offset_z;
        float m_fl_viewmodel_fov;
        bool m_b_is_walking;
        float m_f_last_given_defuser_time;
        float m_f_last_given_bomb_time;
        float m_fl_dealt_damage_to_enemy_most_recent_timestamp;
        uint32_t m_i_display_history_bits;
        float m_fl_last_attacked_teammate;
        GameTime_t m_allow_auto_follow_time;
        bool m_b_reset_armor_next_spawn;
        CEntityIndex m_n_last_killer_index;
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
        bool m_b_is_scoped;
        bool m_b_resume_zoom;
        bool m_b_is_defusing;
        bool m_b_is_grabbing_hostage;
        CSPlayerBlockingUseAction_t m_i_blocking_use_action_in_progress;
        GameTime_t m_fl_emit_sound_time;
        bool m_b_in_no_defuse_area;
        CEntityIndex m_i_bomb_site_index;
        int32_t m_n_which_bomb_zone;
        bool m_b_in_bomb_zone_trigger;
        bool m_b_was_in_bomb_zone_trigger;
        int32_t m_i_shots_fired;
        float m_fl_flinch_stack;
        float m_fl_velocity_modifier;
        vector3d_t m_vec_total_bullet_force;
        bool m_b_wait_for_no_attack;
        float m_ignore_ladder_jump_time;
        bool m_b_killed_by_headshot;
        int32_t m_last_hit_box;
        CCSBot* m_p_bot;
        bool m_b_bot_allow_active;
        int32_t m_n_last_pickup_priority;
        float m_fl_last_pickup_priority_time;
        int32_t m_armor_value;
        uint16_t m_un_current_equipment_value;
        uint16_t m_un_round_start_equipment_value;
        uint16_t m_un_freezetime_end_equipment_value;
        int32_t m_i_last_weapon_fire_usercmd;
        bool m_b_is_spawning;
        int32_t m_i_death_flags;
        bool m_b_has_death_info;
        float m_fl_death_info_time;
        VectorWS m_vec_death_info_origin;
        uint32_t m_vec_player_patch_econ_indices;
        color_t m_gun_game_immunity_color;
        GameTime_t m_grenade_parameter_stash_time;
        bool m_b_grenade_parameters_stashed;
        QAngle m_ang_stashed_shoot_angles;
        VectorWS m_vec_stashed_grenade_throw_position;
        VectorWS m_vec_stashed_grenade_throw_pawn_center;
        vector3d_t m_vec_stashed_velocity;
        bool m_b_committing_suicide_on_team_change;
        bool m_was_not_killed_naturally;
        GameTime_t m_f_immune_to_gun_game_damage_time;
        bool m_b_gun_game_immunity;
        float m_fl_big_head_scale;
        float m_f_molotov_damage_time;
        QAngle m_ang_eye_angles;
    };

    struct cenvlightprobevolume_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_ambient_cube;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sdf;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_dc;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_texture_sh2_l1;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_indices_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_scalars_texture;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_light_probe_direct_light_shadows_texture;
        vector3d_t m_entity_v_box_mins;
        vector3d_t m_entity_v_box_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_priority;
        bool m_entity_b_start_disabled;
        int32_t m_entity_n_light_probe_size_x;
        int32_t m_entity_n_light_probe_size_y;
        int32_t m_entity_n_light_probe_size_z;
        int32_t m_entity_n_light_probe_atlas_x;
        int32_t m_entity_n_light_probe_atlas_y;
        int32_t m_entity_n_light_probe_atlas_z;
        bool m_entity_b_enabled;
    };

    struct spawnpoint_t {
        int32_t m_i_priority;
        bool m_b_enabled;
        int32_t m_n_type;
    };

    struct cgamescenenode_t {
        CTransformWS m_node_to_world;
        CEntityInstance* m_p_owner;
        CGameSceneNode* m_p_parent;
        CGameSceneNode* m_p_child;
        CGameSceneNode* m_p_next_sibling;
        CGameSceneNodeHandle m_h_parent;
        CNetworkOriginCellCoordQuantizedVector m_vec_origin;
        QAngle m_ang_rotation;
        float m_fl_scale;
        VectorWS m_vec_abs_origin;
        QAngle m_ang_abs_rotation;
        float m_fl_abs_scale;
        int16_t m_n_parent_attachment_or_bone;
        bool m_b_debug_abs_origin_changes;
        bool m_b_dormant;
        bool m_b_force_parent_to_be_networked;
        uint32_t m_b_dirty_hierarchy;
        uint32_t m_b_dirty_bone_merge_info;
        uint32_t m_b_networked_position_changed;
        uint32_t m_b_networked_angles_changed;
        uint32_t m_b_networked_scale_changed;
        uint32_t m_b_will_be_calling_post_data_update;
        uint32_t m_b_bone_merge_flex;
        uint32_t m_n_latch_abs_origin;
        uint32_t m_b_dirty_bone_merge_bone_to_root;
        uint8_t m_n_hierarchical_depth;
        uint8_t m_n_hierarchy_type;
        uint8_t m_n_do_not_set_anim_time_in_invalidate_physics_count;
        CUtlStringToken m_name;
        CUtlStringToken m_hierarchy_attach_name;
        float m_fl_client_local_scale;
    };

    struct cplayer_observerservices_t {
        uint8_t m_i_observer_mode;
        CHandle_CBaseEntity_ m_h_observer_target;
        ObserverMode_t m_i_observer_last_mode;
        bool m_b_forced_observer_mode;
    };

    struct ccashstack_t {
        int32_t m_n_cash_stack_value;
    };

    struct cattributemanager__cached_attribute_float_t_t {
        float fl_in;
        CUtlSymbolLarge i_attrib_hook;
        float fl_out;
    };

    struct cpulsegraphinstance_serverentity_t {
        CHandle_CBaseEntity_ m_h_owner;
        bool m_b_activated;
        CUtlSymbolLarge m_s_name_fixup_static_prefix;
        CUtlSymbolLarge m_s_name_fixup_parent;
        CUtlSymbolLarge m_s_name_fixup_local;
        CUtlSymbolLarge m_s_procedural_world_name_for_relays;
    };

    struct cragdollmanager_t {
        int8_t m_i_current_max_ragdoll_count;
        int32_t m_i_max_ragdoll_count;
        bool m_b_save_important;
        bool m_b_can_take_damage;
    };

    struct csoundopvarsetboxentity_t {
        vector3d_t m_v_distance_inner_mins;
        vector3d_t m_v_distance_inner_maxs;
        vector3d_t m_v_distance_outer_mins;
        vector3d_t m_v_distance_outer_maxs;
        int32_t m_n_box_direction;
        vector3d_t m_v_inner_mins;
        vector3d_t m_v_inner_maxs;
        vector3d_t m_v_outer_mins;
        vector3d_t m_v_outer_maxs;
    };

    struct cpostprocessingvolume_t {
        CStrongHandle_InfoForResourceTypeCPostProcessingResource_ m_h_post_settings;
        float m_fl_fade_duration;
        float m_fl_min_log_exposure;
        float m_fl_max_log_exposure;
        float m_fl_min_exposure;
        float m_fl_max_exposure;
        float m_fl_exposure_compensation;
        float m_fl_exposure_fade_speed_up;
        float m_fl_exposure_fade_speed_down;
        float m_fl_tonemap_evsmoothing_range;
        bool m_b_master;
        bool m_b_exposure_control;
    };

    struct cpointproximitysensor_t {
        bool m_b_disabled;
        CHandle_CBaseEntity_ m_h_target_entity;
        CEntityOutputTemplate_float_ m_distance;
    };

    struct cpulse_invokebinding_t {
        PulseRegisterMap_t m_register_map;
        PulseSymbol_t m_func_name;
        PulseRuntimeCellIndex_t m_n_cell_index;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
    };

    struct ctriggerlook_t {
        CHandle_CBaseEntity_ m_h_look_target;
        float m_fl_field_of_view;
        float m_fl_look_time;
        float m_fl_look_time_total;
        GameTime_t m_fl_look_time_last;
        float m_fl_timeout_duration;
        bool m_b_timeout_fired;
        bool m_b_is_looking;
        bool m_b2_dfov;
        bool m_b_use_velocity;
        bool m_b_test_occlusion;
        bool m_b_test_all_visible_occlusion;
        CEntityIOOutput m_on_timeout;
        CEntityIOOutput m_on_start_look;
        CEntityIOOutput m_on_end_look;
    };

    struct cpulsecell_outflow_playvcd_t {
        CStrongHandle_InfoForResourceTypeCChoreoSceneResource_ m_h_choreo_scene;
        CPulse_OutflowConnection m_on_paused;
        CPulse_OutflowConnection m_on_resumed;
        CUtlVector_CPulseCell_Outflow_PlayVCD_VCDRequirementInfo_t_ m_out_requirements;
    };

    struct cphystorque_t {
        vector3d_t m_axis;
    };

    struct cmultisource_t {
        CHandle_CBaseEntity_ m_rg_entities;
        int32_t m_rg_triggered;
        CEntityIOOutput m_on_trigger;
        int32_t m_i_total;
        CUtlSymbolLarge m_globalstate;
    };

    struct cbasecsgrenade_t {
        bool m_b_redraw;
        bool m_b_is_held_by_player;
        bool m_b_pin_pulled;
        bool m_b_jump_throw;
        bool m_b_throw_animating;
        GameTime_t m_f_throw_time;
        float m_fl_throw_strength;
        GameTime_t m_f_drop_time;
        GameTime_t m_f_pin_pull_time;
        bool m_b_just_pulled_pin;
        GameTick_t m_n_next_hold_tick;
        float m_fl_next_hold_frac;
        CHandle_CCSWeaponBase_ m_h_switch_to_weapon_after_throw;
    };

    struct clogicauto_t {
        CEntityIOOutput m_on_map_spawn;
        CEntityIOOutput m_on_demo_map_spawn;
        CEntityIOOutput m_on_new_game;
        CEntityIOOutput m_on_load_game;
        CEntityIOOutput m_on_map_transition;
        CEntityIOOutput m_on_background_map;
        CEntityIOOutput m_on_multi_new_map;
        CEntityIOOutput m_on_multi_new_round;
        CEntityIOOutput m_on_vrenabled;
        CEntityIOOutput m_on_vrnot_enabled;
        CUtlSymbolLarge m_globalstate;
    };

    struct cphysicswire_t {
        int32_t m_n_density;
    };

    struct cinfodynamicshadowhint_t {
        bool m_b_disabled;
        float m_fl_range;
        int32_t m_n_importance;
        int32_t m_n_light_choice;
        CHandle_CBaseEntity_ m_h_light;
    };

    struct cmarkupvolume_t {
        bool m_b_disabled;
    };

    struct cpathnode_t {
        vector3d_t m_v_in_tangent_local;
        vector3d_t m_v_out_tangent_local;
        CUtlString m_str_parent_path_unique_id;
        CUtlString m_str_path_node_parameter;
        CTransformWS m_x_wsprev_parent;
        CHandle_CPathWithDynamicNodes_ m_h_path;
    };

    struct ctriggerremove_t {
        CEntityIOOutput m_on_remove;
    };

    struct clogicgameeventlistener_t {
        CEntityIOOutput m_on_event_fired;
        CUtlSymbolLarge m_isz_game_event_name;
        CUtlSymbolLarge m_isz_game_event_item;
        bool m_b_enabled;
        bool m_b_start_disabled;
    };

    struct cpulsecell_intervaltimer_t {
        CPulse_ResumePoint m_completed;
        SignatureOutflow_Continue m_on_interval;
    };

    struct cmarkupvolumetagged_nav_t {
        NavScopeFlags_t m_n_scopes;
    };

    struct clogicautosave_t {
        bool m_b_force_new_level_unit;
        int32_t m_min_hit_points;
        int32_t m_min_hit_points_to_commit;
    };

    struct csingleplayrules_t {
        bool m_b_single_player_game_ending;
    };

    struct cenvwindshared_t {
        GameTime_t m_fl_start_time;
        uint32_t m_i_wind_seed;
        uint16_t m_i_min_wind;
        uint16_t m_i_max_wind;
        int32_t m_wind_radius;
        uint16_t m_i_min_gust;
        uint16_t m_i_max_gust;
        float m_fl_min_gust_delay;
        float m_fl_max_gust_delay;
        float m_fl_gust_duration;
        uint16_t m_i_gust_dir_change;
        uint16_t m_i_initial_wind_dir;
        float m_fl_initial_wind_speed;
        VectorWS m_location;
        CEntityIOOutput m_on_gust_start;
        CEntityIOOutput m_on_gust_end;
        CHandle_CBaseEntity_ m_h_ent_owner;
    };

    struct cpointprefab_t {
        CUtlSymbolLarge m_target_map_name;
        CUtlSymbolLarge m_force_world_group_id;
        CUtlSymbolLarge m_associated_relay_target_name;
        bool m_fixup_names;
        bool m_b_load_dynamic;
        CHandle_CPointPrefab_ m_associated_relay_entity;
        CUtlVector_CHandle_CBaseEntity_ m_procedural_relay_sources;
    };

    struct cpulsecell_baselerp_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cenvinstructorvrhint_t {
        CUtlSymbolLarge m_isz_name;
        CUtlSymbolLarge m_isz_hint_target_entity;
        int32_t m_i_timeout;
        CUtlSymbolLarge m_isz_caption;
        CUtlSymbolLarge m_isz_start_sound;
        int32_t m_i_layout_file_type;
        CUtlSymbolLarge m_isz_custom_layout_file;
        int32_t m_i_attach_type;
        float m_fl_height_offset;
    };

    struct ccsgamerulesproxy_t {
        CCSGameRules* m_p_game_rules;
    };

    struct cenvglobal_t {
        CEntityOutputTemplate_int32_t_ m_out_counter;
        CUtlSymbolLarge m_globalstate;
        int32_t m_triggermode;
        int32_t m_initialstate;
        int32_t m_counter;
    };

    struct cplattrigger_t {
        CHandle_CFuncPlat_ m_p_platform;
    };

    struct csceneentity_t {
        CUtlSymbolLarge m_isz_scene_file;
        CUtlSymbolLarge m_isz_target1;
        CUtlSymbolLarge m_isz_target2;
        CUtlSymbolLarge m_isz_target3;
        CUtlSymbolLarge m_isz_target4;
        CUtlSymbolLarge m_isz_target5;
        CUtlSymbolLarge m_isz_target6;
        CUtlSymbolLarge m_isz_target7;
        CUtlSymbolLarge m_isz_target8;
        CHandle_CBaseEntity_ m_h_target1;
        CHandle_CBaseEntity_ m_h_target2;
        CHandle_CBaseEntity_ m_h_target3;
        CHandle_CBaseEntity_ m_h_target4;
        CHandle_CBaseEntity_ m_h_target5;
        CHandle_CBaseEntity_ m_h_target6;
        CHandle_CBaseEntity_ m_h_target7;
        CHandle_CBaseEntity_ m_h_target8;
        CHandle_CBaseEntity_ m_h_locator_origin;
        CUtlSymbolLarge m_s_target_attachment;
        bool m_b_is_playing_back;
        bool m_b_paused;
        bool m_b_multiplayer;
        bool m_b_autogenerated;
        float m_fl_force_client_time;
        float m_fl_current_time;
        float m_fl_frame_time;
        bool m_b_cancel_at_next_interrupt;
        bool m_b_remove_on_completion;
        float m_f_pitch;
        bool m_b_automated;
        int32_t m_n_automated_action;
        float m_fl_automation_delay;
        float m_fl_automation_time;
        int32_t m_n_speech_priority;
        bool m_b_paused_via_input;
        bool m_b_pause_at_next_interrupt;
        bool m_b_waiting_for_actor;
        bool m_b_waiting_for_interrupt;
        bool m_b_interrupted_actors_scenes;
        bool m_b_break_on_non_idle;
        bool m_b_scene_finished;
        CNetworkUtlVectorBase_CHandle_CBaseModelEntity_ m_h_actor_list;
        CUtlVector_CHandle_CBaseEntity_ m_h_remove_actor_list;
        uint16_t m_n_scene_string_index;
        CEntityIOOutput m_on_start;
        CEntityIOOutput m_on_completion;
        CEntityIOOutput m_on_canceled;
        CEntityIOOutput m_on_paused;
        CEntityIOOutput m_on_resumed;
        CEntityIOOutput m_on_pulse_requirement;
        CUtlDict_CUtlSymbolLarge_ m_target_name_map;
        CUtlDict_CUtlSymbolLarge_ m_anchor_name_map;
        CUtlDict_CUtlSymbolLarge_ m_actor_graph_map;
        CUtlDict_ActorClipEntry_t_ m_actor_clip_map;
        CUtlVector_ActorMapping_t_ m_actor_map;
        CHandle_CSceneEntity_ m_h_interrupt_scene;
        int32_t m_n_interrupt_count;
        CUtlString m_response_concept;
        CUtlString m_response_criteria;
        bool m_b_scene_missing;
        bool m_b_interrupted;
        bool m_b_completed_early;
        bool m_b_interrupt_scene_finished;
        bool m_b_restoring;
        CUtlVector_CHandle_CSceneEntity_ m_h_notify_scene_completion;
        CUtlVector_CHandle_CSceneListManager_ m_h_list_managers;
        CUtlSymbolLarge m_isz_sound_name;
        CUtlSymbolLarge m_isz_sequence_name;
        CHandle_CBaseModelEntity_ m_h_actor;
        CHandle_CBaseEntity_ m_h_activator;
        int32_t m_busy_actor;
        SceneOnPlayerDeath_t m_i_player_death_behavior;
    };

    struct ctonemapcontroller2_t {
        float m_fl_auto_exposure_min;
        float m_fl_auto_exposure_max;
        float m_fl_exposure_adaptation_speed_up;
        float m_fl_exposure_adaptation_speed_down;
        float m_fl_tonemap_evsmoothing_range;
    };

    struct cmapsharedenvironment_t {
        CUtlSymbolLarge m_target_map_name;
    };

    struct cnetworkedsequenceoperation_t {
        HSequence m_h_sequence;
        float m_fl_prev_cycle;
        float m_fl_cycle;
        CNetworkedQuantizedFloat m_fl_weight;
        bool m_b_sequence_change_networked;
        bool m_b_discontinuity;
        float m_fl_prev_cycle_from_discontinuity;
        float m_fl_prev_cycle_for_anim_event_detection;
    };

    struct cphysmagnet_t {
        CEntityIOOutput m_on_magnet_attach;
        CEntityIOOutput m_on_magnet_detach;
        float m_mass_scale;
        float m_force_limit;
        float m_torque_limit;
        CUtlVector_magnetted_objects_t_ m_magnetted_entities;
        bool m_b_active;
        bool m_b_has_hit_something;
        float m_fl_total_mass;
        float m_fl_radius;
        GameTime_t m_fl_next_suck_time;
        int32_t m_i_max_objects_attached;
    };

    struct ccscustomhudlayout_t {
        CUtlSymbolLarge m_str_layout;
        bool m_b_observable;
        CUtlVectorEmbeddedNetworkVar_CCSCustomHudLayoutState_ m_vec_player_layout_states;
        CCSCustomHudLayoutState m_global_layout_state;
        CNetworkUtlVectorBase_CUtlString_ m_vec_panel_ids;
        CNetworkUtlVectorBase_CUtlString_ m_vec_class_names;
        CNetworkUtlVectorBase_CUtlString_ m_vec_dialog_variable_names;
    };

    struct centityinstance_t {
        CUtlSymbolLarge m_isz_private_vscripts;
        CEntityIdentity* m_p_entity;
        CScriptComponent* m_cscript_component;
    };

    struct cgamegibmanager_t {
        bool m_b_allow_new_gibs;
        int32_t m_i_current_max_pieces;
        int32_t m_i_max_pieces;
        int32_t m_i_last_frame;
    };

    struct ccsplayer_bulletservices_t {
        int32_t m_total_hits_on_server;
    };

    struct cskycamera_t {
        sky3dparams_t m_skybox_data;
        CUtlStringToken m_skybox_slot_token;
        bool m_b_use_angles;
        CSkyCamera* m_p_next;
    };

    struct cphyspulley_t {
        VectorWS m_position2;
        Vector m_offset;
        float m_add_length;
        float m_gear_ratio;
    };

    struct cweaponbaseitem_t {
        bool m_b_sequence_in_progress;
        bool m_b_redraw;
    };

    struct ccommentaryauto_t {
        CEntityIOOutput m_on_commentary_new_game;
        CEntityIOOutput m_on_commentary_mid_game;
        CEntityIOOutput m_on_commentary_multiplayer_spawn;
    };

    struct cpulsecell_outflow_listenforentityoutput__cursorstate_t_t {
        CHandle_CBaseEntity_ m_entity;
    };

    struct activemodelconfig_t_t {
        ModelConfigHandle_t m_handle;
        CUtlSymbolLarge m_name;
        CNetworkUtlVectorBase_CHandle_CBaseModelEntity_ m_associated_entities;
        CNetworkUtlVectorBase_CUtlSymbolLarge_ m_associated_entity_names;
        CUtlLeanVector_bool_ m_vec_associated_entity_collides_with_hierarchy;
        CUtlLeanVector_bool_ m_vec_associated_entity_collides_outside_hierarchy;
    };

    struct csoundstacksave_t {
        CUtlSymbolLarge m_isz_stack_name;
    };

    struct cpulsecell_value_curve_t {
        CPiecewiseCurve m_curve;
    };

    struct clogicmeasuremovement_t {
        CUtlSymbolLarge m_str_measure_target;
        CUtlSymbolLarge m_str_measure_reference;
        CUtlSymbolLarge m_str_target_reference;
        CHandle_CBaseEntity_ m_h_measure_target;
        CHandle_CBaseEntity_ m_h_measure_reference;
        CHandle_CBaseEntity_ m_h_target;
        CHandle_CBaseEntity_ m_h_target_reference;
        float m_fl_scale;
        int32_t m_n_measure_type;
    };

    struct clogicactivityevent_t {
        int32_t m_n_event_type;
        float m_fl_duration;
        CUtlSymbolLarge m_isz_source_entity_name;
        CEntityHandle m_h_source;
    };

    struct cc4_t {
        VectorWS m_vec_last_valid_player_held_position;
        VectorWS m_vec_last_valid_dropped_position;
        bool m_b_do_valid_dropped_position_check;
        bool m_b_started_arming;
        GameTime_t m_f_armed_time;
        bool m_b_bomb_placed_animation;
        bool m_b_is_planting_via_use;
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
        bool m_b_played_arming_beeps;
        bool m_b_bomb_planted;
    };

    struct cenvdetailcontroller_t {
        float m_fl_fade_start_dist;
        float m_fl_fade_end_dist;
    };

    struct ccsplayerpawnbase_t {
        CTouchExpansionComponent m_ctouch_expansion_component;
        CCSPlayer_PingServices* m_p_ping_services;
        GameTime_t m_blind_until_time;
        GameTime_t m_blind_start_time;
        CSPlayerState m_i_player_state;
        bool m_b_respawning;
        bool m_b_has_moved_since_spawn;
        int32_t m_i_num_spawns;
        float m_fl_idle_time_since_last_action;
        float m_f_next_radar_update_time;
        float m_fl_flash_duration;
        float m_fl_flash_max_alpha;
        float m_fl_progress_bar_start_time;
        int32_t m_i_progress_bar_duration;
        CHandle_CCSPlayerController_ m_h_original_controller;
    };

    struct cenvsoundscapeproxy_t {
        CUtlSymbolLarge m_main_soundscape_name;
    };

    struct cpulsecell_inflow_eventhandler_t {
        PulseSymbol_t m_event_name;
    };

    struct cbombtarget_t {
        CEntityIOOutput m_on_bomb_explode;
        CEntityIOOutput m_on_bomb_planted;
        CEntityIOOutput m_on_bomb_defused;
        bool m_b_is_bomb_site_b;
        bool m_b_is_heist_bomb_target;
        bool m_b_bomb_planted_here;
        CUtlSymbolLarge m_sz_mount_target;
        CHandle_CBaseEntity_ m_h_instructor_hint;
        int32_t m_n_bomb_site_designation;
    };

    struct cruleentity_t {
        CUtlSymbolLarge m_isz_master;
    };

    struct cphysthruster_t {
        vector3d_t m_local_origin;
    };

    struct cinfoplayerstart_t {
        bool m_b_disabled;
        bool m_b_is_master;
        CGlobalSymbol m_p_pawn_subclass;
    };

    struct centityflame_t {
        CHandle_CBaseEntity_ m_h_ent_attached;
        bool m_b_cheap_effect;
        float m_fl_size;
        bool m_b_use_hitboxes;
        int32_t m_i_num_hitbox_fires;
        float m_fl_hitbox_fire_scale;
        GameTime_t m_fl_lifetime;
        CHandle_CBaseEntity_ m_h_attacker;
        float m_fl_direct_damage_per_second;
        int32_t m_i_custom_damage_type;
    };

    struct cskeletoninstance_t {
        CModelState m_model_state;
        bool m_b_use_parent_render_bounds;
        bool m_b_disable_solid_collisions_for_hierarchy;
        bool m_b_dirty_motion_type;
        bool m_b_is_generating_latched_parent_space_state;
        CUtlStringToken m_material_group;
        uint8_t m_n_hitbox_set;
        bool m_b_force_server_constraints_enabled;
    };

    struct cbaseplattrain_t {
        CGameSoundEventName m_noise_moving;
        CGameSoundEventName m_noise_arrived;
        float m_volume;
        float m_fl_twidth;
        float m_fl_tlength;
    };

    struct cpointteleport_t {
        VectorWS m_v_save_origin;
        QAngle m_v_save_angles;
        bool m_b_teleport_parented_entities;
        bool m_b_teleport_use_current_angle;
    };

    struct ctriggergameevent_t {
        CUtlString m_str_start_touch_event_name;
        CUtlString m_str_end_touch_event_name;
        CUtlString m_str_trigger_id;
    };

    struct cmessageentity_t {
        int32_t m_radius;
        CUtlSymbolLarge m_message_text;
        bool m_draw_text;
        bool m_b_developer_only;
        bool m_b_enabled;
    };

    struct cenventityigniter_t {
        float m_fl_lifetime;
    };

    struct cpulsecell_outflow_cycleshuffled__instancestate_t_t {
        CUtlVectorFixedGrowable_uint8_t_8_ m_shuffle;
        int32_t m_n_next_shuffle;
    };

    struct cpulsecell_baselerp__cursorstate_t_t {
        GameTime_t m_start_time;
        GameTime_t m_end_time;
    };

    struct cmarkupvolumetagged_navgame_t {
        NavScopeFlags_t m_n_scopes;
        bool m_b_flood_fill_attribute;
        bool m_b_split_nav_space;
    };

    struct cmultilightproxy_t {
        CUtlSymbolLarge m_isz_light_name_filter;
        CUtlSymbolLarge m_isz_light_class_filter;
        float m_fl_light_radius_filter;
        float m_fl_brightness_delta;
        bool m_b_perform_screen_fade;
        float m_fl_target_brightness_multiplier;
        float m_fl_current_brightness_multiplier;
        CUtlVector_CHandle_CLightEntity_ m_vec_lights;
    };

    struct ceconwearable_t {
        int32_t m_n_force_skin;
        bool m_b_always_allow;
    };

    struct cfuncladder_t {
        vector3d_t m_vec_ladder_dir;
        CUtlVector_CHandle_CInfoLadderDismount_ m_dismounts;
        vector3d_t m_vec_local_top;
        VectorWS m_vec_player_mount_position_top;
        VectorWS m_vec_player_mount_position_bottom;
        float m_fl_auto_ride_speed;
        bool m_b_disabled;
        bool m_b_fake_ladder;
        bool m_b_has_slack;
        CUtlSymbolLarge m_surface_prop_name;
        CEntityIOOutput m_on_player_got_on_ladder;
        CEntityIOOutput m_on_player_got_off_ladder;
    };

    struct cfogcontroller_t {
        fogparams_t m_fog;
        bool m_b_use_angles;
        int32_t m_i_changed_variables;
    };

    struct citem_t {
        CEntityIOOutput m_on_player_touch;
        CEntityIOOutput m_on_player_pickup;
        bool m_b_activate_when_at_rest;
        CEntityIOOutput m_on_cache_interaction;
        CEntityIOOutput m_on_glove_pulled;
        VectorWS m_v_original_spawn_origin;
        QAngle m_v_original_spawn_angles;
        bool m_b_phys_start_asleep;
    };

    struct ctriggerpush_t {
        QAngle m_ang_push_entity_space;
        vector3d_t m_vec_push_dir_entity_space;
        bool m_b_trigger_on_start_touch;
        bool m_b_use_path_simple;
        CUtlSymbolLarge m_isz_path_simple_name;
        CHandle_CPathSimple_ m_path_simple;
        uint32_t m_spline_push_type;
        float m_fl_speed;
    };

    struct cbaseprop_t {
        bool m_b_model_overrode_block_los;
        int32_t m_i_shape_type;
        bool m_b_conform_to_collision_bounds;
        transform_t m_m_preferred_catch_transform;
    };

    struct cinfooffscreenpanoramatexture_t {
        bool m_b_disabled;
        bool m_b_enable_mip_gen;
        int32_t m_n_resolution_x;
        int32_t m_n_resolution_y;
        CUtlSymbolLarge m_sz_panel_type;
        CUtlSymbolLarge m_sz_layout_file_name;
        CUtlSymbolLarge m_render_attr_name;
        CNetworkUtlVectorBase_CHandle_CBaseModelEntity_ m_target_entities;
        int32_t m_n_target_change_count;
        CNetworkUtlVectorBase_CUtlSymbolLarge_ m_vec_cssclasses;
        CUtlSymbolLarge m_sz_targets_name;
        CUtlVector_CHandle_CBaseModelEntity_ m_additional_target_entities;
    };

    struct cpointangularvelocitysensor_t {
        CHandle_CBaseEntity_ m_h_target_entity;
        float m_fl_threshold;
        int32_t m_n_last_compare_result;
        int32_t m_n_last_fire_result;
        GameTime_t m_fl_fire_time;
        float m_fl_fire_interval;
        float m_fl_last_ang_velocity;
        QAngle m_last_orientation;
        VectorWS m_vec_axis;
        bool m_b_use_helper;
        CEntityOutputTemplate_float_ m_angular_velocity;
        CEntityIOOutput m_on_less_than;
        CEntityIOOutput m_on_less_than_or_equal_to;
        CEntityIOOutput m_on_greater_than;
        CEntityIOOutput m_on_greater_than_or_equal_to;
        CEntityIOOutput m_on_equal_to;
    };

    struct cplayervisibility_t {
        float m_fl_visibility_strength;
        float m_fl_fog_distance_multiplier;
        float m_fl_fog_max_density_multiplier;
        float m_fl_fade_time;
        bool m_b_start_disabled;
        bool m_b_is_enabled;
    };

    struct cpulsecell_step_followentity_t {
        CUtlString m_param_bone_or_attach_name;
        CUtlString m_param_bone_or_attach_name_child;
    };

    struct cbaseplayerweapon_t {
        GameTick_t m_n_next_primary_attack_tick;
        float m_fl_next_primary_attack_tick_ratio;
        GameTick_t m_n_next_secondary_attack_tick;
        float m_fl_next_secondary_attack_tick_ratio;
        int32_t m_i_clip1;
        int32_t m_i_clip2;
        int32_t m_p_reserve_ammo;
        CEntityIOOutput m_on_player_use;
    };

    struct cphysforce_t {
        IPhysicsMotionController* m_p_controller;
        CUtlSymbolLarge m_name_attach;
        float m_force;
        float m_force_time;
        CHandle_CBaseEntity_ m_attached_object;
        bool m_was_restored;
        CConstantForceController m_integrator;
    };

    struct ccsweaponbasevdata_t {
        CSWeaponType m_weapon_type;
        CSWeaponCategory m_weapon_category;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCNmSkeleton_ m_sz_anim_skeleton;
        vector3d_t m_vec_muzzle_pos0;
        vector3d_t m_vec_muzzle_pos1;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_tracer_particle;
        gear_slot_t m_gear_slot;
        int32_t m_gear_slot_position;
        loadout_slot_t m_default_loadout_slot;
        int32_t m_n_price;
        int32_t m_n_kill_award;
        int32_t m_n_primary_reserve_ammo_max;
        int32_t m_n_secondary_reserve_ammo_max;
        bool m_b_melee_weapon;
        bool m_b_has_burst_mode;
        bool m_b_is_revolver;
        bool m_b_cannot_shoot_underwater;
        CGlobalSymbol m_sz_name;
        CSWeaponSilencerType m_e_silencer_type;
        bool m_b_show_crosshair;
        bool m_b_is_full_auto;
        int32_t m_n_num_bullets;
        bool m_b_reloads_single_shells;
        CFiringModeFloat m_fl_cycle_time;
        float m_fl_cycle_time_when_in_burst_mode;
        float m_fl_time_between_burst_shots;
        CFiringModeFloat m_fl_max_speed;
        CFiringModeFloat m_fl_spread;
        CFiringModeFloat m_fl_inaccuracy_crouch;
        CFiringModeFloat m_fl_inaccuracy_stand;
        CFiringModeFloat m_fl_inaccuracy_jump;
        CFiringModeFloat m_fl_inaccuracy_land;
        CFiringModeFloat m_fl_inaccuracy_ladder;
        CFiringModeFloat m_fl_inaccuracy_fire;
        CFiringModeFloat m_fl_inaccuracy_move;
        CFiringModeFloat m_fl_recoil_angle;
        CFiringModeFloat m_fl_recoil_angle_variance;
        CFiringModeFloat m_fl_recoil_magnitude;
        CFiringModeFloat m_fl_recoil_magnitude_variance;
        CFiringModeInt m_n_tracer_frequency;
        float m_fl_inaccuracy_jump_initial;
        float m_fl_inaccuracy_jump_apex;
        float m_fl_inaccuracy_reload;
        float m_fl_deploy_duration;
        float m_fl_disallow_attack_after_reload_start_duration;
        int32_t m_n_burst_shot_count;
        bool m_b_allow_burst_holster;
        int32_t m_n_recoil_seed;
        int32_t m_n_spread_seed;
        float m_fl_attack_movespeed_factor;
        float m_fl_inaccuracy_pitch_shift;
        float m_fl_inaccuracy_alt_sound_threshold;
        CUtlString m_sz_use_radio_subtitle;
        bool m_b_unzooms_after_shot;
        bool m_b_hide_view_model_when_zoomed;
        int32_t m_n_zoom_levels;
        int32_t m_n_zoom_fov1;
        int32_t m_n_zoom_fov2;
        float m_fl_zoom_time0;
        float m_fl_zoom_time1;
        float m_fl_zoom_time2;
        float m_fl_iron_sight_pull_up_speed;
        float m_fl_iron_sight_put_down_speed;
        float m_fl_iron_sight_fov;
        float m_fl_iron_sight_pivot_forward;
        float m_fl_iron_sight_looseness;
        int32_t m_n_damage;
        float m_fl_headshot_multiplier;
        float m_fl_armor_ratio;
        float m_fl_penetration;
        float m_fl_range;
        float m_fl_range_modifier;
        float m_fl_flinch_velocity_modifier_large;
        float m_fl_flinch_velocity_modifier_small;
        float m_fl_recovery_time_crouch;
        float m_fl_recovery_time_stand;
        float m_fl_recovery_time_crouch_final;
        float m_fl_recovery_time_stand_final;
        int32_t m_n_recovery_transition_start_bullet;
        int32_t m_n_recovery_transition_end_bullet;
        float m_fl_throw_velocity;
        vector3d_t m_v_smoke_color;
        CGlobalSymbol m_sz_anim_class;
    };

    struct cattributemanager_t {
        CUtlVector_CHandle_CBaseEntity_ m_providers;
        int32_t m_i_reapply_provision_parity;
        CHandle_CBaseEntity_ m_h_outer;
        bool m_b_prevent_loopback;
        attributeprovidertypes_t m_provider_type;
        CUtlVector_CAttributeManager_cached_attribute_float_t_ m_cached_results;
    };

    struct cplayer_cameraservices_t {
        QAngle m_vec_cs_view_punch_angle;
        GameTick_t m_n_cs_view_punch_angle_tick;
        float m_fl_cs_view_punch_angle_tick_ratio;
        fogplayerparams_t m_player_fog;
        CHandle_CColorCorrection_ m_h_color_correction_ctrl;
        CHandle_CBaseEntity_ m_h_view_entity;
        CHandle_CTonemapController2_ m_h_tonemap_controller;
        audioparams_t m_audio;
        CNetworkUtlVectorBase_CHandle_CPostProcessingVolume_ m_post_processing_volumes;
        float m_fl_old_player_z;
        float m_fl_old_player_view_offset_z;
        CUtlVector_CHandle_CEnvSoundscapeTriggerable_ m_h_trigger_soundscape_list;
    };

    struct cpulsecell_timeline_t {
        CUtlVector_CPulseCell_Timeline_TimelineEvent_t_ m_timeline_events;
        bool m_b_wait_for_child_outflows;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpulsecell_inflow_entoutputhandler_t {
        PulseSymbol_t m_source_entity;
        PulseSymbol_t m_source_output;
        CPulseValueFullType m_expected_param_type;
    };

    struct cfilterattributeint_t {
        CUtlSymbolLarge m_s_attribute_name;
    };

    struct ckeepupright_t {
        vector3d_t m_world_goal_axis;
        vector3d_t m_local_test_axis;
        IPhysicsMotionController* m_p_controller;
        CUtlSymbolLarge m_name_attach;
        CHandle_CBaseEntity_ m_attached_object;
        float m_angular_limit;
        bool m_b_active;
        bool m_b_damp_all_rotation;
    };

    struct cpointtemplate_t {
        CUtlSymbolLarge m_isz_world_name;
        CUtlSymbolLarge m_isz_source2_entity_lump_name;
        CUtlSymbolLarge m_isz_entity_filter_name;
        float m_fl_timeout_interval;
        bool m_b_asynchronously_spawn_entities;
        PointTemplateClientOnlyEntityBehavior_t m_client_only_entity_behavior;
        PointTemplateOwnerSpawnGroupType_t m_owner_spawn_group_type;
        CUtlVector_uint32_t_ m_created_spawn_group_handles;
        CUtlVector_CEntityHandle_ m_spawned_entity_handles;
        HSCRIPT m_script_spawn_callback;
        HSCRIPT m_script_callback_scope;
        CEntityOutputTemplate_CUtlVector_CEntityHandle_ m_on_entity_spawned;
    };

    struct cenvvolumetricfogcontroller_t {
        float m_fl_scattering;
        color_t m_tint_color;
        float m_fl_anisotropy;
        float m_fl_fade_speed;
        float m_fl_draw_distance;
        float m_fl_fade_in_start;
        float m_fl_fade_in_end;
        float m_fl_indirect_strength;
        int32_t m_n_volume_depth;
        float m_f_first_volume_slice_thickness;
        int32_t m_n_indirect_texture_dim_x;
        int32_t m_n_indirect_texture_dim_y;
        int32_t m_n_indirect_texture_dim_z;
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        bool m_b_active;
        GameTime_t m_fl_start_aniso_time;
        GameTime_t m_fl_start_scatter_time;
        GameTime_t m_fl_start_draw_distance_time;
        float m_fl_start_anisotropy;
        float m_fl_start_scattering;
        float m_fl_start_draw_distance;
        float m_fl_default_anisotropy;
        float m_fl_default_scattering;
        float m_fl_default_draw_distance;
        bool m_b_start_disabled;
        bool m_b_enable_indirect;
        bool m_b_is_master;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_fog_indirect_texture;
        int32_t m_n_force_refresh_count;
        float m_f_noise_speed;
        float m_f_noise_strength;
        vector3d_t m_v_noise_scale;
        float m_f_wind_speed;
        vector3d_t m_v_wind_direction;
        bool m_b_first_time;
    };

    struct cbot_t {
        CCSPlayerController* m_p_controller;
        CCSPlayerPawn* m_p_player;
        bool m_b_has_spawned;
        uint32_t m_id;
        bool m_is_running;
        bool m_is_crouching;
        float m_forward_speed;
        float m_left_speed;
        float m_vertical_speed;
        uint64_t m_button_flags;
        float m_jump_timestamp;
        vector3d_t m_view_forward;
        int32_t m_posture_stack_index;
    };

    struct cpulsecell_step_setanimgraphparam_t {
        CUtlString m_param_name;
    };

    struct ccsplayercontroller_t {
        CCSPlayerController_InGameMoneyServices* m_p_in_game_money_services;
        CCSPlayerController_InventoryServices* m_p_inventory_services;
        CCSPlayerController_ActionTrackingServices* m_p_action_tracking_services;
        CCSPlayerController_DamageServices* m_p_damage_services;
        uint32_t m_i_ping;
        bool m_b_has_communication_abuse_mute;
        uint32_t m_ui_communication_mute_flags;
        CUtlSymbolLarge m_sz_crosshair_codes;
        uint8_t m_i_pending_team_num;
        GameTime_t m_fl_force_team_time;
        int32_t m_i_comp_teammate_color;
        bool m_b_ever_played_on_team;
        bool m_b_attempted_to_get_color;
        int32_t m_i_teammate_preferred_color;
        bool m_b_team_changed;
        bool m_b_in_switch_team;
        bool m_b_has_seen_join_game;
        bool m_b_just_became_spectator;
        bool m_b_switch_teams_on_next_round_reset;
        bool m_b_remove_all_items_on_next_round_reset;
        GameTime_t m_fl_last_join_team_time;
        CUtlSymbolLarge m_sz_clan;
        uint32_t m_un_clan_id32bit;
        int32_t m_i_coaching_team;
        uint64_t m_n_player_dominated;
        uint64_t m_n_player_dominating_me;
        int32_t m_i_competitive_ranking;
        int32_t m_i_competitive_wins;
        int8_t m_i_competitive_rank_type;
        int32_t m_i_competitive_ranking_predicted_win;
        int32_t m_i_competitive_ranking_predicted_loss;
        int32_t m_i_competitive_ranking_predicted_tie;
        int32_t m_n_end_match_next_map_vote;
        uint16_t m_un_active_quest_id;
        uint32_t m_rt_active_mission_period;
        QuestProgress_Reason m_n_quest_progress_reason;
        uint32_t m_un_player_tv_control_flags;
        int32_t m_i_draft_index;
        uint32_t m_ms_queued_mode_disconnection_timestamp;
        uint32_t m_ui_abandon_recorded_reason;
        uint32_t m_e_network_disconnection_reason;
        bool m_b_cannot_be_kicked;
        bool m_b_ever_fully_connected;
        bool m_b_abandon_allows_surrender;
        bool m_b_abandon_offers_instant_surrender;
        bool m_b_disconnection1_min_warning_printed;
        bool m_b_score_reported;
        int32_t m_n_disconnection_tick;
        bool m_b_controlling_bot;
        bool m_b_has_controlled_bot_this_round;
        bool m_b_has_been_controlled_by_player_this_round;
        int32_t m_n_bots_controlled_this_round;
        bool m_b_can_control_observed_bot;
        CHandle_CCSPlayerPawn_ m_h_player_pawn;
        CHandle_CCSObserverPawn_ m_h_observer_pawn;
        int32_t m_desired_observer_mode;
        CEntityHandle m_h_desired_observer_target;
        bool m_b_pawn_is_alive;
        uint32_t m_i_pawn_health;
        int32_t m_i_pawn_armor;
        bool m_b_pawn_has_defuser;
        bool m_b_pawn_has_helmet;
        uint16_t m_n_pawn_character_def_index;
        int32_t m_i_pawn_lifetime_start;
        int32_t m_i_pawn_lifetime_end;
        int32_t m_i_pawn_bot_difficulty;
        CHandle_CCSPlayerController_ m_h_original_controller_of_current_pawn;
        int32_t m_i_score;
        int32_t m_i_round_score;
        int32_t m_i_rounds_won;
        uint8_t m_recent_kill_queue;
        uint8_t m_n_first_kill;
        uint8_t m_n_kill_count;
        bool m_b_mvp_no_music;
        int32_t m_e_mvp_reason;
        int32_t m_i_music_kit_id;
        int32_t m_i_music_kit_mvps;
        int32_t m_i_mvps;
        int32_t m_n_update_counter;
        float m_fl_smoothed_ping;
        IntervalTimer m_last_held_vote_timer;
        bool m_b_show_hints;
        int32_t m_i_next_time_check;
        bool m_b_just_did_team_kill;
        bool m_b_punish_for_team_kill;
        bool m_b_gave_team_damage_warning;
        bool m_b_gave_team_damage_warning_this_round;
        double m_dbl_last_received_packet_plat_float_time;
        GameTime_t m_last_team_damage_warning_time;
        GameTime_t m_last_time_player_was_disconnected_for_pawns_remove;
        uint32_t m_n_suspicious_hit_count;
        uint32_t m_n_non_suspicious_hit_streak;
        bool m_b_fire_bullets_seed_synchronized;
    };

    struct cphyslength_t {
        Vector m_offset;
        VectorWS m_vec_attach;
        float m_add_length;
        float m_min_length;
        float m_total_length;
    };

    struct cteam_t {
        CNetworkUtlVectorBase_CHandle_CBasePlayerController_ m_a_player_controllers;
        CNetworkUtlVectorBase_CHandle_CBasePlayerPawn_ m_a_players;
        int32_t m_i_score;
        char m_sz_teamname;
    };

    struct clogicnpccounteraabb_t {
        vector3d_t m_v_distance_outer_mins;
        vector3d_t m_v_distance_outer_maxs;
        VectorWS m_v_outer_mins;
        VectorWS m_v_outer_maxs;
    };

    struct cpulsecell_outflow_cycleordered__instancestate_t_t {
        int32_t m_n_next_index;
    };

    struct cchicken_t {
        CAttributeContainer m_attribute_manager;
        CountdownTimer m_update_timer;
        VectorWS m_stuck_anchor;
        CountdownTimer m_collision_stuck_timer;
        bool m_is_on_ground;
        vector3d_t m_v_fall_velocity;
        EChickenActivity m_desired_activity;
        EChickenActivity m_current_activity;
        CountdownTimer m_activity_timer;
        float m_turn_rate;
        CHandle_CBaseEntity_ m_flee_from;
        CountdownTimer m_move_rate_throttle_timer;
        CountdownTimer m_startle_timer;
        CountdownTimer m_vocalize_timer;
        CHandle_CCSPlayerPawn_ m_leader;
        CHandle_CCSPlayerController_ m_owner;
        CountdownTimer m_reuse_timer;
        CountdownTimer m_jump_timer;
        float m_fl_last_jump_time;
        CountdownTimer m_repath_timer;
        VectorWS m_vec_path_goal;
        GameTime_t m_fl_active_follow_start_time;
        CountdownTimer m_follow_minute_timer;
        CountdownTimer m_block_direction_timer;
        bool m_b_spawn_dying_particles;
    };

    struct cphysicsproprespawnable_t {
        VectorWS m_v_original_spawn_origin;
        QAngle m_v_original_spawn_angles;
        vector3d_t m_v_original_mins;
        vector3d_t m_v_original_maxs;
        float m_fl_respawn_duration;
    };

    struct cenvbeam_t {
        int32_t m_active;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_sprite_texture;
        CUtlSymbolLarge m_isz_start_entity;
        CUtlSymbolLarge m_isz_end_entity;
        float m_life;
        float m_bolt_width;
        float m_noise_amplitude;
        int32_t m_speed;
        float m_restrike;
        CUtlSymbolLarge m_isz_sprite_name;
        int32_t m_frame_start;
        VectorWS m_v_end_point_world;
        vector3d_t m_v_end_point_relative;
        float m_radius;
        Touch_t m_touch_type;
        CUtlSymbolLarge m_i_filter_name;
        CHandle_CBaseEntity_ m_h_filter;
        CUtlSymbolLarge m_isz_decal;
        CEntityIOOutput m_on_touched_by_entity;
    };

    struct ccsobservableelement_t {
        CUtlSymbolLarge m_isz_observable_model_entity;
        CHandle_CBaseEntity_ m_h_observable_model_entity;
        CHandle_CBaseEntity_ m_h_observable_model_entity2;
        uint32_t m_n_team_filter;
    };

    struct ctonemaptrigger_t {
        CUtlSymbolLarge m_tonemap_controller_name;
        CEntityHandle m_h_tonemap_controller;
    };

    struct cenvshake_t {
        CUtlSymbolLarge m_limit_to_entity;
        float m_amplitude;
        float m_frequency;
        float m_duration;
        float m_radius;
        GameTime_t m_stop_time;
        GameTime_t m_next_shake;
        float m_current_amp;
        vector3d_t m_max_force;
        IPhysicsMotionController* m_p_shake_controller;
        CPhysicsShake m_shake_callback;
    };

    struct ccsplayer_movementservices_t {
        CCSPlayerAnimationState m_animation_state;
        bool m_b_using_ground_topology_offset;
        float m_fl_using_ground_topology_offset_transition_smoothing;
        vector3d_t m_vec_ladder_normal;
        int32_t m_n_ladder_surface_prop_index;
        bool m_b_ducked;
        float m_fl_duck_amount;
        float m_fl_duck_speed;
        bool m_b_duck_override;
        bool m_b_desires_duck;
        bool m_b_ducking;
        float m_fl_duck_root_offset;
        float m_fl_duck_view_offset;
        float m_fl_last_duck_time;
        float m_fl_bomb_plant_view_offset;
        vector2d_t m_vec_last_position_at_full_crouch_speed;
        bool m_duck_until_on_ground;
        bool m_b_has_walk_moved_since_last_jump;
        bool m_b_in_stuck_test;
        int32_t m_n_trace_count;
        int32_t m_stuck_last;
        bool m_b_speed_cropped;
        int32_t m_n_old_water_level;
        float m_fl_water_entry_time;
        vector3d_t m_vec_forward;
        vector3d_t m_vec_left;
        vector3d_t m_vec_up;
        int32_t m_n_game_code_has_moved_player_after_command;
        bool m_b_made_footstep_noise;
        int32_t m_i_footsteps;
        GameTime_t m_f_stash_grenade_parameter_when;
        bool m_b_use_friction_stashed_speed;
        float m_fl_use_friction_stashed_speed_until_frac;
        float m_fl_friction_stashed_speed;
        float m_fl_stamina;
        float m_fl_height_at_jump_start;
        float m_fl_max_jump_height_this_jump;
        float m_fl_max_jump_height_last_jump;
        float m_fl_stamina_at_jump_start;
        float m_fl_vel_mul_at_jump_start;
        float m_fl_accumulated_jump_error;
        CCSPlayerLegacyJump m_legacy_jump;
        CCSPlayerModernJump m_modern_jump;
        GameTick_t m_n_last_jump_tick;
        float m_fl_last_jump_frac;
        float m_fl_last_jump_velocity_z;
        bool m_b_jump_apex_pending;
        float m_fl_ticks_since_last_surfing_detected;
        vector2d_t m_vec_walk_wish_vel;
        bool m_b_has_ever_processed_command;
    };

    struct sellbackpurchaseentry_t_t {
        uint16_t m_un_def_idx;
        int32_t m_n_cost;
        int32_t m_n_prev_armor;
        bool m_b_prev_helmet;
        CEntityHandle m_h_item;
    };

    struct ctestpulseio__entitynamestringargs_t_t {
        CEntityNameString name_a;
        CUtlSymbolLarge str_value_b;
    };

    struct cfuncmoverrouter_t {
        int32_t m_n_mover_index;
        bool m_b_route_to_all_movers;
        CHandle_CPathMover_ m_h_path_mover;
        CUtlSymbolLarge m_isz_path_mover_name;
    };

    struct csoundopvarsetautoroomentity_t {
        CUtlVector_SoundOpvarTraceResult_t_ m_trace_results;
        CUtlVector_AutoRoomDoorwayPairs_t_ m_doorway_pairs;
        float m_fl_size;
        float m_fl_height_tolerance;
        float m_fl_size_sqr;
    };

    struct cpulsecell_outflow_listenforentityoutput_t {
        SignatureOutflow_Resume m_on_fired;
        CGlobalSymbol m_str_entity_output;
        bool m_b_listen_until_canceled;
    };

    struct cphysicsentitysolver_t {
        CHandle_CBaseEntity_ m_h_moving_entity;
        CHandle_CBaseEntity_ m_h_physics_blocker;
        float m_separation_duration;
        GameTime_t m_cancel_time;
    };

    struct clogiccollisionpair_t {
        CUtlSymbolLarge m_name_attach1;
        CUtlSymbolLarge m_name_attach2;
        bool m_include_hierarchy;
        bool m_support_multiple_entities_with_same_name;
        bool m_disabled;
        bool m_succeeded;
        bool m_allow_missing;
    };

    struct ctesteffect_t {
        int32_t m_i_loop;
        int32_t m_i_beam;
        CHandle_CBeam_ m_p_beam;
        GameTime_t m_fl_beam_time;
        GameTime_t m_fl_start_time;
    };

    struct cpulsecell_outflow_scriptedsequence__cursorstate_t_t {
        CHandle_CBaseEntity_ m_scripted_sequence;
    };

    struct cpropdoorrotating_t {
        vector3d_t m_vec_axis;
        float m_fl_distance;
        PropDoorRotatingSpawnPos_t m_e_spawn_position;
        PropDoorRotatingOpenDirection_e m_e_open_direction;
        PropDoorRotatingOpenDirection_e m_e_current_open_direction;
        doorCheck_e m_e_default_check_direction;
        float m_fl_ajar_angle;
        QAngle m_ang_rotation_ajar_deprecated;
        QAngle m_ang_rotation_closed;
        QAngle m_ang_rotation_open_forward;
        QAngle m_ang_rotation_open_back;
        QAngle m_ang_goal;
        vector3d_t m_vec_forward_bounds_min;
        vector3d_t m_vec_forward_bounds_max;
        vector3d_t m_vec_back_bounds_min;
        vector3d_t m_vec_back_bounds_max;
        bool m_b_ajar_door_shouldnt_always_open;
        CHandle_CEntityBlocker_ m_h_entity_blocker;
    };

    struct cenvparticleglow_t {
        float m_fl_alpha_scale;
        float m_fl_radius_scale;
        float m_fl_self_illum_scale;
        color_t m_color_tint;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_texture_override;
    };

    struct cmathremap_t {
        float m_fl_in_min;
        float m_fl_in_max;
        float m_fl_out1;
        float m_fl_out2;
        float m_fl_old_in_value;
        bool m_b_enabled;
        CEntityOutputTemplate_float_ m_out_value;
        CEntityIOOutput m_on_rose_above_min;
        CEntityIOOutput m_on_rose_above_max;
        CEntityIOOutput m_on_fell_below_min;
        CEntityIOOutput m_on_fell_below_max;
    };

    struct cskycameravolumetarget_t {
        int16_t m_n_skybox_scale;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
    };

    struct csoundopvarsetobbwindentity_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
        vector3d_t m_v_distance_mins;
        vector3d_t m_v_distance_maxs;
        float m_fl_wind_min;
        float m_fl_wind_max;
        float m_fl_wind_map_min;
        float m_fl_wind_map_max;
    };

    struct physicsragdollpose_t_t {
        CNetworkUtlVectorBase_CTransform_ m_relative_transforms;
        CHandle_CBaseEntity_ m_h_owner;
        bool m_b_set_from_debug_history;
    };

    struct cpulsecell_applydynamicattributebase__cursorstate_t_t {
        CHandle_CBaseEntity_ m_h_entity;
        CUtlString m_sz_attribute_key;
    };

    struct cpropdatacomponent_t {
        float m_fl_dmg_mod_bullet;
        float m_fl_dmg_mod_club;
        float m_fl_dmg_mod_explosive;
        float m_fl_dmg_mod_fire;
        CUtlSymbolLarge m_isz_physics_damage_table_name;
        CUtlSymbolLarge m_isz_base_prop_data;
        int32_t m_n_interactions;
        bool m_b_spawn_motion_disabled;
        int32_t m_n_disable_take_physics_damage_spawn_flag;
        int32_t m_n_motion_disabled_spawn_flag;
    };

    struct cscripttriggeronce_t {
        vector3d_t m_v_extent;
    };

    struct cpulsecell_limitcount__instancestate_t_t {
        int32_t m_n_current_count;
    };

    struct ctriggerteleport_t {
        CUtlSymbolLarge m_i_landmark;
        bool m_b_use_landmark_angles;
        bool m_b_mirror_player;
        bool m_b_check_dest_if_clear_for_player;
    };

    struct cfuncwall_t {
        int32_t m_n_state;
    };

    struct cbtactionaim_t {
        CUtlString m_sz_sensor_input_key;
        CUtlString m_sz_aim_ready_key;
        float m_fl_zoom_cooldown_timestamp;
        bool m_b_done_aiming;
        float m_fl_lerp_start_time;
        float m_fl_next_look_target_lerp_time;
        float m_fl_penalty_reduction_ratio;
        QAngle m_next_look_target;
        CountdownTimer m_aim_timer;
        CountdownTimer m_sniper_hold_timer;
        CountdownTimer m_focus_interval_timer;
        bool m_b_acquired;
    };

    struct ccsgo_teampreviewcharacterposition_t {
        int32_t m_n_variant;
        int32_t m_n_random;
        int32_t m_n_ordinal;
        CUtlString m_s_weapon_name;
        uint64_t m_xuid;
        CEconItemView m_agent_item;
        CEconItemView m_gloves_item;
        CEconItemView m_weapon_item;
        CEconItemView m_pet_item;
    };

    struct cmessage_t {
        CUtlSymbolLarge m_isz_message;
        float m_message_volume;
        int32_t m_message_attenuation;
        float m_radius;
        CGameSoundEventName m_s_noise;
        CEntityIOOutput m_on_show_message;
    };

    struct cpointvelocitysensor_t {
        CHandle_CBaseEntity_ m_h_target_entity;
        vector3d_t m_vec_axis;
        bool m_b_enabled;
        float m_f_prev_velocity;
        float m_fl_avg_interval;
        CEntityOutputTemplate_float_ m_velocity;
    };

    struct ccs2pawngraphcontroller_t {
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_defusing;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_move_type;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_move_direction_id;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_x;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_y;
        CAnimGraph2ParamOptionalRef_float_ m_fl_move_speed_horizontal;
        CAnimGraph2ParamOptionalRef_float_ m_fl_previous_move_speed_horizontal;
        CAnimGraph2ParamOptionalRef_float_ m_fl_crouch_amount;
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_walking;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_drop_amount;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_ground_action;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_ground_action_direction_id;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ground_turn_angle_or_velocity;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_cycle;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_yaw;
        CAnimGraph2ParamOptionalRef_float_ m_fl_ladder_yaw_backwards;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_air_action;
        CAnimGraph2ParamOptionalRef_float_ m_fl_air_height_above_ground;
        CAnimGraph2ParamOptionalRef_CNmTarget_ m_left_foot_target;
        CAnimGraph2ParamOptionalRef_CNmTarget_ m_right_foot_target;
        CAnimGraph2ParamOptionalRef_float_ m_fl_flashed_amount;
        CAnimGraph2ParamOptionalRef_float_ m_fl_aim_pitch_angle;
        CAnimGraph2ParamOptionalRef_float_ m_fl_aim_yaw_angle;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_flinch_head;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_head_restart;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_flinch_body;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_body_restart;
        CAnimGraph2ParamOptionalRef_bool_ m_flinch_is_on_fire;
    };

    struct enginecountdowntimer_t {
        float m_duration;
        float m_timestamp;
        float m_timescale;
    };

    struct cscripttriggermultiple_t {
        vector3d_t m_v_extent;
    };

    struct chostage_t {
        CEntityIOOutput m_on_hostage_begin_grab;
        CEntityIOOutput m_on_first_picked_up;
        CEntityIOOutput m_on_dropped_not_rescued;
        CEntityIOOutput m_on_rescued;
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
        uint32_t m_ui_hostage_spawn_exclusion_group_mask;
        uint32_t m_n_hostage_spawn_random_factor;
        bool m_b_remove;
        vector3d_t m_vel;
        bool m_is_rescued;
        bool m_jumped_this_frame;
        int32_t m_n_hostage_state;
        CHandle_CBaseEntity_ m_leader;
        CHandle_CCSPlayerPawnBase_ m_last_leader;
        CountdownTimer m_reuse_timer;
        bool m_has_been_used;
        vector3d_t m_accel;
        bool m_is_running;
        bool m_is_crouching;
        CountdownTimer m_jump_timer;
        bool m_is_waiting_for_leader;
        CountdownTimer m_repath_timer;
        CountdownTimer m_inhibit_door_timer;
        CountdownTimer m_inhibit_obstacle_avoidance_timer;
        CountdownTimer m_wiggle_timer;
        bool m_is_adjusted;
        bool m_b_hands_have_been_cut;
        CHandle_CCSPlayerPawn_ m_h_hostage_grabber;
        GameTime_t m_f_last_grab_time;
        GameTime_t m_fl_grab_start_time;
        VectorWS m_vec_position_when_started_dropping_to_ground;
        VectorWS m_vec_grabbed_pos;
        GameTime_t m_fl_rescue_start_time;
        GameTime_t m_fl_grab_success_time;
        GameTime_t m_fl_drop_start_time;
        int32_t m_n_approach_reward_payouts;
        int32_t m_n_pickup_event_count;
        VectorWS m_vec_spawn_ground_pos;
        VectorWS m_vec_hostage_reset_position;
    };

    struct cenvspark_t {
        float m_fl_delay;
        int32_t m_n_magnitude;
        int32_t m_n_trail_length;
        int32_t m_n_type;
        CEntityIOOutput m_on_spark;
    };

    struct ccsplayercontroller_damageservices_t {
        int32_t m_n_send_update;
        CUtlVectorEmbeddedNetworkVar_CDamageRecord_ m_damage_list;
    };

    struct cbasemodelentity__ondamagelevelchangedargs_t_t {
        HitGroup_t n_hit_group;
        int32_t n_damage_level;
        int32_t n_damage_levels_remaining;
        int32_t n_prev_damage_level;
    };

    struct cpointorient_t {
        CUtlSymbolLarge m_isz_spawn_target_name;
        CHandle_CBaseEntity_ m_h_target;
        bool m_b_active;
        PointOrientGoalDirectionType_t m_n_goal_direction;
        PointOrientConstraint_t m_n_constraint;
        float m_fl_max_turn_rate;
        GameTime_t m_fl_last_game_time;
    };

    struct sky3dparams_t_t {
        int16_t scale;
        VectorWS origin;
        bool b_clip3_dsky_box_near_to_world_far;
        float fl_clip3_dsky_box_near_to_world_far_offset;
        fogparams_t fog;
        WorldGroupId_t m_n_world_group_id;
    };

    struct cdestructiblepartscomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        CUtlVector_uint16_t_ m_vec_damage_taken_by_hit_group;
        CHandle_CBaseModelEntity_ m_h_owner;
        CAnimGraphControllerPtr m_p_anim_graph_destructible_graph_controller;
    };

    struct cchangelevel_t {
        CUtlString m_s_map_name;
        CUtlString m_s_landmark_name;
        CEntityIOOutput m_on_change_level;
        bool m_b_touched;
        bool m_b_no_touch;
        bool m_b_new_chapter;
        bool m_b_on_change_level_fired;
    };

    struct cbasebutton_t {
        QAngle m_ang_move_entity_space;
        bool m_f_stay_pushed;
        bool m_f_rotating;
        locksound_t m_ls;
        CGameSoundEventName m_s_use_sound;
        CGameSoundEventName m_s_locked_sound;
        CGameSoundEventName m_s_unlocked_sound;
        CUtlSymbolLarge m_s_override_anticipation_name;
        bool m_b_locked;
        bool m_b_disabled;
        float m_fl_speed;
        GameTime_t m_fl_use_locked_time;
        bool m_b_solid_bsp;
        CEntityIOOutput m_on_damaged;
        CEntityIOOutput m_on_pressed;
        CEntityIOOutput m_on_use_locked;
        CEntityIOOutput m_on_in;
        CEntityIOOutput m_on_out;
        int32_t m_n_state;
        CEntityHandle m_h_constraint;
        CEntityHandle m_h_constraint_parent;
        bool m_b_force_npc_exclude;
        CUtlSymbolLarge m_s_glow_entity;
        CHandle_CBaseModelEntity_ m_glow_entity;
        bool m_usable;
        CUtlSymbolLarge m_sz_display_text;
    };

    struct cpulsecell_soundeventstart_t {
        SoundEventStartType_t m_type;
    };

    struct cbasegrenade_t {
        bool m_b_damage_detonating;
        CEntityIOOutput m_on_player_pickup;
        CEntityIOOutput m_on_explode;
        bool m_b_has_warned_ai;
        bool m_b_is_smoke_grenade;
        bool m_b_is_live;
        float m_dmg_radius;
        GameTime_t m_fl_detonate_time;
        float m_fl_warn_aitime;
        float m_fl_damage;
        CUtlSymbolLarge m_isz_bounce_sound;
        CUtlString m_explosion_sound;
        CHandle_CCSPlayerPawn_ m_h_thrower;
        GameTime_t m_fl_next_attack;
        CHandle_CCSPlayerPawn_ m_h_original_thrower;
    };

    struct ccolorcorrectionvolume_t {
        float m_max_weight;
        float m_fade_duration;
        float m_weight;
        char m_lookup_filename;
        float m_last_enter_weight;
        GameTime_t m_last_enter_time;
        float m_last_exit_weight;
        GameTime_t m_last_exit_time;
    };

    struct ccsplayercontroller_actiontrackingservices_t {
        CUtlVectorEmbeddedNetworkVar_CSPerRoundStats_t_ m_per_round_stats;
        CSMatchStats_t m_match_stats;
        int32_t m_i_num_round_kills;
        int32_t m_i_num_round_kills_headshots;
        float m_fl_total_round_damage_dealt;
    };

    struct cbodycomponentbaseanimgraph_t {
        CBaseAnimGraphController m_animation_controller;
    };

    struct cpulsecell_baseyieldinginflow_t {
        CPulse_ResumePoint m_base_flow_on_after_cancel;
        CPulse_ResumePoint m_base_flow_while_active;
    };

    struct pulsenodedynamicoutflows_t_t {
        CUtlVector_PulseNodeDynamicOutflows_t_DynamicOutflow_t_ m_outflows;
    };

    struct cfogvolume_t {
        CUtlSymbolLarge m_fog_name;
        CUtlSymbolLarge m_post_process_name;
        CUtlSymbolLarge m_color_correction_name;
        bool m_b_disabled;
        bool m_b_in_fog_volumes_list;
    };

    struct cfuncrotating_t {
        CEntityIOOutput m_on_stopped;
        CEntityIOOutput m_on_started;
        CEntityIOOutput m_on_reached_start;
        RotationVector m_local_rotation_vector;
        float m_fl_speed;
        float m_fl_fan_friction;
        float m_fl_attenuation;
        float m_fl_volume;
        float m_fl_target_speed;
        float m_fl_max_speed;
        float m_fl_block_damage;
        CGameSoundEventName m_noise_running;
        bool m_b_reversed;
        bool m_b_accel_decel;
        QAngle m_prev_local_angles;
        QAngle m_ang_start;
        bool m_b_stop_at_start_pos;
        vector3d_t m_vec_client_origin;
        QAngle m_vec_client_angles;
    };

    struct ctimerentity_t {
        CEntityIOOutput m_on_timer;
        CEntityIOOutput m_on_timer_high;
        CEntityIOOutput m_on_timer_low;
        int32_t m_i_disabled;
        float m_fl_initial_delay;
        float m_fl_refire_time;
        bool m_b_up_down_state;
        int32_t m_i_use_random_time;
        bool m_b_pause_after_firing;
        float m_fl_lower_random_bound;
        float m_fl_upper_random_bound;
        float m_fl_remaining_time;
        bool m_b_paused;
    };

    struct cbtactionmoveto_t {
        CUtlString m_sz_destination_input_key;
        CUtlString m_sz_hiding_spot_input_key;
        CUtlString m_sz_threat_input_key;
        VectorWS m_vec_destination;
        bool m_b_auto_look_adjust;
        bool m_b_compute_path;
        float m_fl_damaging_areas_penalty_cost;
        CountdownTimer m_check_approximate_corners_timer;
        CountdownTimer m_check_high_priority_item;
        CountdownTimer m_repath_timer;
        float m_fl_arrival_epsilon;
        float m_fl_additional_arrival_epsilon2_d;
        float m_fl_hiding_spot_check_distance_threshold;
        float m_fl_nearest_area_distance_threshold;
    };

    struct cplayer_movementservices_humanoid_t {
        float m_fl_step_sound_time;
        float m_fl_fall_velocity;
        vector3d_t m_ground_normal;
        float m_fl_surface_friction;
        CUtlStringToken m_surface_props;
        int32_t m_n_stepside;
        vector3d_t m_vec_smoothed_velocity;
    };

    struct cpulsecell_isrequirementvalid__criteria_t_t {
        bool m_b_is_valid;
    };

    struct csmatchstats_t_t {
        int32_t m_i_enemy5_ks;
        int32_t m_i_enemy4_ks;
        int32_t m_i_enemy3_ks;
        int32_t m_i_enemy_knife_kills;
        int32_t m_i_enemy_taser_kills;
        int32_t m_i_enemy2_ks;
        int32_t m_i_utility_count;
        int32_t m_i_utility_successes;
        int32_t m_i_utility_enemies;
        int32_t m_i_flash_count;
        int32_t m_i_flash_successes;
        float m_fl_health_points_removed_total;
        float m_fl_health_points_dealt_total;
        int32_t m_n_shots_fired_total;
        int32_t m_n_shots_on_target_total;
        int32_t m_i1v1_count;
        int32_t m_i1v1_wins;
        int32_t m_i1v2_count;
        int32_t m_i1v2_wins;
        int32_t m_i_entry_count;
        int32_t m_i_entry_wins;
    };

    struct entityrenderattribute_t_t {
        CUtlStringToken m_id;
        vector4d_t m_values;
    };

    struct cpulsecell_inflow_observablevariablelistener_t {
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_reference;
        bool m_b_self_reference;
    };

    struct cfuncmonitor_t {
        CUtlString m_target_camera;
        int32_t m_n_resolution_enum;
        bool m_b_render_shadows;
        bool m_b_use_unique_color_target;
        CUtlString m_brush_model_name;
        CHandle_CBaseEntity_ m_h_target_camera;
        bool m_b_enabled;
        bool m_b_draw3_dskybox;
        bool m_b_start_enabled;
    };

    struct cinfovisibilitybox_t {
        int32_t m_n_mode;
        vector3d_t m_v_box_size;
        bool m_b_enabled;
    };

    struct cguntarget_t {
        float m_fl_speed;
        bool m_on;
        CHandle_CBaseEntity_ m_h_target_ent;
        CEntityIOOutput m_on_death;
    };

    struct csoundeventconeentity_t {
        float m_fl_emitter_angle;
        float m_fl_sweet_spot_angle;
        float m_fl_atten_min;
        float m_fl_atten_max;
        CUtlSymbolLarge m_isz_parameter_name;
    };

    struct cdecoyprojectile_t {
        int32_t m_n_decoy_shot_tick;
        int32_t m_shots_remaining;
        GameTime_t m_f_expire_time;
        uint16_t m_decoy_weapon_def_index;
    };

    struct csoundopvarsetpathcornerentity_t {
        bool m_b_use_parented_path;
        float m_fl_dist_min_sqr;
        float m_fl_dist_max_sqr;
        CUtlSymbolLarge m_isz_path_corner_entity_name;
    };

    struct cpulsecell_applyparent__cursorstate_t_t {
        CHandle_CBaseEntity_ m_h_parent_entity;
        CHandle_CBaseEntity_ m_h_child_entity;
    };

    struct cpathmoverentityspawner_t {
        CPathMoverEntitySpawner_TemplateChoiceStrategy_t m_e_template_choice_strategy;
        CUtlSymbolLarge m_sz_spawn_templates;
        int32_t m_sz_spawn_template_params;
        int32_t m_sz_spawn_template_count;
        int32_t m_n_spawn_index;
        CHandle_CPathMover_ m_h_path_mover;
        float m_fl_spawn_frequency_seconds;
        float m_fl_spawn_frequency_dist_to_nearest_mover;
        CUtlHashtable_CHandle_CFuncMover_PathMoverEntitySpawn_ m_map_spawned_mover_templates;
        int32_t m_n_max_active;
        int32_t m_n_spawn_num;
        GameTime_t m_fl_last_spawn_time;
        bool m_b_enabled;
        bool m_b_destroy_mover_on_arrived_at_end;
        CUtlVector_CHandle_CFuncMover_ m_vec_queued_removals;
        CEntityIOOutput m_on_template_spawned;
        CEntityIOOutput m_on_template_group_spawned;
        CUtlSymbolLarge m_isz_path_mover_name;
        bool m_b_prepopulate_on_spawn;
        CUtlSymbolLarge m_isz_path_node_start_name;
        VectorWS m_v_mover_spawn_pos;
        bool m_b_running_debug_think;
    };

    struct cmodelstate_t {
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CUtlSymbolLarge m_model_name;
        IPhysAggregateInstance* m_p_vphysics_aggregate;
        float m_fl_root_bone_offset_x;
        float m_fl_root_bone_offset_y;
        float m_fl_root_bone_offset_z;
        uint8_t m_n_root_bone_offset_reset_serial_number;
        bool m_b_client_cloth_creation_suppressed;
        uint8_t m_n_anim_state_no_interp_serial_number;
        uint64_t m_mesh_group_mask;
        CNetworkUtlVectorBase_int32_t_ m_n_body_group_choices;
        int8_t m_n_ideal_motion_type;
        int8_t m_n_force_lod;
        int8_t m_n_cloth_update_flags;
    };

    struct cbasemodelentity__bodygrouprequest_t_t {
        uint32_t m_u_request_id;
        CUtlStringToken m_n_group_name;
        CGlobalSymbol m_s_choice_name;
        int32_t m_n_group;
        uint16_t m_u_choice;
        uint16_t m_u_ref_count;
    };

    struct cpulsecell_lerpcamerasettings__cursorstate_t_t {
        CHandle_CPointCamera_ m_h_camera;
        PointCameraSettings_t m_overlaid_start;
        PointCameraSettings_t m_overlaid_end;
    };

    struct cpulsecell_outflow_cycleordered_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct ccollisionproperty_t {
        VPhysicsCollisionAttribute_t m_collision_attribute;
        vector3d_t m_vec_mins;
        vector3d_t m_vec_maxs;
        uint8_t m_us_solid_flags;
        SolidType_t m_n_solid_type;
        uint8_t m_trigger_bloat;
        SurroundingBoundsType_t m_n_surround_type;
        uint8_t m_collision_group;
        uint8_t m_n_enable_physics;
        float m_fl_bounding_radius;
        vector3d_t m_vec_specified_surrounding_mins;
        vector3d_t m_vec_specified_surrounding_maxs;
        vector3d_t m_vec_surrounding_maxs;
        vector3d_t m_vec_surrounding_mins;
        vector3d_t m_v_capsule_center1;
        vector3d_t m_v_capsule_center2;
        float m_fl_capsule_radius;
    };

    struct cfiltermassgreater_t {
        float m_f_filter_mass;
    };

    struct ccsweaponbasegun_t {
        int32_t m_zoom_level;
        int32_t m_i_burst_shots_remaining;
        int32_t m_silenced_model_index;
        bool m_in_precache;
        bool m_b_needs_bolt_action;
        int32_t m_n_revolver_cylinder_idx;
        bool m_b_skill_reload_available;
        bool m_b_skill_reload_lifted_reload_key;
        bool m_b_skill_bolt_interrupt_available;
        bool m_b_skill_bolt_lifted_fire_key;
    };

    struct clogicactiveautosave_t {
        int32_t m_trigger_hit_points;
        float m_fl_time_to_trigger;
        GameTime_t m_fl_start_time;
        float m_fl_dangerous_time;
    };

    struct cmathcounter_t {
        float m_fl_min;
        float m_fl_max;
        bool m_b_hit_min;
        bool m_b_hit_max;
        bool m_b_disabled;
        CEntityOutputTemplate_float_ m_out_value;
        CEntityOutputTemplate_float_ m_on_get_value;
        CEntityIOOutput m_on_hit_min;
        CEntityIOOutput m_on_hit_max;
        CEntityIOOutput m_on_changed_from_min;
        CEntityIOOutput m_on_changed_from_max;
    };

    struct ccscustomplayercamera_t {
        CHandle_CCSPlayerPawnBase_ m_h_pawn;
        CustomCameraMode_t m_n_camera_mode;
        CHandle_CBaseEntity_ m_h_follow_entity;
        bool m_b_follow_eyes;
        vector3d_t m_vec_follow_offset;
        vector3d_t m_vec_camera_offset;
        bool m_b_clip_camera_offset;
        float m_fl_camera_offset_return_strength;
    };

    struct ccsgamemoderules_armsrace_t {
        CNetworkUtlVectorBase_CUtlString_ m_weapon_sequence;
    };

    struct clogicplayerproxybase_t {
        CEntityIOOutput m_player_has_ammo;
        CEntityIOOutput m_player_has_no_ammo;
        CEntityIOOutput m_player_died;
        CEntityOutputTemplate_int32_t_ m_requested_player_health;
        CHandle_CBaseEntity_ m_h_player;
    };

    struct cattributecontainer_t {
        CEconItemView m_item;
    };

    struct ccsplace_t {
        CUtlSymbolLarge m_name;
    };

    struct pulseselectoroutflowlist_t_t {
        CUtlVector_OutflowWithRequirements_t_ m_outflows;
    };

    struct cfiltercontext_t {
        CUtlSymbolLarge m_i_filter_context;
    };

    struct cenvdecal_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_decal_material;
        float m_fl_width;
        float m_fl_height;
        float m_fl_depth;
        uint32_t m_n_render_order;
        bool m_b_project_on_world;
        bool m_b_project_on_characters;
        bool m_b_project_on_water;
        float m_fl_depth_sort_bias;
    };

    struct cenvvolumetricfogvolume_t {
        bool m_b_active;
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        bool m_b_start_disabled;
        bool m_b_indirect_use_lpvs;
        float m_fl_strength;
        int32_t m_n_falloff_shape;
        float m_fl_falloff_exponent;
        float m_fl_height_fog_depth;
        float m_f_height_fog_edge_width;
        float m_f_indirect_light_strength;
        float m_f_sun_light_strength;
        float m_f_noise_strength;
        color_t m_tint_color;
        bool m_b_override_tint_color;
        bool m_b_override_indirect_light_strength;
        bool m_b_override_sun_light_strength;
        bool m_b_override_noise_strength;
    };

    struct cpulsecell_playsequence__cursorstate_t_t {
        CHandle_CBaseAnimGraph_ m_h_target;
    };

    struct cbodycomponentskeletoninstance_t {
        CSkeletonInstance m_skeleton_instance;
    };

    struct citemgeneric_t {
        bool m_b_has_trigger_radius;
        bool m_b_has_pickup_radius;
        float m_fl_pickup_radius_sqr;
        float m_fl_trigger_radius_sqr;
        GameTime_t m_fl_last_pickup_check;
        bool m_b_player_counter_listener_added;
        bool m_b_player_in_trigger_radius;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_spawn_particle_effect;
        CUtlSymbolLarge m_p_ambient_sound_effect;
        bool m_b_auto_start_ambient_sound;
        CUtlSymbolLarge m_p_spawn_script_function;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_pickup_particle_effect;
        CUtlSymbolLarge m_p_pickup_sound_effect;
        CUtlSymbolLarge m_p_pickup_script_function;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_h_timeout_particle_effect;
        CUtlSymbolLarge m_p_timeout_sound_effect;
        CUtlSymbolLarge m_p_timeout_script_function;
        CUtlSymbolLarge m_p_pickup_filter_name;
        CHandle_CBaseFilter_ m_h_pickup_filter;
        CEntityIOOutput m_on_pickup;
        CEntityIOOutput m_on_timeout;
        CEntityIOOutput m_on_trigger_start_touch;
        CEntityIOOutput m_on_trigger_touch;
        CEntityIOOutput m_on_trigger_end_touch;
        CUtlSymbolLarge m_p_allow_pickup_script_function;
        float m_fl_pickup_radius;
        float m_fl_trigger_radius;
        CUtlSymbolLarge m_p_trigger_sound_effect;
        bool m_b_glow_when_in_trigger;
        color_t m_glow_color;
        bool m_b_useable;
        CHandle_CItemGenericTriggerHelper_ m_h_trigger_helper;
    };

    struct cpointvalueremapper_t {
        bool m_b_disabled;
        bool m_b_update_on_client;
        ValueRemapperInputType_t m_n_input_type;
        CUtlSymbolLarge m_isz_remap_line_start_name;
        CUtlSymbolLarge m_isz_remap_line_end_name;
        CHandle_CBaseEntity_ m_h_remap_line_start;
        CHandle_CBaseEntity_ m_h_remap_line_end;
        float m_fl_maximum_change_per_second;
        float m_fl_disengage_distance;
        float m_fl_engage_distance;
        bool m_b_requires_use_key;
        ValueRemapperOutputType_t m_n_output_type;
        CUtlSymbolLarge m_isz_output_entity_name;
        CUtlSymbolLarge m_isz_output_entity2_name;
        CUtlSymbolLarge m_isz_output_entity3_name;
        CUtlSymbolLarge m_isz_output_entity4_name;
        CNetworkUtlVectorBase_CHandle_CBaseEntity_ m_h_output_entities;
        ValueRemapperHapticsType_t m_n_haptics_type;
        ValueRemapperMomentumType_t m_n_momentum_type;
        float m_fl_momentum_modifier;
        float m_fl_snap_value;
        float m_fl_current_momentum;
        ValueRemapperRatchetType_t m_n_ratchet_type;
        float m_fl_ratchet_offset;
        float m_fl_input_offset;
        bool m_b_engaged;
        bool m_b_first_update;
        float m_fl_previous_value;
        GameTime_t m_fl_previous_update_tick_time;
        VectorWS m_vec_previous_test_point;
        CHandle_CBasePlayerPawn_ m_h_using_player;
        float m_fl_custom_output_value;
        CUtlSymbolLarge m_isz_sound_engage;
        CUtlSymbolLarge m_isz_sound_disengage;
        CUtlSymbolLarge m_isz_sound_reached_value_zero;
        CUtlSymbolLarge m_isz_sound_reached_value_one;
        CUtlSymbolLarge m_isz_sound_moving_loop;
        CEntityOutputTemplate_float_ m_position;
        CEntityOutputTemplate_float_ m_position_delta;
        CEntityIOOutput m_on_reached_value_zero;
        CEntityIOOutput m_on_reached_value_one;
        CEntityIOOutput m_on_reached_value_custom;
        CEntityIOOutput m_on_engage;
        CEntityIOOutput m_on_disengage;
    };

    struct cbtnodeconditioninactive_t {
        float m_fl_round_start_threshold_seconds;
        float m_fl_sensor_inactivity_threshold_seconds;
        CountdownTimer m_sensor_inactivity_timer;
    };

    struct cragdollprop_t {
        CPropDataComponent m_cprop_data_component;
        ragdoll_t m_ragdoll;
        bool m_b_start_disabled;
        float m_mass_scale;
        float m_buoyancy_scale;
        CNetworkUtlVectorBase_bool_ m_rag_enabled;
        CNetworkUtlVectorBase_Vector_ m_rag_pos;
        CNetworkUtlVectorBase_QAngle_ m_rag_angles;
        uint32_t m_last_update_tick_count;
        bool m_all_asleep;
        bool m_b_first_collision_after_launch;
        INavObstacle_NavObstacleType_t m_n_nav_obstacle_type;
        bool m_b_update_nav_when_moving;
        bool m_b_force_nav_obstacle_cut;
        bool m_b_attached_to_reference_frame;
        CHandle_CBaseEntity_ m_h_damage_entity;
        CHandle_CBaseEntity_ m_h_killer;
        CHandle_CBasePlayerPawn_ m_h_physics_attacker;
        GameTime_t m_fl_last_physics_influence_time;
        GameTime_t m_fl_fade_out_start_time;
        float m_fl_fade_time;
        VectorWS m_vec_last_origin;
        GameTime_t m_fl_awake_time;
        GameTime_t m_fl_last_origin_change_time;
        CUtlSymbolLarge m_str_origin_class_name;
        CUtlSymbolLarge m_str_source_class_name;
        bool m_b_has_been_physgunned;
        bool m_b_allow_stretch;
        float m_fl_blend_weight;
        float m_fl_default_fade_scale;
        CUtlVector_Vector_ m_ragdoll_mins;
        CUtlVector_Vector_ m_ragdoll_maxs;
        bool m_b_should_delete_activation_record;
        CUtlVector_INavObstacle_ m_vec_nav_obstacles;
    };

    struct cscriptcomponent_t {
        CUtlSymbolLarge m_script_class_name;
    };

    struct cfunctrain_t {
        CHandle_CBaseEntity_ m_h_current_target;
        bool m_activated;
        CHandle_CBaseEntity_ m_h_enemy;
        float m_fl_block_damage;
        GameTime_t m_fl_next_block_time;
        CUtlSymbolLarge m_isz_last_target;
        float m_fl_speed;
    };

    struct cai_changehintgroup_t {
        int32_t m_i_search_type;
        CUtlSymbolLarge m_str_search_name;
        CUtlSymbolLarge m_str_new_hint_group;
        float m_fl_radius;
    };

    struct ccsplayer_buyservices_t {
        CUtlVectorEmbeddedNetworkVar_SellbackPurchaseEntry_t_ m_vec_sellback_purchase_entries;
    };

    struct cphyshinge_t {
        ConstraintSoundInfo m_sound_info;
        CEntityIOOutput m_notify_min_limit_reached;
        CEntityIOOutput m_notify_max_limit_reached;
        bool m_b_at_min_limit;
        bool m_b_at_max_limit;
        constraint_hingeparams_t m_hinge;
        float m_hinge_friction;
        float m_system_load_scale;
        bool m_b_is_axis_local;
        float m_fl_min_rotation;
        float m_fl_max_rotation;
        float m_fl_initial_rotation;
        float m_fl_motor_frequency;
        float m_fl_motor_damping_ratio;
        float m_fl_angle_speed;
        float m_fl_angle_speed_threshold;
        float m_fl_limits_debug_vis_rotation;
        CEntityIOOutput m_on_start_moving;
        CEntityIOOutput m_on_stop_moving;
    };

    struct cbuyzone_t {
        int32_t m_legacy_team_num;
    };

    struct cinfochoreoanchor_t {
        CUtlVector_CInfoChoreoAnchorPosition_ m_vec_target_entries;
        CUtlVector_CInfoChoreoAnchorPosition_ m_vec_target_warps;
    };

    struct cinfoworldlayer_t {
        CEntityIOOutput m_p_output_on_entities_spawned;
        CUtlSymbolLarge m_world_name;
        CUtlSymbolLarge m_layer_name;
        bool m_b_world_layer_visible;
        bool m_b_entities_spawned;
        bool m_b_create_as_child_spawn_group;
        uint32_t m_h_layer_spawn_group;
    };

    struct cpointgiveammo_t {
        CHandle_CBaseEntity_ m_p_activator;
    };

    struct filterdamagetype_t {
        int32_t m_i_damage_type;
    };

    struct cpointcamera_t {
        float m_fov;
        float m_resolution;
        bool m_b_fog_enable;
        color_t m_fog_color;
        float m_fl_fog_start;
        float m_fl_fog_end;
        float m_fl_fog_max_density;
        bool m_b_active;
        bool m_b_use_screen_aspect_ratio;
        float m_fl_aspect_ratio;
        bool m_b_no_sky;
        float m_f_brightness;
        float m_fl_zfar;
        float m_fl_znear;
        bool m_b_can_hltvuse;
        bool m_b_align_with_parent;
        bool m_b_dof_enabled;
        float m_fl_dof_near_blurry;
        float m_fl_dof_near_crisp;
        float m_fl_dof_far_crisp;
        float m_fl_dof_far_blurry;
        float m_fl_dof_tilt_to_ground;
        float m_target_fov;
        float m_degrees_per_second;
        bool m_b_is_on;
        CPointCamera* m_p_next;
    };

    struct cattributelist_t {
        CUtlVectorEmbeddedNetworkVar_CEconItemAttribute_ m_attributes;
        CAttributeManager* m_p_manager;
    };

    struct cpulsecell_inflow_wait_t {
        CPulse_ResumePoint m_wake_resume;
    };

    struct cfilterproximity_t {
        float m_fl_radius;
    };

    struct ccs2weapongraphcontroller_t {
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_action;
        CAnimGraph2ParamOptionalRef_bool_ m_b_action_reset;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_action_speed_scale;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_category;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_type;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_weapon_extra_info;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo_max;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ammo_reserve;
        CAnimGraph2ParamOptionalRef_bool_ m_b_weapon_is_silenced;
        CAnimGraph2ParamOptionalRef_float_ m_fl_weapon_ironsight_amount;
        CAnimGraph2ParamOptionalRef_bool_ m_b_is_using_legacy_model;
        CAnimGraph2ParamOptionalRef_float_ m_idle_variation;
        CAnimGraph2ParamOptionalRef_float_ m_deploy_variation;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_attack_type;
        CAnimGraph2ParamOptionalRef_float_ m_attack_throw_strength;
        CAnimGraph2ParamOptionalRef_float_ m_fl_attack_variation;
        CAnimGraph2ParamOptionalRef_float_ m_inspect_variation;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_inspect_extra_info;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_reload_stage;
    };

    struct ceffectdata_t {
        VectorWS m_v_origin;
        VectorWS m_v_start;
        vector3d_t m_v_normal;
        QAngle m_v_angles;
        CEntityHandle m_h_entity;
        CEntityHandle m_h_other_entity;
        float m_fl_scale;
        float m_fl_magnitude;
        float m_fl_radius;
        CUtlStringToken m_n_surface_prop;
        CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_n_effect_index;
        uint32_t m_n_damage_type;
        uint8_t m_n_penetrate;
        uint16_t m_n_material;
        int16_t m_n_hit_box;
        uint8_t m_n_color;
        uint8_t m_f_flags;
        AttachmentHandle_t m_n_attachment_index;
        CUtlStringToken m_n_attachment_name;
        uint16_t m_i_effect_name;
    };

    struct centitydissolve_t {
        float m_fl_fade_in_start;
        float m_fl_fade_in_length;
        float m_fl_fade_out_model_start;
        float m_fl_fade_out_model_length;
        float m_fl_fade_out_start;
        float m_fl_fade_out_length;
        GameTime_t m_fl_start_time;
        EntityDissolveType_t m_n_dissolve_type;
        VectorWS m_v_dissolver_origin;
        uint32_t m_n_magnitude;
    };

    struct ccsgamerules_t {
        bool m_b_freeze_period;
        bool m_b_warmup_period;
        GameTime_t m_f_warmup_period_end;
        GameTime_t m_f_warmup_period_start;
        bool m_b_terrorist_time_out_active;
        bool m_b_cttime_out_active;
        float m_fl_terrorist_time_out_remaining;
        float m_fl_cttime_out_remaining;
        int32_t m_n_terrorist_time_outs;
        int32_t m_n_cttime_outs;
        bool m_b_technical_time_out;
        bool m_b_match_waiting_for_resume;
        int32_t m_i_freeze_time;
        int32_t m_i_round_time;
        float m_f_match_start_time;
        GameTime_t m_f_round_start_time;
        GameTime_t m_fl_restart_round_time;
        bool m_b_game_restart;
        float m_fl_game_start_time;
        float m_time_until_next_phase_starts;
        int32_t m_game_phase;
        int32_t m_total_rounds_played;
        int32_t m_n_rounds_played_this_phase;
        int32_t m_n_overtime_playing;
        int32_t m_i_hostages_remaining;
        bool m_b_any_hostage_reached;
        bool m_b_map_has_bomb_target;
        bool m_b_map_has_rescue_zone;
        bool m_b_map_has_buy_zone;
        bool m_b_is_queued_matchmaking;
        int32_t m_n_queued_matchmaking_mode;
        bool m_b_is_valve_ds;
        bool m_b_logo_map;
        bool m_b_play_all_step_sounds_on_server;
        int32_t m_i_spectator_slot_count;
        int32_t m_match_device;
        bool m_b_has_match_started;
        int32_t m_n_next_map_in_mapgroup;
        char m_sz_tournament_event_name;
        char m_sz_tournament_event_stage;
        char m_sz_match_stat_txt;
        char m_sz_tournament_predictions_txt;
        int32_t m_n_tournament_predictions_pct;
        GameTime_t m_fl_cmmitem_drop_reveal_start_time;
        GameTime_t m_fl_cmmitem_drop_reveal_end_time;
        bool m_b_is_dropping_items;
        bool m_b_is_quest_eligible;
        bool m_b_is_hltv_active;
        bool m_b_bomb_planted;
        uint16_t m_arr_prohibited_item_indices;
        uint32_t m_arr_tournament_active_caster_accounts;
        int32_t m_num_best_of_maps;
        int32_t m_n_halloween_mask_list_seed;
        bool m_b_bomb_dropped;
        int32_t m_i_round_win_status;
        int32_t m_e_round_win_reason;
        bool m_b_tcant_buy;
        bool m_b_ctcant_buy;
        int32_t m_i_match_stats_round_results;
        int32_t m_i_match_stats_players_alive_ct;
        int32_t m_i_match_stats_players_alive_t;
        float m_team_respawn_wave_times;
        int32_t m_n_active_mutators;
        GameTime_t m_fl_next_respawn_wave;
        VectorWS m_v_minimap_mins;
        VectorWS m_v_minimap_maxs;
        float m_minimap_vertical_section_heights;
        uint64_t m_ull_local_match_id;
        int32_t m_n_end_match_map_group_vote_types;
        int32_t m_n_end_match_map_group_vote_options;
        int32_t m_n_end_match_map_vote_winner;
        int32_t m_i_num_consecutive_ctloses;
        int32_t m_i_num_consecutive_terrorist_loses;
        bool m_b_has_hostage_been_touched;
        GameTime_t m_fl_intermission_start_time;
        GameTime_t m_fl_intermission_end_time;
        bool m_b_level_initialized;
        int32_t m_i_total_rounds_played;
        int32_t m_i_un_balanced_rounds;
        bool m_end_match_on_round_reset;
        bool m_end_match_on_think;
        int32_t m_i_num_terrorist;
        int32_t m_i_num_ct;
        int32_t m_i_num_spawnable_terrorist;
        int32_t m_i_num_spawnable_ct;
        CUtlVector_int32_t_ m_arr_selected_hostage_spawn_indices;
        int32_t m_n_spawn_points_random_seed;
        bool m_b_first_connected;
        bool m_b_complete_reset;
        bool m_b_pick_new_teams_on_reset;
        bool m_b_scramble_teams_on_restart;
        bool m_b_swap_teams_on_restart;
        CUtlVector_int32_t_ m_n_end_match_tied_votes;
        bool m_b_need_to_ask_players_for_continue_vote;
        uint32_t m_num_queued_matchmaking_accounts;
        float m_f_avg_player_rank;
        char* m_p_queued_matchmaking_reservation_string;
        uint32_t m_num_total_tournament_drops;
        uint32_t m_num_spectators_count_max;
        uint32_t m_num_spectators_count_max_tv;
        uint32_t m_num_spectators_count_max_lnk;
        bool m_b_queued_matchmaking_reported_round_stats_pending_send;
        int32_t m_n_cts_alive_at_freezetime_end;
        int32_t m_n_terrorists_alive_at_freezetime_end;
        bool m_b_force_team_change_silent;
        bool m_b_loading_round_backup_data;
        int32_t m_n_match_info_show_type;
        float m_fl_match_info_decided_time;
        int32_t m_team_dmlast_winning_team_number;
        float m_team_dmlast_think_time;
        float m_fl_team_dmlast_announcement_time;
        int32_t m_i_account_terrorist;
        int32_t m_i_account_ct;
        int32_t m_i_spawn_point_count_terrorist;
        int32_t m_i_spawn_point_count_ct;
        int32_t m_i_max_num_terrorists;
        int32_t m_i_max_num_cts;
        int32_t m_i_loser_bonus_most_recent_team;
        float m_tm_next_periodic_think;
        bool m_b_voice_won_match_brag_fired;
        float m_f_warmup_next_chat_notice_time;
        int32_t m_i_hostages_rescued;
        int32_t m_i_hostages_touched;
        float m_fl_next_hostage_announcement;
        bool m_b_no_terrorists_killed;
        bool m_b_no_cts_killed;
        bool m_b_no_enemies_killed;
        bool m_b_can_donate_weapons;
        float m_first_kill_time;
        float m_first_blood_time;
        bool m_hostage_was_injured;
        bool m_hostage_was_killed;
        bool m_b_vote_called;
        bool m_b_server_vote_on_reset;
        float m_fl_vote_check_throttle;
        bool m_b_buy_time_ended;
        int32_t m_n_last_freeze_end_beep;
        bool m_b_target_bombed;
        bool m_b_bomb_defused;
        bool m_b_map_has_bomb_zone;
        VectorWS m_vec_main_ctspawn_pos;
        CUtlVector_CHandle_SpawnPoint_ m_ctspawn_points_master_list;
        CUtlVector_CHandle_SpawnPoint_ m_terrorist_spawn_points_master_list;
        bool m_b_respawning_all_respawnable_players;
        int32_t m_i_next_ctspawn_point;
        float m_fl_ctspawn_point_used_time;
        int32_t m_i_next_terrorist_spawn_point;
        float m_fl_terrorist_spawn_point_used_time;
        CUtlVector_CHandle_SpawnPoint_ m_ctspawn_points;
        CUtlVector_CHandle_SpawnPoint_ m_terrorist_spawn_points;
        bool m_b_is_unreserved_game_server;
        float m_f_autobalance_display_time;
        bool m_b_allow_weapon_switch;
        bool m_b_round_time_warning_triggered;
        GameTime_t m_phase_change_announcement_time;
        float m_f_next_update_team_clan_names_time;
        GameTime_t m_fl_last_think_time;
        float m_f_accumulated_round_off_damage;
        int32_t m_n_shorthanded_bonus_last_eval_round;
        int32_t m_n_match_aborted_early_reason;
        bool m_b_has_triggered_round_start_music;
        bool m_b_switching_teams_at_round_reset;
        CCSGameModeRules* m_p_game_mode_rules;
        KeyValues3 m_bt_global_blackboard;
        CHandle_CBaseEntity_ m_h_player_resource;
        CRetakeGameRules m_retake_rules;
        CUtlVector_int32_t_ m_arr_team_unique_kill_weapons_match;
        bool m_b_team_last_kill_used_unique_weapon_match;
        uint8_t m_n_match_end_count;
        int32_t m_n_tteam_intro_variant;
        int32_t m_n_ctteam_intro_variant;
        bool m_b_team_intro_period;
        GameTime_t m_f_team_intro_period_end;
        bool m_b_played_team_intro_vo;
        int32_t m_i_round_end_winner_team;
        int32_t m_e_round_end_reason;
        bool m_b_round_end_show_timer_defend;
        int32_t m_i_round_end_timer_time;
        CUtlString m_s_round_end_fun_fact_token;
        CPlayerSlot m_i_round_end_fun_fact_player_slot;
        int32_t m_i_round_end_fun_fact_data1;
        int32_t m_i_round_end_fun_fact_data2;
        int32_t m_i_round_end_fun_fact_data3;
        CUtlString m_s_round_end_message;
        int32_t m_i_round_end_player_count;
        bool m_b_round_end_no_music;
        int32_t m_i_round_end_legacy;
        uint8_t m_n_round_end_count;
        int32_t m_i_round_start_round_number;
        uint8_t m_n_round_start_count;
        double m_fl_last_perf_sample_time;
    };

    struct cpulsecell_applyentityflags__cursorstate_t_t {
        CHandle_CBaseEntity_ m_h_entity;
        uint32_t m_u_flags;
    };

    struct cpulsecell_outflow_cycleshuffled_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cbasecsgrenadeprojectile_t {
        VectorWS m_v_initial_position;
        vector3d_t m_v_initial_velocity;
        int32_t m_n_bounces;
        CStrongHandle_InfoForResourceTypeIParticleSystemDefinition_ m_n_explode_effect_index;
        int32_t m_n_explode_effect_tick_begin;
        VectorWS m_vec_explode_effect_origin;
        GameTime_t m_fl_spawn_time;
        uint8_t m_un_ogsextra_flags;
        bool m_b_detonation_recorded;
        uint16_t m_n_item_index;
        VectorWS m_vec_original_spawn_location;
        GameTime_t m_fl_last_bounce_sound_time;
        RotationVector m_vec_grenade_spin;
        vector3d_t m_vec_last_hit_surface_normal;
        int32_t m_n_ticks_at_zero_velocity;
        bool m_b_has_ever_hit_enemy;
    };

    struct cphysconstraint_t {
        IPhysicsJoint* m_h_joint;
        CUtlSymbolLarge m_name_attach1;
        CUtlSymbolLarge m_name_attach2;
        CHandle_CBaseEntity_ m_h_attach1;
        CHandle_CBaseEntity_ m_h_attach2;
        CUtlSymbolLarge m_name_attachment1;
        CUtlSymbolLarge m_name_attachment2;
        CGameSoundEventName m_break_sound;
        float m_force_limit;
        float m_torque_limit;
        float m_min_teleport_distance;
        bool m_b_snap_object_positions;
        bool m_b_treat_entity1_as_infinite_mass;
        CEntityIOOutput m_on_break;
    };

    struct clogicachievement_t {
        bool m_b_disabled;
        CUtlSymbolLarge m_isz_achievement_event_id;
        CEntityIOOutput m_on_fired;
    };

    struct ccsplayercontroller_inventoryservices__networkedloadoutslot_t_t {
        CEconItemView* p_item;
        uint16_t team;
        uint16_t slot;
    };

    struct clightcomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        color_t m_color;
        color_t m_secondary_color;
        float m_fl_brightness;
        float m_fl_brightness_scale;
        float m_fl_brightness_mult;
        float m_fl_range;
        float m_fl_falloff;
        float m_fl_attenuation0;
        float m_fl_attenuation1;
        float m_fl_attenuation2;
        float m_fl_theta;
        float m_fl_phi;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_light_cookie;
        int32_t m_n_cascades;
        int32_t m_n_cast_shadows;
        int32_t m_n_shadow_width;
        int32_t m_n_shadow_height;
        bool m_b_render_diffuse;
        int32_t m_n_render_specular;
        bool m_b_render_transmissive;
        float m_fl_ortho_light_width;
        float m_fl_ortho_light_height;
        int32_t m_n_style;
        CUtlString m_pattern;
        int32_t m_n_cascade_render_static_objects;
        float m_fl_shadow_cascade_cross_fade;
        float m_fl_shadow_cascade_distance_fade;
        float m_fl_shadow_cascade_distance0;
        float m_fl_shadow_cascade_distance1;
        float m_fl_shadow_cascade_distance2;
        float m_fl_shadow_cascade_distance3;
        int32_t m_n_shadow_cascade_resolution0;
        int32_t m_n_shadow_cascade_resolution1;
        int32_t m_n_shadow_cascade_resolution2;
        int32_t m_n_shadow_cascade_resolution3;
        bool m_b_uses_baked_shadowing;
        int32_t m_n_shadow_priority;
        int32_t m_n_baked_shadow_index;
        int32_t m_n_light_path_unique_id;
        int32_t m_n_light_map_unique_id;
        bool m_b_render_to_cubemaps;
        bool m_b_allow_sstgeneration;
        int32_t m_n_direct_light;
        int32_t m_n_bounce_light;
        float m_fl_bounce_scale;
        float m_fl_fade_min_dist;
        float m_fl_fade_max_dist;
        float m_fl_shadow_fade_min_dist;
        float m_fl_shadow_fade_max_dist;
        bool m_b_enabled;
        bool m_b_flicker;
        bool m_b_precomputed_fields_valid;
        vector3d_t m_v_precomputed_bounds_mins;
        vector3d_t m_v_precomputed_bounds_maxs;
        vector3d_t m_v_precomputed_obborigin;
        QAngle m_v_precomputed_obbangles;
        vector3d_t m_v_precomputed_obbextent;
        float m_fl_precomputed_max_range;
        int32_t m_n_fog_lighting_mode;
        float m_fl_fog_contribution_stength;
        float m_fl_near_clip_plane;
        color_t m_sky_color;
        float m_fl_sky_intensity;
        color_t m_sky_ambient_bounce;
        bool m_b_use_secondary_color;
        bool m_b_mixed_shadows;
        GameTime_t m_fl_light_style_start_time;
        float m_fl_capsule_length;
        float m_fl_min_roughness;
        bool m_b_pvs_modify_entity;
    };

    struct ccsweaponbase_t {
        bool m_b_removeable;
        bool m_b_player_ammo_stock_on_pickup;
        bool m_b_require_use_to_touch;
        WeaponGameplayAnimState m_i_weapon_gameplay_anim_state;
        GameTime_t m_fl_weapon_gameplay_anim_state_timestamp;
        GameTime_t m_fl_inspect_cancel_complete_time;
        bool m_b_inspect_pending;
        bool m_b_inspect_should_loop;
        int32_t m_n_last_empty_sound_cmd_num;
        bool m_b_fire_on_empty;
        CEntityIOOutput m_on_player_pickup;
        CSWeaponMode m_weapon_mode;
        float m_fl_turning_inaccuracy_delta;
        vector3d_t m_vec_turning_inaccuracy_eye_dir_last;
        float m_fl_turning_inaccuracy;
        float m_f_accuracy_penalty;
        GameTime_t m_fl_last_accuracy_update_time;
        float m_f_accuracy_smoothed_for_zoom;
        int32_t m_i_recoil_index;
        float m_fl_recoil_index;
        bool m_b_burst_mode;
        GameTick_t m_n_postpone_fire_ready_ticks;
        float m_fl_postpone_fire_ready_frac;
        bool m_b_in_reload;
        GameTick_t m_n_deploy_tick;
        GameTime_t m_fl_attack_hold_start_time;
        GameTime_t m_fl_dropped_at_time;
        bool m_b_is_hauled_back;
        bool m_b_silencer_on;
        GameTime_t m_fl_time_silencer_switch_complete;
        bool m_b_is_in_stealth_reload;
        bool m_b_in_silent_reload_section;
        bool m_b_silent_reload_stat_pending;
        GameTime_t m_fl_stealth_reload_hold_start_time;
        bool m_b_reload_held_since_start;
        float m_fl_weapon_action_playback_rate;
        int32_t m_i_original_team_number;
        int32_t m_i_most_recent_team_number;
        bool m_b_dropped_near_buy_zone;
        float m_fl_next_attack_render_time_offset;
        bool m_b_can_be_picked_up;
        bool m_b_use_can_override_next_owner_touch_time;
        GameTime_t m_next_owner_touch_time;
        GameTime_t m_next_prev_owner_touch_time;
        GameTime_t m_next_prev_owner_use_time;
        CHandle_CCSPlayerPawn_ m_h_prev_owner;
        GameTick_t m_n_drop_tick;
        bool m_b_was_active_weapon_when_dropped;
        bool m_donated;
        GameTime_t m_f_last_shot_time;
        bool m_b_was_owned_by_ct;
        bool m_b_was_owned_by_terrorist;
        int32_t m_num_remove_unowned_weapon_think;
        CIronSightController m_iron_sight_controller;
        int32_t m_i_iron_sight_mode;
        GameTime_t m_fl_last_lostrace_failure_time;
        float m_fl_wat_tick_offset;
        GameTime_t m_fl_last_shake_time;
    };

    struct cpointclientuidialog_t {
        CHandle_CBaseEntity_ m_h_activator;
        bool m_b_start_enabled;
    };

    struct clogiclinetoentity_t {
        CEntityOutputTemplate_Vector_ m_line;
        CUtlSymbolLarge m_source_name;
        CHandle_CBaseEntity_ m_start_entity;
        CHandle_CBaseEntity_ m_end_entity;
    };

    struct csoundareaentitysphere_t {
        float m_fl_radius;
    };

    struct ccsplayer_actiontrackingservices_t {
        CHandle_CBasePlayerWeapon_ m_h_last_weapon_before_c4_auto_switch;
        bool m_b_is_rescuing;
        WeaponPurchaseTracker_t m_weapon_purchases_this_match;
        WeaponPurchaseTracker_t m_weapon_purchases_this_round;
        WeaponPurchaseTracker_t m_weapon_carry_over_into_this_round;
    };

    struct cinfospawngrouploadunload_t {
        CEntityIOOutput m_on_spawn_group_load_started;
        CEntityIOOutput m_on_spawn_group_load_finished;
        CEntityIOOutput m_on_spawn_group_unload_started;
        CEntityIOOutput m_on_spawn_group_unload_finished;
        CUtlSymbolLarge m_isz_spawn_group_name;
        CUtlSymbolLarge m_isz_spawn_group_filter_name;
        CUtlSymbolLarge m_isz_landmark_name;
        CUtlString m_s_fixed_spawn_group_name;
        float m_fl_timeout_interval;
        bool m_b_auto_activate;
        bool m_b_unloading_started;
        bool m_b_queue_active_spawn_group_change;
        bool m_b_queue_finish_loading;
    };

    struct csoundareaentityorientedbox_t {
        vector3d_t m_v_min;
        vector3d_t m_v_max;
    };

    struct cpulsecell_outflow_listenforanimgraphtag_t {
        CPulse_ResumePoint m_on_start;
        CPulse_ResumePoint m_on_end;
        CGlobalSymbol m_tag_name;
    };

    struct cbodycomponent_t {
        CGameSceneNode* m_p_scene_node;
        CNetworkVarChainer __m_p_chain_entity;
    };

    struct cpulsecell_inflow_method_t {
        PulseSymbol_t m_method_name;
        CUtlString m_description;
        bool m_b_is_public;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_args;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_return_values;
    };

    struct ceconitemview_t {
        uint16_t m_i_item_definition_index;
        int32_t m_i_entity_quality;
        uint32_t m_i_entity_level;
        uint64_t m_i_item_id;
        uint32_t m_i_item_idhigh;
        uint32_t m_i_item_idlow;
        uint32_t m_i_account_id;
        uint32_t m_i_inventory_position;
        bool m_b_initialized;
        CAttributeList m_attribute_list;
        CAttributeList m_networked_dynamic_attributes;
        char m_sz_custom_name;
        char m_sz_custom_name_override;
        char m_sz_custom_name_override2;
        char m_sz_custom_name_override3;
    };

    struct cbasedmstart_t {
        CUtlSymbolLarge m_master;
    };

    struct cbasemodelentity_t {
        CRenderComponent* m_crender_component;
        CHitboxComponent m_chitbox_component;
        CChoreoComponent* m_p_choreo_component;
        HitGroup_t m_n_destructible_part_initial_state_destructed0;
        HitGroup_t m_n_destructible_part_initial_state_destructed1;
        HitGroup_t m_n_destructible_part_initial_state_destructed2;
        HitGroup_t m_n_destructible_part_initial_state_destructed3;
        HitGroup_t m_n_destructible_part_initial_state_destructed4;
        int32_t m_n_destructible_part_initial_state_destructed0_part_index;
        int32_t m_n_destructible_part_initial_state_destructed1_part_index;
        int32_t m_n_destructible_part_initial_state_destructed2_part_index;
        int32_t m_n_destructible_part_initial_state_destructed3_part_index;
        int32_t m_n_destructible_part_initial_state_destructed4_part_index;
        bool m_b_destructible_part_initial_state_destructed0_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed1_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed2_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed3_generate_breakpieces;
        bool m_b_destructible_part_initial_state_destructed4_generate_breakpieces;
        CDestructiblePartsComponent* m_p_destructible_parts_system_component;
        CEntityOutputTemplate_CBaseModelEntity_OnDamageLevelChangedArgs_t_ m_on_destructible_hit_group_damage_level_changed;
        GameTime_t m_fl_dissolve_start_time;
        CEntityIOOutput m_on_ignite;
        RenderMode_t m_n_render_mode;
        RenderFx_t m_n_render_fx;
        bool m_b_allow_fade_in_view;
        color_t m_clr_render;
        CUtlVectorEmbeddedNetworkVar_EntityRenderAttribute_t_ m_vec_render_attributes;
        bool m_b_render_to_cubemaps;
        bool m_b_expand_render_bounds_to_include_cloth;
        bool m_b_no_interpolate;
        CCollisionProperty m_collision;
        CGlowProperty m_glow;
        float m_fl_glow_backface_mult;
        float m_fade_min_dist;
        float m_fade_max_dist;
        float m_fl_fade_scale;
        float m_fl_shadow_strength;
        uint8_t m_n_object_culling;
        uint32_t m_body_group_total_request_count;
        CUtlVectorFixedGrowable_CBaseModelEntity_BodyGroupRequest_t_8_ m_body_group_requests;
        CUtlOrderedMap_CGlobalSymbol_int32_t_ m_body_group_choices;
        CNetworkViewOffsetVector m_vec_view_offset;
        uint32_t m_bv_disabled_hit_groups;
    };

    struct fogplayerparams_t_t {
        CHandle_CFogController_ m_h_ctrl;
        float m_fl_transition_time;
        color_t m_old_color;
        float m_fl_old_start;
        float m_fl_old_end;
        float m_fl_old_max_density;
        float m_fl_old_hdrcolor_scale;
        float m_fl_old_far_z;
        color_t m_new_color;
        float m_fl_new_start;
        float m_fl_new_end;
        float m_fl_new_max_density;
        float m_fl_new_hdrcolor_scale;
        float m_fl_new_far_z;
    };

    struct cglowproperty_t {
        vector3d_t m_f_glow_color;
        int32_t m_i_glow_type;
        int32_t m_i_glow_team;
        int32_t m_n_glow_range;
        int32_t m_n_glow_range_min;
        color_t m_glow_color_override;
        bool m_b_flashing;
        float m_fl_glow_time;
        float m_fl_glow_start_time;
        bool m_b_eligible_for_screen_highlight;
        bool m_b_glowing;
    };

    struct cinstancedsceneentity_t {
        CHandle_CBaseEntity_ m_h_owner;
        bool m_b_had_owner;
        float m_fl_post_speak_delay;
        float m_fl_pre_delay;
        bool m_b_is_background;
        CHandle_CBaseEntity_ m_h_target;
    };

    struct ccitadelsoundopvarsetobb_t {
        CUtlSymbolLarge m_isz_stack_name;
        CUtlSymbolLarge m_isz_operator_name;
        CUtlSymbolLarge m_isz_opvar_name;
        vector3d_t m_v_distance_inner_mins;
        vector3d_t m_v_distance_inner_maxs;
        vector3d_t m_v_distance_outer_mins;
        vector3d_t m_v_distance_outer_maxs;
        int32_t m_n_aabbdirection;
    };

    struct csoundeventparameter_t {
        CUtlSymbolLarge m_isz_param_name;
        float m_fl_float_value;
    };

    struct cpulsecell_booleanswitchstate_t {
        CPulseObservableExpression_bool_ m_condition;
        CPulse_OutflowConnection m_when_true;
        CPulse_OutflowConnection m_when_false;
    };

    struct cenvviewpunch_t {
        float m_fl_radius;
        QAngle m_ang_view_punch;
    };

    struct cdamagerecord_t {
        CHandle_CCSPlayerPawn_ m_player_damager;
        CHandle_CCSPlayerPawn_ m_player_recipient;
        CHandle_CCSPlayerController_ m_h_player_controller_damager;
        CHandle_CCSPlayerController_ m_h_player_controller_recipient;
        CUtlString m_sz_player_damager_name;
        CUtlString m_sz_player_recipient_name;
        uint64_t m_damager_xuid;
        uint64_t m_recipient_xuid;
        float m_fl_bullets_damage;
        float m_fl_damage;
        float m_fl_actual_health_removed;
        int32_t m_i_num_hits;
        int32_t m_i_last_bullet_update;
        bool m_b_is_other_enemy;
        EKillTypes_t m_kill_type;
    };

    struct vphysicscollisionattribute_t_t {
        uint64_t m_n_interacts_as;
        uint64_t m_n_interacts_with;
        uint64_t m_n_interacts_exclude;
        uint32_t m_n_entity_id;
        uint32_t m_n_owner_id;
        uint16_t m_n_hierarchy_id;
        uint16_t m_n_detail_layer_mask;
        uint8_t m_n_detail_layer_mask_type;
        uint8_t m_n_target_detail_layer;
        uint8_t m_n_collision_group;
        uint8_t m_n_collision_function_mask;
    };

    struct cfuncshatterglass_t {
        matrix3x4_t m_mat_panel_transform;
        matrix3x4_t m_mat_panel_transform_ws_temp;
        CUtlVector_uint32_t_ m_vec_shatter_glass_shards;
        vector2d_t m_panel_size;
        GameTime_t m_fl_last_shatter_sound_emit_time;
        GameTime_t m_fl_last_cleanup_time;
        GameTime_t m_fl_init_at_time;
        float m_fl_glass_thickness;
        float m_fl_spawn_invulnerability;
        bool m_b_break_silent;
        bool m_b_break_shardless;
        bool m_b_broken;
        bool m_b_glass_nav_ignore;
        bool m_b_glass_in_frame;
        bool m_b_start_broken;
        uint8_t m_i_initial_damage_type;
        CUtlSymbolLarge m_sz_damage_positioning_entity_name01;
        CUtlSymbolLarge m_sz_damage_positioning_entity_name02;
        CUtlSymbolLarge m_sz_damage_positioning_entity_name03;
        CUtlSymbolLarge m_sz_damage_positioning_entity_name04;
        CUtlVector_VectorWS_ m_v_initial_damage_positions;
        CUtlVector_VectorWS_ m_v_extra_damage_positions;
        CUtlVector_Vector4D_ m_v_initial_panel_vertices;
        CEntityIOOutput m_on_broken;
        uint8_t m_i_surface_type;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material_damage_base;
    };

    struct cplantedc4_t {
        bool m_b_bomb_ticking;
        GameTime_t m_fl_c4_blow;
        int32_t m_n_bomb_site;
        int32_t m_n_source_soundscape_hash;
        bool m_b_abort_detonation_because_world_is_frozen;
        CAttributeContainer m_attribute_manager;
        CEntityIOOutput m_on_bomb_defused;
        CEntityIOOutput m_on_bomb_begin_defuse;
        CEntityIOOutput m_on_bomb_defuse_aborted;
        bool m_b_cannot_be_defused;
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
        bool m_b_has_exploded;
        bool m_b_bomb_defused;
        bool m_b_training_placed_by_player;
        float m_fl_timer_length;
        bool m_b_being_defused;
        GameTime_t m_f_last_defuse_time;
        float m_fl_defuse_length;
        GameTime_t m_fl_defuse_count_down;
        CHandle_CCSPlayerPawn_ m_h_bomb_defuser;
        int32_t m_i_progress_bar_time;
        bool m_b_voice_alert_fired;
        bool m_b_voice_alert_played;
        GameTime_t m_fl_next_bot_beep_time;
        QAngle m_ang_catch_up_to_player_eye;
        GameTime_t m_fl_last_spin_detection_time;
    };

    struct cvotecontroller_t {
        int32_t m_i_active_issue_index;
        int32_t m_i_only_team_to_vote;
        int32_t m_n_vote_option_count;
        int32_t m_n_potential_votes;
        bool m_b_is_yes_no_vote;
        CountdownTimer m_accepting_votes_timer;
        CountdownTimer m_execute_command_timer;
        CountdownTimer m_reset_vote_timer;
        int32_t m_n_votes_cast;
        CPlayerSlot m_player_holding_vote;
        CPlayerSlot m_player_override_for_vote;
        int32_t m_n_highest_count_index;
        CUtlVector_CBaseIssue_ m_potential_issues;
        CUtlVector_char_ m_vote_options;
    };

    struct cpulsecell_inflow_yield_t {
        CPulse_ResumePoint m_unyield_resume;
    };

    struct cphysimpact_t {
        float m_damage;
        float m_distance;
        CUtlSymbolLarge m_direction_entity_name;
    };

    struct cbaseentity_t {
        CBodyComponent* m_cbody_component;
        CNetworkTransmitComponent m_network_transmit_component;
        CUtlVector_thinkfunc_t_ m_a_think_functions;
        int32_t m_i_current_think_context;
        GameTick_t m_n_last_think_tick;
        bool m_b_disabled_context_thinks;
        CTypedBitVec_64_ m_is_steady_state;
        float m_last_network_change;
        BASEPTR m_think;
        CUtlVector_ResponseContext_t_ m_response_contexts;
        CUtlSymbolLarge m_isz_response_context;
        ENTITYFUNCPTR m_pfn_touch;
        USEPTR m_pfn_use;
        ENTITYFUNCPTR m_pfn_blocked;
        BASEPTR m_pfn_move_done;
        int32_t m_i_health;
        int32_t m_i_max_health;
        uint8_t m_life_state;
        float m_fl_damage_accumulator;
        bool m_b_takes_damage;
        TakeDamageFlags_t m_n_take_damage_flags;
        EntityPlatformTypes_t m_n_platform_type;
        MoveCollide_t m_move_collide;
        MoveType_t m_move_type;
        MoveType_t m_n_previously_set_move_type;
        MoveType_t m_n_actual_move_type;
        uint8_t m_n_water_touch;
        uint8_t m_n_slime_touch;
        bool m_b_restore_in_hierarchy;
        CUtlSymbolLarge m_target;
        CHandle_CBaseFilter_ m_h_damage_filter;
        CUtlSymbolLarge m_isz_damage_filter_name;
        float m_fl_move_done_time;
        CUtlStringToken m_n_subclass_id;
        float m_fl_anim_time;
        float m_fl_simulation_time;
        GameTime_t m_fl_create_time;
        bool m_b_client_side_ragdoll;
        uint8_t m_ub_interpolation_frame;
        VectorWS m_v_prev_vphysics_update_pos;
        uint8_t m_i_team_num;
        CUtlSymbolLarge m_i_globalname;
        int32_t m_i_sent_to_clients;
        CUtlString m_s_unique_hammer_id;
        uint32_t m_spawnflags;
        GameTick_t m_n_next_think_tick;
        int32_t m_n_simulation_tick;
        CEntityIOOutput m_on_killed;
        uint32_t m_f_flags;
        vector3d_t m_vec_abs_velocity;
        CNetworkVelocityVector m_vec_velocity;
        vector3d_t m_vec_base_velocity;
        int32_t m_n_push_enum_count;
        CCollisionProperty* m_p_collision;
        CHandle_CBaseEntity_ m_h_effect_entity;
        CHandle_CBaseEntity_ m_h_owner_entity;
        uint32_t m_f_effects;
        CHandle_CBaseEntity_ m_h_ground_entity;
        int32_t m_n_ground_body_index;
        float m_fl_friction;
        float m_fl_elasticity;
        float m_fl_gravity_scale;
        float m_fl_time_scale;
        float m_fl_water_level;
        bool m_b_gravity_disabled;
        bool m_b_animated_every_tick;
        float m_fl_actual_gravity_scale;
        bool m_b_gravity_actually_disabled;
        bool m_b_disable_low_violence;
        uint8_t m_n_water_type;
        int32_t m_i_eflags;
        CEntityIOOutput m_on_user1;
        CEntityIOOutput m_on_user2;
        CEntityIOOutput m_on_user3;
        CEntityIOOutput m_on_user4;
        int32_t m_i_initial_team_num;
        GameTime_t m_fl_nav_ignore_until_time;
        QAngle m_vec_ang_velocity;
        bool m_b_network_quantize_origin_and_angles;
        bool m_b_lag_compensate;
        CHandle_CBaseEntity_ m_p_blocker;
        float m_fl_local_time;
        float m_fl_vphysics_update_local_time;
        BloodType m_n_blood_type;
        CPulseGraphInstance_ServerEntity* m_p_pulse_graph_instance;
    };

    struct cpulsecell_applyanimgraphparam_t {
        CPulseObservableExpression_CPulseVariant_ m_value;
    };

    struct cgamescenenodehandle_t {
        CEntityHandle m_h_owner;
        CUtlStringToken m_name;
    };

    struct cmarkupvolumewithref_t {
        bool m_b_use_ref;
        vector3d_t m_v_ref_pos_entity_space;
        VectorWS m_v_ref_pos_world_space;
        float m_fl_ref_dot;
    };

    struct cpulsecell_unknown_t {
        KeyValues3 m_unknown_keys;
    };

    struct cfuncplatrot_t {
        QAngle m_end;
        QAngle m_start;
    };

    struct cragdollmagnet_t {
        bool m_b_disabled;
        float m_radius;
        float m_force;
        VectorWS m_axis;
    };

    struct cspotlightend_t {
        float m_fl_light_scale;
        float m_radius;
        vector3d_t m_v_spotlight_dir;
        VectorWS m_v_spotlight_org;
    };

    struct cenvsky_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material_lighting_only;
        bool m_b_start_disabled;
        color_t m_v_tint_color;
        color_t m_v_tint_color_lighting_only;
        float m_fl_brightness_scale;
        int32_t m_n_fog_type;
        float m_fl_fog_min_start;
        float m_fl_fog_min_end;
        float m_fl_fog_max_start;
        float m_fl_fog_max_end;
        bool m_b_enabled;
    };

    struct cpointanglesensor_t {
        bool m_b_disabled;
        CUtlSymbolLarge m_n_look_at_name;
        CHandle_CBaseEntity_ m_h_target_entity;
        CHandle_CBaseEntity_ m_h_look_at_entity;
        float m_fl_duration;
        float m_fl_dot_tolerance;
        GameTime_t m_fl_facing_time;
        bool m_b_fired;
        CEntityIOOutput m_on_facing_lookat;
        CEntityIOOutput m_on_not_facing_lookat;
        CEntityOutputTemplate_Vector_ m_target_dir;
        CEntityOutputTemplate_float_ m_facing_percentage;
    };

    struct csperroundstats_t_t {
        int32_t m_i_kills;
        int32_t m_i_deaths;
        int32_t m_i_assists;
        int32_t m_i_damage;
        int32_t m_i_equipment_value;
        int32_t m_i_money_saved;
        int32_t m_i_kill_reward;
        int32_t m_i_live_time;
        int32_t m_i_head_shot_kills;
        int32_t m_i_objective;
        int32_t m_i_cash_earned;
        int32_t m_i_utility_damage;
        int32_t m_i_enemies_flashed;
    };

    struct cgenericconstraint_t {
        bool m_b_place_anchors_at_constraint_transform;
        JointMotion_t m_n_linear_motion_x;
        JointMotion_t m_n_linear_motion_y;
        JointMotion_t m_n_linear_motion_z;
        float m_fl_linear_frequency_x;
        float m_fl_linear_frequency_y;
        float m_fl_linear_frequency_z;
        float m_fl_linear_damping_ratio_x;
        float m_fl_linear_damping_ratio_y;
        float m_fl_linear_damping_ratio_z;
        float m_fl_max_linear_impulse_x;
        float m_fl_max_linear_impulse_y;
        float m_fl_max_linear_impulse_z;
        float m_fl_break_after_time_x;
        float m_fl_break_after_time_y;
        float m_fl_break_after_time_z;
        GameTime_t m_fl_break_after_time_start_time_x;
        GameTime_t m_fl_break_after_time_start_time_y;
        GameTime_t m_fl_break_after_time_start_time_z;
        float m_fl_break_after_time_threshold_x;
        float m_fl_break_after_time_threshold_y;
        float m_fl_break_after_time_threshold_z;
        float m_fl_notify_force_x;
        float m_fl_notify_force_y;
        float m_fl_notify_force_z;
        float m_fl_notify_force_min_time_x;
        float m_fl_notify_force_min_time_y;
        float m_fl_notify_force_min_time_z;
        GameTime_t m_fl_notify_force_last_time_x;
        GameTime_t m_fl_notify_force_last_time_y;
        GameTime_t m_fl_notify_force_last_time_z;
        bool m_b_axis_notified_x;
        bool m_b_axis_notified_y;
        bool m_b_axis_notified_z;
        JointMotion_t m_n_angular_motion_x;
        JointMotion_t m_n_angular_motion_y;
        JointMotion_t m_n_angular_motion_z;
        float m_fl_angular_frequency_x;
        float m_fl_angular_frequency_y;
        float m_fl_angular_frequency_z;
        float m_fl_angular_damping_ratio_x;
        float m_fl_angular_damping_ratio_y;
        float m_fl_angular_damping_ratio_z;
        float m_fl_max_angular_impulse_x;
        float m_fl_max_angular_impulse_y;
        float m_fl_max_angular_impulse_z;
        CEntityIOOutput m_notify_force_reached_x;
        CEntityIOOutput m_notify_force_reached_y;
        CEntityIOOutput m_notify_force_reached_z;
    };

    struct cpulsecell_outflow_cyclerandom_t {
        CUtlVector_CPulse_OutflowConnection_ m_outputs;
    };

    struct cpulsecell_step_publicoutput_t {
        PulseRuntimeOutputIndex_t m_output_index;
    };

    struct cenvlaser_t {
        CUtlSymbolLarge m_isz_laser_target;
        CHandle_CSprite_ m_p_sprite;
        CUtlSymbolLarge m_isz_sprite_name;
        vector3d_t m_fire_position;
        float m_fl_start_frame;
    };

    struct csoundopvarsetentity_t {
        CUtlSymbolLarge m_isz_stack_name;
        CUtlSymbolLarge m_isz_operator_name;
        CUtlSymbolLarge m_isz_opvar_name;
        int32_t m_n_opvar_type;
        int32_t m_n_opvar_index;
        float m_fl_opvar_value;
        CUtlSymbolLarge m_opvar_value_string;
        bool m_b_set_on_spawn;
    };

    struct cenvbeverage_t {
        bool m_can_in_dispenser;
        int32_t m_n_beverage_type;
    };

    struct cphysmotor_t {
        CUtlSymbolLarge m_name_attach;
        CUtlSymbolLarge m_name_anchor;
        CHandle_CBaseEntity_ m_h_attached_object;
        CHandle_CBaseEntity_ m_h_anchor_object;
        float m_spin_up;
        float m_spin_down;
        float m_fl_motor_friction;
        float m_additional_acceleration;
        float m_angular_acceleration;
        float m_fl_torque_scale;
        float m_fl_target_speed;
        float m_fl_speed_when_spin_up_or_spin_down_started;
        IPhysicsBody* m_p_fixed_world_body;
        IPhysicsJoint* m_p_motor_joint;
        CMotorController m_motor;
    };

    struct clogicgameevent_t {
        CUtlSymbolLarge m_isz_event_name;
    };

    struct cphysexplosion_t {
        bool m_b_explode_on_spawn;
        float m_fl_magnitude;
        float m_fl_damage;
        float m_radius;
        CUtlSymbolLarge m_target_entity_name;
        CUtlSymbolLarge m_ignore_entity_name;
        float m_fl_inner_radius;
        float m_fl_push_scale;
        bool m_b_convert_to_debris_when_possible;
        bool m_b_affect_invulnerable_ents;
        bool m_b_disable_push_clamp;
        CEntityIOOutput m_on_pushed_player;
    };

    struct csplineconstraint_t {
        vector3d_t m_v_anchor_offset_restore;
        CHandle_CBaseEntity_ m_h_spline_entity;
        IPhysicsBody* m_p_spline_body;
        bool m_b_enable_lateral_constraint;
        bool m_b_enable_vertical_constraint;
        bool m_b_enable_angular_constraint;
        bool m_b_enable_limit;
        bool m_b_fire_events_on_path;
        float m_fl_linear_frequency;
        float m_fl_linar_damping_ratio;
        float m_fl_joint_friction;
        float m_fl_transition_time;
        VectorWS m_v_pre_solve_anchor_pos;
        GameTime_t m_start_transition_time;
        vector3d_t m_v_tangent_space_anchor_at_transition_start;
    };

    struct clogiccompare_t {
        float m_fl_in_value;
        float m_fl_compare_value;
        CEntityOutputTemplate_float_ m_on_less_than;
        CEntityOutputTemplate_float_ m_on_equal_to;
        CEntityOutputTemplate_float_ m_on_not_equal_to;
        CEntityOutputTemplate_float_ m_on_greater_than;
    };

    struct csoundeventboxentity_t {
        CUtlSymbolLarge m_isz_box_entities;
        CNetworkUtlVectorBase_SoundeventBoxHelperNetworked_t_ m_vec_box_helpers_networked;
    };

    struct cpulse_blackboardreference_t {
        CStrongHandle_InfoForResourceTypeIPulseGraphDef_ m_h_blackboard_resource;
        PulseSymbol_t m_blackboard_resource;
        PulseDocNodeID_t m_n_node_id;
        CGlobalSymbol m_node_name;
    };

    struct cfunctanktrain_t {
        CEntityIOOutput m_on_death;
    };

    struct cpointclientuiworldpanel_t {
        bool m_b_ignore_input;
        bool m_b_lit;
        bool m_b_follow_player_across_teleport;
        float m_fl_width;
        float m_fl_height;
        float m_fl_dpi;
        float m_fl_window_uiscale;
        float m_fl_interact_distance;
        float m_fl_depth_offset;
        uint32_t m_un_owner_context;
        uint32_t m_un_horizontal_align;
        uint32_t m_un_vertical_align;
        uint32_t m_un_orientation;
        bool m_b_allow_interaction_from_all_scene_worlds;
        CNetworkUtlVectorBase_CUtlSymbolLarge_ m_vec_cssclasses;
        bool m_b_opaque;
        bool m_b_no_depth;
        bool m_b_visible_when_parent_no_draw;
        bool m_b_render_backface;
        bool m_b_use_off_screen_indicator;
        bool m_b_exclude_from_save_games;
        bool m_b_grabbable;
        bool m_b_only_render_to_texture;
        bool m_b_disable_mip_gen;
        int32_t m_n_explicit_image_layout;
        bool m_b_ignore_parent_orientation;
    };

    struct csoundeventboxhelper_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct csoundeventsphereentity_t {
        float m_fl_radius;
    };

    struct ccsplayercontroller_ingamemoneyservices_t {
        bool m_b_receives_money_next_round;
        int32_t m_i_money_earned_for_next_round;
        int32_t m_i_account;
        int32_t m_i_start_account;
        int32_t m_i_total_cash_spent;
        int32_t m_i_cash_spent_this_round;
    };

    struct ccsplayer_aimpunchservices_t {
        GameTick_t m_predictable_base_tick;
        float m_predictable_base_tick_interp_amount;
        QAngle m_predictable_base_angle;
        QAngle m_predictable_base_angle_vel;
        GameTick_t m_unpredictable_base_tick;
        QAngle m_unpredictable_base_angle;
    };

    struct cmapvetopickcontroller_t {
        bool m_b_played_intro_vcd;
        bool m_b_need_to_play_five_seconds_remaining;
        double m_dbl_pre_match_draft_sequence_time;
        bool m_b_pre_match_draft_state_changed;
        int32_t m_n_draft_type;
        int32_t m_n_team_winning_coin_toss;
        int32_t m_n_team_with_first_choice;
        int32_t m_n_vote_map_ids_list;
        int32_t m_n_account_ids;
        int32_t m_n_map_id0;
        int32_t m_n_map_id1;
        int32_t m_n_map_id2;
        int32_t m_n_map_id3;
        int32_t m_n_map_id4;
        int32_t m_n_map_id5;
        int32_t m_n_starting_side0;
        int32_t m_n_current_phase;
        int32_t m_n_phase_start_tick;
        int32_t m_n_phase_duration_ticks;
        CEntityOutputTemplate_CUtlSymbolLarge_ m_on_map_vetoed;
        CEntityOutputTemplate_CUtlSymbolLarge_ m_on_map_picked;
        CEntityOutputTemplate_int32_t_ m_on_sides_picked;
        CEntityOutputTemplate_int32_t_ m_on_new_phase_started;
        CEntityOutputTemplate_int32_t_ m_on_level_transition;
    };

    struct cfiltermodel_t {
        CUtlSymbolLarge m_i_filter_model;
    };

    struct cphysslideconstraint_t {
        VectorWS m_axis_end;
        float m_slide_friction;
        float m_system_load_scale;
        float m_initial_offset;
        bool m_b_enable_linear_constraint;
        bool m_b_enable_angular_constraint;
        float m_fl_motor_frequency;
        float m_fl_motor_damping_ratio;
        bool m_b_use_entity_pivot;
        ConstraintSoundInfo m_sound_info;
    };

    struct cpulsegameblackboard_t {
        CUtlString m_str_graph_name;
        CUtlString m_str_state_blob;
    };

    struct cchoreocomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        CHandle_CBaseModelEntity_ m_h_owner;
        int32_t m_n_exernal_choreo_graph_count;
        CGlobalSymbol m_s_active_external_choreo_graph_slot_id;
        SceneEventId_t m_n_next_scene_event_id;
        GameTime_t m_fl_allow_responses_end_time;
    };

    struct cpointgamestatscounter_t {
        CUtlSymbolLarge m_str_statistic_name;
        bool m_b_disabled;
    };

    struct ctexturebasedanimatable_t {
        bool m_b_loop;
        float m_fl_fps;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_position_keys;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_rotation_keys;
        vector3d_t m_v_animation_bounds_min;
        vector3d_t m_v_animation_bounds_max;
        float m_fl_start_time;
        float m_fl_start_frame;
    };

    struct csprite_t {
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sprite_material;
        CHandle_CBaseEntity_ m_h_attached_to_entity;
        AttachmentHandle_t m_n_attachment;
        float m_fl_sprite_framerate;
        float m_fl_frame;
        GameTime_t m_fl_die_time;
        uint32_t m_n_brightness;
        float m_fl_brightness_duration;
        float m_fl_sprite_scale;
        float m_fl_scale_duration;
        bool m_b_world_space_scale;
        float m_fl_glow_proxy_size;
        float m_fl_hdrcolor_scale;
        GameTime_t m_fl_last_time;
        float m_fl_max_frame;
        float m_fl_start_scale;
        float m_fl_dest_scale;
        GameTime_t m_fl_scale_time_start;
        int32_t m_n_start_brightness;
        int32_t m_n_dest_brightness;
        GameTime_t m_fl_brightness_time_start;
        int32_t m_n_sprite_width;
        int32_t m_n_sprite_height;
        float m_fl_speed;
    };

    struct cdynamiclight_t {
        uint8_t m_actual_flags;
        uint8_t m_flags;
        uint8_t m_light_style;
        bool m_on;
        float m_radius;
        int32_t m_exponent;
        float m_inner_angle;
        float m_outer_angle;
        float m_spot_radius;
    };

    struct cweapontaser_t {
        GameTime_t m_f_fire_time;
        int32_t m_n_last_attack_tick;
    };

    struct crotdoor_t {
        bool m_b_solid_bsp;
    };

    struct cpathmover_t {
        CUtlVector_CHandle_CFuncMover_ m_vec_movers;
        CUtlVector_CHandle_CPathMoverEntitySpawner_ m_vec_spawners;
        CUtlSymbolLarge m_isz_mover_spawner_name;
        CHandle_CFuncMoverRouter_ m_h_mover_router;
        CUtlSymbolLarge m_isz_mover_router_name;
        float m_fl_sample_spacing;
    };

    struct cfuncvphysicsclip_t {
        bool m_b_disabled;
    };

    struct ccsradarelement_t {
        uint32_t m_n_element_type;
        uint32_t m_n_element_color;
        uint32_t m_n_team_filter;
    };

    struct cphysfixed_t {
        float m_fl_linear_frequency;
        float m_fl_linear_damping_ratio;
        float m_fl_angular_frequency;
        float m_fl_angular_damping_ratio;
        bool m_b_enable_linear_constraint;
        bool m_b_enable_angular_constraint;
        CUtlSymbolLarge m_s_bone_name1;
        CUtlSymbolLarge m_s_bone_name2;
    };

    struct clogicnavigation_t {
        bool m_is_on;
        navproperties_t m_nav_property;
    };

    struct cpathsimple_t {
        CPathQueryComponent m_cpath_query_component;
        CUtlString m_path_string;
        bool m_b_closed_loop;
    };

    struct cfuncelectrifiedvolume_t {
        CUtlSymbolLarge m_effect_name;
        CUtlSymbolLarge m_effect_interpenetrate_name;
        CUtlSymbolLarge m_effect_zap_name;
        CUtlSymbolLarge m_isz_effect_source;
    };

    struct entityspottedstate_t_t {
        bool m_b_spotted;
        uint32_t m_b_spotted_by_mask;
    };

    struct fogparams_t_t {
        vector3d_t dir_primary;
        color_t color_primary;
        color_t color_secondary;
        color_t color_primary_lerp_to;
        color_t color_secondary_lerp_to;
        float start;
        float end;
        float farz;
        float maxdensity;
        float exponent;
        float hdrcolor_scale;
        float skybox_fog_factor;
        float skybox_fog_factor_lerp_to;
        float start_lerp_to;
        float end_lerp_to;
        float maxdensity_lerp_to;
        GameTime_t lerptime;
        float duration;
        float blendtobackground;
        float scattering;
        float locallightscale;
        bool enable;
        bool blend;
        bool m_b_padding2;
        bool m_b_padding;
    };

    struct csoundeventobbentity_t {
        vector3d_t m_v_mins;
        vector3d_t m_v_maxs;
    };

    struct cflashbangprojectile_t {
        float m_fl_time_to_detonate;
        uint8_t m_num_opponents_hit;
        uint8_t m_num_teammates_hit;
    };

    struct ctriggermultiple_t {
        CEntityIOOutput m_on_trigger;
    };

    struct cphysballsocket_t {
        float m_fl_joint_friction;
        bool m_b_enable_swing_limit;
        float m_fl_swing_limit;
        bool m_b_enable_twist_limit;
        float m_fl_min_twist_angle;
        float m_fl_max_twist_angle;
    };

    struct cdebughistory_t {
        int32_t m_n_npc_events;
    };

    struct csoundopvarsetpointbase_t {
        bool m_b_disabled;
        CEntityHandle m_h_source;
        CUtlSymbolLarge m_isz_source_entity_name;
        VectorWS m_v_last_position;
        float m_fl_refresh_time;
        CUtlSymbolLarge m_isz_stack_name;
        CUtlSymbolLarge m_isz_operator_name;
        CUtlSymbolLarge m_isz_opvar_name;
        int32_t m_i_opvar_index;
        bool m_b_use_auto_compare;
        bool m_b_fast_refresh;
    };

    struct cexplosiontypedata_t {
        CSoundEventName m_sound_name;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_particle_effect;
        bool m_b_is_incindiary;
        bool m_b_has_forces;
        CGlobalSymbol m_decal_type;
    };

    struct cpathkeyframe_t {
        vector3d_t m_origin;
        QAngle m_angles;
        quaternion_t m_q_angle;
        CUtlSymbolLarge m_i_next_key;
        float m_fl_next_time;
        CHandle_CPathKeyFrame_ m_p_next_key;
        CHandle_CPathKeyFrame_ m_p_prev_key;
        float m_fl_move_speed;
    };

    struct cweaponcz75a_t {
        bool m_b_magazine_removed;
    };

    struct cscripttriggerpush_t {
        vector3d_t m_v_extent;
    };

    struct crevertsaved_t {
        float m_load_time;
        float m_duration;
        float m_hold_time;
    };

    struct ctriggerhurt_t {
        float m_fl_original_damage;
        float m_fl_damage;
        float m_fl_damage_cap;
        GameTime_t m_fl_last_dmg_time;
        float m_fl_forgiveness_delay;
        DamageTypes_t m_bits_damage_inflict;
        int32_t m_damage_model;
        bool m_b_no_dmg_force;
        vector3d_t m_v_damage_force;
        bool m_think_always;
        float m_hurt_think_period;
        CEntityIOOutput m_on_hurt;
        CEntityIOOutput m_on_hurt_player;
        CUtlVector_CHandle_CBaseEntity_ m_hurt_entities;
    };

    struct ccsplayer_weaponservices_t {
        GameTime_t m_fl_next_attack;
        CHandle_CBasePlayerWeapon_ m_h_saved_weapon;
        int32_t m_n_time_to_melee;
        int32_t m_n_time_to_secondary;
        int32_t m_n_time_to_primary;
        int32_t m_n_time_to_sniper_rifle;
        bool m_b_is_being_given_item;
        bool m_b_is_picking_up_item_with_use;
        bool m_b_picked_up_weapon;
        bool m_b_disable_auto_deploy;
        bool m_b_is_picking_up_ground_weapon;
        CNetworkUtlVectorBase_uint8_t_ m_network_anim_timing;
        bool m_b_block_inspect_until_next_graph_update;
    };

    struct cskycameravolume_t {
        vector3d_t m_v_box_mins;
        vector3d_t m_v_box_maxs;
        CHandle_CSkyCameraVolumeTarget_ m_h_target;
        int32_t m_n_priority;
        bool m_b_is_enabled;
        bool m_b_skybox_blur_effect;
        vector3d_t m_v_blur_origin;
        bool m_b_skybox_receives_world_csm;
        bool m_b_world_receives_skybox_csm;
        bool m_b_start_disabled;
        CUtlSymbolLarge m_isz_target_name;
    };

    struct cretakegamerules_t {
        int32_t m_n_match_seed;
        bool m_b_blockers_present;
        bool m_b_round_in_progress;
        int32_t m_i_first_second_half_round;
        int32_t m_i_bomb_site;
        CHandle_CCSPlayerPawn_ m_h_bomb_planter;
    };

    struct cscripttriggerhurt_t {
        vector3d_t m_v_extent;
    };

    struct ccscustomhudlayoutstate_t {
        CPlayerSlot m_player_slot;
        bool m_b_input_capture_enabled;
        CNetworkUtlVectorBase_HUDPanelHasClass_t_ m_vec_has_classes;
        CNetworkUtlVectorBase_HUDPanelDialogVariableString_t_ m_vec_dialog_variable_strings;
    };

    struct ctriggerdetectexplosion_t {
        CEntityIOOutput m_on_detected_explosion;
    };

    struct cfiltername_t {
        CUtlSymbolLarge m_i_filter_name;
    };

    struct csmokegrenadeprojectile_t {
        int32_t m_n_smoke_effect_tick_begin;
        bool m_b_did_smoke_effect;
        int32_t m_n_random_seed;
        vector3d_t m_v_smoke_color;
        VectorWS m_v_smoke_detonation_pos;
        CNetworkUtlVectorBase_uint8_t_ m_voxel_frame_data;
        int32_t m_n_voxel_frame_data_size;
        int32_t m_n_voxel_update;
        uint8_t m_n_smoke_light_probe_regen;
        GameTime_t m_fl_last_bounce;
        GameTime_t m_fllast_simulation_time;
        bool m_b_explode_from_inferno;
        bool m_b_did_ground_scorch;
    };

    struct cblood_t {
        QAngle m_vec_spray_angles;
        vector3d_t m_vec_spray_dir;
        float m_fl_amount;
        BloodType m_color;
    };

    struct ccsteam_t {
        int32_t m_n_last_recieved_shorthanded_round_bonus;
        int32_t m_n_shorthanded_round_bonus_start_round;
        bool m_b_surrendered;
        char m_sz_team_match_stat;
        int32_t m_num_map_victories;
        int32_t m_score_first_half;
        int32_t m_score_second_half;
        int32_t m_score_overtime;
        char m_sz_clan_teamname;
        uint32_t m_i_clan_id;
        char m_sz_team_flag_image;
        char m_sz_team_logo_image;
        float m_fl_next_resource_time;
        int32_t m_i_last_update_sent_at;
    };

    struct crulepointentity_t {
        int32_t m_score;
    };

    struct cpulse_callinfo_t {
        PulseSymbol_t m_port_name;
        PulseDocNodeID_t m_n_editor_node_id;
        PulseRegisterMap_t m_register_map;
        PulseDocNodeID_t m_call_method_id;
        PulseRuntimeChunkIndex_t m_n_src_chunk;
        int32_t m_n_src_instruction;
        PulseRuntimeChunkIndex_t m_n_break_dest_chunk;
        int32_t m_n_break_dest_instruction;
    };

    struct cbaseanimgraph_t {
        CAnimGraphControllerManager m_graph_controller_manager;
        CAnimGraphControllerPtr m_p_main_graph_controller;
        bool m_b_initially_populate_interp_history;
        CEntityOutputTemplate_float_ m_on_layer_cycle_updated;
        CEntityIOOutput m_on_external_choreo_graph_changed;
        IChoreoServices* m_p_choreo_services;
        bool m_b_anim_graph_update_enabled;
        bool m_b_animation_update_scheduled;
        vector3d_t m_vec_force;
        int32_t m_n_force_bone;
        IPhysicsRagdollControl* m_p_ragdoll_control;
        PhysicsRagdollPose_t m_ragdoll_pose;
        bool m_b_ragdoll_enabled;
        bool m_b_ragdoll_client_side;
        bool m_b_should_update_transformations;
        transform_t m_x_parented_ragdoll_root_in_entity_space;
    };

    struct cenvcubemapfog_t {
        float m_fl_end_distance;
        float m_fl_start_distance;
        float m_fl_fog_falloff_exponent;
        bool m_b_height_fog_enabled;
        float m_fl_fog_height_width;
        float m_fl_fog_height_end;
        float m_fl_fog_height_start;
        float m_fl_fog_height_exponent;
        float m_fl_lodbias;
        bool m_b_active;
        bool m_b_start_disabled;
        float m_fl_fog_max_opacity;
        int32_t m_n_cubemap_source_type;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_sky_material;
        CUtlSymbolLarge m_isz_sky_entity;
        int32_t m_n_height_fog_type;
        int32_t m_n_fog_height_blend_mode;
        int32_t m_n_fog_height_coordinate_space;
        int32_t m_n_distance_fog_type;
        CUtlSymbolLarge m_distance_fog_curve_string;
        CUtlSymbolLarge m_height_fog_curve_string;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_fog_cubemap_texture;
        bool m_b_has_height_fog_end;
        bool m_b_first_time;
    };

    struct cpulsecell_inlinenodeskipselector_t {
        PulseDocNodeID_t m_n_flow_node_id;
        bool m_b_and;
        PulseSelectorOutflowList_t m_pass_outflow;
        CPulse_OutflowConnection m_fail_outflow;
    };

    struct cbasedoor_t {
        QAngle m_ang_move_entity_space;
        vector3d_t m_vec_move_dir_parent_space;
        locksound_t m_ls;
        bool m_b_force_closed;
        bool m_b_door_group;
        bool m_b_locked;
        bool m_b_ignore_debris;
        bool m_b_no_npcs;
        FuncDoorSpawnPos_t m_e_spawn_position;
        float m_fl_block_damage;
        CGameSoundEventName m_noise_moving;
        CGameSoundEventName m_noise_arrived;
        CGameSoundEventName m_noise_moving_closed;
        CGameSoundEventName m_noise_arrived_closed;
        CUtlSymbolLarge m_chain_target;
        CEntityIOOutput m_on_blocked_closing;
        CEntityIOOutput m_on_blocked_opening;
        CEntityIOOutput m_on_unblocked_closing;
        CEntityIOOutput m_on_unblocked_opening;
        CEntityIOOutput m_on_fully_closed;
        CEntityIOOutput m_on_fully_open;
        CEntityIOOutput m_on_close;
        CEntityIOOutput m_on_open;
        CEntityIOOutput m_on_locked_use;
        bool m_b_loop_move_sound;
        bool m_b_create_nav_obstacle;
        float m_fl_speed;
        bool m_is_chaining;
        bool m_b_is_usable;
    };

    struct cgamemoney_t {
        CEntityIOOutput m_on_money_spent;
        CEntityIOOutput m_on_money_spent_fail;
        int32_t m_n_money;
        CUtlString m_str_award_text;
    };

    struct cenvhudhint_t {
        CUtlSymbolLarge m_isz_message;
    };

    struct citemdefuser_t {
        EntitySpottedState_t m_entity_spotted_state;
        int32_t m_n_spot_rules;
    };

    struct citemgenerictriggerhelper_t {
        CHandle_CItemGeneric_ m_h_parent_item;
    };

    struct cplayer_weaponservices_t {
        CNetworkUtlVectorBase_CHandle_CBasePlayerWeapon_ m_h_my_weapons;
        CHandle_CBasePlayerWeapon_ m_h_active_weapon;
        CHandle_CBasePlayerWeapon_ m_h_last_weapon;
        uint16_t m_i_ammo;
        bool m_b_prevent_weapon_pickup;
    };

    struct cragdollpropattached_t {
        uint32_t m_bone_index_attached;
        uint32_t m_ragdoll_attached_object_index;
        vector3d_t m_attachment_point_bone_space;
        vector3d_t m_attachment_point_ragdoll_space;
        bool m_b_should_detach;
        bool m_b_should_delete_attached_activation_record;
    };

    struct citemdogtags_t {
        CHandle_CCSPlayerPawn_ m_owning_player;
        CHandle_CCSPlayerPawn_ m_killing_player;
    };

    struct cfuncplat_t {
        float m_fl_speed;
        CUtlSymbolLarge m_s_noise;
    };

    struct cbarnlight_t {
        bool m_b_enabled;
        int32_t m_n_color_mode;
        color_t m_color;
        float m_fl_color_temperature;
        float m_fl_brightness;
        float m_fl_brightness_scale;
        int32_t m_n_direct_light;
        int32_t m_n_baked_shadow_index;
        int32_t m_n_light_path_unique_id;
        int32_t m_n_light_map_unique_id;
        int32_t m_n_luminaire_shape;
        float m_fl_luminaire_size;
        float m_fl_luminaire_anisotropy;
        CUtlString m_light_style_string;
        GameTime_t m_fl_light_style_start_time;
        CNetworkUtlVectorBase_CUtlString_ m_queued_light_style_strings;
        CNetworkUtlVectorBase_CUtlString_ m_light_style_events;
        CNetworkUtlVectorBase_CHandle_CBaseModelEntity_ m_light_style_targets;
        CEntityIOOutput m_style_event;
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_light_cookie;
        float m_fl_shape;
        float m_fl_soft_x;
        float m_fl_soft_y;
        float m_fl_skirt;
        float m_fl_skirt_near;
        vector3d_t m_v_size_params;
        float m_fl_range;
        vector3d_t m_v_shear;
        int32_t m_n_bake_specular_to_cubemaps;
        vector3d_t m_v_bake_specular_to_cubemaps_size;
        float m_fl_bake_specular_to_cubemaps_scale;
        int32_t m_n_cast_shadows;
        int32_t m_n_shadow_map_size;
        int32_t m_n_shadow_priority;
        bool m_b_contact_shadow;
        bool m_b_force_shadows_enabled;
        int32_t m_n_bounce_light;
        float m_fl_bounce_scale;
        float m_fl_min_roughness;
        vector3d_t m_v_alternate_color;
        float m_f_alternate_color_brightness;
        int32_t m_n_fog;
        float m_fl_fog_strength;
        int32_t m_n_fog_shadows;
        float m_fl_fog_scale;
        float m_fl_fade_size_start;
        float m_fl_fade_size_end;
        float m_fl_shadow_fade_size_start;
        float m_fl_shadow_fade_size_end;
        bool m_b_precomputed_fields_valid;
        vector3d_t m_v_precomputed_bounds_mins;
        vector3d_t m_v_precomputed_bounds_maxs;
        vector3d_t m_v_precomputed_obborigin;
        QAngle m_v_precomputed_obbangles;
        vector3d_t m_v_precomputed_obbextent;
        int32_t m_n_precomputed_sub_frusta;
        vector3d_t m_v_precomputed_obborigin0;
        QAngle m_v_precomputed_obbangles0;
        vector3d_t m_v_precomputed_obbextent0;
        vector3d_t m_v_precomputed_obborigin1;
        QAngle m_v_precomputed_obbangles1;
        vector3d_t m_v_precomputed_obbextent1;
        vector3d_t m_v_precomputed_obborigin2;
        QAngle m_v_precomputed_obbangles2;
        vector3d_t m_v_precomputed_obbextent2;
        vector3d_t m_v_precomputed_obborigin3;
        QAngle m_v_precomputed_obbangles3;
        vector3d_t m_v_precomputed_obbextent3;
        vector3d_t m_v_precomputed_obborigin4;
        QAngle m_v_precomputed_obbangles4;
        vector3d_t m_v_precomputed_obbextent4;
        vector3d_t m_v_precomputed_obborigin5;
        QAngle m_v_precomputed_obbangles5;
        vector3d_t m_v_precomputed_obbextent5;
        bool m_b_pvs_modify_entity;
        bool m_b_transmit_always;
        CNetworkUtlVectorBase_uint16_t_ m_vis_clusters;
    };

    struct cinstructorevententity_t {
        CUtlSymbolLarge m_isz_name;
        CUtlSymbolLarge m_isz_hint_target_entity;
        CHandle_CBasePlayerPawn_ m_h_target_player;
    };

    struct cpathcorner_t {
        bool m_b_trigger_locomotion_stop;
        bool m_b_smooth_arrival;
        bool m_b_exact_positioning;
        float m_fl_wait;
        float m_fl_radius;
        float m_fl_waypoint_success_radius_when_blocked;
        float m_fl_waypoint_success_radius;
        float m_fl_path_end_distance_from_goal;
        float m_fl_speed;
        CEntityIOOutput m_on_pass;
    };

    struct ctriggersndsosopvar_t {
        CUtlVector_CHandle_CBaseEntity_ m_h_touching_players;
        VectorWS m_fl_position;
        float m_fl_center_size;
        float m_fl_min_val;
        float m_fl_max_val;
        CUtlSymbolLarge m_opvar_name;
        CUtlSymbolLarge m_stack_name;
        CUtlSymbolLarge m_operator_name;
        bool m_b_vol_is2_d;
        char m_opvar_name_char;
        char m_stack_name_char;
        char m_operator_name_char;
        vector3d_t m_vec_norm_pos;
        float m_fl_norm_center_size;
    };

    struct cpulsecell_limitcount_t {
        int32_t m_n_limit_count;
    };

    struct cpulsecell_step_callexternalmethod_t {
        PulseSymbol_t m_method_name;
        PulseRuntimeBlackboardReferenceIndex_t m_n_blackboard_index;
        CUtlLeanVector_CPulseRuntimeMethodArg_ m_expected_args;
        PulseMethodCallMode_t m_n_async_call_mode;
        CPulse_ResumePoint m_on_finished;
    };

    struct cpointcommentarynode_t {
        CUtlSymbolLarge m_isz_pre_commands;
        CUtlSymbolLarge m_isz_post_commands;
        CUtlSymbolLarge m_isz_commentary_file;
        CUtlSymbolLarge m_isz_view_target;
        CHandle_CBaseEntity_ m_h_view_target;
        CHandle_CBaseEntity_ m_h_view_target_angles;
        CUtlSymbolLarge m_isz_view_position;
        CHandle_CBaseEntity_ m_h_view_position;
        CHandle_CBaseEntity_ m_h_view_position_mover;
        bool m_b_prevent_movement;
        bool m_b_under_crosshair;
        bool m_b_unstoppable;
        GameTime_t m_fl_finished_time;
        VectorWS m_vec_finish_origin;
        QAngle m_vec_original_angles;
        QAngle m_vec_finish_angles;
        bool m_b_prevent_changes_while_moving;
        bool m_b_disabled;
        VectorWS m_vec_teleport_origin;
        GameTime_t m_fl_aborted_playback_at;
        CEntityIOOutput m_p_on_commentary_started;
        CEntityIOOutput m_p_on_commentary_stopped;
        bool m_b_active;
        GameTime_t m_fl_start_time;
        float m_fl_start_time_in_commentary;
        CUtlSymbolLarge m_isz_title;
        CUtlSymbolLarge m_isz_speakers;
        int32_t m_i_node_number;
        int32_t m_i_node_number_max;
        bool m_b_listened_to;
    };

    struct cmomentaryrotbutton_t {
        CEntityOutputTemplate_float_ m_position;
        CEntityIOOutput m_on_unpressed;
        CEntityIOOutput m_on_fully_open;
        CEntityIOOutput m_on_fully_closed;
        CEntityIOOutput m_on_reached_position;
        int32_t m_last_used;
        QAngle m_start;
        QAngle m_end;
        float m_ideal_yaw;
        CUtlSymbolLarge m_s_noise;
        bool m_b_update_target;
        int32_t m_direction;
        float m_return_speed;
        float m_fl_start_position;
    };

    struct cscenelistmanager_t {
        CUtlVector_CHandle_CSceneListManager_ m_h_list_managers;
        CUtlSymbolLarge m_isz_scenes;
        CHandle_CBaseEntity_ m_h_scenes;
    };

    struct cenvtilt_t {
        float m_duration;
        float m_radius;
        float m_tilt_time;
        GameTime_t m_stop_time;
    };

    struct cfuncmover_t {
        CUtlSymbolLarge m_isz_path_name;
        CHandle_CPathMover_ m_h_path_mover;
        CHandle_CPathMover_ m_h_prev_path_mover;
        CUtlSymbolLarge m_isz_path_node_start;
        CUtlSymbolLarge m_isz_path_node_end;
        bool m_b_ignore_end_node;
        CFuncMover_Move_t m_e_move_type;
        bool m_b_is_reversing;
        float m_fl_start_speed;
        float m_fl_path_location;
        float m_fl_t;
        int32_t m_n_current_node_index;
        int32_t m_n_previous_node_index;
        SolidType_t m_e_solid_type;
        bool m_b_is_moving;
        float m_fl_time_to_reach_max_speed;
        float m_fl_distance_to_reach_max_speed;
        float m_fl_time_to_reach_zero_speed;
        float m_fl_computed_distance_to_reach_max_speed;
        float m_fl_computed_distance_to_reach_zero_speed;
        float m_fl_start_curve_scale;
        float m_fl_stop_curve_scale;
        float m_fl_distance_to_reach_zero_speed;
        GameTime_t m_fl_time_movement_start;
        GameTime_t m_fl_time_movement_stop;
        CHandle_CMoverPathNode_ m_h_stop_at_node;
        float m_fl_path_location_to_begin_stop;
        float m_fl_path_location_start;
        float m_fl_begin_stop_t;
        CGameSoundEventName m_isz_start_forward_sound;
        CGameSoundEventName m_isz_loop_forward_sound;
        CGameSoundEventName m_isz_stop_forward_sound;
        CGameSoundEventName m_isz_start_reverse_sound;
        CGameSoundEventName m_isz_loop_reverse_sound;
        CGameSoundEventName m_isz_stop_reverse_sound;
        CGameSoundEventName m_isz_arrive_at_destination_sound;
        CEntityIOOutput m_on_movement_end;
        bool m_b_start_at_closest_point;
        bool m_b_start_at_end;
        bool m_b_start_following_closest_mover;
        float m_fl_start_following_closest_mover_when_within_distance;
        float m_fl_start_following_closest_mover_when_outside_distance;
        CFuncMover_OrientationUpdate_t m_e_orientation_update;
        GameTime_t m_fl_time_start_orientation_change;
        float m_fl_time_to_blend_to_new_orientation;
        float m_fl_duration_blend_to_new_orientation_ran;
        bool m_b_create_movable_nav_mesh;
        bool m_b_create_movable_surface_graph;
        bool m_b_allow_movable_nav_mesh_docking_on_entire_entity;
        CEntityOutputTemplate_CUtlString_ m_on_node_passed;
        CUtlSymbolLarge m_isz_orientation_match_entity_name;
        CHandle_CBaseEntity_ m_h_orientation_match_entity;
        VectorWS m_v_lerp_to_new_pos_start_ws;
        float m_fl_lerp_to_position_target_t;
        float m_fl_lerp_to_position_t;
        float m_fl_lerp_to_position_delta_t;
        CHandle_CPathMover_ m_h_transition_source_path;
        float m_fl_transition_source_t;
        float m_fl_transition_source_path_location;
        CUtlSymbolLarge m_isz_transition_source_path_node_start;
        bool m_b_stopped_during_transition;
        CEntityIOOutput m_on_lerp_to_position_complete;
        bool m_b_is_paused;
        CFuncMover_TransitionToPathNodeAction_t m_e_transitioned_to_path_node_action;
        quaternion_t m_q_transition_source_orientation;
        int32_t m_n_delayed_teleport_to_node;
        bool m_b_is_im_gui_logging;
        bool m_b_is_im_gui_ent_text_logging;
        float m_fl_speed;
        CHandle_CBaseEntity_ m_h_follow_entity;
        float m_fl_follow_distance;
        float m_fl_follow_minimum_speed;
        float m_fl_cur_follow_entity_t;
        float m_fl_cur_follow_speed;
        CUtlSymbolLarge m_str_orientation_face_entity_name;
        CHandle_CBaseEntity_ m_h_orientation_face_entity;
        CEntityIOOutput m_on_start;
        CEntityIOOutput m_on_start_forward;
        CEntityIOOutput m_on_start_reverse;
        CEntityIOOutput m_on_stop;
        CEntityIOOutput m_on_stopped;
        bool m_b_next_node_returns_current;
        bool m_b_started_moving;
        CFuncMover_FollowEntityDirection_t m_e_follow_entity_direction;
        CHandle_CFuncMover_ m_h_follow_mover;
        CUtlSymbolLarge m_isz_follow_entity_name;
        CUtlSymbolLarge m_isz_follow_mover_entity_name;
        float m_fl_follow_mover_distance;
        float m_fl_follow_mover_ratio;
        float m_fl_follow_mover_calculated_distance;
        float m_fl_follow_mover_spring_strength;
        int32_t m_n_follow_mover_constraint_priority;
        vector2d_t m_vec_follow_mover_coupler_range;
        bool m_b_follow_constraints_initialized;
        CFuncMover_FollowConstraint_t m_e_follow_constraint;
        float m_fl_follow_mover_speed;
        float m_fl_follow_mover_velocity;
        GameTick_t m_n_tick_movement_ran;
        FuncMoverMovementSummary_t m_movement_summary;
        bool m_b_stop_from_begin_stop_target;
        bool m_b_queue_stop;
        bool m_b_queue_stop_moving;
        bool m_b_queue_setup_path_mover;
        CFuncMover_PathRebuildStrategy_t m_e_path_rebuild_strategy;
        CFuncMover_FindFollowMoverStrategy_t m_e_find_follow_mover_strategy;
        bool m_b_disable_deceleration_to_stop;
        vector3d_t m_v_offset_from_path;
    };

    struct cphysicsprop_t {
        CEntityIOOutput m_motion_enabled;
        CEntityIOOutput m_on_awakened;
        CEntityIOOutput m_on_awake;
        CEntityIOOutput m_on_asleep;
        CEntityIOOutput m_on_player_use;
        CEntityIOOutput m_on_out_of_world;
        CEntityIOOutput m_on_player_pickup;
        bool m_b_force_nav_ignore;
        bool m_b_no_navmesh_blocker;
        bool m_b_force_npc_exclude;
        float m_mass_scale;
        float m_buoyancy_scale;
        int32_t m_damage_type;
        int32_t m_damage_to_enable_motion;
        float m_fl_force_to_enable_motion;
        bool m_b_dropped_by_player;
        bool m_b_touched_by_player;
        bool m_b_first_collision_after_launch;
        bool m_b_has_been_awakened;
        bool m_b_is_override_prop;
        GameTime_t m_fl_last_burn;
        DynamicContinuousContactBehavior_t m_n_dynamic_continuous_contact_behavior;
        GameTime_t m_f_next_check_disable_motion_contacts_time;
        int32_t m_i_initial_glow_state;
        int32_t m_n_glow_range;
        int32_t m_n_glow_range_min;
        color_t m_glow_color;
        bool m_b_should_auto_convert_back_from_debris;
        bool m_b_mute_impact_effects;
        INavObstacle_NavObstacleType_t m_n_nav_obstacle_type;
        bool m_b_update_nav_when_moving;
        bool m_b_force_nav_obstacle_cut;
        bool m_b_accept_damage_from_held_objects;
        bool m_b_enable_use_output;
        CPhysicsProp_CrateType_t m_crate_type;
        CUtlSymbolLarge m_str_item_class;
        int32_t m_n_item_count;
        bool m_b_removable_for_ammo_balancing;
        bool m_b_awake;
        bool m_b_attached_to_reference_frame;
    };

    struct cfuncnavobstruction_t {
        bool m_b_disabled;
        bool m_b_use_async_obstacle_update;
    };

    struct cphyswheelconstraint_t {
        float m_fl_suspension_frequency;
        float m_fl_suspension_damping_ratio;
        float m_fl_suspension_height_offset;
        bool m_b_enable_suspension_limit;
        float m_fl_min_suspension_offset;
        float m_fl_max_suspension_offset;
        bool m_b_enable_steering_limit;
        float m_fl_min_steering_angle;
        float m_fl_max_steering_angle;
        float m_fl_steering_axis_friction;
        float m_fl_spin_axis_friction;
        CHandle_CBaseEntity_ m_h_steering_mimics_entity;
    };

    struct cskyboxreference_t {
        WorldGroupId_t m_world_group_id;
        CHandle_CSkyCamera_ m_h_sky_camera;
    };

    struct cmolotovprojectile_t {
        bool m_b_is_inc_grenade;
        bool m_b_detonated;
        IntervalTimer m_still_timer;
    };

    struct cfilterclass_t {
        CUtlSymbolLarge m_i_filter_class;
    };

    struct cpathwithdynamicnodes_t {
        CNetworkUtlVectorBase_CHandle_CPathNode_ m_vec_path_nodes;
        transform_t m_x_initial_path_world_to_local;
        DirectionAlongSimplePath_t m_e_desired_direction;
        bool m_b_ignore_parent_rotation;
    };

    struct ccolorcorrection_t {
        float m_fl_fade_in_duration;
        float m_fl_fade_out_duration;
        float m_fl_start_fade_in_weight;
        float m_fl_start_fade_out_weight;
        GameTime_t m_fl_time_start_fade_in;
        GameTime_t m_fl_time_start_fade_out;
        float m_fl_max_weight;
        bool m_b_start_disabled;
        bool m_b_enabled;
        bool m_b_master;
        bool m_b_client_side;
        bool m_b_exclusive;
        float m_min_falloff;
        float m_max_falloff;
        float m_fl_cur_weight;
        char m_netlookup_filename;
        CUtlSymbolLarge m_lookup_filename;
    };

    struct cpropdoorrotatingbreakable_t {
        bool m_b_breakable;
        bool m_is_able_to_close_area_portals;
        int32_t m_current_damage_state;
        CUtlVector_CUtlSymbolLarge_ m_damage_states;
    };

    struct cbaseclientuientity_t {
        bool m_b_enabled;
        CUtlSymbolLarge m_dialog_xmlname;
        CUtlSymbolLarge m_panel_class_name;
        CUtlSymbolLarge m_panel_id;
        CEntityOutputTemplate_CUtlString_ m_custom_output0;
        CEntityOutputTemplate_CUtlString_ m_custom_output1;
        CEntityOutputTemplate_CUtlString_ m_custom_output2;
        CEntityOutputTemplate_CUtlString_ m_custom_output3;
        CEntityOutputTemplate_CUtlString_ m_custom_output4;
        CEntityOutputTemplate_CUtlString_ m_custom_output5;
        CEntityOutputTemplate_CUtlString_ m_custom_output6;
        CEntityOutputTemplate_CUtlString_ m_custom_output7;
        CEntityOutputTemplate_CUtlString_ m_custom_output8;
        CEntityOutputTemplate_CUtlString_ m_custom_output9;
    };

    struct cbreakable_t {
        CPropDataComponent m_cprop_data_component;
        Materials m_material;
        CHandle_CBaseEntity_ m_h_breaker;
        Explosions m_explosion;
        CUtlSymbolLarge m_isz_spawn_object;
        float m_fl_pressure_delay;
        int32_t m_i_min_health_dmg;
        CUtlSymbolLarge m_isz_prop_data;
        float m_impact_energy_scale;
        EOverrideBlockLOS_t m_n_override_block_los;
        CEntityIOOutput m_on_start_death;
        CEntityIOOutput m_on_break;
        CEntityOutputTemplate_float_ m_on_health_changed;
        PerformanceMode_t m_performance_mode;
        CHandle_CBasePlayerPawn_ m_h_physics_attacker;
        GameTime_t m_fl_last_physics_influence_time;
    };

    struct cbasefilter_t {
        bool m_b_negated;
        CEntityIOOutput m_on_pass;
        CEntityIOOutput m_on_fail;
    };

    struct weaponpurchasetracker_t_t {
        CUtlVectorEmbeddedNetworkVar_WeaponPurchaseCount_t_ m_weapon_purchases;
    };

    struct cpulsecell_outflow_playscenebase__cursorstate_t_t {
        CHandle_CBaseEntity_ m_scene_instance;
        CHandle_CBaseEntity_ m_main_actor;
        CUtlHashtable_PulseCursorID_t_int32_t_ m_cursor_idto_event_id;
    };

    struct cmapinfo_t {
        int32_t m_i_buying_status;
        float m_fl_bomb_radius;
        int32_t m_i_pet_population;
        bool m_b_use_normal_spawns_for_dm;
        bool m_b_disable_auto_generated_dmspawns;
        float m_fl_bot_max_vision_distance;
        int32_t m_i_hostage_count;
        bool m_b_fade_player_visibility_far_z;
        bool m_b_rain_trace_to_sky_enabled;
        bool m_b_gpucull_skybox;
        float m_fl_env_rain_strength;
        float m_fl_env_puddle_ripple_strength;
        float m_fl_env_puddle_ripple_direction;
        float m_fl_env_wetness_coverage;
        float m_fl_env_wetness_drying_amount;
        bool m_b_frost_enabled;
    };

    struct cgradientfog_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_h_gradient_fog_texture;
        float m_fl_fog_start_distance;
        float m_fl_fog_end_distance;
        bool m_b_height_fog_enabled;
        float m_fl_fog_start_height;
        float m_fl_fog_end_height;
        float m_fl_far_z;
        float m_fl_fog_max_opacity;
        float m_fl_fog_falloff_exponent;
        float m_fl_fog_vertical_exponent;
        color_t m_fog_color;
        float m_fl_fog_strength;
        float m_fl_fade_time;
        bool m_b_start_disabled;
        bool m_b_is_enabled;
        bool m_b_gradient_fog_needs_textures;
    };

    struct cpulsecell_outflow_playsequence_t {
        CUtlString m_param_sequence_name;
    };

    struct cpointclientuiworldtextpanel_t {
        char m_message_text;
    };

    struct centityidentity_t {
        int32_t m_name_string_table_index;
        CUtlSymbolLarge m_name;
        CUtlSymbolLarge m_designer_name;
        uint32_t m_flags;
        WorldGroupId_t m_world_group_id;
        uint32_t m_f_data_object_types;
        ChangeAccessorFieldPathIndex_t m_path_index;
        CEntityAttributeTable* m_p_attributes;
        CEntityIdentity* m_p_prev;
        CEntityIdentity* m_p_next;
        CEntityIdentity* m_p_prev_by_class;
        CEntityIdentity* m_p_next_by_class;
    };

    struct cpulsecell_limitcount__criteria_t_t {
        bool m_b_limit_count_passes;
    };

    struct cfuncrotator_t {
        CFuncRotator_Rotate_t m_e_rotate_type;
        bool m_b_is_rotating;
        SolidType_t m_e_solid_type;
        float m_fl_speed;
        float m_fl_rotation_distance_degrees;
        float m_fl_time_to_complete_rotation;
        CHandle_CBaseEntity_ m_h_rotator_target;
        CUtlSymbolLarge m_str_rotator_target;
        CEntityIOOutput m_on_rotation_started;
        CEntityIOOutput m_on_rotation_completed;
        CEntityIOOutput m_on_oscillate;
        CEntityIOOutput m_on_oscillate_start_arrive;
        CEntityIOOutput m_on_oscillate_start_depart;
        CEntityIOOutput m_on_oscillate_end_arrive;
        CEntityIOOutput m_on_oscillate_end_depart;
        GameTick_t m_n_tick_rotate_ran;
        bool m_b_started_rotating;
        FuncRotatorRotationSummary_t m_rotation_summary;
        float m_fl_time_to_reach_max_speed;
        float m_fl_time_to_reach_zero_speed;
        GameTime_t m_fl_time_rotation_start;
        GameTime_t m_fl_time_rotation_stop;
        float m_fl_start_speed;
        quaternion_t m_q_spawn_orientation;
        bool m_b_returning_to_initial_rotation;
        float m_fl_min_yaw_rotation;
        float m_fl_max_yaw_rotation;
        bool m_b_oscillation_from_start;
        CGameSoundEventName m_isz_start_sound;
        CGameSoundEventName m_isz_loop_sound;
        CGameSoundEventName m_isz_stop_sound;
        float m_fl_target_angle;
        float m_fl_current_angle;
        CFuncRotator_RotationAxis_t m_e_rotation_axis;
        float m_fl_speed_drift_from_over_rotate;
        bool m_b_queue_stop;
    };

    struct csoundevententity_t {
        bool m_b_start_on_spawn;
        bool m_b_to_local_player;
        bool m_b_stop_on_new;
        bool m_b_save_restore;
        bool m_b_saved_is_playing;
        float m_fl_saved_elapsed_time;
        CUtlSymbolLarge m_isz_source_entity_name;
        CUtlSymbolLarge m_isz_attachment_name;
        CEntityOutputTemplate_SndOpEventGuid_t_ m_on_guidchanged;
        CEntityIOOutput m_on_sound_finished;
        float m_fl_client_cull_radius;
        CUtlSymbolLarge m_isz_sound_name;
        CEntityHandle m_h_source;
        int32_t m_n_entity_index_selection;
    };

    struct cenvfade_t {
        color_t m_fade_color;
        float m_duration;
        float m_hold_duration;
        CEntityIOOutput m_on_begin_fade;
    };

    struct cbaseplayervdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_model_name;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_model_name_ag2_override;
        CSkillFloat m_fl_head_damage_multiplier;
        CSkillFloat m_fl_chest_damage_multiplier;
        CSkillFloat m_fl_stomach_damage_multiplier;
        CSkillFloat m_fl_arm_damage_multiplier;
        CSkillFloat m_fl_leg_damage_multiplier;
        float m_fl_hold_breath_time;
        float m_fl_drowning_damage_interval;
        int32_t m_n_drowning_damage_initial;
        int32_t m_n_drowning_damage_max;
        int32_t m_n_water_speed;
        float m_fl_use_range;
        float m_fl_use_angle_tolerance;
        float m_fl_crouch_time;
    };

    struct ctriggerimpact_t {
        float m_fl_magnitude;
        float m_fl_noise;
        float m_fl_viewkick;
        CEntityOutputTemplate_Vector_ m_p_output_force;
    };

    struct ccsgamemoderules_deathmatch_t {
        GameTime_t m_fl_dmbonus_start_time;
        float m_fl_dmbonus_time_length;
        CUtlString m_s_dmbonus_weapon;
    };

    struct ctestpulseio__entityhandleintargs_t_t {
        CEntityHandle handle_a;
        int32_t value_b;
    };

    struct cpulsecell_cursorqueue_t {
        int32_t m_n_cursors_allowed_to_run_parallel;
    };

    struct cbasepropdoor_t {
        float m_fl_auto_return_delay;
        CUtlVector_CHandle_CBasePropDoor_ m_h_door_list;
        int32_t m_n_hardware_type;
        bool m_b_needs_hardware;
        DoorState_t m_e_door_state;
        bool m_b_locked;
        bool m_b_no_npcs;
        VectorWS m_closed_position;
        QAngle m_closed_angles;
        CHandle_CBaseEntity_ m_h_blocker;
        bool m_b_first_blocked;
        locksound_t m_ls;
        bool m_b_force_closed;
        VectorWS m_vec_latch_world_position;
        CHandle_CBaseEntity_ m_h_activator;
        float m_fl_speed;
        CGameSoundEventName m_sound_moving;
        CGameSoundEventName m_sound_open;
        CGameSoundEventName m_sound_close;
        CGameSoundEventName m_sound_lock;
        CGameSoundEventName m_sound_unlock;
        CGameSoundEventName m_sound_latch;
        CGameSoundEventName m_sound_pound;
        CGameSoundEventName m_sound_jiggle;
        CGameSoundEventName m_sound_locked_anim;
        int32_t m_num_close_attempts;
        CUtlStringToken m_n_physics_material;
        CUtlSymbolLarge m_slave_name;
        CHandle_CBasePropDoor_ m_h_master;
        CEntityIOOutput m_on_blocked_closing;
        CEntityIOOutput m_on_blocked_opening;
        CEntityIOOutput m_on_unblocked_closing;
        CEntityIOOutput m_on_unblocked_opening;
        CEntityIOOutput m_on_fully_closed;
        CEntityIOOutput m_on_fully_open;
        CEntityIOOutput m_on_close;
        CEntityIOOutput m_on_open;
        CEntityIOOutput m_on_locked_use;
        CEntityIOOutput m_on_ajar_open;
    };

    struct clogicbranchlist_t {
        CUtlSymbolLarge m_n_logic_branch_names;
        CUtlVector_CHandle_CBaseEntity_ m_logic_branch_list;
        CLogicBranchList_LogicBranchListenerLastState_t m_e_last_state;
        CEntityIOOutput m_on_all_true;
        CEntityIOOutput m_on_all_false;
        CEntityIOOutput m_on_mixed;
    };

    struct cbtactionparachutepositioning_t {
        CountdownTimer m_action_timer;
    };

    struct cdynamicprop_t {
        bool m_b_graph_controller_enabled;
        bool m_b_create_nav_obstacle;
        bool m_b_nav_obstacle_updates_overridden;
        bool m_b_use_hitboxes_for_render_box;
        bool m_b_use_anim_graph;
        CEntityIOOutput m_p_output_anim_begun;
        CEntityIOOutput m_p_output_anim_over;
        CEntityIOOutput m_p_output_anim_loop_cycle_over;
        CEntityIOOutput m_on_anim_reached_start;
        CEntityIOOutput m_on_anim_reached_end;
        CUtlSymbolLarge m_isz_idle_anim;
        AnimLoopMode_t m_n_idle_anim_loop_mode;
        bool m_b_randomize_cycle;
        bool m_b_start_disabled;
        bool m_b_fired_start_end_output;
        bool m_b_force_npc_exclude;
        bool m_b_create_movable_surface_graph;
        bool m_b_create_non_solid;
        bool m_b_is_override_prop;
        int32_t m_i_initial_glow_state;
        int32_t m_n_glow_range;
        int32_t m_n_glow_range_min;
        color_t m_glow_color;
        int32_t m_n_glow_team;
    };

    struct cfilterteam_t {
        int32_t m_i_filter_team;
    };

    struct cfuncconveyor_t {
        CUtlSymbolLarge m_sz_conveyor_models;
        float m_fl_transition_duration_seconds;
        float m_fl_speed;
        QAngle m_ang_move_entity_space;
        vector3d_t m_vec_move_dir_entity_space;
        float m_fl_target_speed;
        GameTick_t m_n_transition_start_tick;
        int32_t m_n_transition_duration_ticks;
        float m_fl_transition_start_speed;
        float m_fl_friction_scale;
        CNetworkUtlVectorBase_CHandle_CBaseEntity_ m_h_conveyor_models;
    };

    struct ctriggerphysics_t {
        IPhysicsMotionController* m_p_controller;
        float m_gravity_scale;
        float m_linear_limit;
        float m_linear_damping;
        float m_angular_limit;
        float m_angular_damping;
        float m_linear_force;
        float m_fl_frequency;
        float m_fl_damping_ratio;
        vector3d_t m_vec_linear_force_point_at;
        bool m_b_collapse_to_force_point;
        VectorWS m_vec_linear_force_point_at_world;
        vector3d_t m_vec_linear_force_direction;
        bool m_b_force_direction_is_in_local_space;
        bool m_b_convert_to_debris_when_possible;
    };

    struct cfunctimescale_t {
        float m_fl_desired_timescale;
        float m_fl_acceleration;
        float m_fl_min_blend_rate;
        float m_fl_blend_delta_multiplier;
        bool m_is_started;
    };

    struct csoundopvarsetpointentity_t {
        CEntityIOOutput m_on_enter;
        CEntityIOOutput m_on_exit;
        bool m_b_auto_disable;
        float m_fl_distance_min;
        float m_fl_distance_max;
        float m_fl_distance_map_min;
        float m_fl_distance_map_max;
        float m_fl_occlusion_radius;
        float m_fl_occlusion_min;
        float m_fl_occlusion_max;
        float m_fl_val_set_on_disable;
        bool m_b_set_value_on_disable;
        bool m_b_reloading;
        int32_t m_n_simulation_mode;
        int32_t m_n_visibility_samples;
        vector3d_t m_v_dynamic_proxy_point;
        float m_fl_dynamic_maximum_occlusion;
        CEntityHandle m_h_dynamic_entity;
        CUtlSymbolLarge m_isz_dynamic_entity_name;
        float m_fl_pathing_distance_norm_factor;
        VectorWS m_v_pathing_source_pos;
        VectorWS m_v_pathing_listener_pos;
        vector3d_t m_v_pathing_direction;
        int32_t m_n_pathing_source_index;
    };

    struct cbaseplayerweaponvdata_t {
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_sz_world_model;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_sz_world_model_ag2_override;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeCModel_ m_s_tools_only_owner_model_name;
        bool m_b_built_right_handed;
        bool m_b_allow_flipping;
        CAttachmentNameSymbolWithStorage m_s_muzzle_attachment;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_muzzle_flash_particle;
        CUtlString m_sz_muzzle_flash_particle_config;
        CResourceNameTyped_CWeakHandle_InfoForResourceTypeIParticleSystemDefinition_ m_sz_barrel_smoke_particle;
        uint8_t m_n_muzzle_smoke_shot_threshold;
        float m_fl_muzzle_smoke_timeout;
        float m_fl_muzzle_smoke_decrement_rate;
        bool m_b_generate_muzzle_light;
        bool m_b_should_animate_in_world;
        bool m_b_linked_cooldowns;
        ItemFlagTypes_t m_i_flags;
        int32_t m_i_weight;
        bool m_b_auto_switch_to;
        bool m_b_auto_switch_from;
        AmmoIndex_t m_n_primary_ammo_type;
        AmmoIndex_t m_n_secondary_ammo_type;
        int32_t m_i_max_clip1;
        int32_t m_i_max_clip2;
        int32_t m_i_default_clip1;
        int32_t m_i_default_clip2;
        bool m_b_reserve_ammo_as_clips;
        bool m_b_treat_as_single_clip;
        bool m_b_keep_loaded_ammo;
        RumbleEffect_t m_i_rumble_effect;
        float m_fl_drop_speed;
        int32_t m_i_slot;
        int32_t m_i_position;
        CUtlOrderedMap_WeaponSound_t_CSoundEventName_ m_a_shoot_sounds;
    };

    struct cmarkupvolumetagged_t {
        CUtlVector_CGlobalSymbol_ m_group_names;
        CUtlVector_CGlobalSymbol_ m_tags;
        bool m_b_is_group;
        bool m_b_group_by_prefab;
        bool m_b_group_by_volume;
        bool m_b_group_other_groups;
        bool m_b_is_in_group;
    };

    struct cenvcubemap_t {
        CStrongHandle_InfoForResourceTypeCTextureBase_ m_entity_h_cubemap_texture;
        bool m_entity_b_custom_cubemap_texture;
        float m_entity_fl_influence_radius;
        vector3d_t m_entity_v_box_project_mins;
        vector3d_t m_entity_v_box_project_maxs;
        bool m_entity_b_moveable;
        int32_t m_entity_n_handshake;
        int32_t m_entity_n_env_cube_map_array_index;
        int32_t m_entity_n_priority;
        float m_entity_fl_edge_fade_dist;
        vector3d_t m_entity_v_edge_fade_dists;
        float m_entity_fl_diffuse_scale;
        bool m_entity_b_start_disabled;
        bool m_entity_b_default_env_map;
        bool m_entity_b_default_spec_env_map;
        bool m_entity_b_indoor_cube_map;
        bool m_entity_b_copy_diffuse_from_default_cubemap;
        bool m_entity_b_enabled;
    };

    struct ctriggerlerpobject_t {
        CUtlSymbolLarge m_isz_lerp_target;
        CHandle_CBaseEntity_ m_h_lerp_target;
        CUtlSymbolLarge m_isz_lerp_target_attachment;
        AttachmentHandle_t m_h_lerp_target_attachment;
        float m_fl_lerp_duration;
        bool m_b_attached_entity_was_parented;
        bool m_b_lerp_restore_move_type;
        bool m_b_single_lerp_object;
        CUtlVector_lerpdata_t_ m_vec_lerping_objects;
        CUtlSymbolLarge m_isz_lerp_effect;
        CUtlSymbolLarge m_isz_lerp_sound;
        bool m_b_attach_touching_object;
        CHandle_CBaseEntity_ m_h_entity_to_wait_for_disconnect;
        CEntityIOOutput m_on_lerp_started;
        CEntityIOOutput m_on_lerp_finished;
        CEntityIOOutput m_on_detached;
    };

    struct ctriggersave_t {
        bool m_b_force_new_level_unit;
        float m_f_dangerous_timer;
        int32_t m_min_hit_points;
        float m_fl_retrigger_delay;
    };

    struct cpointhurt_t {
        int32_t m_n_damage;
        DamageTypes_t m_bits_damage_type;
        float m_fl_radius;
        float m_fl_delay;
        CUtlSymbolLarge m_str_target;
        CHandle_CBaseEntity_ m_p_activator;
    };

    struct cbaseplayercontroller_t {
        uint64_t m_n_in_buttons_which_are_toggles;
        uint32_t m_n_tick_base;
        CHandle_CBasePlayerPawn_ m_h_pawn;
        bool m_b_known_team_mismatch;
        CSplitScreenSlot m_n_split_screen_slot;
        CHandle_CBasePlayerController_ m_h_split_owner;
        CUtlVector_CHandle_CBasePlayerController_ m_h_split_screen_players;
        bool m_b_is_hltv;
        PlayerConnectedState m_i_connected;
        PlayerConnectedState m_i_most_connected;
        char m_isz_player_name;
        CUtlString m_sz_network_idstring;
        float m_f_lerp_time;
        bool m_b_lag_compensation;
        bool m_b_predict;
        bool m_b_is_low_violence;
        bool m_b_game_paused;
        ChatIgnoreType_t m_i_ignore_global_chat;
        float m_fl_last_player_talk_time;
        float m_fl_last_entity_steady_state;
        int32_t m_n_available_entity_steady_state;
        bool m_b_has_any_steady_state_ents;
        uint64_t m_steam_id;
        bool m_b_no_clip_enabled;
        uint32_t m_i_desired_fov;
    };

    struct crangefloat_t {
        float m_p_value;
    };

    struct cdestructiblepart_t {
        CGlobalSymbol m_debug_name;
        HitGroup_t m_n_hit_group;
        bool m_b_disable_hit_group_when_destroyed;
        CUtlVector_HitGroup_t_ m_n_other_hitgroups_to_destroy_when_fully_destructed;
        bool m_b_only_destroy_when_gibbing;
        CGlobalSymbol m_s_body_group_name;
        CUtlVector_CDestructiblePart_DamageLevel_ m_damage_levels;
    };

    struct physblockheader_t_t {
        int32_t n_saved;
        uint64_t p_world_object;
    };

    struct relationshipoverride_t_t {
        CHandle_CBaseEntity_ entity;
        Class_T class_type;
    };

    struct autoroomdoorwaypairs_t_t {
        VectorWS v_p1;
        VectorWS v_p2;
    };

    struct navhull_t_t {
        int32_t m_n_hull_idx;
    };

    struct cdebugsnapshotdata_t_t {
        CUtlString m_text;
        uint32_t m_data_type;
        uint32_t m_user_flags;
        uint32_t m_user_data;
        VectorWS m_user_vector;
        CTransformWS m_user_transform;
        CGenericShapeProxy m_user_shape;
        color_t m_draw_color;
        CUtlVector_CDebugDrawHistoryData_ m_vec_debug_overlay_data;
        DebugSnapshotBaseStructuredData_t* m_p_structured_data;
        CHandle_CBaseEntity_ m_h_entity;
        CUtlString m_s_entity_name;
        CEntityIndex m_n_entity_index;
        CUtlLeanVector_CDebugSnapshotData_t_ m_children;
    };

    struct cremapfloat_t {
        float m_p_value;
    };

    struct chintmessage_t {
        char* m_hint_string;
        CUtlVector_char_ m_args;
        float m_duration;
    };

    struct ai_groundrootmotionmotor_debugsnapshotdata_t_t {
        CGlobalSymbol desired_movement_gait_set;
        CGlobalSymbol desired_movement_gait;
        CGlobalSymbol current_movement_gait_set;
        CGlobalSymbol current_movement_gait;
        CGlobalSymbol movement_setting_id;
        CGlobalSymbol gait_switch_blocked_reason;
        bool b_goal_completion_allowed;
        CGlobalSymbol state;
        int32_t n_state_active_tick_count;
        bool b_has_path;
        float f_remaining_ground_path_length;
        float f_current_speed;
        CGlobalSymbol move_type;
        float f_forward_strafing_angle_actual;
        float f_forward_strafing_angle_desired;
        float f_forward_strafing_angle_committed;
        float f_current_lean;
        float f_target_lean;
        CUtlVector_AI_GroundRootMotionMotor_DebugSnapshotData_t_Event_t_ vec_events;
    };

    struct particlenode_t_t {
        CHandle_CBaseEntity_ m_h_entity;
        ParticleIndex_t m_i_index;
        GameTime_t m_fl_start_time;
        float m_fl_growth_duration;
        VectorWS m_vec_growth_origin;
        float m_fl_endcap_time;
        bool m_b_marked_for_delete;
    };

    struct cdecalgroupvdata_t {
        CUtlVector_DecalGroupOption_t_ m_vec_options;
        float m_fl_total_probability;
    };

    struct cplayercontrollercomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
    };

    struct cresponsequeue_t {
        CUtlVector_CAI_Expresser_ m_expresser_targets;
    };

    struct codegenaabb_t_t {
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
    };

    struct cscriptuniformrandomstream_t {
        HSCRIPT m_h_script_scope;
        int32_t m_n_initial_seed;
    };

    struct lerpdata_t_t {
        CHandle_CBaseEntity_ m_h_ent;
        MoveType_t m_move_type;
        GameTime_t m_fl_start_time;
        VectorWS m_vec_start_origin;
        quaternion_t m_q_start_rot;
        ParticleIndex_t m_n_fxindex;
    };

    struct wrappedphysicsjoint_t_t {
        IPhysicsJoint* m_p_joint;
    };

    struct simpleconstraintsoundprofile_t {
        float m_fl_key_point_min_sound_threshold;
        float m_fl_key_point_max_sound_threshold;
        float m_reversal_sound_threshold_small;
        float m_reversal_sound_threshold_medium;
        float m_reversal_sound_threshold_large;
    };

    struct csimplesimtimer_t {
        GameTime_t m_fl_next;
        WorldGroupId_t m_n_world_group_id;
    };

    struct ai_basenpcanimgraph_debugsnapshotdata_t_t {
        int32_t ag2_update_id;
        CGlobalSymbol e_action_desired;
        CGlobalSymbol e_action_handshake_restart;
        CGlobalSymbol e_action_handshake_body_authority_current;
        CGlobalSymbol e_action_handshake_body_authority_desired;
        CGlobalSymbol e_movement_type_desired;
        CGlobalSymbol e_movement_handshake_restart;
        CGlobalSymbol e_movement_handshake_body_authority_current;
        CGlobalSymbol e_movement_handshake_body_authority_desired;
    };

    struct cphysicsbodygamemarkupdata_t {
        CUtlDict_CPhysicsBodyGameMarkup_ m_physics_body_markup_by_bone_name;
    };

    struct soundcommand_t_t {
        float m_time;
        float m_delta_time;
        soundcommands_t m_command;
        float m_value;
    };

    struct modifiedconvars_t_t {
        char psz_convar;
        char psz_current_value;
        char psz_org_value;
    };

    struct save_header_t {
        int32_t m_save_id;
        int32_t m_version;
        int32_t m_n_connection_count;
        int32_t m_n_map_version;
        CUtlString m_s_spawn_group_name;
        matrix3x4a_t m_vec_world_offset;
        float m_fl_save_time;
    };

    struct cskilldamage_t {
        CSkillFloat m_fl_damage;
        float m_fl_npcdamage_scalar_vs_npc;
        float m_fl_physics_force_damage;
    };

    struct ai_defaultnpc_debugsnapshotdata_t__pathquery_t_t {
        CGlobalSymbol m_n_initial_movement_id;
        CGlobalSymbol m_n_current_movement_id;
        CGlobalSymbol m_n_mode;
        CGlobalSymbol m_n_type;
        CGlobalSymbol m_n_state;
    };

    struct physics_save_sphere_t_t {
        float radius;
    };

    struct game_header_t {
        CUtlString m_s_comment;
        int32_t m_n_spawn_group_count;
        CUtlString m_s_landmark;
        CUtlString m_s_required_addons;
    };

    struct ai_basenpc_debugsnapshotdata_t_t {
        CGlobalSymbol npc_state;
        CHandle_CBaseEntity_ current_enemy;
        CUtlString s_current_schedule;
        CGlobalSymbol s_current_task;
        CUtlString s_prev_schedule;
        CUtlString s_npc_current_movement;
        CUtlString s_last_task_end_location;
        CUtlVector_CGlobalSymbol_ conditions;
        CUtlVector_CGlobalSymbol_ anim_events;
        AI_BaseNPCAnimGraph_DebugSnapshotData_t animgraph;
        AI_Navigator_DebugSnapshotData_t navigator;
        AI_MotorServices_DebugSnapshotData_t motor_services;
        AI_FacingServices_DebugSnapshotData_t facing_services;
    };

    struct cdebugdrawhistorydata_t {
        CHandle_CBaseEntity_ m_h_entity;
        ESceneViewDebugOverlaysListenerDataType_t m_etype;
        CUtlLeanVector_Vector4D_ m_vectors;
        CUtlLeanVector_Color_ m_colors;
        CUtlLeanVector_float_ m_dimensions;
        CUtlLeanVector_double_ m_times;
        CUtlLeanVector_uint64_t_ m_uint64s;
        CUtlLeanVector_bool_ m_bools;
        CUtlLeanVector_CUtlString_ m_strings;
    };

    struct cnetworkviewoffsetvector_t {
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct ammoindex_t_t {
        int8_t m_value;
    };

    struct cdestructiblepartssystemdata_t {
        CUtlOrderedMap_HitGroup_t_CDestructiblePart_ m_parts_data_by_hit_group;
        CRangeInt m_n_min_max_number_hit_groups_to_destroy_when_gibbing;
    };

    struct cropeoverlaphit_t {
        CHandle_CBaseEntity_ m_h_entity;
        CUtlVector_int32_t_ m_vec_overlapping_links;
    };

    struct actorclipentry_t_t {
        CUtlString m_s_clip_name;
        bool m_b_looping;
    };

    struct responsecontext_t_t {
        CUtlSymbolLarge m_isz_name;
        CUtlSymbolLarge m_isz_value;
        GameTime_t m_f_expiration_time;
    };

    struct cnavvolumesphericalshell_t {
        float m_fl_radius_inner;
    };

    struct cplayerpawncomponent_t {
        CNetworkVarChainer __m_p_chain_entity;
        CAnimGraphControllerPtr m_p_component_graph_controller;
    };

    struct ai_facingservices_debugsnapshotdata_t_t {
        VectorWS npc_position;
        CGlobalSymbol facing_target_source;
        VectorWS facing_target;
        CGlobalSymbol schedule_facing_priority;
        CGlobalSymbol strafing_source;
        bool strafing_enabled;
        CGlobalSymbol movement_id;
    };

    struct ai_navigator_debugsnapshotdata_t_t {
        CGlobalSymbol s_movement_id;
        uint32_t s_movement_serial_number;
        CUtlString s_goal_source_location;
        VectorWS last_waypoint_pos;
        VectorWS goal_location;
        CUtlVector_AI_Navigator_DebugSnapshotData_t_Waypoint_t_ waypoints;
        CGlobalSymbol s_arrival_movement_gait_set;
    };

    struct cdecalinstance_t {
        CGlobalSymbol m_s_decal_group;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_h_material;
        CUtlStringToken m_s_sequence_name;
        CHandle_CBaseEntity_ m_h_entity;
        int32_t m_n_bone_index;
        int32_t m_n_triangle_index;
        vector3d_t m_v_position_ls;
        vector3d_t m_v_position_os;
        vector3d_t m_v_normal_ls;
        vector3d_t m_v_normal_os;
        vector3d_t m_v_saxis_ls;
        DecalFlags_t m_n_flags;
        color_t m_color;
        float m_fl_width;
        float m_fl_height;
        float m_fl_depth;
        matrix3x4_t m_m_transform;
        matrix3x4_t m_m_local_to_triangle;
        float m_fl_animation_scale;
        float m_fl_animation_start_time;
        GameTime_t m_fl_place_time;
        float m_fl_fade_start_time;
        float m_fl_fade_duration;
        float m_fl_lighting_origin_offset;
        float m_fl_bounding_radius_sqr;
        int16_t m_n_sequence_index;
        bool m_b_is_adjacent;
        bool m_b_do_decal_lightmapping;
    };

    struct cgamescriptedmovedata_t {
        vector3d_t m_v_accumulated_root_motion;
        QAngle m_ang_accumulated_root_motion_rotation;
        VectorWS m_v_src;
        QAngle m_ang_src;
        QAngle m_ang_current;
        float m_fl_locked_speed;
        float m_fl_ang_rate;
        float m_fl_duration;
        GameTime_t m_fl_start_time;
        bool m_b_active;
        bool m_b_teleport_on_end;
        bool m_b_ignore_rotation;
        bool m_b_success;
        ForcedCrouchState_t m_n_forced_crouch_state;
        bool m_b_ignore_collisions;
        vector3d_t m_v_dest;
        QAngle m_ang_dst;
        CHandle_CBaseEntity_ m_h_dest_entity;
    };

    struct cskeletonanimationcontroller_t {
        CSkeletonInstance* m_p_skeleton_instance;
    };

    struct cresponsecriteriaset_t {
        bool m_b_override_on_append;
    };

    struct funcrotatorrotationsummary_t_t {
        GameTick_t n_tick;
        FuncRotatorRotationSummaryFlags_t n_flags;
    };

    struct cai_expresser_t {
        CUtlDict_GameTime_t_ m_concept_cooldowns;
        CUtlDict_GameTime_t_ m_rule_cooldowns;
        GameTime_t m_fl_stop_talk_time;
        GameTime_t m_fl_stop_talk_time_without_delay;
        GameTime_t m_fl_queued_speech_time;
        GameTime_t m_fl_blocked_talk_time;
        int32_t m_voice_pitch;
        GameTime_t m_fl_last_time_accepted_speak;
        bool m_b_allow_speaking_interrupts;
        bool m_b_consider_scene_involvement_as_speech;
        bool m_b_scene_entity_disabled;
        int32_t m_n_last_spoken_priority;
        CBaseModelEntity* m_p_outer;
    };

    struct cstopwatch_t {
        float m_fl_interval;
    };

    struct responseparams_t {
        int16_t odds;
        int16_t flags;
        ResponseFollowup* m_p_followup;
    };

    struct spawngroup_header_t {
        CUtlString m_s_group_name;
        CUtlString m_s_entity_lump_name;
        matrix3x4a_t m_vec_world_offset;
        bool m_b_client_spawn_group;
        bool m_b_suppress_all_entities;
    };

    struct globalentity_t_t {
        CUtlSymbol name;
        CUtlSymbol level_name;
        GLOBALESTATE state;
        int32_t counter;
    };

    struct canimgraphcontrollerptr_t {
        CAnimGraphControllerBase* m_p_controller;
    };

    struct constraintsoundinfo_t {
        VelocitySampler m_v_sampler;
        SimpleConstraintSoundProfile m_sound_profile;
        vector3d_t m_forward_axis;
        CUtlSymbolLarge m_isz_travel_sound_fwd;
        CUtlSymbolLarge m_isz_travel_sound_back;
        CUtlSymbolLarge m_isz_reversal_sound_small;
        CUtlSymbolLarge m_isz_reversal_sound_medium;
        CUtlSymbolLarge m_isz_reversal_sound_large;
        bool m_b_play_travel_sound;
        bool m_b_play_reversal_sound;
    };

    struct cphysicsbodygamemarkup_t {
        CUtlString m_target_body;
        CGlobalSymbol m_tag;
    };

    struct pointcamerasettings_t_t {
        float m_fl_near_blurry_distance;
        float m_fl_near_crisp_distance;
        float m_fl_far_crisp_distance;
        float m_fl_far_blurry_distance;
    };

    struct hudpanelhasclass_t_t {
        uint16_t m_n_panel_id_index;
        uint16_t m_n_class_name_index;
        EHudPanelClassStatus_t m_e_class_status;
    };

    struct debugdrawbonetransforms_t_t {
        CUtlVectorFixedGrowable_CTransform_128_ vec_bones;
    };

    struct inavpathcost_t {
        NavHull_t m_nav_hull;
    };

    struct hudpaneldialogvariablestring_t_t {
        uint16_t m_n_panel_id_index;
        uint16_t m_n_dialog_variable_index;
        CUtlString m_s_value;
        bool m_b_is_set;
    };

    struct csoundenvelope_t {
        float m_current;
        float m_target;
        float m_rate;
        bool m_forceupdate;
    };

    struct dynpitchvol_base_t_t {
        int32_t preset;
        int32_t pitchrun;
        int32_t pitchstart;
        int32_t spinup;
        int32_t spindown;
        int32_t volrun;
        int32_t volstart;
        int32_t fadein;
        int32_t fadeout;
        int32_t lfotype;
        int32_t lforate;
        int32_t lfomodpitch;
        int32_t lfomodvol;
        int32_t cspinup;
        int32_t cspincount;
        int32_t pitch;
        int32_t spinupsav;
        int32_t spindownsav;
        int32_t pitchfrac;
        int32_t vol;
        int32_t fadeinsav;
        int32_t fadeoutsav;
        int32_t volfrac;
        int32_t lfofrac;
        int32_t lfomult;
    };

    struct cstopwatchbase_t {
        bool m_b_is_running;
    };

    struct ai_groundrootmotionmotor_debugsnapshotdata_t__event_t_t {
        CUtlString description;
        VectorWS location;
    };

    struct cmarkupsearch_pathcostareafilter_t {
        CMarkupSearchHelper m_search_helper;
    };

    struct cnavvolumevector_t {
        bool m_b_has_been_pre_filtered;
    };

    struct navgravity_t_t {
        vector3d_t m_v_gravity;
        bool m_b_default;
    };

    struct pulsescriptedsequencedata_t_t {
        int32_t m_n_actor_id;
        CUtlString m_sz_pre_idle_sequence;
        CUtlString m_sz_entry_sequence;
        CUtlString m_sz_sequence;
        CUtlString m_sz_exit_sequence;
        ScriptedMoveTo_t m_n_move_to;
        SharedMovementGait_t m_n_move_to_gait;
        ScriptedHeldWeaponBehavior_t m_n_held_weapon_behavior;
        bool m_b_loop_pre_idle_sequence;
        bool m_b_loop_action_sequence;
        bool m_b_loop_post_idle_sequence;
        bool m_b_ignore_look_at;
    };

    struct cchoreo_graphcontroller_t {
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_e_choreo_state;
        CAnimGraph2ParamOptionalRef_CTransform_ m_t_choreo_target_warp;
        CAnimGraph2ParamOptionalRef_CTransform_ m_t_choreo_exit_warp;
    };

    struct externalanimgraphhandle_t_t {
        uint32_t m_value;
    };

    struct cphysicsshake_t {
        vector3d_t m_force;
    };

    struct cinfochoreoanchorposition_t {
        vector3d_t m_v_origin_ls;
        quaternion_t m_q_angles_ls;
        vector3d_t m_v_extents_min;
        vector3d_t m_v_extents_max;
        float m_fl_radius;
        bool m_b_only_warp_position;
        CHandle_CBaseEntity_ m_h_parent;
        CInfoChoreoLocatorShapeType_t m_n_shape_type;
    };

    struct velocitysampler_t {
        vector3d_t m_prev_sample;
        GameTime_t m_f_prev_sample_time;
        float m_f_ideal_sample_rate;
    };

    struct ctakedamageresult_t {
        CTakeDamageInfo* m_p_originating_info;
        CUtlLeanVector_DestructiblePartDamageRequest_t_ m_destructible_hit_group_requests;
        int32_t m_n_health_lost;
        int32_t m_n_health_before;
        float m_fl_damage_dealt;
        float m_fl_pre_modified_damage;
        VectorWS m_v_damage_position;
        int32_t m_n_totalled_health_lost;
        float m_fl_totalled_damage_dealt;
        float m_fl_totalled_pre_modified_damage;
        float m_fl_new_damage_accumulator_value;
        TakeDamageFlags_t m_n_damage_flags;
        bool m_b_was_damage_suppressed;
        bool m_b_suppress_flinch;
        HitGroup_t m_n_override_flinch_hit_group;
    };

    struct cmarkupsearchhelper_t {
        NavHull_t m_nav_hull;
        CUtlString m_tag_string;
        CUtlString m_name_string;
        VectorWS m_v_ref_pos;
        bool m_b_ref_pos_set;
        bool m_b_use_step_height;
        bool m_b_active;
    };

    struct sceneeventid_t_t {
        uint32_t m_value;
    };

    struct ccommentarysystem_t {
        bool m_b_commentary_enabled_mid_game;
        GameTime_t m_fl_next_teleport_time;
        int32_t m_i_teleport_stage;
        bool m_b_cheat_state;
        bool m_b_is_first_spawn_group_to_load;
        CUtlVector_modifiedconvars_t_ m_modified_convars;
        CHandle_CPointCommentaryNode_ m_h_current_node;
        CHandle_CPointCommentaryNode_ m_h_active_commentary_node;
        CHandle_CPointCommentaryNode_ m_h_last_commentary_node;
        CUtlVector_CHandle_CPointCommentaryNode_ m_vec_nodes;
    };

    struct responsefollowup_t {
        char* followup_concept;
        char* followup_contexts;
        float followup_delay;
        char* followup_target;
    };

    struct ammotypeinfo_t_t {
        int32_t m_n_max_carry;
        CRangeInt m_n_splash_size;
        AmmoFlags_t m_n_flags;
        float m_fl_mass;
        CRangeFloat m_fl_speed;
    };

    struct cnetworktransmitcomponent_t {
        uint8_t m_n_transmit_state_owned_counter;
    };

    struct ai_motorservices_debugsnapshotdata_t_t {
        CGlobalSymbol active_motor;
        float desired_speed;
        vector3d_t motor_velocity;
        CUtlVector_AI_MotorServices_DebugSnapshotData_t_MotorPathWaypoint_t_ motor_path;
        CUtlString ground_entity_debug_name;
    };

    struct cpathqueryutil_t {
        transform_t m_path_to_entity_transform;
        CUtlVector_Vector_ m_vec_path_sample_positions;
        CUtlVector_float_ m_vec_path_sample_parameters;
        CUtlVector_float_ m_vec_path_sample_distances;
        bool m_b_is_closed_loop;
    };

    struct ragdollcreationparams_t_t {
        vector3d_t m_v_force;
        int32_t m_n_force_bone;
        bool m_b_force_current_world_transform;
        int32_t m_n_health_to_grant;
    };

    struct crelativetransform_t {
        bool m_b_transform_is_world_space;
        transform_t m_transform;
        CTransformWS m_transform_ws;
        CHandle_CBaseEntity_ m_h_entity;
    };

    struct crangeint_t {
        int32_t m_p_value;
    };

    struct pathcost_t {
        float m_danger_factor;
        float m_damaging_areas_penalty_cost;
        float m_fl_agent_max_climb;
    };

    struct globalentitydatabase_t_t {
        CUtlVector_globalentity_t_ m_list;
    };

    struct cnmeventpulsestate_t_t {
        CGlobalSymbol m_event_id;
    };

    struct cworldcompositionchunkreferenceelement_t_t {
        CUtlString m_str_map_to_load;
        CUtlString m_str_landmark_name;
    };

    struct crandstopwatch_t {
        float m_fl_min_interval;
        float m_fl_max_interval;
    };

    struct cmovementstatsproperty_t {
        int32_t m_n_use_counter;
        CVectorExponentialMovingAverage m_ema_movement_direction;
    };

    struct cgamechoreoservices_t {
        CHandle_CBaseModelEntity_ m_h_owner;
        CHandle_CScriptedSequence_ m_h_scripted_sequence;
        IChoreoServices_ScriptState_t m_script_state;
        IChoreoServices_ChoreoState_t m_choreo_state;
        GameTime_t m_fl_time_started_state;
    };

    struct physobjectheader_t_t {
        PhysInterfaceId_t type;
        CHandle_CBaseEntity_ h_entity;
        CUtlSymbolLarge field_name;
        bool b_save_object;
        CUtlSymbolLarge model_name;
        AABB_t bbox;
        physics_save_sphere_t sphere;
        int32_t i_collide;
    };

    struct cshatterglassshard_t {
        uint32_t m_h_shard_handle;
        CUtlVector_Vector2D_ m_vec_panel_vertices;
        vector2d_t m_v_local_panel_space_origin;
        CStrongHandle_InfoForResourceTypeCModel_ m_h_model;
        CHandle_CShatterGlassShardPhysics_ m_h_physics_entity;
        CHandle_CFuncShatterglass_ m_h_parent_panel;
        uint32_t m_h_parent_shard;
        ShatterGlassStressType m_shatter_stress_type;
        vector3d_t m_vec_stress_velocity;
        bool m_b_created_model;
        float m_fl_longest_edge;
        float m_fl_shortest_edge;
        float m_fl_longest_across;
        float m_fl_shortest_across;
        float m_fl_sum_of_all_edges;
        float m_fl_area;
        OnFrame m_n_on_frame_edge;
        int32_t m_n_sub_shard_generation;
        vector2d_t m_vec_average_vert_position;
        bool m_b_average_vert_position_is_valid;
        vector2d_t m_vec_panel_space_stress_position_a;
        vector2d_t m_vec_panel_space_stress_position_b;
        bool m_b_stress_position_ais_valid;
        bool m_b_stress_position_bis_valid;
        bool m_b_flagged_for_removal;
        GameTime_t m_fl_physics_entity_spawned_at_time;
        CHandle_CBaseEntity_ m_h_entity_hitting_me;
        CUtlVector_uint32_t_ m_vec_neighbors;
    };

    struct ragdollelement_t_t {
        vector3d_t origin_parent_space;
        int32_t parent_index;
        float m_fl_radius;
        int32_t m_n_height;
    };

    struct cgamescriptedmovedef_t_t {
        vector3d_t m_v_dest_offset;
        CHandle_CBaseEntity_ m_h_dest_entity;
        QAngle m_ang_dest;
        float m_fl_duration;
        float m_fl_ang_rate;
        float m_fl_move_speed;
        bool m_b_aim_disabled;
        bool m_b_ignore_rotation;
        ForcedCrouchState_t m_n_forced_crouch_state;
    };

    struct cnetworkorigincellcoordquantizedvector_t {
        uint16_t m_cell_x;
        uint16_t m_cell_y;
        uint16_t m_cell_z;
        uint16_t m_n_outside_world;
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct dynamicvolumedef_t_t {
        CHandle_CBaseEntity_ m_source;
        CHandle_CBaseEntity_ m_target;
        int32_t m_n_hull_idx;
        VectorWS m_v_source_anchor_pos;
        VectorWS m_v_target_anchor_pos;
        uint32_t m_n_area_src;
        uint32_t m_n_area_dst;
        bool m_b_attached;
    };

    struct cnetworkoriginquantizedvector_t {
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct magnetted_objects_t_t {
        CHandle_CBaseEntity_ h_entity;
    };

    struct chintmessagequeue_t {
        float m_tm_message_end;
        CUtlVector_CHintMessage_ m_messages;
        CBasePlayerController* m_p_player_controller;
    };

    struct cskillint_t {
        int32_t m_p_value;
    };

    struct thinkfunc_t_t {
        BASEPTR m_think;
        HSCRIPT m_h_fn;
        CUtlStringToken m_n_context;
        GameTick_t m_n_next_think_tick;
        GameTick_t m_n_last_think_tick;
    };

    struct cnavhullpresetvdata_t {
        CUtlVector_CUtlString_ m_vec_nav_hulls;
    };

    struct cskillfloat_t {
        float m_p_value;
    };

    struct waterwheelfrictionscale_t_t {
        float m_fl_fraction_of_wheel_submerged;
        float m_fl_friction_scale;
    };

    struct ragdollhierarchyjoint_t_t {
        int32_t parent_index;
        int32_t child_index;
    };

    struct csceneeventinfo_t {
        int32_t m_i_layer;
        int32_t m_i_priority;
        HSequence m_h_sequence;
        float m_fl_weight;
        float m_fl_last_accumulated_time;
        float m_fl_last_jump_from_time;
        float m_fl_last_jump_to_time;
        float m_fl_last_cycle;
        CStrongHandle_InfoForResourceTypeCNmClip_ m_h_anim_clip;
        CGlobalSymbol m_s_anim_clip_slot;
        CGlobalSymbol m_s_anim_clip_slot_weight;
        bool m_b_has_arrived;
        int32_t m_n_type;
        GameTime_t m_fl_next;
        bool m_b_is_gesture;
        bool m_b_should_remove;
        CHandle_CBaseEntity_ m_h_target;
        SceneEventId_t m_n_scene_event_id;
        bool m_b_client_side;
        bool m_b_started;
    };

    struct soundeventpathcornerpairnetworked_t_t {
        VectorWS v_p1;
        VectorWS v_p2;
        float fl_path_length_sqr;
        float fl_p1_pct;
        float fl_p2_pct;
    };

    struct csoundpatch_t {
        CSoundEnvelope m_pitch;
        CSoundEnvelope m_volume;
        float m_shutdown_time;
        float m_fl_last_time;
        CUtlSymbolLarge m_isz_sound_script_name;
        CHandle_CBaseEntity_ m_h_ent;
        CEntityIndex m_sound_entity_index;
        VectorWS m_sound_origin;
        int32_t m_is_playing;
        CCopyRecipientFilter m_filter;
        float m_fl_close_caption_duration;
        bool m_b_updated_sound_origin;
        CUtlSymbolLarge m_isz_class_name;
    };

    struct ccs2chickengraphcontroller_t {
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_action;
        CAnimGraph2ParamAutoResetOptionalRef m_b_action_reset;
        CAnimGraph2ParamOptionalRef_float_ m_action_variation;
        CAnimGraph2ParamOptionalRef_bool_ m_b_in_water;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_mode;
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_life_stage;
        CAnimGraph2ParamOptionalRef_float_ m_idle_phase;
        CAnimGraph2ParamOptionalRef_float_ m_turn_angle;
        CAnimGraph2ParamOptionalRef_bool_ m_b_has_lookat_target;
        CAnimGraph2ParamOptionalRef_Vector_ m_lookat_target;
        CAnimGraph2ParamOptionalRef_bool_ m_b_flinch;
        CAnimGraph2ParamOptionalRef_float_ m_flinch_variation;
        bool m_b_has_action_completed_event;
    };

    struct levellist_t_t {
        CUtlString m_s_map_name;
        CUtlString m_s_landmark_name;
        CEntityHandle m_h_ent_landmark;
        VectorWS m_vec_landmark_origin;
        QAngle m_vec_landmark_angles;
    };

    struct locksound_t_t {
        CGameSoundEventName s_locked_sound;
        CGameSoundEventName s_unlocked_sound;
        GameTime_t flwait_sound;
    };

    struct decalgroupoption_t_t {
        CStrongHandleCopyable_InfoForResourceTypeIMaterial2_ m_h_material;
        CGlobalSymbol m_s_sequence_name;
        float m_fl_probability;
        bool m_b_enable_angle_between_normal_and_gravity_range;
        float m_fl_min_angle_between_normal_and_gravity;
        float m_fl_max_angle_between_normal_and_gravity;
    };

    struct canimgraphcontrollermanager_t {
        CUtlVector_CAnimGraphControllerBase_ m_controllers;
        bool m_b_graph_bindings_created;
    };

    struct cfiringmodefloat_t {
        float m_fl_values;
    };

    struct ccopyrecipientfilter_t {
        int32_t m_flags;
        CUtlVector_CPlayerSlot_ m_recipients;
        CPlayerSlot m_slot_player_excluded_due_to_prediction;
    };

    struct funcmovermovementsummary_t_t {
        float fl_start_t;
        float fl_end_t;
        int32_t n_start_node_index;
        int32_t n_stop_node_index;
        int32_t n_movement_mode;
        FuncMoverMovementSummaryFlags_t n_flags;
        GameTick_t n_tick;
        CHandle_CPathMover_ h_path_mover;
    };

    struct csmoothfunc_t {
        float m_fl_smooth_amplitude;
        float m_fl_smooth_bias;
        float m_fl_smooth_duration;
        float m_fl_smooth_remaining_time;
        int32_t m_n_smooth_dir;
    };

    struct ragdoll_t_t {
        CUtlVector_ragdollelement_t_ list;
        CUtlVector_ragdollhierarchyjoint_t_ hierarchy_joints;
        CUtlVector_int32_t_ bone_index;
        bool allow_stretch;
        bool unused;
    };

    struct hullflags_t_t {
        bool m_b_hull_human;
        bool m_b_hull_small_centered;
        bool m_b_hull_wide_human;
        bool m_b_hull_tiny;
        bool m_b_hull_medium;
        bool m_b_hull_tiny_centered;
        bool m_b_hull_large;
        bool m_b_hull_large_centered;
        bool m_b_hull_medium_tall;
        bool m_b_hull_small;
    };

    struct cnavflags_t {
        uint64_t m_flags;
    };

    struct cnetworkoriginquantizedvectorws_t {
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct gameammotypeinfo_t_t {
        int32_t m_n_buy_size;
        int32_t m_n_cost;
    };

    struct cmotorcontroller_t {
        float m_speed;
        float m_max_torque;
        vector3d_t m_axis;
        float m_inertia_factor;
    };

    struct csimtimer_t {
        float m_fl_interval;
    };

    struct cbaseissue_t {
        char m_sz_type_string;
        char m_sz_details_string;
        int32_t m_i_num_yes_votes;
        int32_t m_i_num_no_votes;
        int32_t m_i_num_potential_votes;
        CVoteController* m_p_vote_controller;
    };

    struct cdynamicpropgraphcontroller_t {
        CAnimGraph2ParamOptionalRef_CGlobalSymbol_ m_s_action_state;
    };

    struct summarytakedamageinfo_t_t {
        int32_t n_summarised_count;
        CTakeDamageInfo info;
        CTakeDamageResult result;
        CHandle_CBaseEntity_ h_target;
    };

    struct inavobstacle_t {
        uint64_t m_n_id;
    };

    struct entitytable_t_t {
        int32_t id;
        CEntityIndex edictindex;
        CEntityIndex saveentityindex;
        bool b_was_saved;
        SaveRestoreTableFlags_t flags;
        CUtlSymbolLarge classname;
        CUtlSymbolLarge globalname;
        CUtlSymbolLarge entityname;
        vector3d_t landmark_model_space;
        CEntityKeyValues* m_p_precache_entity_keys;
    };

    struct ai_motorservices_debugsnapshotdata_t__motorpathwaypoint_t_t {
        VectorWS position;
        uint32_t nav_type;
        uint32_t flags;
    };

    struct crr_response_t {
        uint8_t m_type;
        char m_sz_response_name;
        char m_sz_matching_rule;
        ResponseParams m_params;
        float m_f_match_score;
        bool m_b_any_matching_rules_in_cooldown;
        char* m_sz_speaker_context;
        char* m_sz_world_context;
        ResponseFollowup m_followup;
        CUtlSymbol m_recipient_filter;
    };

    struct cnmaimcsnode__cdefinition_t {
        int16_t m_n_vertical_angle_node_idx;
        int16_t m_n_horizontal_angle_node_idx;
        int16_t m_n_weapon_category_node_idx;
        int16_t m_n_weapon_type_node_idx;
        int16_t m_n_weapon_action_node_idx;
        int16_t m_n_weapon_drop_node_idx;
        int16_t m_n_is_defusing_node_idx;
        int16_t m_n_crouch_weight_node_idx;
        float m_fl_hand_ikblend_in_time_seconds;
        float m_fl_action_blend_time_seconds;
        float m_fl_planting_blend_time_seconds;
        float m_fl_transition_blend_time_seconds;
    };

    struct cconstantforcecontroller_t {
        vector3d_t m_linear;
        RotationVector m_angular;
        vector3d_t m_linear_save;
        RotationVector m_angular_save;
    };

    struct waterwheeldrag_t_t {
        float m_fl_fraction_of_wheel_submerged;
        float m_fl_wheel_drag;
    };

    struct ctakedamageinfo_t {
        vector3d_t m_vec_damage_force;
        VectorWS m_vec_damage_position;
        VectorWS m_vec_reported_position;
        vector3d_t m_vec_damage_direction;
        CHandle_CBaseEntity_ m_h_inflictor;
        CHandle_CBaseEntity_ m_h_attacker;
        CHandle_CBaseEntity_ m_h_ability;
        float m_fl_damage;
        float m_fl_totalled_damage;
        DamageTypes_t m_bits_damage_type;
        int32_t m_i_damage_custom;
        AmmoIndex_t m_i_ammo_type;
        float m_fl_original_damage;
        bool m_b_should_bleed;
        bool m_b_should_spark;
        TakeDamageFlags_t m_n_damage_flags;
        HitGroup_t m_i_hit_group_id;
        int32_t m_n_num_objects_penetrated;
        float m_fl_friendly_fire_damage_reduction_ratio;
        bool m_b_stopped_bullet;
        CUtlLeanVector_DestructiblePartDamageRequest_t_ m_destructible_hit_group_requests;
        bool m_b_in_take_damage_flow;
    };

    struct crandsimtimer_t {
        float m_fl_min_interval;
        float m_fl_max_interval;
    };

    struct crelativelocation_t {
        RelativeLocationType_t m_type;
        vector3d_t m_v_relative_offset;
        VectorWS m_v_world_space_pos;
        CHandle_CBaseEntity_ m_h_entity;
    };

    struct extent_t {
        VectorWS lo;
        VectorWS hi;
    };

    struct sndopvarlatchdata_t_t {
        CUtlSymbolLarge m_isz_stack;
        CUtlSymbolLarge m_isz_operator;
        CUtlSymbolLarge m_isz_opvar;
        float m_fl_val;
        VectorWS m_v_pos;
    };

    struct precipitationfilter_t_t {
        float m_fl_max_radius;
    };

    struct pathmoverentityspawn_t {
        CHandle_CFuncMover_ h_mover;
        CUtlVector_CHandle_CBaseEntity_ vec_other_entities;
        int32_t n_spawn_number;
    };

    struct cmultiplayer_expresser_t {
        bool m_b_allow_multiple_scenes;
    };

    struct particleindex_t_t {
        int32_t m_value;
    };

    struct ctakedamagesummaryscopeguard_t {
        CUtlVector_SummaryTakeDamageInfo_t_ m_vec_summaries;
    };

    struct cironsightcontroller_t {
        bool m_b_iron_sight_available;
        float m_fl_iron_sight_amount;
        float m_fl_iron_sight_amount_gained;
        float m_fl_iron_sight_amount_biased;
    };

    struct destructiblepartdamagerequest_t_t {
        HitGroup_t m_n_hit_group;
        int32_t m_n_damage_level;
        uint16_t m_n_desired_health;
        EDestructibleParts_DestroyParameterFlags m_n_destroy_flags;
        DamageTypes_t m_n_damage_type;
        float m_fl_break_damage;
        float m_fl_break_damage_radius;
        CHandle_CBaseEntity_ m_h_attacker;
        VectorWS m_v_ws_break_damage_origin;
        vector3d_t m_v_ws_break_damage_force;
    };

    struct cinbuttonstate_t {
        uint64_t m_p_button_states;
    };

    struct soundeventboxhelpernetworked_t_t {
        VectorWS v_origin;
        QAngle q_angles;
        vector3d_t v_mins;
        vector3d_t v_maxs;
    };

    struct cnetworkorigincellcoordquantizedvectorws_t {
        uint16_t m_cell_x;
        uint16_t m_cell_y;
        uint16_t m_cell_z;
        uint16_t m_n_outside_world;
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct cnavhullvdata_t {
        bool m_b_agent_enabled;
        float m_agent_radius;
        float m_agent_height;
        bool m_agent_short_height_enabled;
        float m_agent_short_height;
        bool m_agent_crawl_enabled;
        float m_agent_crawl_height;
        float m_agent_max_climb;
        int32_t m_agent_max_slope;
        float m_agent_max_jump_down_dist;
        float m_agent_max_jump_horiz_dist_base;
        float m_agent_max_jump_up_dist;
        int32_t m_agent_border_erosion;
        bool m_flow_map_generation_enabled;
        float m_flow_map_node_max_radius;
    };

    struct ai_defaultnpc_debugsnapshotdata_t_t {
        CGlobalSymbol s_npc_current_ability;
        CGlobalSymbol s_npc_current_held_ability;
        CGlobalSymbol s_npc_tactic_current;
        CGlobalSymbol s_npc_tactic_phase;
        CUtlVector_CGlobalSymbol_ tactic_interrupt_conditions;
        AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t path_query;
        CUtlVector_AI_DefaultNPC_DebugSnapshotData_t_PathQuery_t_ path_queries_speculative;
    };

    struct cnavpathcost_t {
        bool m_b_allow_ladders;
        bool m_b_can_fly;
        bool m_b_can_swim;
        float m_fl_water_to_ground_max_height;
        float m_fl_ground_to_water_max_height;
        float m_fl_ground_to_water_transition_distance;
        float m_fl_water_to_ground_transition_distance;
        float m_fl_flying_transition_tolerance;
        bool m_b_optimize_fly_space_pathfinds;
        bool m_b_string_pull_fly_space_pathfinds;
        bool m_b_supports_transitions;
        float m_fl_transition_penalty;
    };

    struct cnmsnapweaponnode__cdefinition_t {
        int16_t m_n_flashed_amount_node_idx;
        int16_t m_n_weapon_category_node_idx;
        int16_t m_n_weapon_type_node_idx;
    };

    struct soundopvartraceresult_t_t {
        VectorWS v_pos;
        bool b_did_hit;
        float fl_dist_sqr_to_center;
    };

    struct actormapping_t_t {
        CUtlString m_s_actor_name;
        CHandle_CBaseEntity_ m_h_entity;
    };

    struct cfiringmodeint_t {
        int32_t m_n_values;
    };

    struct csadditionalperroundstats_t_t {
        int32_t m_num_chickens_killed;
        int32_t m_kills_while_blind;
        int32_t m_bomb_carrierkills;
        float m_fl_burn_damage_inflicted;
        float m_fl_blast_damage_inflicted;
        int32_t m_i_dinks;
        bool m_b_fresh_start_this_round;
        bool m_b_bomb_planted_and_alive;
        int32_t m_n_defuse_starts;
        int32_t m_n_hostage_pick_ups;
        int32_t m_num_teammates_flashed;
        CUtlString m_str_annotations_workshop_id;
    };

    struct modelconfighandle_t_t {
        uint32_t m_value;
    };

    struct cbreakablestagehelper_t {
        int32_t m_n_current_stage;
        int32_t m_n_stage_count;
    };

    struct cnavvolumebreadthfirstsearch_t {
        VectorWS m_v_start_pos;
        float m_fl_search_dist;
    };

    struct csadditionalmatchstats_t_t {
        int32_t m_num_rounds_survived_streak;
        int32_t m_max_num_rounds_survived_streak;
        int32_t m_num_rounds_survived_total;
        int32_t m_i_rounds_won_without_purchase;
        int32_t m_i_rounds_won_without_purchase_total;
        int32_t m_num_first_kills;
        int32_t m_num_clutch_kills;
        int32_t m_num_pistol_kills;
        int32_t m_num_sniper_kills;
        int32_t m_i_num_suicides;
        int32_t m_i_num_team_kills;
        float m_fl_team_damage;
    };

    struct ai_navigator_debugsnapshotdata_t__waypoint_t_t {
        VectorWS position;
        uint32_t nav_type;
        uint32_t flags;
        bool is_pathcorner;
    };

    struct ctestpulseiocomponent_t {
        CUtlString m_component_data;
        CEntityOutputTemplate_CUtlSymbolLarge_ m_on_component_test_func;
    };

    struct ccsplayeranimationstate_t {
        CCSPlayerAnimationState_MoveType_t m_current_move_type;
        CCSPlayerAnimationState_GroundMoveState_t m_ground_move_state;
        CCSPlayerAnimationState_Direction_t m_ground_action_direction;
        CCSPlayerAnimationState_AirAction_t m_air_action;
        bool m_b_was_on_ground_last_update;
        bool m_b_was_stationary_last_update;
        GameTick_t m_action_start_tick;
        GameTick_t m_static_aim_timer_start_tick;
        GameTick_t m_plant_and_turn_start_tick;
        float m_fl_turn_on_spot_angle;
        float m_fl_previous_aim_yaw;
        float m_fl_previous_horizontal_speed;
        float m_fl_foot_ikoffset_left;
        float m_fl_foot_ikoffset_right;
        float m_fl_weapon_drop_percentage_due_to_movement;
        float m_fl_weapon_drop_smooth_damp_velocity;
    };

    struct hudtextparms_t_t {
        color_t color1;
        color_t color2;
        uint8_t effect;
        uint8_t channel;
        float x;
        float y;
    };

    struct queuedaisearchid_t_t {
        uint64_t m_value;
    };

    struct canimgraphcontrollerbase_t {
        ExternalAnimGraphHandle_t m_h_external_graph;
    };

    struct cnetworkvelocityvector_t {
        CNetworkedQuantizedFloat m_vec_x;
        CNetworkedQuantizedFloat m_vec_y;
        CNetworkedQuantizedFloat m_vec_z;
    };

    struct cdestructiblepart_damagelevel_t {
        CUtlString m_s_name;
        CGlobalSymbol m_s_breakable_piece_name;
        int32_t m_n_body_group_value;
        CSkillInt m_n_health;
        float m_fl_critical_damage_percent;
        EDestructiblePartDamagePassThroughType m_n_damage_passthrough_type;
        DestructiblePartDestructionDeathBehavior_t m_n_destruction_death_behavior;
        CGlobalSymbol m_s_custom_death_handshake;
        bool m_b_should_destroy_on_death;
        CRangeFloat m_fl_death_destroy_time;
    };

    struct cnavvolumesphere_t {
        VectorWS m_v_center;
        float m_fl_radius;
    };

    struct relationship_t_t {
        Disposition_t disposition;
        int32_t priority;
    };

}

namespace soundsystem {

    struct cvmixinputbase_t {
        CUtlString m_name;
    };

    struct cvoicecontainerblender_t {
        CSoundContainerReference m_first_sound;
        CSoundContainerReference m_second_sound;
        float m_fl_blend_factor;
    };

    struct cvmixpitchshiftprocessordesc_t {
        VMixPitchShiftDesc_t m_desc;
        CVMixParameterFloat m_param_pitch_scale;
    };

    struct vmixfreeverbdesc_t_t {
        float m_fl_room_size;
        float m_fl_damp;
        float m_fl_width;
        float m_fl_late_reflections;
    };

    struct cvoicecontainerstaticadditivesynth__charmonic_t {
        EWaveform m_n_waveform;
        EMidiNote m_n_fundamental;
        int32_t m_n_octave;
        float m_fl_cents;
        float m_fl_phase;
        CPiecewiseCurve m_curve;
        CVoiceContainerStaticAdditiveSynth_CGainScalePerInstance m_volume_scaling;
    };

    struct cvsndtriggerslot_t {
        bool m_b_enable_vsnd;
        CSoundContainerReference m_vsnd;
        bool m_b_enable_endcap;
        CSoundContainerReference m_endcap_vsnd;
        bool m_b_enable_loopcap;
        CSoundContainerReference m_loopcap_vsnd;
        float m_volume;
        float m_fade_out;
        EVsndTriggerMode m_mode;
    };

    struct cvoicecontainerstaticadditivesynth__ctone_t {
        CUtlVector_CVoiceContainerStaticAdditiveSynth_CHarmonic_ m_harmonics;
        CPiecewiseCurve m_curve;
        bool m_b_sync_instances;
    };

    struct csosgroupactionocclusionschema_t {
        float m_fl_calculation_interval;
        float m_fl_radius;
        float m_fl_occlusion_scale;
        float m_fl_occlusion_min;
        float m_fl_occlusion_max;
        float m_fl_test_depth;
    };

    struct cvoicecontainerrandomsampler_t {
        float m_fl_amplitude;
        float m_fl_amplitude_jitter;
        float m_fl_time_jitter;
        float m_fl_max_length;
        int32_t m_n_num_delay_variations;
        CUtlVector_CStrongHandle_InfoForResourceTypeCVoiceContainerBase_ m_grain_resources;
    };

    struct cvmixsteamaudiodirectprocessordesc_t {
        CVMixParameterFloat m_param_position_x;
        CVMixParameterFloat m_param_position_y;
        CVMixParameterFloat m_param_position_z;
        CVMixParameterFloat m_param_right_x;
        CVMixParameterFloat m_param_right_y;
        CVMixParameterFloat m_param_right_z;
        CVMixParameterFloat m_param_up_x;
        CVMixParameterFloat m_param_up_y;
        CVMixParameterFloat m_param_up_z;
        CVMixParameterFloat m_param_ahead_x;
        CVMixParameterFloat m_param_ahead_y;
        CVMixParameterFloat m_param_ahead_z;
        CVMixParameterFloat m_param_apply_distance_attenuation;
        CVMixParameterFloat m_param_apply_air_absorption;
        CVMixParameterFloat m_param_apply_directivity;
        CVMixParameterFloat m_param_apply_occlusion;
        CVMixParameterFloat m_param_apply_transmission;
        CVMixParameterFloat m_param_dipole_weight;
        CVMixParameterFloat m_param_dipole_power;
        CVMixParameterFloat m_param_occlusion;
        CVMixParameterFloat m_param_transmission_low;
        CVMixParameterFloat m_param_transmission_mid;
        CVMixParameterFloat m_param_transmission_high;
        CVMixParameterFloat m_param_band;
        CVMixDataOffset m_param_transmission;
    };

    struct cvmixsteamaudiohrtfprocessordesc_t {
        CVMixParameterFloat m_param_position_x;
        CVMixParameterFloat m_param_position_y;
        CVMixParameterFloat m_param_position_z;
        CVMixParameterFloat m_param_interpolation;
        CVMixParameterFloat m_param_direct_mix_level;
        CVMixParameterFloat m_param_perspective_correction;
        CVMixParameterFloat m_param_relative_position;
        CVMixParameterFloat m_param_delay_left;
        CVMixParameterFloat m_param_delay_right;
    };

    struct cvsound_t {
        CUtlLeanVector_CAudioSentence_ m_sentences;
        int32_t m_n_rate;
        CVSoundFormat_t m_n_format;
        uint32_t m_n_channels;
        int32_t m_n_loop_start;
        uint32_t m_n_sample_count;
        float m_fl_duration;
        uint32_t m_n_streaming_size;
        int32_t m_n_loop_end;
    };

    struct cdsppresetmixgroupmodifiertable_t {
        CUtlVector_CDspPresetModifierList_ m_table;
    };

    struct csosgroupactionsoundeventclusterschema_t {
        int32_t m_n_min_nearby;
        float m_fl_cluster_epsilon;
        CUtlString m_should_play_opvar;
        CUtlString m_should_play_cluster_child;
        CUtlString m_cluster_size_opvar;
        CUtlString m_group_bounding_box_mins_opvar;
        CUtlString m_group_bounding_box_maxs_opvar;
    };

    struct csosgroupactionsetsoundeventparameterschema_t {
        int32_t m_n_max_count;
        float m_fl_min_value;
        float m_fl_max_value;
        CUtlString m_opvar_name;
        SosActionSetParamSortType_t m_n_sort_type;
    };

    struct csoundcontainerreference_t {
        CUtlString m_namespace;
        bool m_b_use_reference;
        CStrongHandle_InfoForResourceTypeCVoiceContainerBase_ m_sound;
        CVoiceContainerBase* m_p_sound;
    };

    struct vmixsubgraphswitchdesc_t_t {
        CUtlString m_name;
        CUtlString m_effect_name;
        CUtlVector_CUtlString_ m_subgraphs;
        VMixSubgraphSwitchInterpolationType_t m_interpolation_mode;
        bool m_b_only_tails_on_fade_out;
        float m_fl_interpolation_time;
    };

    struct cvoicecontaineranalysisbase_t {
        CPiecewiseCurve m_curve;
    };

    struct csosgroupactionsoundeventminmaxvaluesschema_t {
        CUtlString m_str_query_public_field_name;
        CUtlString m_str_delay_public_field_name;
        bool m_b_exclude_stopped_sounds;
        bool m_b_exclude_delayed_sounds;
        bool m_b_exclude_sounds_below_threshold;
        float m_fl_exclude_sounds_min_threshold_value;
        bool m_b_exclud_sounds_above_threshold;
        float m_fl_exclude_sounds_max_threshold_value;
        CUtlString m_str_min_value_name;
        CUtlString m_str_max_value_name;
    };

    struct cvmixenvelopeprocessordesc_t {
        VMixEnvelopeDesc_t m_desc;
        CVMixParameterFloat m_out_param_level;
        CVMixParameterFloat m_out_paramd_blevel;
    };

    struct cvmixcommand_t {
        VMixGraphCommandID_t m_n_command;
        uint32_t m_n_parameter_name_hash;
        CVMixDataOffset m_n_output_submix;
        CVMixDataOffset m_n_input_submix0;
        CVMixDataOffset m_n_input_submix1;
        int32_t m_n_processor;
        CVMixDataOffset m_n_input_value0;
        CVMixDataOffset m_n_input_value1;
    };

    struct samplervoice_t_t {
        uint8_t n_note_num;
    };

    struct cvmixcontrolinput_t {
        float m_fl_default_value;
    };

    struct cvmixboxverbprocessordesc_t {
        VMixBoxverbDesc_t m_desc;
    };

    struct cvmixdynamicscompressorprocessordesc_t {
        VMixDynamicsCompressorDesc_t m_desc;
        CVMixParameterFloat m_out_param_level;
        CVMixParameterFloat m_out_paramd_blevel;
        CVMixParameterFloat m_out_param_reduction;
    };

    struct vmixpannerdesc_t_t {
        VMixPannerType_t m_type;
        float m_fl_strength;
    };

    struct csosgroupactionsoundeventpriorityschema_t {
        CUtlString m_priority_value;
        CUtlString m_priority_volume_scalar;
        CUtlString m_priority_contribute_but_dont_read;
        CUtlString m_b_priority_read_but_dont_contribute;
    };

    struct cvoicecontainerrealtimefmsinewave_t {
        float m_fl_carrier_frequency;
        float m_fl_modulator_frequency;
        float m_fl_modulator_amount;
    };

    struct selectededititeminfo_t_t {
        CUtlVector_SosEditItemInfo_t_ m_edit_items;
    };

    struct vmixmoddelaydesc_t_t {
        VMixFilterDesc_t m_feedback_filter;
        bool m_b_phase_invert;
        float m_fl_glide_time;
        float m_fl_delay;
        float m_fl_output_gain;
        float m_fl_feedback_gain;
        float m_fl_mod_rate;
        float m_fl_mod_depth;
        bool m_b_apply_antialiasing;
    };

    struct cvmixnameinputmeter_t {
        CVMixDataOffset m_n_value_index;
    };

    struct cvmixdynamics3bandprocessordesc_t {
        VMixDynamics3BandDesc_t m_desc;
    };

    struct vmixboxverbdesc_t_t {
        float m_fl_size_max;
        float m_fl_size_min;
        float m_fl_complexity;
        float m_fl_diffusion;
        float m_fl_mod_depth;
        float m_fl_mod_rate;
        bool m_b_parallel;
        VMixFilterDesc_t m_filter_type;
        float m_fl_width;
        float m_fl_height;
        float m_fl_depth;
        float m_fl_feedback_scale;
        float m_fl_feedback_width;
        float m_fl_feedback_height;
        float m_fl_feedback_depth;
        float m_fl_output_gain;
        float m_fl_taps;
    };

    struct csossoundeventgroupschema_t {
        SosGroupType_t m_n_group_type;
        bool m_b_blocks_events;
        int32_t m_n_block_max_count;
        float m_fl_member_lifespan_time;
        bool m_b_invert_match;
        SosGroupFieldBehavior_t m_behavior_event_name;
        CUtlString m_match_sound_event_name;
        bool m_b_match_event_sub_string;
        CUtlString m_match_sound_event_sub_string;
        SosGroupFieldBehavior_t m_behavior_ent_index;
        float m_fl_ent_index;
        SosGroupFieldBehavior_t m_behavior_opvar;
        float m_fl_opvar;
        SosGroupFieldBehavior_t m_behavior_string;
        CUtlString m_opvar_string;
        CUtlVector_CSosGroupActionSchema_ m_v_actions;
    };

    struct csndseqinstmidisampler_t {
        bool m_b_is_sound_event;
        bool m_b_stop_previous;
        uint8_t m_n_min_note;
        uint8_t m_n_max_note;
        float m_fl_min_velocity_atten;
        float m_fl_max_velocity_atten;
        float m_fl_attack;
        float m_fl_release;
        bool m_b_beat_envelopes;
        uint8_t m_n_next_voice_slot;
        uint32_t m_h_sound_event_hash;
    };

    struct vmixpointerfixupentry_t_t {
        uint32_t m_n_index;
        CVMixDataOffset m_offset;
    };

    struct csndseqinstbaseschema_t {
        SndSeqInstrumentType_t m_n_type;
        bool m_b_stop_current_events;
        float m_fl_bpm;
        float m_fl_bpmfactor;
        float m_fl_bpminv_factor;
    };

    struct vmixdynamics3banddesc_t_t {
        float m_fldb_gain_output;
        float m_fl_rmstime_ms;
        float m_fldb_knee_width;
        float m_fl_depth;
        float m_fl_wet_mix;
        float m_fl_time_scale;
        float m_fl_low_cutoff_freq;
        float m_fl_high_cutoff_freq;
        bool m_b_peak_mode;
        VMixDynamicsBand_t m_band_desc;
    };

    struct cvmixeq8processordesc_t {
        VMixEQ8Desc_t m_desc;
        CVMixParameterFloat m_param_eqscale;
    };

    struct cdspmixgroupmodifier_t {
        CUtlString m_mixgroup;
        float m_fl_modifier;
        float m_fl_modifier_min;
        float m_fl_source_modifier;
        float m_fl_source_modifier_min;
        float m_fl_listener_reverb_modifier_when_source_reverb_is_active;
    };

    struct caudiomorphdata_t {
        CUtlVector_float_ m_times;
        CUtlVector_uint32_t_ m_name_hash_codes;
        CUtlVector_CUtlString_ m_name_strings;
        CUtlVector_CUtlVector_float_ m_samples;
        float m_fl_ease_in;
        float m_fl_ease_out;
    };

    struct sndbeateventkeyedfloats_t_t {
        float m_fl_float;
    };

    struct vmixdualcompressordesc_t_t {
        float m_fl_rmstime_ms;
        float m_fldb_knee_width;
        float m_fl_wet_mix;
        bool m_b_peak_mode;
        VMixDynamicsBand_t m_band_desc;
    };

    struct cvmixruntimegraph_t {
        CUtlLeanVector_CVMixSubmix_ m_submixes;
        CUtlLeanVector_uint64_t_ m_impulse_response_values;
        KeyValues3 m_input_default_values;
        KeyValues3 m_sources;
        CUtlVector_VMixPointerFixupEntry_t_ m_fixups;
    };

    struct cvoicecontainerstaticadditivesynth_t {
        CUtlVector_CVoiceContainerStaticAdditiveSynth_CTone_ m_tones;
    };

    struct cvoicecontainershapednoise_t {
        bool m_b_use_curve_for_frequency;
        float m_fl_frequency;
        CPiecewiseCurve m_frequency_sweep;
        bool m_b_use_curve_for_resonance;
        float m_fl_resonance;
        CPiecewiseCurve m_resonance_sweep;
        bool m_b_use_curve_for_amplitude;
        float m_fl_gain_in_decibels;
        CPiecewiseCurve m_gain_sweep;
    };

    struct cdsppresetmodifierlist_t {
        CUtlString m_dsp_name;
        CUtlVector_CDSPMixgroupModifier_ m_modifiers;
    };

    struct cvoicecontainerbase_t {
        bool m_b_registered_vmix;
        CUtlStringToken m_n_resource_name;
        CVSound m_v_sound;
        CVoiceContainerAnalysisBase* m_p_envelope_analyzer;
    };

    struct cvmixdiffusorprocessordesc_t {
        VMixDiffusorDesc_t m_desc;
    };

    struct cvmixutilityprocessordesc_t {
        VMixUtilityDesc_t m_desc;
    };

    struct crandompannercontrols_t {
        CUtlString m_panning_control_input_name;
        CUtlString m_volume_control_input_name;
        float m_fl_min_volume;
        float m_fl_max_volume;
        CUtlString m_str_vector_stack_param;
    };

    struct cvoicecontainergranulator_t {
        float m_fl_grain_length;
        float m_fl_grain_crossfade_amount;
        float m_fl_start_jitter;
        float m_fl_playback_jitter;
        bool m_b_should_wraparound;
        CStrongHandle_InfoForResourceTypeCVoiceContainerBase_ m_source_audio;
        bool m_b_double_buffer_source_audio;
        float m_fl_max_source_length;
    };

    struct cvmixpresetdspprocessordesc_t {
        VMixPresetDSPDesc_t m_desc;
        CVMixParameterEffectName m_param_effect_name;
    };

    struct vmixdelaydesc_t_t {
        VMixFilterDesc_t m_feedback_filter;
        bool m_b_enable_filter;
        float m_fl_delay;
        float m_fl_direct_gain;
        float m_fl_delay_gain;
        float m_fl_feedback_gain;
        float m_fl_width;
    };

    struct vmixeq8desc_t_t {
        VMixEQFilterDesc_t m_stages;
    };

    struct cvmixdynamicsprocessordesc_t {
        VMixDynamicsDesc_t m_desc;
        CVMixParameterFloat m_out_param_level;
        CVMixParameterFloat m_out_paramd_blevel;
    };

    struct vmixeqfilterdesc_t_t {
        VMixFilterChannelSet_t m_n_channel_set;
    };

    struct cvoicecontainerloopxfade_t {
        CSoundContainerReference m_sound;
        float m_fl_loop_end;
        float m_fl_loop_start;
        float m_fl_fade_out;
        float m_fl_fade_in;
        bool m_b_play_head;
        bool m_b_play_tail;
        bool m_b_equal_pow;
    };

    struct vmixpresetdspdesc_t_t {
        CUtlString m_effect_name;
    };

    struct caudiophonemetag_t {
        float m_fl_start_time;
        float m_fl_end_time;
        int32_t m_n_phoneme_code;
    };

    struct cvsndradiobuttonslot_t {
        bool m_b_enable_vsnd;
        CSoundContainerReference m_vsnd;
        bool m_b_enable_endcap;
        CSoundContainerReference m_endcap_vsnd;
        bool m_b_enable_loopcap;
        CSoundContainerReference m_loopcap_vsnd;
        int32_t m_group;
        float m_volume;
        float m_fade_out;
        EVsndPlaybackMode m_mode;
    };

    struct csosgroupactionsoundeventcountschema_t {
        bool m_b_exclude_stopped_sounds;
        CUtlString m_str_count_key_name;
    };

    struct cvoicecontainerenvelopeanalyzer_t {
        EMode_t m_mode;
        float m_f_analysis_window_ms;
        float m_fl_threshold;
    };

    struct cvmixbaseprocessordesc_t {
        CUtlString m_name;
        uint32_t m_n_debug_id;
        float m_flxfade;
        int32_t m_n_channels;
        bool m_b_debug_bypass;
        CVMixParameterFloat m_param_enable;
        CVMixParameterFloat m_param_mix;
    };

    struct cvmixsteamaudiohybridreverbprocessordesc_t {
        CVMixParameterFloat m_param_reverb_time_low;
        CVMixParameterFloat m_param_reverb_time_mid;
        CVMixParameterFloat m_param_reverb_time_high;
        CVMixParameterFloat m_param_band;
        CVMixDataOffset m_param_reverb_time;
    };

    struct vmixpitchshiftdesc_t_t {
        int32_t m_n_grain_sample_count;
        float m_fl_pitch_shift;
        int32_t m_n_quality;
        int32_t m_n_proc_type;
    };

    struct cvmixcontroloutput_t {
        float m_fl_default_value;
    };

    struct cvmixmoddelayprocessordesc_t {
        VMixModDelayDesc_t m_desc;
        CVMixParameterFloat m_param_cutoff_frequency;
        CVMixParameterFloat m_param_delay;
        CVMixParameterFloat m_param_mod_rate;
        CVMixParameterFloat m_param_mod_depth;
    };

    struct cvmixshaperprocessordesc_t {
        VMixShaperDesc_t m_desc;
        CVMixParameterFloat m_param_drive;
    };

    struct cvmixparameterfloat_t {
        CVMixDataOffset m_offset;
    };

    struct cvmixbasegraphdescription_t {
        CUtlString m_name;
        int32_t m_n_graph_output_channels;
        bool m_b_is_main_graph;
        CUtlLeanVector_std_unique_ptr_CVMixBaseProcessorDesc_ m_processor_nodes;
        CUtlLeanVector_CVMixGraphInput_ m_graph_inputs;
        CUtlLeanVector_CVMixControlInput_ m_control_transient_inputs;
        CUtlLeanVector_CVMixControlOutput_ m_control_outputs;
        CUtlLeanVector_CVMixImpulseResponseInput_ m_impulse_response_inputs;
        CUtlLeanVector_CVMixCommand_ m_mix_commands;
        CVMixHeap m_heap;
        CUtlLeanVector_CVMixAudioMeter_ m_audio_meters;
        CUtlLeanVector_CVMixControlMeter_ m_control_meters;
        CUtlLeanVector_CVMixNameInputMeter_ m_name_input_meters;
        CUtlLeanVector_CVMixAdditionalOutput_ m_additional_outputs;
        CUtlLeanVector_CVMixAutomaticControlInput_ m_automatic_control_inputs;
    };

    struct cvmixautomaticcontrolinput_t {
        CUtlString m_name;
        int32_t m_n_graph_input_index;
        VMixAutoControlType_t m_n_control_type;
    };

    struct csndbeattrack_t {
        CUtlString m_name;
        SndBeatTrackPlaybackType_t m_playback_type;
        int32_t m_n_transpose;
        bool m_b_sync_to_voice;
        float m_fl_bpm;
    };

    struct cvoicecontainervsndradiobutton_t {
        CUtlString m_namespace;
        CVsndRadioButtonSlot m_slot1;
        CVsndRadioButtonSlot m_slot2;
        CVsndRadioButtonSlot m_slot3;
        CVsndRadioButtonSlot m_slot4;
        CVsndRadioButtonSlot m_slot5;
        CVsndRadioButtonSlot m_slot6;
        CVsndRadioButtonSlot m_slot7;
        CVsndRadioButtonSlot m_slot8;
        CVsndRadioButtonSlot m_slot9;
        CVsndRadioButtonSlot m_slot10;
        CVsndRadioButtonSlot m_slot11;
        CVsndRadioButtonSlot m_slot12;
        CVsndRadioButtonSlot m_slot13;
        CVsndRadioButtonSlot m_slot14;
        CVsndRadioButtonSlot m_slot15;
        CVsndRadioButtonSlot m_slot16;
    };

    struct caudioemphasissample_t {
        float m_fl_time;
        float m_fl_value;
    };

    struct cvmixoscprocessordesc_t {
        VMixOscDesc_t m_desc;
        CVMixParameterFloat m_param_frequency;
        CVMixParameterFloat m_param_phase;
    };

    struct cvoicecontainerlooptriggerwithrandompanner_t {
        CRandomPannerControls m_random_panner_controls;
    };

    struct cvoicecontainerset_t {
        CUtlVector_CVoiceContainerSetElement_ m_sounds_to_play;
    };

    struct vmixconvolutiondesc_t_t {
        float m_fldb_gain;
        float m_fl_pre_delay_ms;
        float m_fl_wet_mix;
        float m_fldb_low;
        float m_fldb_mid;
        float m_fldb_high;
        float m_fl_low_cutoff_freq;
        float m_fl_high_cutoff_freq;
    };

    struct cvoicecontainervsndtrigger_t {
        CUtlString m_namespace;
        CVsndTriggerSlot m_slot1;
        CVsndTriggerSlot m_slot2;
        CVsndTriggerSlot m_slot3;
        CVsndTriggerSlot m_slot4;
        CVsndTriggerSlot m_slot5;
        CVsndTriggerSlot m_slot6;
        CVsndTriggerSlot m_slot7;
        CVsndTriggerSlot m_slot8;
        CVsndTriggerSlot m_slot9;
        CVsndTriggerSlot m_slot10;
        CVsndTriggerSlot m_slot11;
        CVsndTriggerSlot m_slot12;
        CVsndTriggerSlot m_slot13;
        CVsndTriggerSlot m_slot14;
        CVsndTriggerSlot m_slot15;
        CVsndTriggerSlot m_slot16;
    };

    struct cvoicecontainersetelement_t {
        CSoundContainerReference m_sound;
        float m_fl_volume_db;
    };

    struct csndbeatpatternmanager_t {
        CUtlVector_CSndBeatPattern_ m_vec_patterns;
        CUtlVector_CSndBeatTrack_ m_vec_active_tracks;
    };

    struct cvmixdescription_t {
        CUtlLeanVector_CSubmix_ m_submix_list;
        CUtlLeanVector_std_unique_ptr_CVoiceContainerBase_ m_sources;
        CUtlLeanVector_uint64_t_ m_impulse_response_values;
        uint32_t m_n_name_hash_code;
    };

    struct sosedititeminfo_t_t {
        SosEditItemType_t item_type;
        CUtlString item_name;
        CUtlString item_type_name;
        CUtlString item_kvstring;
        vector2d_t item_pos;
    };

    struct cvmixsubmix_t {
        CUtlString m_name;
        CUtlString m_send_names;
        uint32_t m_n_solo_name_hash;
        int32_t m_n_channels;
        VMixSendOperator_t m_n_send_operator;
        VMixMixDownRule_t m_n_mix_down_rule;
        VMixUpMixRule_t m_n_up_mix_rule;
    };

    struct cvmixflangerprocessordesc_t {
        VMixFlangerDesc_t m_desc;
        CVMixParameterFloat m_param_delay;
        CVMixParameterFloat m_param_mod_rate;
        CVMixParameterFloat m_param_mod_depth;
    };

    struct cvmixeffectchainprocessordesc_t {
        VMixEffectChainDesc_t m_desc;
        CVMixParameterEffectName m_param_effect_name;
    };

    struct keygroup_t_t {
        uint8_t n_center_note;
        uint8_t n_min_note;
        uint8_t n_max_note;
        uint8_t n_num_velocity_zones;
        VelocityZone_t* p_velocity_zones;
    };

    struct cvmixfreeverbprocessordesc_t {
        VMixFreeverbDesc_t m_desc;
    };

    struct vmixplateverbdesc_t_t {
        float m_fl_prefilter;
        float m_fl_input_diffusion1;
        float m_fl_input_diffusion2;
        float m_fl_decay;
        float m_fl_damp;
        float m_fl_feedback_diffusion1;
        float m_fl_feedback_diffusion2;
    };

    struct cvmixconvolutionprocessordesc_t {
        VMixConvolutionDesc_t m_desc;
        CVMixDataOffset m_param_impulse_response;
    };

    struct cvmixparameterbool_t {
        CVMixDataOffset m_offset;
    };

    struct csoundcontainerreferencearray_t {
        bool m_b_use_reference;
        CUtlVector_CStrongHandle_InfoForResourceTypeCVoiceContainerBase_ m_sounds;
        CUtlVector_CVoiceContainerBase_ m_p_sounds;
    };

    struct cvmixfilterprocessordesc_t {
        VMixFilterDesc_t m_desc;
        CVMixParameterFloat m_param_cutoff_freq;
        CVMixParameterFloat m_param_q;
    };

    struct cvmixadditionaloutput_t {
        CUtlString m_name;
    };

    struct cvoicecontainertapeplayer_t {
        bool m_b_should_wraparound;
        CStrongHandle_InfoForResourceTypeCVoiceContainerBase_ m_source_audio;
        float m_fl_tape_speed_attack_time;
        float m_fl_tape_speed_release_time;
    };

    struct cvmixsubgraphswitchprocessordesc_t {
        VMixSubgraphSwitchDesc_t m_desc;
        CVMixParameterEffectName m_param_effect_name;
        CVMixParameterFloat m_param_selection_index;
    };

    struct vmixdiffusordesc_t_t {
        float m_fl_size;
        float m_fl_complexity;
        float m_fl_feedback;
        float m_fl_output_gain;
    };

    struct cvmixsteamaudiopathingprocessordesc_t {
        CVMixParameterFloat m_param_position_x;
        CVMixParameterFloat m_param_position_y;
        CVMixParameterFloat m_param_position_z;
        CVMixParameterFloat m_param_pathing_mix_level;
        CVMixParameterFloat m_param_band;
        CVMixDataOffset m_param_array_pathing_eq;
        CVMixDataOffset m_param_array_pathing_coefficients;
    };

    struct cvmixpannerprocessordesc_t {
        VMixPannerDesc_t m_desc;
        CVMixParameterFloat m_param_pan;
    };

    struct vmixdynamicscompressordesc_t_t {
        float m_fldb_output_gain;
        float m_fldb_compression_threshold;
        float m_fldb_knee_width;
        float m_fl_compression_ratio;
        float m_fl_attack_time_ms;
        float m_fl_release_time_ms;
        float m_fl_rmstime_ms;
        float m_fl_wet_mix;
        float m_fl_schigh_pass_freq;
        bool m_b_peak_mode;
        bool m_b_auto_makeup_gain;
    };

    struct cvmixheap_t {
        CUtlLeanVector_uint32_t_ m_storage;
    };

    struct cvoicecontainervmixsnd_t {
        CUtlString m_resource_name;
    };

    struct cvmixstereodelayprocessordesc_t {
        CVMixParameterFloat m_param_delay_left;
        CVMixParameterFloat m_param_delay_right;
    };

    struct vmixshaperdesc_t_t {
        int32_t m_n_shape;
        float m_fldb_drive;
        float m_fldb_output_gain;
        float m_fl_wet_mix;
        int32_t m_n_oversample_factor;
    };

    struct cvmixdataoffset_t {
        uint32_t m_n_offset;
    };

    struct vmixenvelopedesc_t_t {
        float m_fl_attack_time_ms;
        float m_fl_hold_time_ms;
        float m_fl_release_time_ms;
    };

    struct caudiosentence_t {
        bool m_b_should_voice_duck;
        CUtlVector_CAudioPhonemeTag_ m_run_time_phonemes;
        CUtlVector_CAudioEmphasisSample_ m_emphasis_samples;
        CAudioMorphData m_morph_data;
    };

    struct cvoicecontainerparameterblender_t {
        CSoundContainerReference m_first_sound;
        CSoundContainerReference m_second_sound;
        bool m_b_enable_occlusion_blend;
        CPiecewiseCurve m_curve1;
        CPiecewiseCurve m_curve2;
        bool m_b_enable_distance_blend;
        CPiecewiseCurve m_curve3;
        CPiecewiseCurve m_curve4;
    };

    struct cvmixaudiometer_t {
        CUtlString m_name;
        CUtlString m_display_name;
        uint32_t m_n_debug_id;
    };

    struct cvmixvocoderprocessordesc_t {
        VMixVocoderDesc_t m_desc;
        CVMixParameterFloat m_param_bandwidth;
    };

    struct csosgroupactionlimitschema_t {
        int32_t m_n_max_count;
        SosActionStopType_t m_n_stop_type;
        SosActionLimitSortType_t m_n_sort_type;
        bool m_b_stop_immediate;
        bool m_b_count_stopped;
    };

    struct cvoicecontainerampeddecayingsinewave_t {
        float m_fl_gain_amount;
    };

    struct vmixautofilterdesc_t_t {
        float m_fl_envelope_amount;
        float m_fl_attack_time_ms;
        float m_fl_release_time_ms;
        VMixFilterDesc_t m_filter;
        float m_fl_lfoamount;
        float m_fl_lforate;
        float m_fl_phase;
        VMixLFOShape_t m_n_lfoshape;
    };

    struct vmixdynamicsband_t_t {
        float m_fldb_gain_input;
        float m_fldb_gain_output;
        float m_fldb_threshold_below;
        float m_fldb_threshold_above;
        float m_fl_ratio_below;
        float m_fl_ratio_above;
        float m_fl_attack_time_ms;
        float m_fl_release_time_ms;
        bool m_b_enable;
        bool m_b_solo;
    };

    struct vmixeffectchaindesc_t_t {
        CUtlString m_effect_name;
    };

    struct cvmixplatereverbprocessordesc_t {
        VMixPlateverbDesc_t m_desc;
    };

    struct cvoicecontainermultiblender_t {
        CSoundContainerReferenceArray m_sounds_to_play;
        float m_fl_blend_factor;
        float m_fl_crossover;
    };

    struct cvmixvsndinput_t {
        CUtlString m_default_value;
    };

    struct cvoicecontainerstaticadditivesynth__cgainscaleperinstance_t {
        float m_fl_min_volume;
        int32_t m_n_instances_at_min_volume;
        float m_fl_max_volume;
        int32_t m_n_instances_at_max_volume;
    };

    struct cvmixparametereffectname_t {
        CVMixDataOffset m_offset;
    };

    struct sndbeattimesignature_t_t {
        uint8_t n_numerator;
        uint8_t n_denominator;
    };

    struct velocityzone_t_t {
        uint8_t n_max_vel;
        uint8_t n_next_selection;
        uint8_t n_num_samples;
        uint32_t p_samples;
    };

    struct cvoicecontainerselector_t {
        PlayBackMode_t m_mode;
        CSoundContainerReferenceArray m_sounds_to_play;
        CUtlVector_float_ m_f_probability_weights;
    };

    struct sndbeateventkeyedsndevts_t_t {
        CUtlString m_str_sound_event_name;
    };

    struct cvmixgraphinput_t {
        CVMixDataOffset m_n_offset;
    };

    struct csosgroupactiontimeblocklimitschema_t {
        int32_t m_n_max_count;
        float m_fl_max_duration;
    };

    struct sndbeateventkeyedmidinotes_t_t {
        uint8_t m_n_status;
        uint8_t m_n_note;
        uint8_t m_n_velocity;
    };

    struct csosgroupactionmembercountenvelopeschema_t {
        int32_t m_n_base_count;
        int32_t m_n_target_count;
        float m_fl_base_value;
        float m_fl_target_value;
        float m_fl_attack;
        float m_fl_decay;
        CUtlString m_result_var_name;
        bool m_b_save_to_group;
    };

    struct cvmixdualcompressorprocessordesc_t {
        VMixDualCompressorDesc_t m_desc;
        CVMixParameterFloat m_out_param_level;
        CVMixParameterFloat m_out_paramd_blevel;
        CVMixParameterFloat m_out_param_reduction;
    };

    struct cvoicecontainerswitch_t {
        CUtlVector_CSoundContainerReference_ m_sounds_to_play;
    };

    struct cvmixcontrolmeter_t {
        CVMixDataOffset m_n_value_index;
    };

    struct cvoicecontainerenum_t {
        CSoundContainerReferenceArray m_sounds_to_play;
        int32_t m_i_selection;
        float m_fl_crossfade_time;
    };

    struct csosgroupactiontimelimitschema_t {
        float m_fl_max_duration;
    };

    struct vmixvocoderdesc_t_t {
        int32_t m_n_band_count;
        float m_fl_bandwidth;
        float m_fld_bmod_gain;
        float m_fl_freq_range_start;
        float m_fl_freq_range_end;
        float m_fld_bunvoiced_gain;
        float m_fl_attack_time_ms;
        float m_fl_release_time_ms;
        int32_t m_n_debug_band;
        bool m_b_peak_mode;
    };

    struct vmixutilitydesc_t_t {
        VMixChannelOperation_t m_n_op;
        float m_fl_input_pan;
        float m_fl_output_balance;
        float m_fldb_output_gain;
        bool m_b_bass_mono;
        float m_fl_bass_freq;
    };

    struct cvoicecontainerlooptrigger_t {
        float m_fl_retrigger_time_min;
        float m_fl_retrigger_time_max;
        float m_fl_fade_time;
        bool m_b_cross_fade;
        CSoundContainerReference m_sound;
    };

    struct sndbeateventkeys_t_t {
        float m_fl_key;
    };

    struct cvoicecontainerdecayingsinewave_t {
        float m_fl_frequency;
        float m_fl_decay_time;
    };

    struct cvmixdelayprocessordesc_t {
        VMixDelayDesc_t m_desc;
        CVMixParameterFloat m_param_cutoff_frequency;
        CVMixParameterFloat m_param_delay;
    };

    struct cvmixboxverb2processordesc_t {
        VMixBoxverbDesc_t m_desc;
    };

    struct vmixfilterdesc_t_t {
        float m_fldb_gain;
        float m_fl_cutoff_freq;
        float m_fl_q;
        VMixFilterType_t m_n_filter_type;
        VMixFilterSlope_t m_n_filter_slope;
        bool m_b_enabled;
    };

    struct csndbeatpattern_t {
        CUtlString m_name;
        float m_fl_sync_priority;
        SndBeatSyncStartType_t m_sync_start_type;
        SndBeatSyncType_t m_sync_type;
        SndBeatTimeSignature_t m_time_signature;
        float m_fl_length;
        bool m_b_looping;
        SndBeatEventType_t m_play_event_type;
        float m_fl_play_beat_mult;
        SndBeatKeyType_t m_play_key_type;
        CUtlVector_SndBeatEventKeys_t_ m_vec_pattern_keys;
        CUtlVector_SndBeatEventKeyedFloats_t_ m_vec_pattern_floats;
        CUtlVector_SndBeatEventKeyedSndEvts_t_ m_vec_pattern_snd_evts;
        CUtlVector_SndBeatEventKeyedMidiNotes_t_ m_vec_pattern_midi;
        SndBeatEventType_t m_sync_event_type;
        float m_fl_sync_beat_mult;
        CUtlVector_SndBeatEventKeys_t_ m_vec_sync_pattern_keys;
    };

    struct vmixoscdesc_t_t {
        VMixLFOShape_t osc_type;
        float m_freq;
        float m_fl_phase;
    };

    struct cvmixautofilterprocessordesc_t {
        VMixAutoFilterDesc_t m_desc;
    };

    struct vmixflangerdesc_t_t {
        bool m_b_phase_invert;
        float m_fl_glide_time;
        float m_fl_delay;
        float m_fl_output_gain;
        float m_fl_feedback_gain;
        float m_fl_feedforward_gain;
        float m_fl_mod_rate;
        float m_fl_mod_depth;
        bool m_b_apply_antialiasing;
    };

    struct vmixdynamicsdesc_t_t {
        float m_fldb_gain;
        float m_fldb_noise_gate_threshold;
        float m_fldb_compression_threshold;
        float m_fldb_limiter_threshold;
        float m_fldb_knee_width;
        float m_fl_ratio;
        float m_fl_limiter_ratio;
        float m_fl_attack_time_ms;
        float m_fl_release_time_ms;
        float m_fl_rmstime_ms;
        float m_fl_wet_mix;
        bool m_b_peak_mode;
    };

}

namespace steamaudio {

    struct steamaudioreverbclusteringsettings_t_t {
        bool m_b_enable_clustering;
        int32_t m_n_cube_map_resolution;
        float m_fl_depth_threshold;
    };

    struct steamaudiocustomdatadimensionssettings_t_t {
        int32_t m_n_ambisonics_order_outside_field;
        int32_t m_n_ambisonics_order_inside_size_field;
        float m_fl_outside_threshold;
        float m_fl_size_threshold;
        float m_fl_inside_threshold;
    };

    struct steamaudiopathsettings_t_t {
        int32_t m_n_num_vis_samples;
        float m_fl_probe_vis_radius;
        float m_fl_probe_vis_threshold;
        float m_fl_probe_path_range;
    };

    struct csteamaudioambisonicsfield_t {
        CUtlVector_float_ m_field;
    };

    struct csteamaudiobakedpathingdata_t {
        int32_t m_n_bands;
        CSteamAudioProbeData m_probes;
        CSteamAudioMovableBakedData_CSteamAudioBakedPathingData_ m_movables;
    };

    struct steamaudioreverbsettings_t_t {
        int32_t m_n_num_rays;
        int32_t m_n_num_bounces;
        float m_fl_irduration;
        int32_t m_n_ambisonics_order;
        bool m_b_export_scene;
    };

    struct csteamaudioprobedata_t {
        IPLProbeBatch m_p_probe_batch;
    };

    struct steamaudioreverbcompressionsettings_t_t {
        bool m_b_enable_compression;
        float m_fl_quality;
    };

    struct csteamaudiobakedmaterialsdata_t {
        CSteamAudioProbeData m_probes;
        CUtlVector_uint32_t_ m_vec_material_tokens;
        CUtlVector_float_ m_vec_material_weights;
    };

    struct csteamaudiobakedocclusiondata_t {
        SteamAudioCustomDataOcclusionSettings_t m_settings;
        CSteamAudioProbeData m_probes;
        CUtlVector_float_ m_vec_pathing_ratio;
        CUtlVector_float_ m_vec_pathing_deviation;
        CUtlVector_float_ m_vec_reflection_energy;
    };

    struct csteamaudiobakedreverbdata_t {
        int32_t m_n_bands;
        CSteamAudioSceneData m_scene;
        CSteamAudioProbeData m_probes;
        CSteamAudioProbeGrid m_grid;
        SteamAudioReverbSettings_t m_reverb_settings;
        SteamAudioReverbClusteringSettings_t m_reverb_clustering_settings;
        SteamAudioReverbCompressionSettings_t m_reverb_compression_settings;
        CSteamAudioProbeData m_clustered_probes;
        CUtlVector_int16_t_ m_vec_cluster_for_probe;
        CSteamAudioCompressedReverb m_compressed_data;
        CSteamAudioCompressedReverb m_compressed_clustered_data;
        CSteamAudioMovableBakedData_CSteamAudioBakedReverbData_ m_movables;
    };

    struct csteamaudioprobelinesegment_t {
        vector3d_t m_v_start;
        vector3d_t m_v_end;
        CUtlVector_float_ m_vec_intervals;
        CUtlVector_int32_t_ m_vec_probe_indices;
    };

    struct steamaudiocustomdataocclusionsettings_t_t {
        bool m_b_enable_pathing;
        bool m_b_enable_reflections;
        int32_t m_n_reflection_rays;
        int32_t m_n_reflection_bounces;
    };

    struct csteamaudiobakeddimensionsdata_t {
        SteamAudioCustomDataDimensionsSettings_t m_settings;
        CSteamAudioProbeData m_probes;
        CUtlVector_float_ m_vec_in_out;
        CUtlVector_float_ m_vec_size;
        CUtlVector_CSteamAudioAmbisonicsField_ m_vec_outside_field;
        CUtlVector_CSteamAudioAmbisonicsField_ m_vec_inside_small_size_field;
        CSteamAudioMovableBakedData_CSteamAudioBakedDimensionsData_ m_movables;
    };

    struct csteamaudioscenedata_t {
        IPLScene m_p_scene;
        IPLStaticMesh m_p_static_mesh;
    };

    struct csteamaudioprobegrid_t {
        AABB_t m_aabb;
        float m_fl_spacing;
        int32_t m_nx;
        int32_t m_ny;
        int32_t m_nz;
        CUtlVector_CSteamAudioProbeLineSegment_ m_vec_line_segments;
        CUtlVector_Vector_ m_vec_probes;
    };

    struct csteamaudiocompressedreverb_t {
        int32_t m_n_channels;
        int32_t m_n_bands;
        int32_t m_n_bins;
        int32_t m_n_probes;
        CUtlVector_int32_t_ m_vec_num_singular_values;
        CUtlVector_float_ m_vec_dictionary;
        CUtlVector_float_ m_vec_compressed_data;
        IPLCompressedEnergyFields m_p_compressed_data;
    };

}

namespace vphysics2 {

    struct rnspheredesc_t_t {
        RnSphere_t m_sphere;
    };

    struct rncompounddesc_t_t {
        RnCompound_t m_compound;
    };

    struct rnsoftbodyparticle_t_t {
        float m_fl_mass_inv;
    };

    struct rnhulldesc_t_t {
        RnHull_t m_hull;
    };

    struct rncapsuledesc_t_t {
        RnCapsule_t m_capsule;
    };

    struct physfemodeldesc_t_t {
        CUtlVector_uint32_t_ m_ctrl_hash;
        CUtlVector_CUtlString_ m_ctrl_name;
        uint32_t m_n_static_node_flags;
        uint32_t m_n_dynamic_node_flags;
        float m_fl_local_force;
        float m_fl_local_rotation;
        uint16_t m_n_node_count;
        uint16_t m_n_static_nodes;
        uint16_t m_n_rot_lock_static_nodes;
        uint16_t m_n_first_position_driven_node;
        uint16_t m_n_simd_tri_count1;
        uint16_t m_n_simd_tri_count2;
        uint16_t m_n_simd_quad_count1;
        uint16_t m_n_simd_quad_count2;
        uint16_t m_n_quad_count1;
        uint16_t m_n_quad_count2;
        uint16_t m_n_tree_depth;
        uint16_t m_n_node_base_jigglebone_depends_count;
        uint16_t m_n_rope_count;
        CUtlVector_uint16_t_ m_ropes;
        CUtlVector_FeNodeBase_t_ m_node_bases;
        CUtlVector_FeSimdNodeBase_t_ m_simd_node_bases;
        CUtlVector_FeQuad_t_ m_quads;
        CUtlVector_FeSimdQuad_t_ m_simd_quads;
        CUtlVector_FeSimdTri_t_ m_simd_tris;
        CUtlVector_FePrism_t_ m_prisms;
        CUtlVector_FeSimdPrism_t_ m_simd_prisms;
        CUtlVector_FeSimdRodConstraint_t_ m_simd_rods;
        CUtlVector_FeSimdRodConstraintAnim_t_ m_simd_rods_anim;
        CUtlVector_CTransform_ m_init_pose;
        CUtlVector_FeRodConstraint_t_ m_rods;
        CUtlVector_FeTwistConstraint_t_ m_twists;
        CUtlVector_FeHingeLimit_t_ m_hinge_limits;
        CUtlVector_uint32_t_ m_anti_tunnel_bytecode;
        CUtlVector_FeDynKinLink_t_ m_dyn_kin_links;
        CUtlVector_FeBoneMergeLink_t_ m_bone_merge_links;
        CUtlVector_FeAntiTunnelProbe_t_ m_anti_tunnel_probes;
        CUtlVector_uint16_t_ m_anti_tunnel_target_nodes;
        CUtlVector_FeNodeStrayBox_t_ m_node_stray_boxes;
        CUtlVector_FeAxialEdgeBend_t_ m_axial_edges;
        CUtlVector_float_ m_node_inv_masses;
        CUtlVector_FeCtrlOffset_t_ m_ctrl_offsets;
        CUtlVector_FeCtrlOsOffset_t_ m_ctrl_os_offsets;
        CUtlVector_FeFollowNode_t_ m_follow_nodes;
        CUtlVector_FeCollisionPlane_t_ m_collision_planes;
        CUtlVector_FeNodeIntegrator_t_ m_node_integrator;
        CUtlVector_FeSpringIntegrator_t_ m_spring_integrator;
        CUtlVector_FeSimdSpringIntegrator_t_ m_simd_spring_integrator;
        CUtlVector_FeWorldCollisionParams_t_ m_world_collision_params;
        CUtlVector_float_ m_legacy_stretch_force;
        CUtlVector_float_ m_node_collision_radii;
        CUtlVector_float_ m_dyn_node_friction;
        CUtlVector_float_ m_local_rotation;
        CUtlVector_float_ m_local_force;
        CUtlVector_FeTaperedCapsuleStretch_t_ m_tapered_capsule_stretches;
        CUtlVector_FeTaperedCapsuleRigid_t_ m_tapered_capsule_rigids;
        CUtlVector_FeSphereRigid_t_ m_sphere_rigids;
        CUtlVector_uint16_t_ m_world_collision_nodes;
        CUtlVector_uint16_t_ m_tree_parents;
        CUtlVector_uint16_t_ m_tree_collision_masks;
        CUtlVector_FeTreeChildren_t_ m_tree_children;
        CUtlVector_uint16_t_ m_free_nodes;
        CUtlVector_FeFitMatrix_t_ m_fit_matrices;
        CUtlVector_FeFitWeight_t_ m_fit_weights;
        CUtlVector_FeNodeReverseOffset_t_ m_reverse_offsets;
        CUtlVector_FeAnimStrayRadius_t_ m_anim_stray_radii;
        CUtlVector_FeSimdAnimStrayRadius_t_ m_simd_anim_stray_radii;
        CUtlVector_FeKelagerBend2_t_ m_kelager_bends;
        CUtlVector_FeCtrlSoftOffset_t_ m_ctrl_soft_offsets;
        CUtlVector_CFeIndexedJiggleBone_ m_jiggle_bones;
        CUtlVector_uint16_t_ m_source_elems;
        CUtlVector_uint32_t_ m_goal_damped_spring_integrators;
        CUtlVector_FeTri_t_ m_tris;
        uint16_t m_n_tri_count1;
        uint16_t m_n_tri_count2;
        uint8_t m_n_reserved_uint8;
        uint8_t m_n_extra_pressure_iterations;
        uint8_t m_n_extra_goal_iterations;
        uint8_t m_n_extra_iterations;
        CUtlVector_FeSDFRigid_t_ m_sdfrigids;
        CUtlVector_FeBoxRigid_t_ m_box_rigids;
        CUtlVector_uint8_t_ m_dyn_node_vertex_set;
        CUtlVector_uint32_t_ m_vertex_set_names;
        CUtlVector_FeRigidColliderIndices_t_ m_rigid_collider_priorities;
        CUtlVector_FeMorphLayerDepr_t_ m_morph_layers;
        CUtlVector_uint8_t_ m_morph_set_data;
        CUtlVector_FeVertexMapDesc_t_ m_vertex_maps;
        CUtlVector_uint8_t_ m_vertex_map_values;
        CUtlVector_FeEffectDesc_t_ m_effects;
        CUtlVector_FeCtrlOffset_t_ m_lock_to_parent;
        CUtlVector_uint16_t_ m_lock_to_goal;
        CUtlVector_int16_t_ m_skel_parents;
        CUtlVector_FeNodeWindBase_t_ m_dyn_node_wind_bases;
        CUtlVector_FeModelSelfCollisionLayer_t_ m_self_collision_layers;
        float m_fl_internal_pressure;
        float m_fl_default_time_dilation;
        float m_fl_windage;
        float m_fl_wind_drag;
        float m_fl_default_surface_stretch;
        float m_fl_default_thread_stretch;
        float m_fl_default_gravity_scale;
        float m_fl_default_vel_air_drag;
        float m_fl_default_exp_air_drag;
        float m_fl_default_vel_quad_air_drag;
        float m_fl_default_exp_quad_air_drag;
        float m_fl_rod_velocity_smooth_rate;
        float m_fl_quad_velocity_smooth_rate;
        float m_fl_add_world_collision_radius;
        float m_fl_default_volumetric_solve_amount;
        float m_fl_motion_smooth_cdt;
        float m_fl_local_drag1;
        uint16_t m_n_rod_velocity_smooth_iterations;
        uint16_t m_n_quad_velocity_smooth_iterations;
    };

    struct rnmeshdesc_t_t {
        RnMesh_t m_mesh;
    };

    struct rnsoftbodyspring_t_t {
        uint16_t m_n_particle;
        float m_fl_length;
    };

    struct rnsoftbodycapsule_t_t {
        Vector m_v_center;
        float m_fl_radius;
        uint16_t m_n_particle;
    };

    struct vphysics_save_cphysicsbody_t_t {
        uint64_t m_n_old_pointer;
    };

    struct febuildboxrigid_t_t {
        int32_t m_n_priority;
        uint32_t m_n_vertex_map_hash;
        uint32_t m_n_antitunnel_group_bits;
    };

    struct cfeindexedjigglebone_t {
        uint32_t m_n_node;
        uint32_t m_n_jiggle_parent;
        CFeJiggleBone m_jiggle_bone;
    };

    struct febonemergelink_t_t {
        uint32_t m_n_parent_hash;
        uint16_t m_n_child_node;
    };

    struct iphysaggregateinstance_t {
        void* m_p_skeleton;
        bool m_b_is_axis_aligned;
    };

    struct febandbendlimit_t_t {
        float fl_dist_min;
        float fl_dist_max;
        uint16_t n_node;
    };

    struct rncompoundtree_t_t {
        CUtlLeanVector_RnCompoundTreeNode_t_ m_nodes;
        uint32_t m_n_start_iteration_index;
    };

    struct fetaperedcapsulestretch_t_t {
        uint16_t n_node;
        uint16_t n_collision_mask;
        uint16_t n_dummy;
        float fl_radius;
    };

    struct constraint_axislimit_t_t {
        float fl_min_rotation;
        float fl_max_rotation;
        float fl_motor_target_ang_speed;
        float fl_motor_max_torque;
    };

    struct fesimdrodconstraintanim_t_t {
        uint16_t n_node;
        fltx4 f4_weight0;
        fltx4 f4_relaxation_factor;
    };

    struct fesimdrodconstraint_t_t {
        uint16_t n_node;
        fltx4 f4_max_dist;
        fltx4 f4_min_dist;
        fltx4 f4_weight0;
        fltx4 f4_relaxation_factor;
    };

    struct constraint_hingeparams_t_t {
        VectorWS world_position;
        vector3d_t world_axis_direction;
        constraint_axislimit_t hinge_axis;
        constraint_breakableparams_t constraint;
    };

    struct febuildsphererigid_t_t {
        int32_t m_n_priority;
        uint32_t m_n_vertex_map_hash;
        uint32_t m_n_antitunnel_group_bits;
    };

    struct fesimdanimstrayradius_t_t {
        uint16_t n_node;
        fltx4 fl_max_dist;
        fltx4 fl_relaxation_factor;
    };

    struct rntriangle_t_t {
        int32_t m_n_index;
    };

    struct feproxyvertexmap_t_t {
        CUtlString m_name;
        float m_fl_weight;
    };

    struct fenodeintegrator_t_t {
        float fl_point_damping;
        float fl_animation_force_attraction;
        float fl_animation_vertex_attraction;
        float fl_gravity;
    };

    struct rncapsule_t_t {
        Vector m_v_center;
        float m_fl_radius;
    };

    struct cfenamedjigglebone_t {
        CUtlString m_str_parent_bone;
        transform_t m_transform;
        uint32_t m_n_jiggle_parent;
        CFeJiggleBone m_jiggle_bone;
    };

    struct feprism_t_t {
        uint16_t n_node;
        float fl_volume;
    };

    struct feantitunnelprobebuild_t_t {
        float fl_weight;
        float fl_activation_distance;
        float fl_bias;
        float fl_curvature;
        uint32_t n_flags;
        uint16_t n_probe_node;
        CUtlVector_uint16_t_ target_nodes;
    };

    struct rnbodydesc_t_t {
        CUtlString m_s_debug_name;
        VectorWS m_v_position;
        QuaternionStorage m_q_orientation;
        vector3d_t m_v_linear_velocity;
        vector3d_t m_v_angular_velocity;
        vector3d_t m_v_local_mass_center;
        Vector m_local_inertia_inv;
        float m_fl_mass_inv;
        float m_fl_game_mass;
        float m_fl_mass_scale_inv;
        float m_fl_inertia_scale_inv;
        float m_fl_linear_damping;
        float m_fl_angular_damping;
        float m_fl_linear_drag_scale;
        float m_fl_angular_drag_scale;
        float m_fl_linear_fluid_drag_scale;
        float m_fl_angular_fluid_drag_scale;
        vector3d_t m_v_last_awake_force_accum;
        vector3d_t m_v_last_awake_torque_accum;
        float m_fl_buoyancy_scale;
        float m_fl_gravity_scale;
        float m_fl_time_scale;
        int32_t m_n_body_type;
        uint32_t m_n_game_index;
        uint32_t m_n_game_flags;
        int8_t m_n_min_velocity_iterations;
        int8_t m_n_min_position_iterations;
        int8_t m_n_mass_priority;
        bool m_b_enabled;
        bool m_b_sleeping;
        bool m_b_is_continuous_enabled;
        bool m_b_drag_enabled;
        vector3d_t m_v_gravity;
        bool m_b_speculative_enabled;
        bool m_b_has_shadow_controller;
        DynamicContinuousContactBehavior_t m_n_dynamic_continuous_contact_behavior;
    };

    struct oldfeedge_t_t {
        float m_fl_k;
        float inv_a;
        float t;
        float fl_theta_relaxed;
        float fl_theta_factor;
        float c01;
        float c02;
        float c03;
        float c04;
        float fl_axial_model_dist;
        float fl_axial_model_weights;
        uint16_t m_n_node;
    };

    struct fefollownode_t_t {
        uint16_t n_parent_node;
        uint16_t n_child_node;
        float fl_weight;
    };

    struct rnmesh_t_t {
        vector3d_t m_v_min;
        vector3d_t m_v_max;
        CUtlVector_RnNode_t_ m_nodes;
        CUtlVectorSIMDPaddedVector m_vertices;
        CUtlVector_RnTriangle_t_ m_triangles;
        CUtlVector_RnWing_t_ m_wings;
        CUtlVector_uint8_t_ m_triangle_edge_flags;
        CUtlVector_uint8_t_ m_materials;
        vector3d_t m_v_orthographic_areas;
        uint32_t m_n_flags;
        uint32_t m_n_debug_flags;
        float m_fl_surface_area;
    };

    struct vertexpositionnormal_t_t {
        vector3d_t m_v_position;
        vector3d_t m_v_normal;
    };

    struct rncompoundtreenode_t_t {
        vector3d_t m_v_min;
        vector3d_t m_v_max;
        uint32_t m_n_type;
        uint32_t m_n_subtree_end_or_compound_id;
    };

    struct febuildsdfrigid_t_t {
        int32_t m_n_priority;
        uint32_t m_n_vertex_map_hash;
        uint32_t m_n_antitunnel_group_bits;
    };

    struct rnblendvertex_t_t {
        uint16_t m_n_weight0;
        uint16_t m_n_index0;
        uint16_t m_n_weight1;
        uint16_t m_n_index1;
        uint16_t m_n_weight2;
        uint16_t m_n_index2;
        uint16_t m_n_flags;
        uint16_t m_n_target_index;
    };

    struct cfemorphlayer_t {
        CUtlString m_name;
        uint32_t m_n_name_hash;
        CUtlVector_uint16_t_ m_nodes;
        CUtlVector_Vector_ m_init_pos;
        CUtlVector_float_ m_gravity;
        CUtlVector_float_ m_goal_strength;
        CUtlVector_float_ m_goal_damping;
    };

    struct fectrlsoftoffset_t_t {
        uint16_t n_ctrl_parent;
        uint16_t n_ctrl_child;
        vector3d_t v_offset;
        float fl_alpha;
    };

    struct vphysentityid_t_t {
        uint32_t m_id;
    };

    struct rncompound_t_t {
        RnCompoundTree_t m_tree;
        int32_t m_n_hull_base_index;
        int32_t m_n_mesh_base_index;
        int32_t m_n_shape_count;
        CUtlLeanVectorFixedGrowable_RnMesh_t_1_ m_meshes;
        CUtlLeanVector_RnHull_t_ m_hulls;
        CUtlLeanVector_RnCapsule_t_ m_capsules;
        CUtlLeanVector_RnSphere_t_ m_spheres;
        CUtlLeanVector_uint8_t_ m_compound_material_indices;
        AABB_t m_bounds;
        vector3d_t m_v_orthographic_areas;
        float m_fl_surface_area;
        float m_fl_volume;
    };

    struct fevertexmapdesc_t_t {
        CUtlString s_name;
        uint32_t n_name_hash;
        uint32_t n_color;
        uint32_t n_flags;
        uint16_t n_vertex_base;
        uint16_t n_vertex_count;
        uint32_t n_map_offset;
        uint32_t n_node_list_offset;
        vector3d_t v_center_of_mass;
        float fl_volumetric_solve_strength;
        int16_t n_scale_source_node;
        uint16_t n_node_list_count;
    };

    struct fetaperedcapsulerigid_t_t {
        fltx4 v_sphere;
        uint16_t n_node;
        uint16_t n_collision_mask;
        uint16_t n_vertex_map_index;
        uint16_t n_flags;
    };

    struct feanimstrayradius_t_t {
        uint16_t n_node;
        float fl_max_dist;
        float fl_relaxation_factor;
    };

    struct feedgedesc_t_t {
        uint16_t n_edge;
        uint16_t n_side;
        uint16_t n_virt_elem;
    };

    struct fenodestraybox_t_t {
        vector3d_t v_min;
        uint32_t n_flags;
        vector3d_t v_max;
        uint16_t n_node;
    };

    struct fenodereverseoffset_t_t {
        vector3d_t v_offset;
        uint16_t n_bone_ctrl;
        uint16_t n_target_node;
    };

    struct rnplane_t_t {
        vector3d_t m_v_normal;
        float m_fl_offset;
    };

    struct fesdfrigid_t_t {
        vector3d_t v_local_min;
        vector3d_t v_local_max;
        float fl_bounciness;
        uint16_t n_node;
        uint16_t n_collision_mask;
        uint16_t n_vertex_map_index;
        uint16_t n_flags;
        CUtlVector_float_ m_distances;
        int32_t m_n_width;
        int32_t m_n_height;
        int32_t m_n_depth;
    };

    struct cfejigglebone_t {
        uint32_t m_n_flags;
        float m_fl_length;
        float m_fl_tip_mass;
        float m_fl_yaw_stiffness;
        float m_fl_yaw_damping;
        float m_fl_pitch_stiffness;
        float m_fl_pitch_damping;
        float m_fl_along_stiffness;
        float m_fl_along_damping;
        float m_fl_angle_limit;
        float m_fl_min_yaw;
        float m_fl_max_yaw;
        float m_fl_yaw_friction;
        float m_fl_yaw_bounce;
        float m_fl_min_pitch;
        float m_fl_max_pitch;
        float m_fl_pitch_friction;
        float m_fl_pitch_bounce;
        float m_fl_base_mass;
        float m_fl_base_stiffness;
        float m_fl_base_damping;
        float m_fl_base_min_left;
        float m_fl_base_max_left;
        float m_fl_base_left_friction;
        float m_fl_base_min_up;
        float m_fl_base_max_up;
        float m_fl_base_up_friction;
        float m_fl_base_min_forward;
        float m_fl_base_max_forward;
        float m_fl_base_forward_friction;
        float m_fl_radius0;
        float m_fl_radius1;
        vector3d_t m_v_point0;
        vector3d_t m_v_point1;
        uint16_t m_n_collision_mask;
    };

    struct cregionsvm_t {
        CUtlVector_RnPlane_t_ m_planes;
        CUtlVector_uint32_t_ m_nodes;
    };

    struct feworldcollisionparams_t_t {
        float fl_world_friction;
        float fl_ground_friction;
        uint16_t n_list_begin;
        uint16_t n_list_end;
    };

    struct cgenericshapeproxy_t {
        CUtlLeanVectorFixedGrowable_Vector_8_ m_verts;
    };

    struct rnnode_t_t {
        vector3d_t m_v_min;
        uint32_t m_n_children;
        vector3d_t m_v_max;
        uint32_t m_n_triangle_offset;
    };

    struct fefitmatrix_t_t {
        transform_t bone;
        vector3d_t v_center;
        uint16_t n_end;
        uint16_t n_node;
        uint16_t n_begin_dynamic;
    };

    struct fesimdquad_t_t {
        uint16_t n_node;
        fltx4 f4_slack;
        FourVectors v_shape;
        fltx4 f4_weights;
    };

    struct fesimdspringintegrator_t_t {
        uint16_t n_node;
        fltx4 fl_spring_rest_length;
        fltx4 fl_spring_constant;
        fltx4 fl_spring_damping;
        fltx4 fl_node_weight0;
    };

    struct fesimdnodebase_t_t {
        uint16_t n_node;
        uint16_t n_node_x0;
        uint16_t n_node_x1;
        uint16_t n_node_y0;
        uint16_t n_node_y1;
        uint16_t n_dummy;
        FourQuaternions q_adjust;
    };

    struct fequad_t_t {
        uint16_t n_node;
        float fl_slack;
        Vector4D v_shape;
    };

    struct fehingelimit_t_t {
        uint16_t n_node;
        uint32_t n_flags;
        float fl_weight4;
        float fl_weight5;
        float fl_angle_center;
        float fl_angle_extents;
    };

    struct rnwing_t_t {
        int32_t m_n_index;
    };

    struct feweightednode_t_t {
        uint16_t n_node;
        uint16_t n_weight;
    };

    struct collisiondetaillayerinfo_t_t {
        CUtlString m_s_description;
        CUtlString m_s_friendly_name;
        bool m_b_is_query_only;
        CUtlString m_s_parent_detail_layer;
        CUtlVector_CollisionDetailLayerInfo_t_Name_t_ m_vec_subtree_detail_layers;
        bool m_b_not_pickable;
    };

    struct feeffectdesc_t_t {
        CUtlString s_name;
        uint32_t n_name_hash;
        int32_t n_type;
        KeyValues3 m_params;
    };

    struct fespringintegrator_t_t {
        uint16_t n_node;
        float fl_spring_rest_length;
        float fl_spring_constant;
        float fl_spring_damping;
        float fl_node_weight0;
    };

    struct fourvectors2d_t {
        fltx4 x;
        fltx4 y;
    };

    struct fekelagerbend2_t_t {
        float fl_weight;
        float fl_height0;
        uint16_t n_node;
        uint16_t n_reserved;
    };

    struct vphysics_save_ragdoll_control_t_t {
        float m_fl_min_spring_frequency;
        float m_fl_max_spring_frequency;
        float m_fl_max_stretch;
        bool m_b_solid_collision_at_zero_weight;
        bool m_b_requires_dynamic_bodies;
        bool m_b_ignore_teleport;
        vector3d_t m_v_linear_velocity_accumulator;
        RotationVector m_v_angular_velocity_accumulator;
        vector3d_t m_v_force_accumulator;
        int32_t m_n_body_count;
    };

    struct ferigidcolliderindices_t_t {
        uint16_t m_n_tapered_capsule_rigid_index;
        uint16_t m_n_sphere_rigid_index;
        uint16_t m_n_box_rigid_index;
        uint16_t m_n_sdfrigid_index;
        uint16_t m_n_collision_plane_index;
    };

    struct fecollisionplane_t_t {
        uint16_t n_ctrl_parent;
        uint16_t n_child_node;
        RnPlane_t m_plane;
        float fl_strength;
    };

    struct festiffhingebuild_t_t {
        float fl_max_angle;
        float fl_strength;
        float fl_motion_bias;
        uint16_t n_node;
    };

    struct feboxrigid_t_t {
        transform_t tm_frame2;
        uint16_t n_node;
        uint16_t n_collision_mask;
        vector3d_t v_size;
        uint16_t n_vertex_map_index;
        uint16_t n_flags;
    };

    struct femorphlayerdepr_t_t {
        CUtlString m_name;
        uint32_t m_n_name_hash;
        CUtlVector_uint16_t_ m_nodes;
        CUtlVector_Vector_ m_init_pos;
        CUtlVector_float_ m_gravity;
        CUtlVector_float_ m_goal_strength;
        CUtlVector_float_ m_goal_damping;
        uint32_t m_n_flags;
    };

    struct fectrloffset_t_t {
        vector3d_t v_offset;
        uint16_t n_ctrl_parent;
        uint16_t n_ctrl_child;
    };

    struct fenodebase_t_t {
        uint16_t n_node;
        uint16_t n_dummy;
        uint16_t n_node_x0;
        uint16_t n_node_x1;
        uint16_t n_node_y0;
        uint16_t n_node_y1;
        QuaternionStorage q_adjust;
    };

    struct fevertexmapbuild_t_t {
        CUtlString m_vertex_map_name;
        uint32_t m_n_name_hash;
        color_t m_color;
        float m_fl_volumetric_solve_strength;
        int32_t m_n_scale_source_node;
        CUtlVector_float_ m_weights;
    };

    struct cfevertexmapbuildarray_t {
        CUtlVector_FeVertexMapBuild_t_ m_array;
    };

    struct fetri_t_t {
        uint16_t n_node;
        float w1;
        float w2;
        float v1x;
        vector2d_t v2;
    };

    struct rnhull_t_t {
        vector3d_t m_v_centroid;
        float m_fl_max_angular_radius;
        float m_fl_min_centroid_radius;
        AABB_t m_bounds;
        vector3d_t m_v_orthographic_areas;
        matrix3x4_t m_mass_properties;
        float m_fl_volume;
        float m_fl_surface_area;
        CUtlVector_Vector_ m_vertex_positions;
        CUtlVector_RnPlane_t_ m_face_planes;
        uint32_t m_n_flags;
        CRegionSVM* m_p_region_svm;
        CUtlVector_RnVertex_t_ m_vertices;
        CUtlVector_RnHalfEdge_t_ m_edges;
        CUtlVector_RnFace_t_ m_faces;
    };

    struct femodelselfcollisionlayer_t_t {
        CUtlString m_name;
        CUtlVector_uint16_t_ m_nodes;
        float m_fl_parent_reaction;
        uint32_t m_n_flags;
        uint32_t m_n_end_idx;
    };

    struct feantitunnelgroupbuild_t_t {
        uint32_t m_n_vertex_map_hash;
        uint32_t m_n_collision_mask;
    };

    struct covmatrix3_t {
        vector3d_t m_v_diag;
        float m_fl_xy;
        float m_fl_xz;
        float m_fl_yz;
    };

    struct physicsparticleid_t_t {
        uint32_t m_value;
    };

    struct rnvertex_t_t {
        uint8_t m_n_edge;
    };

    struct dop26_t_t {
        float m_fl_support;
    };

    struct fedynkinlink_t_t {
        uint16_t m_n_parent;
        uint16_t m_n_child;
    };

    struct rnface_t_t {
        uint8_t m_n_edge;
    };

    struct fesimdprism_t_t {
        uint16_t n_node;
        fltx4 fl_volume;
    };

    struct fectrlosoffset_t_t {
        uint16_t n_ctrl_parent;
        uint16_t n_ctrl_child;
    };

    struct feantitunnelprobe_t_t {
        float fl_weight;
        uint32_t n_flags;
        uint16_t n_probe_node;
        uint16_t n_count;
        uint32_t n_begin;
        float fl_activation_distance;
        float fl_curvature_radius;
        float fl_bias;
    };

    struct fesourceedge_t_t {
        uint16_t n_node;
    };

    struct fetwistconstraint_t_t {
        uint16_t n_node_orient;
        uint16_t n_node_end;
        float fl_twist_relax;
        float fl_swing_relax;
    };

    struct fenodewindbase_t_t {
        uint16_t n_node_x0;
        uint16_t n_node_x1;
        uint16_t n_node_y0;
        uint16_t n_node_y1;
    };

    struct feaxialedgebend_t_t {
        float te;
        float tv;
        float fl_dist;
        float fl_weight;
        uint16_t n_node;
    };

    struct fourcovmatrices3_t {
        FourVectors m_v_diag;
        fltx4 m_fl_xy;
        fltx4 m_fl_xz;
        fltx4 m_fl_yz;
    };

    struct constraint_breakableparams_t_t {
        float strength;
        float force_limit;
        float torque_limit;
        float body_mass_scale;
        bool is_active;
    };

    struct fesphererigid_t_t {
        fltx4 v_sphere;
        uint16_t n_node;
        uint16_t n_collision_mask;
        uint16_t n_vertex_map_index;
        uint16_t n_flags;
    };

    struct collisiondetaillayerinfo_t__name_t_t {
        CUtlStringToken m_n_name_token;
        CUtlString m_s_name_string;
    };

    struct febuildtaperedcapsulerigid_t_t {
        int32_t m_n_priority;
        uint32_t m_n_vertex_map_hash;
        uint32_t m_n_antitunnel_group_bits;
    };

    struct fesoftparent_t_t {
        int32_t n_parent;
        float fl_alpha;
    };

    struct rnshapedesc_t_t {
        uint32_t m_n_collision_attribute_index;
        uint32_t m_n_surface_property_index;
        CUtlString m_user_friendly_name;
        bool m_b_user_friendly_name_sealed;
        bool m_b_user_friendly_name_long;
        uint32_t m_n_tool_material_hash;
    };

    struct fetreechildren_t_t {
        uint16_t n_child;
    };

    struct ferodconstraint_t_t {
        uint16_t n_node;
        float fl_max_dist;
        float fl_min_dist;
        float fl_weight0;
        float fl_relaxation_factor;
    };

    struct fefitweight_t_t {
        float fl_weight;
        uint16_t n_node;
        uint16_t n_dummy;
    };

    struct rnhalfedge_t_t {
        uint8_t m_n_next;
        uint8_t m_n_twin;
        uint8_t m_n_origin;
        uint8_t m_n_face;
    };

    struct fesimdtri_t_t {
        uint32_t n_node;
        fltx4 w1;
        fltx4 w2;
        fltx4 v1x;
        FourVectors2D v2;
    };

    struct vertexpositioncolor_t_t {
        vector3d_t m_v_position;
    };

    struct fefitinfluence_t_t {
        uint32_t n_vertex_node;
        float fl_weight;
        uint32_t n_matrix_node;
    };

    struct fehingelimitbuild_t_t {
        uint16_t n_node;
        uint32_t n_flags;
        float fl_limit_cw;
        float fl_limit_ccw;
    };

}

namespace worldrenderer {

    struct centityinstance_t {
        CUtlSymbolLarge m_isz_private_vscripts;
        CEntityIdentity* m_p_entity;
        CScriptComponent* m_cscript_component;
    };

    struct cscriptcomponent_t {
        CUtlSymbolLarge m_script_class_name;
    };

    struct centityidentity_t {
        int32_t m_name_string_table_index;
        CUtlSymbolLarge m_name;
        CUtlSymbolLarge m_designer_name;
        uint32_t m_flags;
        WorldGroupId_t m_world_group_id;
        uint32_t m_f_data_object_types;
        ChangeAccessorFieldPathIndex_t m_path_index;
        CEntityAttributeTable* m_p_attributes;
        CEntityIdentity* m_p_prev;
        CEntityIdentity* m_p_next;
        CEntityIdentity* m_p_prev_by_class;
        CEntityIdentity* m_p_next_by_class;
    };

    struct rtproxyinstanceinfo_t_t {
        RTProxyInstanceFlags_t m_n_flags;
        VertexAlbedoFormat_t m_albedo_format;
        VertexAlbedoFormat_t m_emissive_format;
        uint16_t m_n_blascount;
        uint32_t m_n_blasindex;
        uint32_t m_n_vertex_albedo_byte_offset;
        uint32_t m_n_vertex_emissive_byte_offset;
        float m_f_emissive_factor;
        matrix3x4_t m_m_world_from_local;
        color_t m_v_tint_color_srgb;
    };

    struct aggregatevertexalbedostreamondiskdata_t_t {
        CUtlBinaryBlock m_buffer_data;
    };

    struct sceneobject_t_t {
        uint32_t m_n_object_id;
        Vector4D m_v_transform;
        float m_fl_fade_start_distance;
        float m_fl_fade_end_distance;
        vector4d_t m_v_tint_color;
        CUtlString m_skin;
        ObjectTypeFlags_t m_n_object_type_flags;
        vector3d_t m_v_lighting_origin;
        int16_t m_n_overlay_render_order;
        int16_t m_n_lodoverride;
        int32_t m_n_cube_map_precomputed_handshake;
        int32_t m_n_light_probe_volume_precomputed_handshake;
        float m_fl_emissive_lighting_boost;
        CStrongHandle_InfoForResourceTypeCModel_ m_renderable_model;
        CStrongHandle_InfoForResourceTypeCRenderMesh_ m_renderable;
    };

    struct aggregatelodsetup_t_t {
        vector3d_t m_v_lodorigin;
        float m_f_max_object_scale;
        CUtlVector_float_ m_f_switch_distances;
    };

    struct extravertexstreamoverride_t_t {
        uint32_t m_n_sub_scene_object;
        uint32_t m_n_draw_call_index;
        MeshDrawPrimitiveFlags_t m_n_additional_mesh_draw_primitive_flags;
        CRenderBufferBinding m_extra_buffer_binding;
    };

    struct cluttertile_t_t {
        uint32_t m_n_first_instance;
        uint32_t m_n_last_instance;
        AABB_t m_bounds_ws;
    };

    struct aggregatesceneobject_t_t {
        ObjectTypeFlags_t m_all_flags;
        ObjectTypeFlags_t m_any_flags;
        int16_t m_n_layer;
        int16_t m_instance_stream;
        int16_t m_vertex_albedo_stream;
        int16_t m_vertex_emissive_stream;
        CUtlVector_AggregateMeshInfo_t_ m_aggregate_meshes;
        CUtlVector_AggregateLODSetup_t_ m_lod_setups;
        CUtlVector_uint16_t_ m_vis_cluster_membership;
        CUtlVector_matrix3x4_t_ m_fragment_transforms;
        CStrongHandle_InfoForResourceTypeCModel_ m_renderable_model;
    };

    struct nodedata_t_t {
        vector3d_t m_v_origin;
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
        CUtlString m_world_node_prefix;
    };

    struct aggregateinstancestreamondiskdata_t_t {
        uint32_t m_decoded_size;
        CUtlBinaryBlock m_buffer_data;
    };

    struct rtproxyblas_t_t {
        uint32_t m_n_first_index;
        uint32_t m_n_index_count;
        uint32_t m_n_vbbyte_offset;
        uint32_t m_n_base_vertex;
        uint16_t m_n_vertex_count;
        VertexAlbedoFormat_t m_albedo_format;
        AABB_t m_bound_ls;
        vector3d_t m_v_vertex_origin_ls;
        vector3d_t m_v_vertex_extent_ls;
    };

    struct aggregatevertexemissivestreamondiskdata_t_t {
        CUtlBinaryBlock m_buffer_data;
    };

    struct cluttersceneobject_t_t {
        AABB_t m_bounds;
        ObjectTypeFlags_t m_flags;
        int16_t m_n_layer;
        CUtlVector_Vector_ m_instance_positions;
        CUtlVector_float_ m_instance_scales;
        CUtlVector_Color_ m_instance_tint_srgb;
        CUtlVector_ClutterTile_t_ m_tiles;
        CStrongHandle_InfoForResourceTypeCModel_ m_renderable_model;
        CUtlStringToken m_material_group;
        float m_fl_begin_cull_size;
        float m_fl_end_cull_size;
    };

    struct worldbuilderparams_t_t {
        float m_fl_min_draw_volume_size;
        bool m_b_build_baked_lighting;
        bool m_b_aggregate_instance_streams;
        BakedLightingInfo_t m_baked_lighting_info;
        uint64_t m_n_compile_timestamp;
        uint64_t m_n_compile_fingerprint;
    };

    struct permentitylumpdata_t_t {
        CUtlString m_name;
        CUtlVector_CStrongHandleCopyable_InfoForResourceTypeCEntityLump_ m_child_lumps;
        CUtlLeanVector_EntityKeyValueData_t_ m_entity_key_values;
    };

    struct worldnode_t_t {
        CUtlVector_SceneObject_t_ m_scene_objects;
        CUtlVector_uint16_t_ m_vis_cluster_membership;
        CUtlVector_AggregateSceneObject_t_ m_aggregate_scene_objects;
        CUtlVector_ClutterSceneObject_t_ m_clutter_scene_objects;
        CUtlVector_AggregateRTProxySceneObject_t_ m_rt_proxies;
        CUtlVector_ExtraVertexStreamOverride_t_ m_extra_vertex_stream_overrides;
        CUtlVector_MaterialOverride_t_ m_material_overrides;
        CUtlVector_WorldNodeOnDiskBufferData_t_ m_extra_vertex_streams;
        CUtlVector_AggregateInstanceStreamOnDiskData_t_ m_aggregate_instance_streams;
        CUtlVector_AggregateVertexAlbedoStreamOnDiskData_t_ m_vertex_albedo_streams;
        CUtlVector_AggregateVertexEmissiveStreamOnDiskData_t_ m_vertex_emissive_streams;
        CUtlVector_CUtlString_ m_layer_names;
        CUtlVector_uint8_t_ m_scene_object_layer_indices;
        CUtlString m_grass_file_name;
        BakedLightingInfo_t m_node_lighting_info;
        bool m_b_has_baked_geometry_flag;
    };

    struct basesceneobjectoverride_t_t {
        uint32_t m_n_scene_object_index;
    };

    struct entityioconnectiondata_t_t {
        CUtlString m_output_name;
        uint32_t m_target_type;
        CUtlString m_target_name;
        CUtlString m_input_name;
        CUtlString m_override_param;
        float m_fl_delay;
        int32_t m_n_times_to_fire;
        KeyValues3 m_param_map;
    };

    struct bakedlightinginfo_t_t {
        uint32_t m_n_lightmap_version_number;
        uint32_t m_n_lightmap_game_version_number;
        vector2d_t m_v_lightmap_uv_scale;
        bool m_b_has_lightmaps;
        bool m_b_baked_shadows_gamma20;
        bool m_b_compression_enabled;
        int8_t m_n_lpvencoding;
        int8_t m_n_lightmap_encoding;
        uint8_t m_n_chart_pack_iterations;
        uint8_t m_n_vrad_quality;
        CUtlVector_CStrongHandle_InfoForResourceTypeCTextureBase_ m_light_maps;
        CUtlVector_BakedLightingInfo_t_BakedShadowAssignment_t_ m_baked_shadows;
    };

    struct voxelvisblockoffset_t_t {
        uint32_t m_n_offset;
        uint32_t m_n_element_count;
    };

    struct worldnodeondiskbufferdata_t_t {
        int32_t m_n_element_count;
        int32_t m_n_element_size_in_bytes;
        CUtlVector_RenderInputLayoutField_t_ m_input_layout_fields;
        CUtlVector_uint8_t_ m_p_data;
    };

    struct aggregatemeshinfo_t_t {
        uint32_t m_n_vis_cluster_member_offset;
        uint8_t m_n_vis_cluster_member_count;
        bool m_b_has_transform;
        uint8_t m_n_lodgroup_mask;
        int16_t m_n_draw_call_index;
        int16_t m_n_lodsetup_index;
        color_t m_v_tint_color;
        ObjectTypeFlags_t m_object_flags;
        int32_t m_n_light_probe_volume_precomputed_handshake;
        uint32_t m_n_instance_stream_offset;
        uint32_t m_n_vertex_albedo_stream_offset;
        uint32_t m_n_vertex_emissive_stream_offset;
        AggregateInstanceStream_t m_instance_streams;
        float m_f_emissive_factor;
    };

    struct world_t_t {
        WorldBuilderParams_t m_builder_params;
        CUtlVector_NodeData_t_ m_world_nodes;
        BakedLightingInfo_t m_world_lighting_info;
        CUtlVector_CStrongHandleCopyable_InfoForResourceTypeCEntityLump_ m_entity_lumps;
    };

    struct bakedlightinginfo_t__bakedshadowassignment_t_t {
        uint32_t m_n_light_hash;
        uint32_t m_n_map_hash;
        int8_t m_n_shadow_channel;
    };

    struct materialoverride_t_t {
        uint32_t m_n_sub_scene_object;
        uint32_t m_n_draw_call_index;
        CStrongHandle_InfoForResourceTypeIMaterial2_ m_p_material;
        vector3d_t m_v_linear_tint_color;
    };

    struct aggregatertproxysceneobject_t_t {
        int16_t m_n_layer;
        CUtlVector_RTProxyBLAS_t_ m_blases;
        CUtlVector_RTProxyInstanceInfo_t_ m_instances;
        CUtlBinaryBlock m_vbdata;
        CUtlBinaryBlock m_ibdata;
        CUtlBinaryBlock m_instance_albedo_data;
        CUtlBinaryBlock m_instance_emissive_data;
    };

    struct entitykeyvaluedata_t_t {
        CUtlVector_EntityIOConnectionData_t_ m_connections;
        CUtlBinaryBlock m_key_values_data;
    };

    struct cvoxelvisibility_t {
        uint32_t m_n_base_cluster_count;
        uint32_t m_n_pvsbytes_per_cluster;
        vector3d_t m_v_min_bounds;
        vector3d_t m_v_max_bounds;
        float m_fl_grid_size;
        uint32_t m_n_sky_visibility_cluster;
        uint32_t m_n_sun_visibility_cluster;
        VoxelVisBlockOffset_t m_node_block;
        VoxelVisBlockOffset_t m_region_block;
        VoxelVisBlockOffset_t m_enclosed_cluster_list_block;
        VoxelVisBlockOffset_t m_enclosed_clusters_block;
        VoxelVisBlockOffset_t m_masks_block;
        VoxelVisBlockOffset_t m_n_vis_blocks;
    };

}

