// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_watch_bg_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, -54);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "03 27");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, -54);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, ":");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 240);
    lv_obj_set_height(ui_Panel1, 280);
    lv_obj_set_x(ui_Panel1, -1);
    lv_obj_set_y(ui_Panel1, 0);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sec = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_sec, &ui_img_clockwise_sec_png);
    lv_obj_set_width(ui_sec, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sec, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sec, 0);
    lv_obj_set_y(ui_sec, -65);
    lv_obj_set_align(ui_sec, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_sec, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_sec, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_sec, 15, 155);
    lv_img_set_angle(ui_sec, 300);
    lv_img_set_zoom(ui_sec, 200);

    ui_min = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_min, &ui_img_clockwise_min_png);
    lv_obj_set_width(ui_min, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_min, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_min, 0);
    lv_obj_set_y(ui_min, -65);
    lv_obj_set_align(ui_min, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_min, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_min, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_min, 9, 156);
    lv_img_set_zoom(ui_min, 180);

    ui_hour = lv_img_create(ui_Panel1);
    lv_img_set_src(ui_hour, &ui_img_clockwise_hour_png);
    lv_obj_set_width(ui_hour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour, 0);
    lv_obj_set_y(ui_hour, -38);
    lv_obj_set_align(ui_hour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_hour, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_hour, 9, 93);
    lv_img_set_angle(ui_hour, 500);
    lv_img_set_zoom(ui_hour, 180);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);
    uic_Image1 = ui_Image1;

}