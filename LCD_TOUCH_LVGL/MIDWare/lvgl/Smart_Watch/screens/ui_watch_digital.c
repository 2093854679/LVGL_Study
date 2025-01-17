// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "../ui.h"

void ui_watch_digital_screen_init(void)
{
    ui_watch_digital = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_watch_digital, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_watch_digital, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_watch_digital, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg_1 = lv_img_create(ui_watch_digital);
    lv_img_set_src(ui_bg_1, &ui_img_bg1_png);
    lv_obj_set_width(ui_bg_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_hour_group = lv_obj_create(ui_watch_digital);
    lv_obj_set_width(ui_hour_group, 289);
    lv_obj_set_height(ui_hour_group, 222);
    lv_obj_clear_flag(ui_hour_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_hour_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_hour_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_hour_1 = lv_label_create(ui_hour_group);
    lv_obj_set_width(ui_label_hour_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_hour_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_hour_1, -23);
    lv_obj_set_y(ui_label_hour_1, 60);
    lv_label_set_text(ui_label_hour_1, "0");
    lv_obj_set_style_text_color(ui_label_hour_1, lv_color_hex(0x393939), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_hour_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_hour_1, &ui_font_Number_extra, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_hour_2 = lv_label_create(ui_hour_group);
    lv_obj_set_width(ui_label_hour_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_hour_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_hour_2, 93);
    lv_obj_set_y(ui_label_hour_2, 60);
    lv_label_set_text(ui_label_hour_2, "3");
    lv_obj_set_style_text_color(ui_label_hour_2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_hour_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_hour_2, &ui_font_Number_extra, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_min = lv_label_create(ui_watch_digital);
    lv_obj_set_width(ui_label_min, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_min, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_min, 204);
    lv_obj_set_y(ui_label_min, 156);
    lv_label_set_text(ui_label_min, "27");
    lv_obj_set_style_text_color(ui_label_min, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_min, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_min, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery_group = ui_batterygroup_create(ui_watch_digital);
    lv_obj_set_x(ui_battery_group, 0);
    lv_obj_set_y(ui_battery_group, 20);



    ui_date_group = ui_dategroup_create(ui_watch_digital);
    lv_obj_set_x(ui_date_group, 58);
    lv_obj_set_y(ui_date_group, 53);



    ui_weather_group_1 = ui_weathergroup1_create(ui_watch_digital);
    lv_obj_set_x(ui_weather_group_1, -55);
    lv_obj_set_y(ui_weather_group_1, 32);


    lv_img_set_src(ui_comp_get_child(ui_weather_group_1, UI_COMP_WEATHERGROUP1_CLOUD_FOG_1), &ui_img_weather_sun_cloud_png);

    ui_weather_title_group_1 = ui_titlegroup_create(ui_watch_digital);
    lv_obj_set_x(ui_weather_title_group_1, 13);
    lv_obj_set_y(ui_weather_title_group_1, -83);
    lv_obj_set_align(ui_weather_title_group_1, LV_ALIGN_BOTTOM_MID);

    lv_label_set_text(ui_comp_get_child(ui_weather_title_group_1, UI_COMP_TITLEGROUP_TITLE), "Partly Cloudy");

    lv_label_set_text(ui_comp_get_child(ui_weather_title_group_1, UI_COMP_TITLEGROUP_SUBTITLE), "Max: 18° Min: 12°");

    ui_step_group = ui_stepgroup_create(ui_watch_digital);
    lv_obj_set_x(ui_step_group, 0);
    lv_obj_set_y(ui_step_group, -40);



    ui_daily_mission_group = ui_dailymissiongroup_create(ui_watch_digital);
    lv_obj_set_x(ui_daily_mission_group, 0);
    lv_obj_set_y(ui_daily_mission_group, 0);





    ui_button_top = ui_buttontop_create(ui_watch_digital);
    lv_obj_set_x(ui_button_top, 145);
    lv_obj_set_y(ui_button_top, -105);



    ui_button_down = ui_buttondown_create(ui_watch_digital);
    lv_obj_set_x(ui_button_down, 146);
    lv_obj_set_y(ui_button_down, 102);



    ui_sec_dot = lv_img_create(ui_watch_digital);
    lv_img_set_src(ui_sec_dot, &ui_img_sec_dot_png);
    lv_obj_set_width(ui_sec_dot, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sec_dot, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sec_dot, 0);
    lv_obj_set_y(ui_sec_dot, -190);
    lv_obj_set_align(ui_sec_dot, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_sec_dot, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_sec_dot, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_sec_dot, 4, 194);

    ui_weather_dots_group2 = lv_obj_create(ui_watch_digital);
    lv_obj_set_width(ui_weather_dots_group2, 20);
    lv_obj_set_height(ui_weather_dots_group2, 50);
    lv_obj_set_x(ui_weather_dots_group2, -10);
    lv_obj_set_y(ui_weather_dots_group2, 0);
    lv_obj_set_align(ui_weather_dots_group2, LV_ALIGN_RIGHT_MID);
    lv_obj_set_flex_flow(ui_weather_dots_group2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_weather_dots_group2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_weather_dots_group2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_weather_dots_group2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weather_dots_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_weather_dots_group2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_weather_dots_group2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot14 = lv_obj_create(ui_weather_dots_group2);
    lv_obj_set_width(ui_dot14, 10);
    lv_obj_set_height(ui_dot14, 10);
    lv_obj_set_align(ui_dot14, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot14, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot14, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot15 = lv_obj_create(ui_weather_dots_group2);
    lv_obj_set_width(ui_dot15, 6);
    lv_obj_set_height(ui_dot15, 6);
    lv_obj_set_align(ui_dot15, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot15, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot15, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot15, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_button_top, ui_event_button_top_buttontop, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_button_down, ui_event_button_down_buttondown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_watch_digital, ui_event_watch_digital, LV_EVENT_ALL, NULL);

}
