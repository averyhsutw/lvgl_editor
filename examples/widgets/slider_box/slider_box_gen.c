/**
 * @file slider_box_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "slider_box_private_gen.h"
#include "lvgl/src/core/lv_obj_class_private.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  GLOBAL PROTOTYPES
 **********************/

void slider_box_constructor_hook(lv_obj_t * obj);
void slider_box_destructor_hook(lv_obj_t * obj);
void slider_box_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void slider_box_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void slider_box_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void slider_box_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t slider_box_class = {
    .base_class = &lv_obj_class,
    .constructor_cb = slider_box_constructor,
    .destructor_cb = slider_box_destructor,
    .event_cb = slider_box_event,
    .instance_size = sizeof(slider_box_t),
    .editable = 1,
    .name = "slider_box"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


lv_obj_t * slider_box_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&slider_box_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static void slider_box_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    slider_box_t * widget = (slider_box_t *)obj;
    static lv_style_t main;
static lv_style_t button;
    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_bg_color(&main, lv_color_hex(0x000666));
        lv_style_set_bg_opa(&main, 255);
        lv_style_set_radius(&main, 12);
        lv_style_set_width(&main, 180);
        lv_style_set_height(&main, LV_SIZE_CONTENT);
        lv_style_set_layout(&main, LV_LAYOUT_FLEX);
        lv_style_set_flex_flow(&main, LV_FLEX_FLOW_ROW_WRAP);
        lv_style_set_flex_cross_place(&main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_pad_row(&main, 10);
        lv_style_set_pad_column(&main, 4);
        lv_style_set_pad_all(&main, 16);
        lv_style_set_text_font(&main, inter_sm);
        lv_style_set_text_color(&main, lv_color_hex(0xffffff));

        lv_style_init(&button);
        lv_style_set_radius(&button, 100);
        lv_style_set_text_font(&button, inter_xl);
        lv_style_set_shadow_width(&button, 0);
        lv_style_set_bg_color(&button, lv_color_hex(0x222222));

        style_inited = true;
    }
    lv_obj_set_align(obj, LV_ALIGN_CENTER);
    lv_obj_add_style(obj, &main, 0);

    lv_obj_t * lv_button_0 = lv_button_create(obj);
    lv_obj_set_width(lv_button_0, 30);
    lv_obj_set_height(lv_button_0, 30);
    widget->lv_button_0 = lv_button_0;
    lv_obj_add_style(lv_button_0, &button, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "-");
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    widget->lv_label_0 = lv_label_0;



    lv_obj_t * lv_label_1 = lv_label_create(obj);
    lv_obj_set_align(lv_label_1, LV_ALIGN_TOP_MID);
    lv_label_set_text(lv_label_1, "Title");
    lv_obj_set_flex_grow(lv_label_1, 1);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_width(lv_label_1, LV_SIZE_CONTENT);
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_SCROLL);
    widget->lv_label_1 = lv_label_1;


    lv_obj_t * lv_button_1 = lv_button_create(obj);
    lv_obj_set_width(lv_button_1, 30);
    lv_obj_set_height(lv_button_1, 30);
    widget->lv_button_1 = lv_button_1;
    lv_obj_add_style(lv_button_1, &button, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_2, "+");
    lv_obj_set_align(lv_label_2, LV_ALIGN_CENTER);
    widget->lv_label_2 = lv_label_2;



    lv_obj_t * dark_slider_0 = dark_slider_create(obj);
    lv_obj_set_width(dark_slider_0, lv_pct(100));
    dark_slider_set_color(dark_slider_0, lv_color_hex(0x44aaff));
    lv_obj_set_style_margin_hor(dark_slider_0, 10, 0);
    widget->dark_slider_0 = dark_slider_0;



    slider_box_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void slider_box_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    slider_box_destructor_hook(obj);
}

static void slider_box_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&slider_box_class, e);
    if(res != LV_RESULT_OK) return;

    slider_box_event_hook(e);
}