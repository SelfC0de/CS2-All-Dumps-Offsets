// Auto-generated protobuf field constants — DO NOT EDIT
// Message: StoreItem
// Module: steamclient64.dll
// Proto file: steammessages_storebrowse.steamclient.proto
#pragma once
#ifndef SDK_PROTO_STOREITEM_HPP
#define SDK_PROTO_STOREITEM_HPP

namespace sdk::proto {

struct StoreBrowseFilterFailure;
struct StoreGameRating;
struct StoreItem_Assets;
struct StoreItem_BasicInfo;
struct StoreItem_Categories;
struct StoreItem_ExtraDetails;
struct StoreItem_FreeWeekend;
struct StoreItem_IncludedItems;
struct StoreItem_Link;
struct StoreItem_OptInRegistrationTags;
struct StoreItem_PackageGroup;
struct StoreItem_Platforms;
struct StoreItem_PurchaseNote;
struct StoreItem_PurchaseOption;
struct StoreItem_RelatedItems;
struct StoreItem_ReleaseInfo;
struct StoreItem_Reviews;
struct StoreItem_Screenshots;
struct StoreItem_SupportedLanguage;
struct StoreItem_Tag;
struct StoreItem_Trailers;

namespace StoreItem_fields {

    namespace Demo {
        constexpr int appid = 1;
        constexpr int label = 2;
        constexpr int show_above_purchase = 3;
    } // namespace Demo

    namespace Playtest {
        constexpr int appid = 1;
        constexpr int is_open = 2;
    } // namespace Playtest

    namespace RelatedF2P {
        constexpr int appid = 1;
        constexpr int header_text = 2;
        constexpr int description_text = 3;
    } // namespace RelatedF2P

    namespace RelatedItems {
        constexpr int parent_appid = 1;
        constexpr int demo_appid = 2;
        constexpr int standalone_demo_appid = 3;
        constexpr int demos = 4;
        constexpr int standalone_demos = 5;
        constexpr int playtests = 6;
        constexpr int related_f2p = 7;
        constexpr int dlc_parent_appids = 9;
    } // namespace RelatedItems

    namespace IncludedItems {
        constexpr int included_apps = 1;
        constexpr int included_packages = 2;
        constexpr int included_bundles = 3;
        constexpr int included_creators = 4;
    } // namespace IncludedItems

    namespace Categories {
        constexpr int supported_player_categoryids = 2;
        constexpr int feature_categoryids = 3;
        constexpr int controller_categoryids = 4;
    } // namespace Categories

    namespace Reviews {
        namespace StoreReviewSummary {
            constexpr int review_count = 1;
            constexpr int percent_positive = 2;
            constexpr int review_score = 3;
            constexpr int review_score_label = 4;
        } // namespace StoreReviewSummary

        constexpr int summary_filtered = 1;
        constexpr int summary_unfiltered = 2;
        constexpr int summary_language_specific = 3;
    } // namespace Reviews

    namespace BasicInfo {
        namespace CreatorHomeLink {
            constexpr int name = 1;
            constexpr int creator_clan_account_id = 2;
        } // namespace CreatorHomeLink

        constexpr int short_description = 1;
        constexpr int publishers = 2;
        constexpr int developers = 3;
        constexpr int franchises = 4;
        constexpr int capsule_headline = 5;
    } // namespace BasicInfo

    namespace Tag {
        constexpr int tagid = 1;
        constexpr int weight = 2;
    } // namespace Tag

    namespace Assets {
        constexpr int asset_url_format = 1;
        constexpr int main_capsule = 2;
        constexpr int main_capsule_2x = 18;
        constexpr int small_capsule = 3;
        constexpr int small_capsule_2x = 19;
        constexpr int header = 4;
        constexpr int header_2x = 20;
        constexpr int package_header = 5;
        constexpr int page_background = 6;
        constexpr int hero_capsule = 7;
        constexpr int hero_capsule_2x = 8;
        constexpr int library_capsule = 9;
        constexpr int library_capsule_2x = 10;
        constexpr int library_hero = 11;
        constexpr int library_hero_2x = 12;
        constexpr int community_icon = 13;
        constexpr int clan_avatar = 14;
        constexpr int page_background_path = 15;
        constexpr int raw_page_background = 16;
        constexpr int edition_comparison = 17;
        constexpr int last_modified = 21;
        constexpr int creator_home_background = 22;
    } // namespace Assets

    namespace ReleaseInfo {
        constexpr int steam_release_date = 1;
        constexpr int original_release_date = 2;
        constexpr int original_steam_release_date = 3;
        constexpr int release_from_early_access_date = 11;
        constexpr int release_from_early_access_style = 12;
        constexpr int is_coming_soon = 4;
        constexpr int is_preload = 5;
        constexpr int custom_release_date_message = 6;
        constexpr int is_abridged_release_date = 7;
        constexpr int coming_soon_display = 8;
        constexpr int is_early_access = 10;
        constexpr int mac_release_date = 20;
        constexpr int linux_release_date = 21;
        constexpr int limited_launch_active = 22;
        constexpr int advance_access_date = 23;
    } // namespace ReleaseInfo

    namespace Platforms {
        namespace VRSupport {
            constexpr int vrhmd = 1;
            constexpr int vrhmd_only = 2;
            constexpr int show_optional_vr_mode_notice = 3;
            constexpr int htc_vive = 40;
            constexpr int oculus_rift = 41;
            constexpr int windows_mr = 42;
            constexpr int valve_index = 43;
        } // namespace VRSupport

        constexpr int windows = 1;
        constexpr int mac = 2;
        constexpr int steamos_linux = 3;
        constexpr int vr_support = 10;
        constexpr int steam_deck_compat_category = 11;
        constexpr int steam_os_compat_category = 12;
        constexpr int steam_frame_compat_category = 13;
        constexpr int steam_machine_compat_category = 14;
    } // namespace Platforms

    namespace PurchaseOption {
        namespace Discount {
            constexpr int discount_amount = 1;
            constexpr int discount_description = 2;
            constexpr int discount_end_date = 3;
            constexpr int master_sub_appid = 4;
        } // namespace Discount

        namespace RecurrenceInfo {
            constexpr int packageid = 1;
            constexpr int billing_agreement_type = 2;
            constexpr int renewal_time_unit = 3;
            constexpr int renewal_time_period = 4;
            constexpr int renewal_price_in_cents = 5;
            constexpr int formatted_renewal_price = 6;
        } // namespace RecurrenceInfo

        constexpr int packageid = 1;
        constexpr int bundleid = 2;
        constexpr int purchase_option_name = 3;
        constexpr int final_price_in_cents = 5;
        constexpr int original_price_in_cents = 6;
        constexpr int formatted_final_price = 8;
        constexpr int formatted_original_price = 9;
        constexpr int discount_pct = 10;
        constexpr int bundle_discount_pct = 12;
        constexpr int is_free_to_keep = 13;
        constexpr int price_before_bundle_discount = 14;
        constexpr int formatted_price_before_bundle_discount = 15;
        constexpr int active_discounts = 20;
        constexpr int user_can_purchase_as_gift = 31;
        constexpr int is_commercial_license = 40;
        constexpr int should_suppress_discount_pct = 41;
        constexpr int hide_discount_pct_for_compliance = 42;
        constexpr int included_game_count = 43;
        constexpr int lowest_recent_price_in_cents = 44;
        constexpr int requires_shipping = 45;
        constexpr int recurrence_info = 46;
        constexpr int free_to_keep_ends = 47;
        constexpr int must_purchase_as_set = 48;
        constexpr int package_group = 49;
        constexpr int is_edition = 50;
        constexpr int free_to_keep_base_package = 51;
        constexpr int price_cannot_be_displayed_as_discount = 52;
        constexpr int price_to_base_discount_on = 53;
        constexpr int free_with_master_sub_appid = 54;
        constexpr int formatted_lowest_recent_price = 55;
        constexpr int is_free_license = 56;
    } // namespace PurchaseOption

    namespace Screenshots {
        namespace Screenshot {
            constexpr int filename = 1;
            constexpr int ordinal = 2;
        } // namespace Screenshot

        constexpr int all_ages_screenshots = 2;
        constexpr int mature_content_screenshots = 3;
    } // namespace Screenshots

    namespace Trailers {
        namespace VideoSource {
            constexpr int filename = 1;
            constexpr int type = 2;
        } // namespace VideoSource

        namespace AdaptiveTrailer {
            constexpr int cdn_path = 1;
            constexpr int encoding = 2;
        } // namespace AdaptiveTrailer

        namespace Trailer {
            constexpr int trailer_name = 1;
            constexpr int trailer_url_format = 2;
            constexpr int trailer_category = 13;
            constexpr int microtrailer = 5;
            constexpr int adaptive_trailers = 6;
            constexpr int captions_manifest = 7;
            constexpr int screenshot_medium = 10;
            constexpr int screenshot_full = 11;
            constexpr int trailer_base_id = 12;
            constexpr int all_ages = 14;
        } // namespace Trailer

        constexpr int highlights = 1;
        constexpr int other_trailers = 2;
    } // namespace Trailers

    namespace SupportedLanguage {
        constexpr int elanguage = 1;
        constexpr int eadditionallanguage = 5;
        constexpr int supported = 2;
        constexpr int full_audio = 3;
        constexpr int subtitles = 4;
    } // namespace SupportedLanguage

    namespace FreeWeekend {
        constexpr int start_time = 1;
        constexpr int end_time = 2;
        constexpr int text = 3;
        constexpr int appid = 4;
    } // namespace FreeWeekend

    namespace Link {
        constexpr int link_type = 1;
        constexpr int url = 2;
        constexpr int text = 3;
    } // namespace Link

    namespace PackageGroup {
        enum class EPackageGroupDisplayType : int {
            k_EPackageGroupDisplayType_Default = 0,
            k_EPackageGroupDisplayType_Dropdown = 1,
        };

        constexpr int name = 1;
        constexpr int heading = 2;
        constexpr int display_type = 3;
        constexpr int dropdown_title = 4;
        constexpr int dropdown_description_bbcode = 5;
    } // namespace PackageGroup

    namespace ExtraDetails {
        enum class EVideoExtrasNote : int {
            k_EVideoExtrasNote_Purchase = 0,
            k_EVideoExtrasNote_Rental = 1,
            k_EVideoExtrasNote_PurchaseRental = 2,
            k_EVideoExtrasNote_PurchaseSpecialEdition = 3,
            k_EVideoExtrasNote_PurchaseDeluxeEdition = 4,
        };

        namespace Anticheat {
            constexpr int kernel_mode = 1;
            constexpr int uninstall_completely = 2;
            constexpr int boot_protection = 3;
            constexpr int boot_protection_name = 4;
            constexpr int name = 5;
            constexpr int name_loc = 6;
        } // namespace Anticheat

        namespace Eula {
            constexpr int name = 1;
            constexpr int url = 2;
        } // namespace Eula

        namespace AIGeneratedContentService {
            constexpr int name = 1;
            constexpr int url = 2;
        } // namespace AIGeneratedContentService

        namespace PageSection {
            enum class EPageSectionBanner : int {
                k_EPageSectionBanner_None = 0,
                k_EPageSectionBanner_Workshop = 1,
                k_EPageSectionBanner_Follow = 2,
                k_EPageSectionBanner_MachineController = 3,
            };

            constexpr int label = 1;
            constexpr int content_bbcode = 2;
            constexpr int banner = 3;
        } // namespace PageSection

        namespace PressReview {
            constexpr int quote = 1;
            constexpr int score = 2;
            constexpr int site = 3;
            constexpr int url = 4;
        } // namespace PressReview

        namespace EarlyAccess {
            constexpr int why_bbcode = 1;
            constexpr int how_long_bbcode = 2;
            constexpr int full_version_bbcode = 3;
            constexpr int current_state_bbcode = 4;
            constexpr int pricing_bbcode = 5;
            constexpr int community_bbcode = 6;
            constexpr int description_bbcode = 7;
        } // namespace EarlyAccess

        namespace LinksAndInfo {
            constexpr int website = 1;
            constexpr int stats_url = 2;
            constexpr int online_manual_url = 3;
            constexpr int health_warning_url = 4;
            constexpr int privacy_policy_url = 5;
            constexpr int available_documents = 6;
            constexpr int genreids = 7;
            constexpr int manufacturers = 8;
            constexpr int achievements_visible = 9;
            constexpr int achievement_count = 10;
        } // namespace LinksAndInfo

        namespace Metacritic {
            constexpr int score = 1;
            constexpr int url = 2;
            constexpr int always_show = 3;
        } // namespace Metacritic

        namespace CastAndCrew {
            constexpr int directors = 1;
            constexpr int producers = 2;
            constexpr int writers = 3;
            constexpr int music = 4;
            constexpr int actors = 5;
        } // namespace CastAndCrew

        namespace SystemRequirements {
            enum class EUnsupportedOSNote : int {
                k_EUnsupportedOSNote_None = 0,
                k_EUnsupportedOSNote_Windows = 1,
                k_EUnsupportedOSNote_Mac = 2,
            };

            enum class ESysReqPlatform : int {
                k_ESysReqPlatform_Unknown = 0,
                k_ESysReqPlatform_Windows = 1,
                k_ESysReqPlatform_Mac = 2,
                k_ESysReqPlatform_Linux = 3,
                k_ESysReqPlatform_Android = 4,
            };

            namespace Size {
                constexpr int amount = 1;
                constexpr int units = 2;
            } // namespace Size

            namespace Requirements {
                constexpr int os_version = 1;
                constexpr int os_version_unsupported = 2;
                constexpr int processor = 3;
                constexpr int memory = 4;
                constexpr int graphics = 5;
                constexpr int directx = 6;
                constexpr int broadband = 7;
                constexpr int storage = 8;
                constexpr int storage_hq = 9;
                constexpr int sound_card = 10;
                constexpr int vr_support = 11;
                constexpr int notes = 12;
                constexpr int legacy_bbcode = 13;
            } // namespace Requirements

            namespace PlatformRequirements {
                constexpr int platform = 1;
                constexpr int minimum = 2;
                constexpr int recommended = 3;
                constexpr int requires_64bit = 4;
                constexpr int requires_apple_silicon = 5;
                constexpr int unsupported_os_note = 6;
            } // namespace PlatformRequirements

            constexpr int platforms = 1;
        } // namespace SystemRequirements

        namespace Episode {
            enum class EEpisodeType : int {
                k_EEpisodeType_Unknown = 0,
                k_EEpisodeType_Episode = 1,
                k_EEpisodeType_Chapter = 2,
                k_EEpisodeType_Bonus = 3,
                k_EEpisodeType_BehindTheScenes = 4,
                k_EEpisodeType_Deleted = 5,
            };

            constexpr int number = 1;
            constexpr int type = 2;
            constexpr int hide_details = 3;
        } // namespace Episode

        namespace Season {
            constexpr int index = 1;
            constexpr int name = 2;
            constexpr int episode_appids = 3;
        } // namespace Season

        constexpr int steam_award = 1;
        constexpr int vetted = 2;
        constexpr int no_mouse_keyboard_support = 3;
        constexpr int controller_wizard_complete = 4;
        constexpr int drm_third_party_type = 5;
        constexpr int drm_activation_limit = 6;
        constexpr int user_account_third_party = 7;
        constexpr int user_account_third_party_link_to_steam = 8;
        constexpr int anticheat = 9;
        constexpr int eula = 10;
        constexpr int ai_generation_service = 11;
        constexpr int refund_checks_ea_playtime = 12;
        constexpr int section = 13;
        constexpr int legal_notice_bbcode = 14;
        constexpr int interactive_elements = 15;
        constexpr int content_survey_notes = 16;
        constexpr int content_survey_ai_notes = 17;
        constexpr int press_review = 18;
        constexpr int partner_awards_bbcode = 19;
        constexpr int early_access = 20;
        constexpr int season_pass = 21;
        constexpr int links_and_info = 22;
        constexpr int item_store_eligible = 23;
        constexpr int points_shop_eligible = 24;
        constexpr int metacritic = 26;
        constexpr int cast_and_crew = 27;
        constexpr int system_requirements = 28;
        constexpr int running_time_minutes = 29;
        constexpr int episode = 30;
        constexpr int seasons = 31;
        constexpr int video_extras_note = 32;
    } // namespace ExtraDetails

    namespace OptInRegistrationTags {
        constexpr int optin_name = 1;
        constexpr int values = 2;
    } // namespace OptInRegistrationTags

    namespace PurchaseNote {
        enum class EPurchaseNoteType : int {
            k_EPurchaseNoteType_None = 0,
            k_EPurchaseNoteType_Notice = 1,
            k_EPurchaseNoteType_LowViolence = 2,
            k_EPurchaseNoteType_CreditCardRequired = 3,
            k_EPurchaseNoteType_SystemRequirements = 4,
        };

        constexpr int type = 1;
        constexpr int highlighted = 2;
        constexpr int text_bbcode = 3;
    } // namespace PurchaseNote

    constexpr int item_type = 1;
    constexpr int id = 2;
    constexpr int gid = 76;
    constexpr int success = 3;
    constexpr int visible = 4;
    constexpr int unvailable_for_country_restriction = 5;
    constexpr int name = 6;
    constexpr int store_url_path = 7;
    constexpr int store_url_slug = 8;
    constexpr int appid = 9;
    constexpr int type = 10;
    constexpr int included_types = 11;
    constexpr int included_appids = 12;
    constexpr int is_free = 13;
    constexpr int is_early_access = 14;
    constexpr int related_items = 15;
    constexpr int included_items = 16;
    constexpr int content_descriptorids = 20;
    constexpr int tagids = 21;
    constexpr int categories = 22;
    constexpr int reviews = 23;
    constexpr int basic_info = 24;
    constexpr int tags = 25;
    constexpr int assets = 30;
    constexpr int release = 31;
    constexpr int platforms = 32;
    constexpr int game_rating = 33;
    constexpr int is_coming_soon = 34;
    constexpr int best_purchase_option = 40;
    constexpr int purchase_options = 41;
    constexpr int self_purchase_option = 43;
    constexpr int screenshots = 50;
    constexpr int trailers = 51;
    constexpr int supported_languages = 52;
    constexpr int store_url_path_override = 53;
    constexpr int free_weekend = 54;
    constexpr int unlisted = 55;
    constexpr int game_count = 56;
    constexpr int internal_name = 57;
    constexpr int full_description_bbcode = 58;
    constexpr int is_free_temporarily = 59;
    constexpr int assets_without_overrides = 60;
    constexpr int user_filter_failure = 70;
    constexpr int links = 71;
    constexpr int purchase_description_bbcode = 72;
    constexpr int package_groups = 74;
    constexpr int extra_details = 75;
    constexpr int optin_registration_tags = 77;
    constexpr int purchase_notes = 78;

} // namespace StoreItem_fields

} // namespace sdk::proto

#endif // SDK_PROTO_STOREITEM_HPP

