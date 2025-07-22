/**
 * @file dark_slider_gen.h
 *
 */

#ifndef DARK_SLIDER_GEN_H
#define DARK_SLIDER_GEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#include "examples_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/



/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a dark_slider object
 * @param parent pointer to an object, it will be the parent of the new dark_slider
 * @return pointer to the created dark_slider
 */
lv_obj_t * dark_slider_create(lv_obj_t * parent);


/**
 * dark_slider color
 * @param obj   pointer to a dark_slider
 * @param color  color
 */
void dark_slider_set_color(lv_obj_t * dark_slider, lv_color_t color);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*DARK_SLIDER_GEN_H*/