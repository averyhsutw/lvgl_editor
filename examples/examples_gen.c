/**
 * @file examples_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "examples_gen.h"

#if LV_USE_XML
   #include "widgets/dark_slider/dark_slider_private_gen.h"
   #include "widgets/slider_box/slider_box_private_gen.h"
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/*----------------
 * Translations
 *----------------*/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/
lv_font_t * inter_sm;
lv_font_t * inter_md;
lv_font_t * inter_xl;

/*----------------
 * Images
 *----------------*/
const void * lvgl_logo;
extern const void * lvgl_logo_data;
const void * wink;

/*----------------
 * Subjects
 *----------------*/
lv_subject_t room_1_temp;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void examples_init_gen(const char * asset_path)
{
    char buf[256];

    /*----------------
     * Global styles
     *----------------*/

    /*----------------
     * Fonts
     *----------------*/
    /* create tiny ttf font "inter_sm" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_sm = lv_tiny_ttf_create_file(buf, 14);
    /* create tiny ttf font "inter_md" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_md = lv_tiny_ttf_create_file(buf, 18);
    /* create tiny ttf font "inter_xl" from file */
    lv_snprintf(buf, 256, "%s%s", asset_path, "fonts/Inter-SemiBold.ttf");
    inter_xl = lv_tiny_ttf_create_file(buf, 22);

    /*----------------
     * Images
     *----------------*/
    lvgl_logo = &lvgl_logo_data;
    lv_snprintf(buf, 256, "%s%s", asset_path, "images/wink.png");
    wink = lv_strdup(buf);


    /*----------------
     * Subjects
     *----------------*/
    lv_subject_init_int(&room_1_temp, 20);

    /*----------------
     * Translations
     *----------------*/


#if LV_USE_XML
    /*Register widgets*/
    dark_slider_register();
    slider_box_register();

    /* Register fonts */
    lv_xml_register_font(NULL, "inter_sm", inter_sm);
    lv_xml_register_font(NULL, "inter_md", inter_md);
    lv_xml_register_font(NULL, "inter_xl", inter_xl);

    /* Register subjects */
    lv_xml_register_subject(NULL, "room_1_temp", &room_1_temp);

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if LV_USE_XML && !defined(LV_EDITOR_PREVIEW)

    /* Register images */
    lv_xml_register_image(NULL, "lvgl_logo", lvgl_logo);
    lv_xml_register_image(NULL, "wink", wink);
#endif

#if LV_USE_XML == 0
    /*--------------------
    *  Permanent screens
    *-------------------*/

    /*If XML is enabled it's assumed that the permanent screens are created
     *manaully from XML using lv_xml_create()*/

#endif
}

/* callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/