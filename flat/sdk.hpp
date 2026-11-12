#pragma once

#include <cstdint>

namespace sdk {

    namespace client {
        constexpr auto csgoinput = 0x2569e30;
        constexpr auto client_mode = 0x2567b90;
        constexpr auto entity_list = 0x2709010;
        constexpr auto game_entity_system = 0x2709010;
        constexpr auto game_entity_system_highest_entity_index = 0x2120;
        constexpr auto game_rules = 0x25537e8;
        constexpr auto global_vars = 0x2221ab8;
        constexpr auto glow_manager = 0x2550500;
        constexpr auto local_player_controller = 0x252b0c8;
        constexpr auto local_player_pawn = 0x2553d38;
        constexpr auto particle_manager = 0x2218e88;
        constexpr auto prediction = 0x2553c40;
        constexpr auto vphys2_world = 0x255a008;
        constexpr auto view_angles = 0x256a4b8;
        constexpr auto view_matrix = 0x2559640;
        constexpr auto view_render = 0x255a008;
        constexpr auto weapon_c4 = 0x24b83b0;
    }

    namespace engine2 {
        constexpr auto build_number = 0x6b2d18;
        constexpr auto network_game_client = 0x9afb30;
        constexpr auto network_game_client_client_tick_count = 0x398;
        constexpr auto network_game_client_delta_tick = 0x24c;
        constexpr auto network_game_client_local_player = 0xf8;
        constexpr auto network_game_client_max_clients = 0x240;
        constexpr auto network_game_client_server_tick_count = 0x24c;
        constexpr auto network_game_client_sign_on_state = 0x230;
        constexpr auto pvsmanager = 0x6b9110;
        constexpr auto window_height = 0x9b4294;
        constexpr auto window_width = 0x9b4290;
    }

    namespace inputsystem {
        constexpr auto input_system = 0x46bc0;
    }

    namespace matchmaking {
        constexpr auto game_types = 0x1aefc0;
    }

    namespace tier0 {
        constexpr auto cvar = 0x3ac670;
    }

}

namespace buttons {

    constexpr auto attack = 0x2225900;
    constexpr auto attack2 = 0x2225990;
    constexpr auto back = 0x2225bd0;
    constexpr auto duck = 0x2225ea0;
    constexpr auto forward = 0x2225b40;
    constexpr auto jump = 0x2225e10;
    constexpr auto left = 0x2225c60;
    constexpr auto lookatweapon = 0x2569d50;
    constexpr auto reload = 0x2225870;
    constexpr auto right = 0x2225cf0;
    constexpr auto showscores = 0x2569c30;
    constexpr auto sprint = 0x22257e0;
    constexpr auto turnleft = 0x2225a20;
    constexpr auto turnright = 0x2225ab0;
    constexpr auto use = 0x2225d80;
    constexpr auto zoom = 0x2569cc0;

}

namespace interfaces {

    namespace animationsystem {
    constexpr auto animation_system_utils_001 = 0x83f6d8;
    constexpr auto animation_system_001 = 0x8375f8;
    }

    namespace client {
    constexpr auto client_bug_bug_servic001_client = 0x2225110;
    constexpr auto client_tools_info_001 = 0x22250e0;
    constexpr auto empty_world_service001_client = 0x2208e20;
    constexpr auto game_client_exports001 = 0x2221d88;
    constexpr auto legacy_game_ui001 = 0x2231ac0;
    constexpr auto source2_client002 = 0x254d9f0;
    constexpr auto source2_client_config001 = 0x24aa330;
    constexpr auto source2_client_prediction001 = 0x2553c40;
    constexpr auto source2_client_ui001 = 0x2230220;
    }

    namespace engine2 {
    constexpr auto benchmark_service001 = 0x6b89d0;
    constexpr auto bug_bug_service001 = 0x6b8ad0;
    constexpr auto bug_service001 = 0x970360;
    constexpr auto client_server_engine_loop_service_001 = 0x9b1d80;
    constexpr auto client_server_shared_handle_system001 = 0x9b1370;
    constexpr auto engine_game_ui001 = 0x6b6430;
    constexpr auto engine_service_mgr001 = 0x9b1620;
    constexpr auto game_event_system_client_v001 = 0x9b1910;
    constexpr auto game_event_system_server_v001 = 0x9b1a40;
    constexpr auto game_resource_service_client_v001 = 0x6b8b10;
    constexpr auto game_resource_service_server_v001 = 0x6b8b70;
    constexpr auto game_uiservice_001 = 0x9707b0;
    constexpr auto host_state_mgr001 = 0x6b8fb0;
    constexpr auto inetsupport_001 = 0x6b1980;
    constexpr auto input_service_001 = 0x970a90;
    constexpr auto key_value_cache001 = 0x6b9060;
    constexpr auto map_list_service_001 = 0x9af900;
    constexpr auto network_client_service_001 = 0x9afa90;
    constexpr auto network_p2_pservice_001 = 0x9afdd0;
    constexpr auto network_server_service_001 = 0x9aff80;
    constexpr auto network_service_001 = 0x6b8ce0;
    constexpr auto render_service_001 = 0x9b01f0;
    constexpr auto screenshot_service001 = 0x9b04c0;
    constexpr auto simple_engine_loop_service_001 = 0x6b90c0;
    constexpr auto sound_service_001 = 0x9b0670;
    constexpr auto source2_engine_to_client001 = 0x6b5d40;
    constexpr auto source2_engine_to_client_string_table001 = 0x6b5da0;
    constexpr auto source2_engine_to_server001 = 0x6b5e18;
    constexpr auto source2_engine_to_server_string_table001 = 0x6b5e40;
    constexpr auto split_screen_service_001 = 0x6b8d20;
    constexpr auto stats_service_001 = 0x9b0bb0;
    constexpr auto tool_service_001 = 0x6b8e20;
    constexpr auto vengine_gameuifuncs_version005 = 0x6b64c0;
    constexpr auto vprof_service_001 = 0x6b8e60;
    }

    namespace host {
    constexpr auto debug_draw_queue_manager001 = 0x13ff70;
    constexpr auto game_model_info001 = 0x13ffb0;
    constexpr auto game_system2_host_hook = 0x13fff0;
    constexpr auto host_utils001 = 0x14f900;
    constexpr auto prediction_diff_manager001 = 0x140100;
    constexpr auto save_restore_data_version001 = 0x140230;
    constexpr auto single_player_shared_memory001 = 0x140260;
    constexpr auto source2_host001 = 0x1402d0;
    }

    namespace inputsystem {
    constexpr auto input_stack_system_version001 = 0x44e90;
    constexpr auto input_system_version001 = 0x46bc0;
    }

    namespace materialsystem2 {
    constexpr auto font_manager_001 = 0x1638e0;
    constexpr auto material_utils_001 = 0x14bd30;
    constexpr auto post_processing_system_001 = 0x14bc60;
    constexpr auto text_layout_001 = 0x14bcc0;
    constexpr auto vmaterial_system2_001 = 0x163530;
    }

    namespace meshsystem {
    constexpr auto mesh_system001 = 0x180ab0;
    }

    namespace networksystem {
    constexpr auto flattened_serializers_version001 = 0x272a30;
    constexpr auto network_messages_version001 = 0x29ee00;
    constexpr auto network_system_version001 = 0x28c450;
    constexpr auto serialized_entities_version001 = 0x28c530;
    }

    namespace panorama {
    constexpr auto panorama_uiengine001 = 0x5895f0;
    }

    namespace particles {
    constexpr auto particle_system_mgr003 = 0x65aee0;
    }

    namespace pulse_system {
    constexpr auto ipulse_system_001 = 0x238120;
    }

    namespace rendersystemdx11 {
    constexpr auto render_device_mgr001 = 0x4342f0;
    constexpr auto render_utils_001 = 0x434bd0;
    constexpr auto vrender_device_mgr_backdoor001 = 0x434390;
    }

    namespace resourcesystem {
    constexpr auto resource_system013 = 0x89230;
    }

    namespace scenefilecache {
    constexpr auto response_rules_cache001 = 0x11d350;
    constexpr auto scene_file_cache002 = 0x11d478;
    }

    namespace scenesystem {
    constexpr auto rendering_pipelines_001 = 0x675a00;
    constexpr auto scene_system_002 = 0x91fb20;
    constexpr auto scene_utils_001 = 0x676760;
    }

    namespace schemasystem {
    constexpr auto schema_system_001 = 0x76710;
    }

    namespace server {
    constexpr auto empty_world_service001_server = 0x1df2e10;
    constexpr auto entity_subclass_utils_v001 = 0x1da2b40;
    constexpr auto nav_game_test001 = 0x1e3a808;
    constexpr auto server_tools_info_001 = 0x1e19738;
    constexpr auto source2_game_clients001 = 0x1e18c60;
    constexpr auto source2_game_director001 = 0x1f7f820;
    constexpr auto source2_game_entities001 = 0x1e18ee0;
    constexpr auto source2_server001 = 0x1e18d20;
    constexpr auto source2_server_config001 = 0x20fb328;
    constexpr auto customnavsystem001 = 0x1d904a8;
    }

    namespace soundsystem {
    constexpr auto sound_bug_bug_service001_client = 0x532c90;
    constexpr auto sound_op_system001 = 0x532b70;
    constexpr auto sound_op_system_edit001 = 0x532a80;
    constexpr auto sound_system001 = 0x532470;
    }

    namespace steamaudio {
    constexpr auto steam_audio001 = 0x35c1a0;
    }

    namespace tier0 {
    constexpr auto test_script_mgr001 = 0x3a1960;
    constexpr auto vengine_cvar007 = 0x3ac670;
    constexpr auto vprocess_utils002 = 0x3a1820;
    constexpr auto vstring_token_system001 = 0x3d3300;
    }

    namespace vphysics2 {
    constexpr auto vphysics2_interface_001 = 0x460e60;
    }

    namespace worldrenderer {
    constexpr auto world_renderer_mgr001 = 0x236d40;
    }

}
