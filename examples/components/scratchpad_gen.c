/**
 * @file scratchpad_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "scratchpad_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

#define LONG lv_pct(100)

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

lv_obj_t * scratchpad_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t slider_cont;

    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&slider_cont);
        lv_style_set_layout(&slider_cont, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&slider_cont, LV_FLEX_FLOW_ROW);
        lv_style_set_bg_opa(&slider_cont, (255 * 100 / 100));
        lv_style_set_border_opa(&slider_cont, 0);
        lv_style_set_flex_cross_place(&slider_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&slider_cont, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_column(&slider_cont, 20);

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);
    lv_obj_set_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(lv_obj_0, lv_pct(100));
    lv_obj_set_height(lv_obj_0, lv_pct(100));

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_flex_grow(lv_obj_1, 1);
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x114488), 0);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_add_style(lv_obj_2, &slider_cont, 0);

    lv_obj_t * lv_slider_0 = lv_slider_create(lv_obj_2);
    lv_slider_bind_value(lv_slider_0, &room_1_temp);
    lv_obj_set_flex_grow(lv_slider_0, 1);


    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_2);
    lv_label_bind_text(lv_label_0, &room_1_temp, NULL);lv_obj_set_width(lv_label_0, 25);
    lv_obj_set_y(lv_label_0, 0);



    lv_obj_t * lv_image_0 = lv_image_create(lv_obj_1);
    lv_image_set_src(lv_image_0, lvgl_logo);
    lv_image_set_inner_align(lv_image_0, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_width(lv_image_0, 200);
    lv_obj_set_height(lv_image_0, 80);


    lv_obj_t * button_default_0 = button_default_create(lv_obj_1, "Hello 1");
    lv_obj_set_width(button_default_0, LONG);


    lv_obj_t * button_warning_0 = button_warning_create(lv_obj_1, "Hello 2");
    lv_obj_set_width(button_warning_0, LONG);


    lv_obj_t * button_error_0 = button_error_create(lv_obj_1, "Hello 4");
    lv_obj_set_width(button_error_0, LONG);


    lv_obj_t * button_warning_1 = button_warning_create(lv_obj_1, "Hello 5");
    lv_obj_set_width(button_warning_1, LONG);


    lv_obj_t * button_default_1 = button_default_create(lv_obj_1, "Hello 6");
    lv_obj_set_width(button_default_1, LONG);


    lv_obj_t * button_default_2 = button_default_create(lv_obj_1, "Hello 7");
    lv_obj_set_width(button_default_2, LONG);


    lv_obj_t * button_default_3 = button_default_create(lv_obj_1, "Hello 8");
    lv_obj_set_width(button_default_3, LONG);


    lv_obj_t * button_default_4 = button_default_create(lv_obj_1, "Hello 9");
    lv_obj_set_width(button_default_4, LONG);



    lv_obj_t * lv_chart_0 = lv_chart_create(lv_obj_0);
    lv_obj_set_flex_grow(lv_chart_0, 1);
    lv_obj_set_height(lv_chart_0, lv_pct(100));
    lv_chart_series_t * lv_chart_series_0 = lv_chart_add_series(lv_chart_0, lv_color_hex(0xe34141), LV_CHART_AXIS_PRIMARY_Y);
    lv_chart_set_series_values(lv_chart_0, lv_chart_series_0, (const int[]) {10, 20, 30, 30, 20, 80, 70, 90, 66}, 9);    lv_chart_series_t * lv_chart_series_1 = lv_chart_add_series(lv_chart_0, lv_color_hex(0x4c4ce9), LV_CHART_AXIS_SECONDARY_Y);
    lv_chart_set_series_values(lv_chart_0, lv_chart_series_1, (const int[]) {3, 5, 4, 7, 1, 0, 3}, 7);    lv_chart_set_axis_max_value(lv_chart_0, LV_CHART_AXIS_SECONDARY_Y, 10);
    lv_chart_set_axis_min_value(lv_chart_0, LV_CHART_AXIS_SECONDARY_Y, 0);



    LV_TRACE_OBJ_CREATE("finished");

    lv_obj_set_name(lv_obj_0, "scratchpad_#");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/