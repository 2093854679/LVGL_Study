// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "../ui.h"

void ui_weather_1_screen_init(void)
{
    ui_weather_1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_weather_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_weather_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weather_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg_4 = lv_img_create(ui_weather_1);
    lv_img_set_src(ui_bg_4, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg_4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg_4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg_4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg_4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg_4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_city_gruop_1 = ui_titlegroup_create(ui_weather_1);
    lv_obj_set_x(ui_city_gruop_1, -42);
    lv_obj_set_y(ui_city_gruop_1, -303);
    lv_obj_set_align(ui_city_gruop_1, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_x(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_TITLE), -28);
    lv_obj_set_y(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_align(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_TITLE), LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_TITLE), "New York");
    lv_obj_set_style_text_font(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_TITLE), &ui_font_Subtitle,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_label_set_text(ui_comp_get_child(ui_city_gruop_1, UI_COMP_TITLEGROUP_SUBTITLE), "03. 01. Monday");

    ui_weather_title_group_3 = ui_titlegroup_create(ui_weather_1);
    lv_obj_set_x(ui_weather_title_group_3, -59);
    lv_obj_set_y(ui_weather_title_group_3, -112);
    lv_obj_set_align(ui_weather_title_group_3, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_x(ui_comp_get_child(ui_weather_title_group_3, UI_COMP_TITLEGROUP_TITLE), -28);
    lv_obj_set_y(ui_comp_get_child(ui_weather_title_group_3, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_label_set_text(ui_comp_get_child(ui_weather_title_group_3, UI_COMP_TITLEGROUP_TITLE), "Partly Cloudy");

    lv_label_set_text(ui_comp_get_child(ui_weather_title_group_3, UI_COMP_TITLEGROUP_SUBTITLE), "Max: 18° Min: 12°");

    ui_label_degree = lv_label_create(ui_weather_1);
    lv_obj_set_width(ui_label_degree, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_degree, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_degree, -64);
    lv_obj_set_y(ui_label_degree, -20);
    lv_obj_set_align(ui_label_degree, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_degree, "25°");
    lv_obj_set_style_text_color(ui_label_degree, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_degree, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_degree, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rain_group = lv_obj_create(ui_weather_1);
    lv_obj_set_width(ui_rain_group, 68);
    lv_obj_set_height(ui_rain_group, 33);
    lv_obj_set_x(ui_rain_group, 95);
    lv_obj_set_y(ui_rain_group, -50);
    lv_obj_set_align(ui_rain_group, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_flex_flow(ui_rain_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_rain_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_rain_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_rain_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rain_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_rain_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_rain_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rain_icon = lv_img_create(ui_rain_group);
    lv_img_set_src(ui_rain_icon, &ui_img_rain_png);
    lv_obj_set_width(ui_rain_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rain_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_rain_icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_rain_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_rain_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_rain_percent = lv_label_create(ui_rain_group);
    lv_obj_set_width(ui_rain_percent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rain_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_rain_percent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rain_percent, "18%");
    lv_obj_set_style_text_color(ui_rain_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rain_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rain_percent, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wind_group = lv_obj_create(ui_weather_1);
    lv_obj_set_width(ui_wind_group, 115);
    lv_obj_set_height(ui_wind_group, 33);
    lv_obj_set_x(ui_wind_group, 190);
    lv_obj_set_y(ui_wind_group, -50);
    lv_obj_set_align(ui_wind_group, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_flex_flow(ui_wind_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_wind_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_wind_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_wind_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wind_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_wind_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_wind_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wind_icon = lv_img_create(ui_wind_group);
    lv_img_set_src(ui_wind_icon, &ui_img_wind_png);
    lv_obj_set_width(ui_wind_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wind_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_wind_icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_wind_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_wind_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_wind_speed = lv_label_create(ui_wind_group);
    lv_obj_set_width(ui_wind_speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wind_speed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_wind_speed, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wind_speed, "54 km/h");
    lv_obj_set_style_text_color(ui_wind_speed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wind_speed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wind_speed, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weather_dots_group = lv_obj_create(ui_weather_1);
    lv_obj_set_width(ui_weather_dots_group, 49);
    lv_obj_set_height(ui_weather_dots_group, 18);
    lv_obj_set_x(ui_weather_dots_group, 0);
    lv_obj_set_y(ui_weather_dots_group, -14);
    lv_obj_set_align(ui_weather_dots_group, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_weather_dots_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_weather_dots_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_weather_dots_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_weather_dots_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weather_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_weather_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_weather_dots_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot1 = lv_obj_create(ui_weather_dots_group);
    lv_obj_set_width(ui_dot1, 10);
    lv_obj_set_height(ui_dot1, 10);
    lv_obj_set_align(ui_dot1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot2 = lv_obj_create(ui_weather_dots_group);
    lv_obj_set_width(ui_dot2, 6);
    lv_obj_set_height(ui_dot2, 6);
    lv_obj_set_align(ui_dot2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_dot2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot2, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weather_image_group = lv_obj_create(ui_weather_1);
    lv_obj_set_width(ui_weather_image_group, 240);
    lv_obj_set_height(ui_weather_image_group, 306);
    lv_obj_set_x(ui_weather_image_group, 14);
    lv_obj_set_y(ui_weather_image_group, 0);
    lv_obj_set_align(ui_weather_image_group, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_weather_image_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_weather_image_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_weather_image_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sun = lv_img_create(ui_weather_image_group);
    lv_img_set_src(ui_sun, &ui_img_sun_png);
    lv_obj_set_width(ui_sun, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sun, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_sun, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_sun, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_sun, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_clouds = lv_img_create(ui_weather_image_group);
    lv_img_set_src(ui_clouds, &ui_img_clouds_png);
    lv_obj_set_width(ui_clouds, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_clouds, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_clouds, 38);
    lv_obj_set_y(ui_clouds, -13);
    lv_obj_set_align(ui_clouds, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_clouds, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_clouds, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_button_down3 = ui_buttondown_create(ui_weather_1);
    lv_obj_set_x(ui_button_down3, 146);
    lv_obj_set_y(ui_button_down3, 102);

    lv_img_set_src(ui_comp_get_child(ui_button_down3, UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON), &ui_img_house_png);

    lv_obj_add_event_cb(ui_button_down3, ui_event_button_down3_buttondown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_weather_1, ui_event_weather_1, LV_EVENT_ALL, NULL);

}
