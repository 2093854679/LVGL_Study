
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdlib.h>
#include <unistd.h>
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "lvgl/lvgl.h"
#include "lvgl/examples/lv_examples.h"
#include "lvgl/demos/lv_demos.h"
#include "lv_drivers/sdl/sdl.h"
#include <stdio.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void hal_init(void);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *      VARIABLES
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
//显示一个对象
void demo_obj(){
// 1.构建显示图层
lv_obj_t* screen = lv_scr_act();
// 2.创建一个对象,显示在screen上
lv_obj_t* obj = lv_obj_create(screen);
// 3.设置它的位置
lv_obj_set_pos(obj,10,30);
// 4.设置它的宽度和高度
// lv_obj_set_height(obj,50);
// lv_obj_set_width(obj,50);
lv_obj_set_size(obj,80,80);
// 设置它的对齐
//lv_obj_center(obj);//居中
//底部居中，X偏移，Y偏移
lv_obj_align(obj,LV_ALIGN_BOTTOM_MID,0,0);
//设置样式
static lv_style_t style;
lv_style_init(&style);
lv_style_set_bg_color(&style, lv_palette_main(LV_PALETTE_RED));
//样式和对象关联起来
lv_obj_add_style(obj, &style, 0);
}
//显示一个文本
void demo_label(){
//1. 得到当前活跃的屏幕
lv_obj_t * screen = lv_scr_act();

//2. 创建文本对象
lv_obj_t * label = lv_label_create(screen);

//3. 设置文本对象的内容，位置，颜色
lv_label_set_text(label,"hello");

lv_label_set_long_mode(label,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_obj_set_width(label,150);//
//lv_obj_set_pos(label,100,100);
lv_obj_set_align(label,LV_ALIGN_CENTER);
lv_obj_set_style_text_color(label,lv_color_make(255,0,0),0);

//定义样式
static lv_style_t style;
lv_style_init(&style);
lv_style_set_text_font(&style,&lv_font_montserrat_38);

//将样式和对象关联起来
lv_obj_add_style(label,&style,0);
}
//显示一个中文
void demo_chinese(){
//声明字体
LV_FONT_DECLARE(alimama);

//1. 得到当前活跃的屏幕
lv_obj_t * screen = lv_scr_act();

//2. 创建文本对象
lv_obj_t * label = lv_label_create(screen);

//3. 设置文本对象的内容，位置，颜色
lv_label_set_text(label,"你好中国");

lv_label_set_long_mode(label,LV_LABEL_LONG_SCROLL_CIRCULAR);
lv_obj_set_width(label,150);//
//lv_obj_set_pos(label,100,100);
lv_obj_set_align(label,LV_ALIGN_CENTER);
lv_obj_set_style_text_color(label,lv_color_make(255,0,0),0);

//定义样式
static lv_style_t style;
lv_style_init(&style);
lv_style_set_text_font(&style,&alimama);

//将样式和对象关联起来
lv_obj_add_style(label,&style,0);
}
//显示按键
void demo_btn(){
  //得到屏幕
  lv_obj_t* screen = lv_scr_act();
  //创建对象
  lv_obj_t* btn = lv_btn_create(screen);
  //创建样式
  static lv_style_t style;
  lv_style_init (&style);

  lv_style_set_width(&style,100);
  lv_style_set_height(&style,60);

  //将样式和按钮绑定
  lv_obj_add_style(btn,&style,0);

  //创建一个文本
  lv_obj_t* label = lv_label_create(btn);//放在按钮里面
  lv_label_set_text(label,"button");
  lv_obj_center(label);
  lv_obj_center(btn);
}
//按键事件触发
void event_handler(lv_event_t* e)
  {
    printf("event_handler\r\n");
    //获取事件内容
    int code = lv_event_get_code(e);
    printf("code:%d click:%d \r\n",code,LV_EVENT_CLICKED);
    //获取对象
    lv_obj_t* obj = lv_event_get_target(e);
    printf("obj:%d",obj);
if(code == LV_EVENT_CLICKED){
  //改变按钮上面的文字
  lv_obj_t* label = lv_event_get_user_data(e);
  lv_label_set_text(label,"HGH");
}
else if(code == LV_EVENT_VALUE_CHANGED){
    //改变按钮上面的文字
  lv_obj_t* label = lv_event_get_user_data(e);
  lv_label_set_text(label,"HGH6");
}
}
void demo_btn_click(){

  //得到屏幕
  lv_obj_t* screen = lv_scr_act();
  //创建对象
  lv_obj_t* btn = lv_btn_create(screen);
  //创建样式
  static lv_style_t style;
  lv_style_init (&style);

  lv_style_set_width(&style,100);
  lv_style_set_height(&style,60);

  //将样式和按钮绑定
  lv_obj_add_style(btn,&style,0);

  //创建一个文本
  lv_obj_t* label = lv_label_create(btn);//放在按钮里面
  lv_label_set_text(label,"button");
  lv_obj_center(label);
  lv_obj_center(btn);

    printf("btn:%d",btn);

  //给按钮添加事件
  lv_obj_add_event_cb(btn,event_handler,LV_EVENT_CLICKED,label);

  //可选中的按钮
    lv_obj_t * btn2 = lv_btn_create(lv_scr_act());

    lv_obj_align(btn2, LV_ALIGN_CENTER, 0, 80);
    lv_obj_add_flag(btn2, LV_OBJ_FLAG_CHECKABLE);
    lv_obj_set_height(btn2, LV_SIZE_CONTENT);

    lv_obj_t* label2 = lv_label_create(btn2);
    lv_label_set_text(label2, "Toggle");
    lv_obj_center(label2);
    lv_obj_add_event_cb(btn2, event_handler, LV_EVENT_VALUE_CHANGED, label2);
}

//按键矩阵回调函数
//构建按钮矩阵
void btn_matrix_callback(lv_event_t* e){
  //获取当前触发的事件编码
  int code = lv_event_get_code(e);
  //获取当前的btnmatrix
  lv_event_t* btnmatrix = lv_event_get_target(e);
  if(code == LV_EVENT_VALUE_CHANGED){
    //获取当前被选中的的是哪一个按钮
   uint16_t selected_index = lv_btnmatrix_get_selected_btn(btnmatrix);
   //获取按钮对应的文本信息
    char* text = lv_btnmatrix_get_btn_text(btnmatrix,selected_index);
    printf("value:%s",text);
  }
}
void demo_btn_matrix(){
  //1.得到屏幕
  lv_obj_t* screen = lv_scr_act();
  //2.创建按钮矩阵]
  lv_obj_t* btn_matrix = lv_btnmatrix_create(screen);
  //3.设置
  static const char* map[] ={"1","2","3","\n","4","5","6","\n","7","8","9","\n","BACK","0","Enter"};
  //设置按钮内容
  lv_btnmatrix_set_map(btn_matrix,map);
  lv_obj_set_width(btn_matrix,200);
  //设置对齐
  lv_obj_set_align(btn_matrix,LV_ALIGN_CENTER);

  //添加事件
  lv_obj_add_event_cb(btn_matrix,btn_matrix_callback,LV_EVENT_VALUE_CHANGED,NULL);

}

//构建一个文本框textareawen输入框
static void textarea_event_handler(lv_event_t * e)
{
    lv_obj_t * ta = lv_event_get_target(e);
    LV_LOG_USER("Enter was pressed. The current text is: %s", lv_textarea_get_text(ta));
}
static void btnm_event_handler(lv_event_t * e)
{
    lv_obj_t * obj = lv_event_get_target(e);
    lv_obj_t * ta = lv_event_get_user_data(e);
    const char * txt = lv_btnmatrix_get_btn_text(obj, lv_btnmatrix_get_selected_btn(obj));

    if(strcmp(txt, LV_SYMBOL_BACKSPACE) == 0) lv_textarea_del_char(ta);
    else if(strcmp(txt, LV_SYMBOL_NEW_LINE) == 0) lv_event_send(ta, LV_EVENT_READY, NULL);
    else lv_textarea_add_text(ta, txt);

}
void demo_textarea(){
  //1.得到显示对象
  lv_obj_t* screen = lv_scr_act();
  //2. 创建要显示的对象
  lv_obj_t * ta = lv_textarea_create(screen);
  //3. 对显示的对象进行设置
  lv_textarea_set_one_line(ta, true);

  lv_obj_align(ta, LV_ALIGN_TOP_MID, 0, 10);
  lv_obj_add_event_cb(ta, textarea_event_handler, LV_EVENT_READY, ta);
  lv_obj_add_state(ta, LV_STATE_FOCUSED); /*To be sure the cursor is visible*/

  static const char * btnm_map[] = {"1", "2", "3", "\n",
                                      "4", "5", "6", "\n",
                                      "7", "8", "9", "\n",
                                      LV_SYMBOL_BACKSPACE, "0", LV_SYMBOL_NEW_LINE, ""
                                     };

    lv_obj_t * btnm = lv_btnmatrix_create(lv_scr_act());
    lv_obj_set_size(btnm, 200, 150);
    lv_obj_align(btnm, LV_ALIGN_BOTTOM_MID, 0, -10);
    lv_obj_add_event_cb(btnm, btnm_event_handler, LV_EVENT_VALUE_CHANGED, ta);
    lv_obj_clear_flag(btnm, LV_OBJ_FLAG_CLICK_FOCUSABLE); /*To keep the text area focused on button clicks*/
    lv_btnmatrix_set_map(btnm, btnm_map);
}

//显示一张图片
void demo_img(){
  //1. 创建显示对象
  lv_obj_t* screen = lv_scr_act();
  //2. 创建图像对象
  lv_obj_t* img = lv_img_create(screen);
  //3. 给图片对象设置图片
  //声明图片
  LV_IMG_DECLARE(IMG1);
  lv_img_set_src(img,&IMG1);
  lv_obj_align(img,LV_ALIGN_CENTER,0,0);
}

//显示一张gif
void demo_gif(){
  //1. 创建显示对象
  lv_obj_t* screen = lv_scr_act();
  //2. 创建图像对象
  lv_obj_t* gif = lv_gif_create(screen);
  //3. 给图片对象设置图片
  //声明图片
  LV_IMG_DECLARE(fire);
  lv_gif_set_src(gif,&fire);
  lv_obj_align(gif,LV_ALIGN_CENTER,0,0);
  
}

//多页面切换
lv_obj_t* page1;
lv_obj_t* page2;
void event_handler_page1(lv_event_t* e)
{
  //提取事件对象中的事件代码,判断是哪种触发类型
  int code = lv_event_get_code(e);
  if(code == LV_EVENT_CLICKED){
    //获取用户传递的数据
    uint8_t index = lv_event_get_user_data(e);

    switch(index){
      case 1:
      //跳转去二号界面
      lv_disp_load_scr(page2);break;
      case 2:
      lv_disp_load_scr(page1);break;
      default:
      break;

    }
  }


  }

void create_page1(){
  //创建一个界面
  page1 = lv_obj_create(NULL);
  //
  lv_obj_t* obj = lv_obj_create(page1);
  //显示一些内容
  static lv_style_t style;
  lv_style_init(&style);
  lv_style_set_width(&style,100);
  lv_style_set_height(&style,100);
  lv_style_set_bg_color(&style,lv_palette_main(LV_PALETTE_RED));

  lv_obj_add_style(obj,&style,0);

  //添加显示文本
  lv_obj_t* label = lv_label_create(obj);
  lv_label_set_text(label,"page1");
  lv_obj_set_align(label,LV_ALIGN_CENTER);

  //添加单击事件
  lv_obj_add_event_cb(obj,event_handler_page1,LV_EVENT_CLICKED,1);
}

void create_page2(){
  //创建一个界面
  page2 = lv_obj_create(NULL);
  lv_obj_t* obj = lv_obj_create(page2);
  //显示一些内容
  static lv_style_t style;
  lv_style_init(&style);
  lv_style_set_width(&style,100);
  lv_style_set_height(&style,100);
  lv_style_set_bg_color(&style,lv_palette_main(LV_PALETTE_YELLOW));

  lv_obj_add_style(obj,&style,0);

  //添加显示文本
  lv_obj_t* label = lv_label_create(obj);
  lv_label_set_text(label,"page2");
  lv_obj_set_align(label,LV_ALIGN_CENTER);
    //添加单击事件
  lv_obj_add_event_cb(obj,event_handler_page1,LV_EVENT_CLICKED,2);
}

int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/
  lv_init();

  /*Initialize the HAL (display, input devices, tick) for LVGL*/
  hal_init();

//lv_demo_music();
  lv_example_switch_1();
//  lv_example_calendar_1();
//  lv_example_btnmatrix_2();
//  lv_example_checkbox_1();
//  lv_example_colorwheel_1();
//  lv_example_chart_6();
//  lv_example_table_2();
//  lv_example_scroll_2();
//  lv_example_textarea_1();
//  lv_example_msgbox_1();
//  lv_example_dropdown_2();
//  lv_example_btn_1();
//  lv_example_scroll_1();
//  lv_example_tabview_1();
//  lv_example_tabview_1();
//  lv_example_flex_3();
//  lv_example_label_1();

//自己写的例程

//lv_demo_widgets();
//demo_obj();
//demo_chinese();
//demo_label();
//demo_btn();
//demo_btn_click();
//demo_btn_matrix();
//demo_textarea();
//demo_img();
//demo_gif();

// create_page1();
// create_page2();
// //默认显示
// lv_disp_load_scr(page1);

 // ui_init();
  while(1) {
      /* Periodically call the lv_task handler.
       * It could be done in a timer interrupt or an OS task too.*/
     // lv_timer_handler();
     // usleep(5 * 1000);
  }

  return 0;
}


/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Initialize the Hardware Abstraction Layer (HAL) for the LVGL graphics
 * library
 */
static void hal_init(void)
{
  /* Use the 'monitor' driver which creates window on PC's monitor to simulate a display*/
  sdl_init();

  /*Create a display buffer*/
  static lv_disp_draw_buf_t disp_buf1;
  static lv_color_t buf1_1[SDL_HOR_RES * 100];
  lv_disp_draw_buf_init(&disp_buf1, buf1_1, NULL, SDL_HOR_RES * 100);

  /*Create a display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv); /*Basic initialization*/
  disp_drv.draw_buf = &disp_buf1;
  disp_drv.flush_cb = sdl_display_flush;
  disp_drv.hor_res = SDL_HOR_RES;
  disp_drv.ver_res = SDL_VER_RES;

  lv_disp_t * disp = lv_disp_drv_register(&disp_drv);

  lv_theme_t * th = lv_theme_default_init(disp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), LV_THEME_DEFAULT_DARK, LV_FONT_DEFAULT);
  lv_disp_set_theme(disp, th);

  lv_group_t * g = lv_group_create();
  lv_group_set_default(g);

  /* Add the mouse as input device
   * Use the 'mouse' driver which reads the PC's mouse*/
  static lv_indev_drv_t indev_drv_1;
  lv_indev_drv_init(&indev_drv_1); /*Basic initialization*/
  indev_drv_1.type = LV_INDEV_TYPE_POINTER;

  /*This function will be called periodically (by the library) to get the mouse position and state*/
  indev_drv_1.read_cb = sdl_mouse_read;
  lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_1);

  static lv_indev_drv_t indev_drv_2;
  lv_indev_drv_init(&indev_drv_2); /*Basic initialization*/
  indev_drv_2.type = LV_INDEV_TYPE_KEYPAD;
  indev_drv_2.read_cb = sdl_keyboard_read;
  lv_indev_t *kb_indev = lv_indev_drv_register(&indev_drv_2);
  lv_indev_set_group(kb_indev, g);

  static lv_indev_drv_t indev_drv_3;
  lv_indev_drv_init(&indev_drv_3); /*Basic initialization*/
  indev_drv_3.type = LV_INDEV_TYPE_ENCODER;
  indev_drv_3.read_cb = sdl_mousewheel_read;
  lv_indev_t * enc_indev = lv_indev_drv_register(&indev_drv_3);
  lv_indev_set_group(enc_indev, g);

  /*Set a cursor for the mouse*/
  LV_IMG_DECLARE(mouse_cursor_icon); /*Declare the image file.*/
  lv_obj_t * cursor_obj = lv_img_create(lv_scr_act()); /*Create an image object for the cursor */
  lv_img_set_src(cursor_obj, &mouse_cursor_icon);           /*Set the image source*/
  lv_indev_set_cursor(mouse_indev, cursor_obj);             /*Connect the image  object to the driver*/
}
