/**
 * @file h2_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "h2_gen.h"
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

lv_obj_t * h2_create(lv_obj_t * parent, const char * heading_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_text_font(&main, inter_md);

        style_inited = true;
    }

    lv_obj_t * lv_label_0 = lv_label_create(parent);
    lv_label_set_text(lv_label_0, heading_text);
    lv_obj_add_style(lv_label_0, &main, 0);


    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_label_0, "h2_#");

    return lv_label_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/