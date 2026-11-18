// Auto-generated protobuf field constants — DO NOT EDIT
// Message: CChatUsability_ClientUsabilityMetrics_Notification
// Module: steamclient64.dll
// Proto file: steammessages_chat.steamclient.proto
#pragma once
#ifndef SDK_PROTO_CCHATUSABILITY_CLIENTUSABILITYMETRICS_NOTIFICATION_HPP
#define SDK_PROTO_CCHATUSABILITY_CLIENTUSABILITYMETRICS_NOTIFICATION_HPP

namespace sdk::proto {

struct CChatUsability_ClientUsabilityMetrics_Notification_Metrics;
struct CChatUsability_ClientUsabilityMetrics_Notification_Settings;
struct CChatUsability_ClientUsabilityMetrics_Notification_UIState;
struct CChatUsability_ClientUsabilityMetrics_Notification_VoiceSettings;

namespace CChatUsability_ClientUsabilityMetrics_Notification_fields {

    namespace Settings {
        constexpr int notifications_show_ingame = 1;
        constexpr int notifications_show_online = 2;
        constexpr int notifications_show_message = 3;
        constexpr int notifications_events_and_announcements = 4;
        constexpr int sounds_play_ingame = 5;
        constexpr int sounds_play_online = 6;
        constexpr int sounds_play_message = 7;
        constexpr int sounds_events_and_announcements = 8;
        constexpr int always_new_chat_window = 9;
        constexpr int force_alphabetic_friend_sorting = 10;
        constexpr int chat_flash_mode = 11;
        constexpr int remember_open_chats = 12;
        constexpr int compact_quick_access = 13;
        constexpr int compact_friends_list = 14;
        constexpr int notifications_show_chat_room_notification = 15;
        constexpr int sounds_play_chat_room_notification = 16;
        constexpr int hide_offline_friends_in_tag_groups = 17;
        constexpr int hide_categorized_friends = 18;
        constexpr int categorize_in_game_friends_by_game = 19;
        constexpr int chat_font_size = 20;
        constexpr int use24hour_clock = 21;
        constexpr int do_not_disturb_mode = 22;
        constexpr int disable_embed_inlining = 23;
        constexpr int sign_into_friends = 24;
        constexpr int animated_avatars = 25;
    } // namespace Settings

    namespace VoiceSettings {
        constexpr int voice_input_gain = 1;
        constexpr int voice_output_gain = 2;
        constexpr int noise_gate_level = 3;
        constexpr int voice_use_echo_cancellation = 4;
        constexpr int voice_use_noise_cancellation = 5;
        constexpr int voice_use_auto_gain_control = 6;
        constexpr int selected_non_default_mic = 7;
        constexpr int selected_non_default_output = 8;
        constexpr int push_to_talk_enabled = 9;
        constexpr int push_to_mute_enabled = 10;
        constexpr int play_ptt_sounds = 11;
    } // namespace VoiceSettings

    namespace UIState {
        namespace CategoryCollapseState {
            constexpr int in_game_collapsed = 1;
            constexpr int online_collapsed = 2;
            constexpr int offline_collapsed = 3;
            constexpr int game_groups_collapsed = 4;
            constexpr int categories_collapsed = 5;
        } // namespace CategoryCollapseState

        constexpr int friends_list_height = 1;
        constexpr int friends_list_width = 2;
        constexpr int friends_list_docked = 3;
        constexpr int friends_list_collapsed = 4;
        constexpr int friends_list_group_chats_height = 5;
        constexpr int friends_list_visible = 6;
        constexpr int chat_popups_opened = 7;
        constexpr int group_chat_tabs_opened = 8;
        constexpr int friend_chat_tabs_opened = 9;
        constexpr int chat_window_width = 10;
        constexpr int chat_window_height = 11;
        constexpr int category_collapse = 12;
        constexpr int group_chat_left_col_collapsed = 13;
        constexpr int group_chat_right_col_collapsed = 14;
        constexpr int in_one_on_one_voice_chat = 15;
        constexpr int in_group_voice_chat = 16;
    } // namespace UIState

    namespace Metrics {
        constexpr int friends_count = 1;
        constexpr int friends_category_count = 2;
        constexpr int friends_categorized_count = 3;
        constexpr int friends_online_count = 4;
        constexpr int friends_in_game_count = 5;
        constexpr int friends_in_game_singleton_count = 6;
        constexpr int game_group_count = 7;
        constexpr int friends_favorite_count = 8;
        constexpr int group_chat_count = 9;
        constexpr int group_chat_favorite_count = 10;
    } // namespace Metrics

    constexpr int metrics_run_id = 1;
    constexpr int client_build = 2;
    constexpr int metrics_version = 3;
    constexpr int in_web = 4;
    constexpr int settings = 10;
    constexpr int voice_settings = 11;
    constexpr int ui_state = 12;
    constexpr int metrics = 13;

} // namespace CChatUsability_ClientUsabilityMetrics_Notification_fields

} // namespace sdk::proto

#endif // SDK_PROTO_CCHATUSABILITY_CLIENTUSABILITYMETRICS_NOTIFICATION_HPP

