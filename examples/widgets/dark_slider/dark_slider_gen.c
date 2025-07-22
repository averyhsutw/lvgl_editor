/**
 * @file dark_slider_gen.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "dark_slider_private_gen.h"
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

void dark_slider_constructor_hook(lv_obj_t * obj);
void dark_slider_destructor_hook(lv_obj_t * obj);
void dark_slider_event_hook(lv_event_t * e);

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void dark_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void dark_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj);
static void dark_slider_event(const lv_obj_class_t * class_p, lv_event_t * e);

/**********************
 *  STATIC VARIABLES
 **********************/

const lv_obj_class_t dark_slider_class = {
    .base_class = &lv_slider_class,
    .constructor_cb = dark_slider_constructor,
    .destructor_cb = dark_slider_destructor,
    .event_cb = dark_slider_event,
    .instance_size = sizeof(dark_slider_t),
    .editable = 1,
    .name = "dark_slider"
};

/**********************
 *   GLOBAL FUNCTIONS
 **********************/


lv_obj_t * dark_slider_create(lv_obj_t * parent)
{
    LV_LOG_INFO("begin");
    lv_obj_t * obj = lv_obj_class_create_obj(&dark_slider_class, parent);
    lv_obj_class_init_obj(obj);
    return obj;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


static void dark_slider_constructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);
    LV_TRACE_OBJ_CREATE("begin");

    dark_slider_t * widget = (dark_slider_t *)obj;
    static lv_style_t main;
static lv_style_t light_knob;
static lv_style_t blue_indicator;
    static bool style_inited = false;

    if (!style_inited) {
        lv_style_init(&main);
        lv_style_set_bg_color(&main, lv_color_hex(0x333333));
        lv_style_set_bg_opa(&main, 255);
        lv_style_set_radius(&main, 10);
        lv_style_set_width(&main, 120);
        lv_style_set_height(&main, 10);
        lv_style_set_pad_all(&main, 0);

        lv_style_init(&light_knob);
        lv_style_set_bg_color(&light_knob, lv_color_hex(0xeeeeee));
        lv_style_set_bg_opa(&light_knob, 255);
        lv_style_set_shadow_width(&light_knob, 20);
        lv_style_set_shadow_opa(&light_knob, 120);
        lv_style_set_shadow_offset_y(&light_knob, 2);
        lv_style_set_radius(&light_knob, 100);
        lv_style_set_pad_all(&light_knob, 5);

        lv_style_init(&blue_indicator);
        lv_style_set_bg_color(&blue_indicator, lv_color_hex(0x0000ff));
        lv_style_set_bg_opa(&blue_indicator, 255);
        lv_style_set_radius(&blue_indicator, 100);

        style_inited = true;
    }
    lv_obj_set_align(obj, LV_ALIGN_CENTER);
    lv_slider_set_min_value(obj, 20);
    lv_slider_set_max_value(obj, 40);
    lv_obj_set_flag(obj, LV_OBJ_FLAG_SEND_DRAW_TASK_EVENTS, true);
    lv_obj_add_style(obj, &main, 0);
    lv_obj_add_style(obj, &light_knob, LV_PART_KNOB);
    lv_obj_add_style(obj, &blue_indicator, LV_PART_INDICATOR);


    dark_slider_constructor_hook(obj);

    LV_TRACE_OBJ_CREATE("finished");
}

static void dark_slider_destructor(const lv_obj_class_t * class_p, lv_obj_t * obj)
{
    LV_UNUSED(class_p);

    dark_slider_destructor_hook(obj);
}

static void dark_slider_event(const lv_obj_class_t * class_p, lv_event_t * e)
{
    LV_UNUSED(class_p);

    lv_result_t res;

    /* Call the ancestor's event handler */
    res = lv_obj_event_base(&dark_slider_class, e);
    if(res != LV_RESULT_OK) return;

    dark_slider_event_hook(e);
}