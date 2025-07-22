/**
 * @file examples_gen.h
 */

#ifndef EXAMPLES_GEN_H
#define EXAMPLES_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

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

/*********************
 *      DEFINES
 *********************/



/**********************
 *      TYPEDEFS
 **********************/



/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/


/*----------------
 * Fonts
 *----------------*/
extern lv_font_t * inter_sm;
extern lv_font_t * inter_md;
extern lv_font_t * inter_xl;

/*----------------
 * Images
 *----------------*/
extern const void * lvgl_logo;
extern const void * wink;

/*----------------
 * Subjects
 *----------------*/
extern lv_subject_t room_1_temp;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void examples_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widget and components of this library*/
#include "widgets/dark_slider/dark_slider_gen.h"
#include "widgets/slider_box/slider_box_gen.h"
#include "components/buttons/button_default_gen.h"
#include "components/buttons/button_error_gen.h"
#include "components/buttons/button_warning_gen.h"
#include "components/headings/h1_gen.h"
#include "components/headings/h2_gen.h"
#include "components/headings/h3_gen.h"
#include "components/scratchpad_gen.h"
#include "screens/home_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*EXAMPLES_GEN_H*/