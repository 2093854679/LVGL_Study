// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: Smartwatch

#include "../ui.h"

void ui_measuing_screen_init(void)
{
    ui_measuing = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_measuing, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_measuing, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_measuing, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg7 = lv_img_create(ui_measuing);
    lv_img_set_src(ui_bg7, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bg7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_bg7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bg7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_pulse_group3 = ui_pulsegroup_create(ui_measuing);
    lv_obj_set_x(ui_pulse_group3, 0);
    lv_obj_set_y(ui_pulse_group3, 70);
    lv_obj_set_style_border_color(ui_pulse_group3, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pulse_group3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pulse_group3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pulse_group3, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_measuring = lv_label_create(ui_measuing);
    lv_obj_set_width(ui_measuring, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_measuring, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_measuring, 0);
    lv_obj_set_y(ui_measuring, 120);
    lv_obj_set_align(ui_measuring, LV_ALIGN_CENTER);
    lv_label_set_text(ui_measuring, "Measuring...");
    lv_obj_set_style_text_color(ui_measuring, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_measuring, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_measuring, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner2 = lv_spinner_create(ui_measuing, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 200);
    lv_obj_set_height(ui_Spinner2, 200);
    lv_obj_set_x(ui_Spinner2, 0);
    lv_obj_set_y(ui_Spinner2, -70);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0x3E413E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0xEE1C18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Spinner2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_blood_group = lv_obj_create(ui_measuing);
    lv_obj_set_width(ui_blood_group, 160);
    lv_obj_set_height(ui_blood_group, 160);
    lv_obj_set_x(ui_blood_group, 0);
    lv_obj_set_y(ui_blood_group, -70);
    lv_obj_set_align(ui_blood_group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_blood_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_blood_group, 160, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_blood_group, lv_color_hex(0x390800), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_blood_group, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_blood_group, lv_color_hex(0x4E2725), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_blood_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_blood_group, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_blood_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood1 = lv_img_create(ui_blood_group);
    lv_img_set_src(ui_blood1, &ui_img_wave2_png);
    lv_obj_set_width(ui_blood1, 400);
    lv_obj_set_height(ui_blood1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_blood1, -97);
    lv_obj_set_y(ui_blood1, -6);
    lv_obj_set_align(ui_blood1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_blood1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_blood1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_blood_fill = lv_obj_create(ui_blood_group);
    lv_obj_set_height(ui_blood_fill, 71);
    lv_obj_set_width(ui_blood_fill, lv_pct(100));
    lv_obj_set_align(ui_blood_fill, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_blood_fill, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_blood_fill, lv_color_hex(0xDE615A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_fill, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_blood_fill, lv_color_hex(0xDE1810), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_blood_fill, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood2 = lv_img_create(ui_blood_group);
    lv_img_set_src(ui_blood2, &ui_img_wave1_png);
    lv_obj_set_width(ui_blood2, 402);
    lv_obj_set_height(ui_blood2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_blood2, -50);
    lv_obj_set_y(ui_blood2, -3);
    lv_obj_set_align(ui_blood2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_blood2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_blood2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_x_button = lv_btn_create(ui_measuing);
    lv_obj_set_width(ui_x_button, 50);
    lv_obj_set_height(ui_x_button, 65);
    lv_obj_set_align(ui_x_button, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_x_button, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_x_button, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_x_button, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_x_button, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_x_button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_x = lv_img_create(ui_x_button);
    lv_img_set_src(ui_x, &ui_img_x_png);
    lv_obj_set_width(ui_x, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_x, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_x, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_x, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_x, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_x_button, ui_event_x_button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_measuing, ui_event_measuing, LV_EVENT_ALL, NULL);

}
