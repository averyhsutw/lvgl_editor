/**
 * @file home_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "home_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define SLIDER_BOX_WIDTH 155

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

lv_obj_t * home_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t main;
    static lv_style_t cont;
    static lv_style_t left_cont;
    static lv_style_t right_cont;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_bg_color(&main, lv_color_hex(0x111111));
        lv_style_set_radius(&main, 0);
        lv_style_set_border_width(&main, 0);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_ROW);
        lv_style_set_width(&main, lv_pct(100));
        lv_style_set_height(&main, lv_pct(100));
        lv_style_set_pad_all(&main, 0);
        lv_style_set_pad_column(&main, 0);

        lv_style_init(&cont);
        lv_style_set_height(&cont, lv_pct(100));
        lv_style_set_bg_color(&cont, lv_color_hex(0x333333));
        lv_style_set_flex_flow(&cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_layout(&cont, LV_LAYOUT_FLEX);
        lv_style_set_radius(&cont, 0);
        lv_style_set_pad_all(&cont, 0);
        lv_style_set_pad_row(&cont, 16);

        lv_style_init(&left_cont);
        lv_style_set_width(&left_cont, LV_SIZE_CONTENT);
        lv_style_set_border_width(&left_cont, 0);
        lv_style_set_pad_all(&left_cont, 16);

        lv_style_init(&right_cont);
        lv_style_set_layout(&right_cont, LV_LAYOUT_FLEX);
        lv_style_set_bg_opa(&right_cont, 0);
        lv_style_set_border_width(&right_cont, 0);
        lv_style_set_flex_flow(&right_cont, LV_FLEX_FLOW_COLUMN);
        lv_style_set_flex_track_place(&right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_cross_place(&right_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_all(&right_cont, 16);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_add_style(lv_obj_0, &main, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_add_style(lv_obj_1, &cont, 0);
    lv_obj_add_style(lv_obj_1, &left_cont, 0);

    lv_obj_t * slider_box_0 = slider_box_create(lv_obj_1);
    lv_obj_set_width(slider_box_0, SLIDER_BOX_WIDTH);
    slider_box_set_title(slider_box_0, "Room 1");


    lv_obj_t * slider_box_1 = slider_box_create(lv_obj_1);
    lv_obj_set_width(slider_box_1, SLIDER_BOX_WIDTH);
    slider_box_set_title(slider_box_1, "Room 2");


    lv_obj_t * slider_box_2 = slider_box_create(lv_obj_1);
    lv_obj_set_width(slider_box_2, SLIDER_BOX_WIDTH);
    slider_box_set_title(slider_box_2, "Room 3");


    lv_obj_t * slider_box_3 = slider_box_create(lv_obj_1);
    lv_obj_set_width(slider_box_3, SLIDER_BOX_WIDTH);
    slider_box_set_title(slider_box_3, "Room 4");


    lv_obj_t * slider_box_4 = slider_box_create(lv_obj_1);
    lv_obj_set_width(slider_box_4, SLIDER_BOX_WIDTH);
    slider_box_set_title(slider_box_4, "Room 5");



    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_grow(lv_obj_2, 1);
    lv_obj_add_style(lv_obj_2, &cont, 0);
    lv_obj_add_style(lv_obj_2, &right_cont, 0);

    lv_obj_t * button_default_0 = button_default_create(lv_obj_2, "Ok");


    lv_obj_t * button_default_1 = button_default_create(lv_obj_2, "Cancel");


    lv_obj_t * dark_slider_0 = dark_slider_create(lv_obj_2);
    lv_obj_set_width(dark_slider_0, lv_pct(100));
    dark_slider_set_color(dark_slider_0, lv_color_hex(0xee7a4d));


    lv_obj_t * button_warning_0 = button_warning_create(lv_obj_2, "Alert 1");


    lv_obj_t * button_warning_1 = button_warning_create(lv_obj_2, "Alert 2");


    lv_obj_t * button_error_0 = button_error_create(lv_obj_2, "Error 1");


    lv_obj_t * button_error_1 = button_error_create(lv_obj_2, "Error 2");




    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "home");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/