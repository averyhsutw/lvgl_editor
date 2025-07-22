/**
 * @file slider_box_gen.h
 *
 */

#ifndef SLIDER_BOX_GEN_H
#define SLIDER_BOX_GEN_H

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
 * Create a slider_box object
 * @param parent pointer to an object, it will be the parent of the new slider_box
 * @return pointer to the created slider_box
 */
lv_obj_t * slider_box_create(lv_obj_t * parent);


/**
 * slider_box title
 * @param obj   pointer to a slider_box
 * @param title  title
 */
void slider_box_set_title(lv_obj_t * slider_box, const char * title);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SLIDER_BOX_GEN_H*/