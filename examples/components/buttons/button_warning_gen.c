/**
 * @file button_warning_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "button_warning_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * button_warning_create(lv_obj_t * parent, const char * button_label)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;
    static lv_style_t pr;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_bg_color(&main, lv_color_hex(0xf0b005));
        lv_style_set_bg_opa(&main, 255);
        lv_style_set_width(&main, LV_SIZE_CONTENT);
        lv_style_set_height(&main, LV_SIZE_CONTENT);
        lv_style_set_radius(&main, 12);
        lv_style_set_pad_hor(&main, 24);
        lv_style_set_pad_ver(&main, 12);
        lv_style_set_shadow_width(&main, 0);

        lv_style_init(&pr);
        lv_style_set_bg_color(&pr, lv_color_hex(0xf9ca4e));
        lv_style_set_bg_opa(&pr, 255);
        lv_style_set_width(&pr, LV_SIZE_CONTENT);
        lv_style_set_height(&pr, LV_SIZE_CONTENT);
        lv_style_set_radius(&pr, 12);
        lv_style_set_shadow_width(&pr, 20);
        lv_style_set_shadow_color(&pr, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&pr, 102);
        lv_style_set_shadow_offset_x(&pr, 0);
        lv_style_set_shadow_offset_y(&pr, 4);
        lv_style_set_pad_hor(&pr, 24);
        lv_style_set_pad_ver(&pr, 12);

        style_inited = true;
    }

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_add_style(lv_button_0, &main, 0);

    lv_obj_t * h3_0 = h3_create(lv_button_0, button_label);
    lv_obj_set_align(h3_0, LV_ALIGN_CENTER);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_button_0, "button_warning_#");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/