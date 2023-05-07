// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: SpectrometerDisplayV1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_HomeScreen;
lv_obj_t * ui_TitleLabel1;
lv_obj_t * ui_calibrationBar;
lv_obj_t * ui_calibrationLabel;
void ui_event_HomeStartButton(lv_event_t * e);
lv_obj_t * ui_HomeStartButton;
lv_obj_t * ui_StartLabel;
void ui_event_homeOptionsButton(lv_event_t * e);
lv_obj_t * ui_homeOptionsButton;
lv_obj_t * ui_OptionsLabel;
void ui_event_HomeScreen_HomeStartButton1(lv_event_t * e);
lv_obj_t * ui_HomeScreen_HomeStartButton1;
lv_obj_t * ui_StartLabel1;
lv_obj_t * ui_MeasurementsScreen;
lv_obj_t * ui_TitleLabel;
void ui_event_backButton3(lv_event_t * e);
lv_obj_t * ui_backButton3;
lv_obj_t * ui_backLabel5;
void ui_event_fullButton(lv_event_t * e);
lv_obj_t * ui_fullButton;
lv_obj_t * ui_fullLabel;
void ui_event_PARbutton(lv_event_t * e);
lv_obj_t * ui_PARbutton;
lv_obj_t * ui_PARlabel;
lv_obj_t * ui_userButton;
lv_obj_t * ui_UserLabel;
void ui_event_MeasurementsAveragingSlider(lv_event_t * e);
lv_obj_t * ui_MeasurementsAveragingSlider;
void ui_event_Measurements_Button4(lv_event_t * e);
lv_obj_t * ui_Measurements_Button4;
lv_obj_t * ui_MeasurementsAveragingLabel;
void ui_event_gainSwitch(lv_event_t * e);
lv_obj_t * ui_gainSwitch;
void ui_event_autoexposureSwitch(lv_event_t * e);
lv_obj_t * ui_autoexposureSwitch;
lv_obj_t * ui_GainLabel;
lv_obj_t * ui_autoesxposureLabel;
lv_obj_t * ui_averaginglabel;
lv_obj_t * ui_ChartFullScreen;
void ui_event_ChartFullMeasureButton(lv_event_t * e);
lv_obj_t * ui_ChartFullMeasureButton;
lv_obj_t * ui_ChartFullMeasureLabel;
lv_obj_t * ui_ChartFullChart;
void ui_event_backButton2(lv_event_t * e);
lv_obj_t * ui_backButton2;
lv_obj_t * ui_backLabel4;
void ui_event_ChartFullDropdown(lv_event_t * e);
lv_obj_t * ui_ChartFullDropdown;
lv_obj_t * ui_exposuretimLabel;
lv_obj_t * ui_CCTlabel;
lv_obj_t * ui_CRIlabel;
lv_obj_t * ui_CIE1931label;
lv_obj_t * ui_CCTeditLabel;
lv_obj_t * ui_CRIeditLabel;
lv_obj_t * ui_CIE1931editLabel;
lv_obj_t * ui_usLabel1;
void ui_event_FButton(lv_event_t * e);
lv_obj_t * ui_FButton;
lv_obj_t * ui_FLabel;
void ui_event_exposureTimSlider3(lv_event_t * e);
lv_obj_t * ui_exposureTimSlider3;
lv_obj_t * ui_OptionsScreen;
void ui_event_backButton1(lv_event_t * e);
lv_obj_t * ui_backButton1;
lv_obj_t * ui_backLabel3;
void ui_event_StartadcButton(lv_event_t * e);
lv_obj_t * ui_StartadcButton;
void ui_event_optionsStartadcLabel(lv_event_t * e);
lv_obj_t * ui_optionsStartadcLabel;
lv_obj_t * ui_optionRoller;

lv_obj_t * ui_OptionsScreen_Measurements_Slide;
lv_obj_t * ui_ChartparScreen;
void ui_event_exposureTimSlider(lv_event_t * e);
lv_obj_t * ui_exposureTimSlider;
void ui_event_ChartparMeasureButton(lv_event_t * e);
lv_obj_t * ui_ChartparMeasureButton;
lv_obj_t * ui_measureLabel;
lv_obj_t * ui_ChartparChart;
void ui_event_backButton(lv_event_t * e);
lv_obj_t * ui_backButton;
lv_obj_t * ui_backLabel2;
void ui_event_menuDropdown(lv_event_t * e);
lv_obj_t * ui_menuDropdown;
lv_obj_t * ui_exposuretimLabel1;
lv_obj_t * ui_CCTlabel1;
lv_obj_t * ui_CRIlabel1;
lv_obj_t * ui_CIE1931Label;
lv_obj_t * ui_CCTeditLabel1;
lv_obj_t * ui_CRIeditLabel1;
lv_obj_t * ui_CIE1931editLabel1;
lv_obj_t * ui_PPFDlabel;
lv_obj_t * ui_PPFDeditLabel;
lv_obj_t * ui_usLabel;
void ui_event_Fbutton(lv_event_t * e);
lv_obj_t * ui_Fbutton;
void ui_event_Flabel(lv_event_t * e);
lv_obj_t * ui_Flabel;
lv_obj_t * ui_Chartfullfull;
void ui_event_exposureTimSlider1(lv_event_t * e);
lv_obj_t * ui_exposureTimSlider1;
void ui_event_Measurements_Button7(lv_event_t * e);
lv_obj_t * ui_Measurements_Button7;
lv_obj_t * ui_Measurements_Label12;
lv_obj_t * ui_ChartfullfullChart;
void ui_event_backbutton(lv_event_t * e);
lv_obj_t * ui_backbutton;
lv_obj_t * ui_backLabel;
void ui_event_menuDropdown1(lv_event_t * e);
lv_obj_t * ui_menuDropdown1;
lv_obj_t * ui_usLabel2;
lv_obj_t * ui_Chartparfull;
void ui_event_exposureTimSlider2(lv_event_t * e);
lv_obj_t * ui_exposureTimSlider2;
void ui_event_Measurements_Button10(lv_event_t * e);
lv_obj_t * ui_Measurements_Button10;
void ui_event_Measurements_Label17(lv_event_t * e);
lv_obj_t * ui_Measurements_Label17;
lv_obj_t * ui_ChartParfullChart;
void ui_event_backbutton1(lv_event_t * e);
lv_obj_t * ui_backbutton1;
lv_obj_t * ui_backLabel1;
void ui_event_ChartFull_Dropdown4(lv_event_t * e);
lv_obj_t * ui_ChartFull_Dropdown4;
lv_obj_t * ui_usLabel3;
//here
extern uint16_t adc_buf[288];
extern float wavelength_converted[288];
extern void adc_convert_first(void);
extern void adc_convert_second(void);
extern uint16_t adc_converted[288];
extern uint32_t adc_avg[288];
extern void wavelength_range(bool par, uint16_t *first_pixel, uint16_t *last_pixel);
extern uint16_t first_pixel;
extern uint16_t last_pixel;
extern uint32_t exptime;
static lv_chart_series_t * ser1;
bool hilo = false;
extern void exposure_time (uint32_t st_us);

void refresh_chart(void);
void refresh_chart_y(void);
void gain(void);
//tohere

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
//here
void refresh_chart(void){

	uint16_t i;
	for(i = 0; i < 288; i++ ){
		lv_chart_set_next_value2(ui_ChartparChart, ser1, wavelength_converted[i], 0);
	}
}

void refresh_chart_y(void){


			lv_chart_set_ext_y_array(ui_ChartparChart, ser1, (lv_coord_t *)adc_converted);


}

void gain(void){
	if(hilo == true) {
		lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
	}
	else{
		lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 3500);
	}

}
//tohere
void ui_event_HomeStartButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MeasurementsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_homeOptionsButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_OptionsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_HomeScreen_HomeStartButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MeasurementsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_backButton3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_fullButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFullScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_PARbutton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartparScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_MeasurementsAveragingSlider(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        faveraging(e);
        _ui_slider_set_text_value(ui_averaginglabel, target, "", "");
    }
}
void ui_event_Measurements_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_state_modify(ui_Measurements_Button4, LV_STATE_CHECKED, _UI_MODIFY_STATE_TOGGLE);
    }
    if(event_code == LV_EVENT_PRESSED) {
        _ui_state_modify(ui_MeasurementsAveragingSlider, LV_STATE_DISABLED, _UI_MODIFY_STATE_TOGGLE);
    }
}
void ui_event_gainSwitch(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fgaincheck(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fgainunchecked(e);
    }
}
void ui_event_autoexposureSwitch(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fautoexposureon(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        fautoexposureunchecked(e);
    }
}
void ui_event_ChartFullMeasureButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_backButton2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MeasurementsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ChartFullDropdown(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_FButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartfullfull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_exposureTimSlider3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_usLabel1, target, "", " us");
    }
}
void ui_event_backButton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_HomeScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_StartadcButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFullScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_optionsStartadcLabel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}

void ui_event_exposureTimSlider(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_usLabel, target, "", " us");
<<<<<<< HEAD
        exptime =  lv_slider_get_value(target);
        exposure_time (exptime);
=======
>>>>>>> origin/UserInterface
    }
}
void ui_event_ChartparMeasureButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_backButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_MeasurementsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_menuDropdown(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_Fbutton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartparfull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Flabel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_exposureTimSlider1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_usLabel2, target, "", " us");
    }
}
void ui_event_Measurements_Button7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_backbutton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFullScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_menuDropdown1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_exposureTimSlider2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_usLabel3, target, "", " us");
    }
}
void ui_event_Measurements_Button10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_Measurements_Label17(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_backbutton1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartparScreen, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ChartFull_Dropdown4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_HomeScreen_screen_init(void)
{
    ui_HomeScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_HomeScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_grad_color(ui_HomeScreen, lv_color_hex(0x4E48A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_HomeScreen, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_HomeScreen, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TitleLabel1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_TitleLabel1, 200);
    lv_obj_set_height(ui_TitleLabel1, 50);
    lv_obj_set_x(ui_TitleLabel1, 1);
    lv_obj_set_y(ui_TitleLabel1, -78);
    lv_obj_set_align(ui_TitleLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TitleLabel1, "Quantum Spectrometer\nDaniel Wiejak");
    lv_obj_set_style_text_color(ui_TitleLabel1, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TitleLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TitleLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_TitleLabel1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TitleLabel1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_calibrationBar = lv_bar_create(ui_HomeScreen);
    lv_bar_set_value(ui_calibrationBar, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_calibrationBar, 100);
    lv_obj_set_height(ui_calibrationBar, 15);
    lv_obj_set_x(ui_calibrationBar, 0);
    lv_obj_set_y(ui_calibrationBar, 90);
    lv_obj_set_align(ui_calibrationBar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_calibrationBar,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_anim_time(ui_calibrationBar, 500, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_calibrationBar, lv_color_hex(0x2924A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_calibrationBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_calibrationBar, 50, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_calibrationBar, 1000, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_calibrationBar, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_calibrationBar, lv_color_hex(0x0D07A2), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_calibrationBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_calibrationBar, LV_BLEND_MODE_NORMAL, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_calibrationLabel = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_calibrationLabel, LV_SIZE_CONTENT);   /// 10
    lv_obj_set_height(ui_calibrationLabel, LV_SIZE_CONTENT);    /// 10
    lv_obj_set_x(ui_calibrationLabel, 0);
    lv_obj_set_y(ui_calibrationLabel, 72);
    lv_obj_set_align(ui_calibrationLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_calibrationLabel, "Calibration Progress");
    lv_obj_clear_flag(ui_calibrationLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_calibrationLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_calibrationLabel, lv_color_hex(0x2924A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_calibrationLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_calibrationLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeStartButton = lv_btn_create(ui_HomeScreen);
    lv_obj_set_width(ui_HomeStartButton, 100);
    lv_obj_set_height(ui_HomeStartButton, 50);
    lv_obj_set_x(ui_HomeStartButton, 10);
    lv_obj_set_y(ui_HomeStartButton, 0);
    lv_obj_set_align(ui_HomeStartButton, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_HomeStartButton,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_HomeStartButton, lv_color_hex(0x302BCA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeStartButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_HomeStartButton, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_HomeStartButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_HomeStartButton, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StartLabel = lv_label_create(ui_HomeStartButton);
    lv_obj_set_width(ui_StartLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StartLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StartLabel, -1);
    lv_obj_set_y(ui_StartLabel, 0);
    lv_obj_set_align(ui_StartLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StartLabel, "Start");
    lv_obj_clear_flag(ui_StartLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_StartLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StartLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_StartLabel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_homeOptionsButton = lv_btn_create(ui_HomeScreen);
    lv_obj_set_width(ui_homeOptionsButton, 100);
    lv_obj_set_height(ui_homeOptionsButton, 50);
    lv_obj_set_x(ui_homeOptionsButton, -10);
    lv_obj_set_y(ui_homeOptionsButton, 0);
    lv_obj_set_align(ui_homeOptionsButton, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_homeOptionsButton,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_homeOptionsButton, lv_color_hex(0x3E3AC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homeOptionsButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_homeOptionsButton, lv_color_hex(0x302BCA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_homeOptionsButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_OptionsLabel = lv_label_create(ui_homeOptionsButton);
    lv_obj_set_width(ui_OptionsLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_OptionsLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_OptionsLabel, -1);
    lv_obj_set_y(ui_OptionsLabel, 0);
    lv_obj_set_align(ui_OptionsLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_OptionsLabel, "Options");
    lv_obj_set_style_text_color(ui_OptionsLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_OptionsLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_OptionsLabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_OptionsLabel, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HomeScreen_HomeStartButton1 = lv_btn_create(ui_HomeScreen);
    lv_obj_set_width(ui_HomeScreen_HomeStartButton1, 100);
    lv_obj_set_height(ui_HomeScreen_HomeStartButton1, 50);
    lv_obj_set_x(ui_HomeScreen_HomeStartButton1, 10);
    lv_obj_set_y(ui_HomeScreen_HomeStartButton1, 0);
    lv_obj_set_align(ui_HomeScreen_HomeStartButton1, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_HomeScreen_HomeStartButton1,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_HomeScreen_HomeStartButton1, lv_color_hex(0x302BCA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_HomeScreen_HomeStartButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_HomeScreen_HomeStartButton1, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_HomeScreen_HomeStartButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StartLabel1 = lv_label_create(ui_HomeScreen_HomeStartButton1);
    lv_obj_set_width(ui_StartLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StartLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StartLabel1, -1);
    lv_obj_set_y(ui_StartLabel1, 0);
    lv_obj_set_align(ui_StartLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StartLabel1, "Start");
    lv_obj_clear_flag(ui_StartLabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_StartLabel1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_StartLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_StartLabel1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_HomeStartButton, ui_event_HomeStartButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_homeOptionsButton, ui_event_homeOptionsButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HomeScreen_HomeStartButton1, ui_event_HomeScreen_HomeStartButton1, LV_EVENT_ALL, NULL);

}
void ui_MeasurementsScreen_screen_init(void)
{
    ui_MeasurementsScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MeasurementsScreen,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_MeasurementsScreen, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MeasurementsScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MeasurementsScreen, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_MeasurementsScreen, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_TitleLabel = lv_label_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_TitleLabel, 147);
    lv_obj_set_height(ui_TitleLabel, 15);
    lv_obj_set_x(ui_TitleLabel, 0);
    lv_obj_set_y(ui_TitleLabel, -100);
    lv_obj_set_align(ui_TitleLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TitleLabel, "MEASUREMENTS");
    lv_obj_clear_flag(ui_TitleLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_TitleLabel, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TitleLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_TitleLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_TitleLabel, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TitleLabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backButton3 = lv_btn_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_backButton3, 40);
    lv_obj_set_height(ui_backButton3, 40);
    lv_obj_set_x(ui_backButton3, 3);
    lv_obj_set_y(ui_backButton3, 3);
    lv_obj_add_flag(ui_backButton3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backButton3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backButton3, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backButton3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backButton3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backButton3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backButton3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel5 = lv_label_create(ui_backButton3);
    lv_obj_set_width(ui_backLabel5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel5, "Back");
    lv_obj_set_style_text_align(ui_backLabel5, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel5, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fullButton = lv_btn_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_fullButton, 90);
    lv_obj_set_height(ui_fullButton, 45);
    lv_obj_set_x(ui_fullButton, 10);
    lv_obj_set_y(ui_fullButton, 80);
    lv_obj_clear_flag(ui_fullButton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_fullButton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_fullButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_fullButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_fullButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fullLabel = lv_label_create(ui_fullButton);
    lv_obj_set_width(ui_fullLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_fullLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_fullLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_fullLabel, "Full");
    lv_obj_clear_flag(ui_fullLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_fullLabel, LV_SCROLLBAR_MODE_OFF);

    ui_PARbutton = lv_btn_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_PARbutton, 90);
    lv_obj_set_height(ui_PARbutton, 45);
    lv_obj_set_x(ui_PARbutton, 0);
    lv_obj_set_y(ui_PARbutton, 80);
    lv_obj_set_align(ui_PARbutton, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_PARbutton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_PARbutton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PARbutton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PARbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PARbutton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PARbutton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PARlabel = lv_label_create(ui_PARbutton);
    lv_obj_set_width(ui_PARlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PARlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PARlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PARlabel, "PAR");
    lv_obj_clear_flag(ui_PARlabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags

    ui_userButton = lv_btn_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_userButton, 90);
    lv_obj_set_height(ui_userButton, 45);
    lv_obj_set_x(ui_userButton, -10);
    lv_obj_set_y(ui_userButton, 80);
    lv_obj_set_align(ui_userButton, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_userButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_userButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_userButton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_userButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_userButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_userButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_UserLabel = lv_label_create(ui_userButton);
    lv_obj_set_width(ui_UserLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_UserLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_UserLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_UserLabel, "User");
    lv_obj_clear_flag(ui_UserLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_UserLabel, LV_SCROLLBAR_MODE_OFF);

    ui_MeasurementsAveragingSlider = lv_slider_create(ui_MeasurementsScreen);
    lv_slider_set_range(ui_MeasurementsAveragingSlider, 1, 50);
    lv_slider_set_value(ui_MeasurementsAveragingSlider, 5, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_MeasurementsAveragingSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_MeasurementsAveragingSlider, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_MeasurementsAveragingSlider, 150);
    lv_obj_set_height(ui_MeasurementsAveragingSlider, 10);
    lv_obj_set_x(ui_MeasurementsAveragingSlider, 0);
    lv_obj_set_y(ui_MeasurementsAveragingSlider, -10);
    lv_obj_set_align(ui_MeasurementsAveragingSlider, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_state(ui_MeasurementsAveragingSlider, LV_STATE_PRESSED);       /// States
    lv_obj_clear_flag(ui_MeasurementsAveragingSlider,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_MeasurementsAveragingSlider, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_MeasurementsAveragingSlider, lv_color_hex(0xFFFFFF),
                                   LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_MeasurementsAveragingSlider, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x8281A3),
                              LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_MeasurementsAveragingSlider, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_MeasurementsAveragingSlider, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button4 = lv_btn_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_Measurements_Button4, 77);
    lv_obj_set_height(ui_Measurements_Button4, 23);
    lv_obj_set_x(ui_Measurements_Button4, 9);
    lv_obj_set_y(ui_Measurements_Button4, 70);
    lv_obj_set_align(ui_Measurements_Button4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Measurements_Button4,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Measurements_Button4, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Measurements_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Measurements_Button4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Measurements_Button4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Button4, lv_color_hex(0x8D8CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements_Button4, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_text_color(ui_Measurements_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_text_opa(ui_Measurements_Button4, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_text_font(ui_Measurements_Button4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_MeasurementsAveragingLabel = lv_label_create(ui_Measurements_Button4);
    lv_obj_set_width(ui_MeasurementsAveragingLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MeasurementsAveragingLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MeasurementsAveragingLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MeasurementsAveragingLabel, "Averaging");
    lv_obj_clear_flag(ui_MeasurementsAveragingLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_MeasurementsAveragingLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MeasurementsAveragingLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MeasurementsAveragingLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gainSwitch = lv_switch_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_gainSwitch, 45);
    lv_obj_set_height(ui_gainSwitch, 20);
    lv_obj_set_x(ui_gainSwitch, 10);
    lv_obj_set_y(ui_gainSwitch, -10);
    lv_obj_set_align(ui_gainSwitch, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(ui_gainSwitch, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_gainSwitch, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gainSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gainSwitch, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_gainSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_gainSwitch, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_gainSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_gainSwitch, lv_color_hex(0x8B89C5), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gainSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_gainSwitch, lv_color_hex(0x312CA4), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_gainSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_autoexposureSwitch = lv_switch_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_autoexposureSwitch, 45);
    lv_obj_set_height(ui_autoexposureSwitch, 20);
    lv_obj_set_x(ui_autoexposureSwitch, -10);
    lv_obj_set_y(ui_autoexposureSwitch, -10);
    lv_obj_set_align(ui_autoexposureSwitch, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_autoexposureSwitch,
                      LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_autoexposureSwitch, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_autoexposureSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_autoexposureSwitch, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_autoexposureSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_autoexposureSwitch, lv_color_hex(0x312CA4),
                              LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_autoexposureSwitch, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_autoexposureSwitch, lv_color_hex(0x8D8BC2), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_autoexposureSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_autoexposureSwitch, lv_color_hex(0x312CA4), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_autoexposureSwitch, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_GainLabel = lv_label_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_GainLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_GainLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_GainLabel, -127);
    lv_obj_set_y(ui_GainLabel, 73);
    lv_obj_set_align(ui_GainLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_GainLabel, "Gain");
    lv_obj_clear_flag(ui_GainLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_GainLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_GainLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_GainLabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_GainLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_GainLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_autoesxposureLabel = lv_label_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_autoesxposureLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_autoesxposureLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_autoesxposureLabel, 125);
    lv_obj_set_y(ui_autoesxposureLabel, 69);
    lv_obj_set_align(ui_autoesxposureLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_autoesxposureLabel, "Auto\nexposure");
    lv_obj_clear_flag(ui_autoesxposureLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_autoesxposureLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_autoesxposureLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_autoesxposureLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_autoesxposureLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_averaginglabel = lv_label_create(ui_MeasurementsScreen);
    lv_obj_set_width(ui_averaginglabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_averaginglabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_averaginglabel, 61);
    lv_obj_set_y(ui_averaginglabel, 91);
    lv_obj_set_align(ui_averaginglabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_averaginglabel, "5");
    lv_obj_clear_flag(ui_averaginglabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_averaginglabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_averaginglabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_averaginglabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_averaginglabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_averaginglabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_backButton3, ui_event_backButton3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_fullButton, ui_event_fullButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_PARbutton, ui_event_PARbutton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MeasurementsAveragingSlider, ui_event_MeasurementsAveragingSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button4, ui_event_Measurements_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_gainSwitch, ui_event_gainSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_autoexposureSwitch, ui_event_autoexposureSwitch, LV_EVENT_ALL, NULL);

}
void ui_ChartFullScreen_screen_init(void)
{
    ui_ChartFullScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ChartFullScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ChartFullMeasureButton = lv_btn_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_ChartFullMeasureButton, 70);
    lv_obj_set_height(ui_ChartFullMeasureButton, 30);
    lv_obj_set_x(ui_ChartFullMeasureButton, 5);
    lv_obj_set_y(ui_ChartFullMeasureButton, 49);
    lv_obj_clear_flag(ui_ChartFullMeasureButton,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_ChartFullMeasureButton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFullMeasureButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFullMeasureButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFullMeasureButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFullMeasureLabel = lv_label_create(ui_ChartFullMeasureButton);
    lv_obj_set_width(ui_ChartFullMeasureLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFullMeasureLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ChartFullMeasureLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFullMeasureLabel, "Measure");
    lv_obj_clear_flag(ui_ChartFullMeasureLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_ChartFullMeasureLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_ChartFullMeasureLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFullChart = lv_chart_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_ChartFullChart, lv_pct(74));
    lv_obj_set_height(ui_ChartFullChart, lv_pct(60));
    lv_obj_set_x(ui_ChartFullChart, 15);
    lv_obj_set_y(ui_ChartFullChart, -10);
    lv_obj_set_align(ui_ChartFullChart, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_ChartFullChart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFullChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_ChartFullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartFullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_ChartFullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartFullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartFullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartFullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_backButton2 = lv_btn_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_backButton2, 40);
    lv_obj_set_height(ui_backButton2, 40);
    lv_obj_set_x(ui_backButton2, 3);
    lv_obj_set_y(ui_backButton2, 3);
    lv_obj_add_flag(ui_backButton2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backButton2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backButton2, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backButton2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backButton2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backButton2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backButton2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backButton2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel4 = lv_label_create(ui_backButton2);
    lv_obj_set_width(ui_backLabel4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel4, "Back");
    lv_obj_set_style_text_align(ui_backLabel4, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel4, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFullDropdown = lv_dropdown_create(ui_ChartFullScreen);
    lv_dropdown_set_options(ui_ChartFullDropdown, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_ChartFullDropdown, false);
    lv_dropdown_set_text(ui_ChartFullDropdown, "Menu");
    lv_obj_set_width(ui_ChartFullDropdown, 90);
    lv_obj_set_height(ui_ChartFullDropdown, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFullDropdown, 50);
    lv_obj_set_y(ui_ChartFullDropdown, 3);
    lv_obj_add_flag(ui_ChartFullDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChartFullDropdown,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_ChartFullDropdown, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFullDropdown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFullDropdown, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ChartFullDropdown, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFullDropdown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_exposuretimLabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_exposuretimLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_exposuretimLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_exposuretimLabel, 59);
    lv_obj_set_y(ui_exposuretimLabel, -103);
    lv_obj_set_align(ui_exposuretimLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_exposuretimLabel, "Exposure tim");
    lv_obj_clear_flag(ui_exposuretimLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_exposuretimLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_exposuretimLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_exposuretimLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_exposuretimLabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CCTlabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CCTlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CCTlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CCTlabel, 125);
    lv_obj_set_y(ui_CCTlabel, -45);
    lv_obj_set_align(ui_CCTlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CCTlabel, "CCT");
    lv_obj_set_style_text_color(ui_CCTlabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CCTlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CCTlabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CRIlabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CRIlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CRIlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CRIlabel, 125);
    lv_obj_set_y(ui_CRIlabel, 4);
    lv_obj_set_align(ui_CRIlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CRIlabel, "CRI");
    lv_obj_set_style_text_color(ui_CRIlabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CRIlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CRIlabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CIE1931label = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CIE1931label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CIE1931label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CIE1931label, 125);
    lv_obj_set_y(ui_CIE1931label, 64);
    lv_obj_set_align(ui_CIE1931label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CIE1931label, "CIE 1931");
    lv_obj_set_style_text_color(ui_CIE1931label, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CIE1931label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CIE1931label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CIE1931label, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CCTeditLabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CCTeditLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CCTeditLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CCTeditLabel, 125);
    lv_obj_set_y(ui_CCTeditLabel, -25);
    lv_obj_set_align(ui_CCTeditLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CCTeditLabel, "6543");
    lv_obj_set_style_text_color(ui_CCTeditLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CCTeditLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CCTeditLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CCTeditLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CRIeditLabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CRIeditLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CRIeditLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CRIeditLabel, 125);
    lv_obj_set_y(ui_CRIeditLabel, 26);
    lv_obj_set_align(ui_CRIeditLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CRIeditLabel, "69");
    lv_obj_set_style_text_color(ui_CRIeditLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CRIeditLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CRIeditLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CRIeditLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CIE1931editLabel = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_CIE1931editLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CIE1931editLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CIE1931editLabel, 125);
    lv_obj_set_y(ui_CIE1931editLabel, 95);
    lv_obj_set_align(ui_CIE1931editLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CIE1931editLabel, "x: 0.25\ny: 0.32");
    lv_obj_set_style_text_color(ui_CIE1931editLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CIE1931editLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CIE1931editLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CIE1931editLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_usLabel1 = lv_label_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_usLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_usLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_usLabel1, 137);
    lv_obj_set_y(ui_usLabel1, -91);
    lv_obj_set_align(ui_usLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_usLabel1, "50 us");
    lv_obj_set_style_text_color(ui_usLabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_usLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_usLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_usLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FButton = lv_btn_create(ui_ChartFullScreen);
    lv_obj_set_width(ui_FButton, 30);
    lv_obj_set_height(ui_FButton, 20);
    lv_obj_set_x(ui_FButton, 207);
    lv_obj_set_y(ui_FButton, 56);
    lv_obj_clear_flag(ui_FButton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_FButton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_FButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_FButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_FButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FLabel = lv_label_create(ui_FButton);
    lv_obj_set_width(ui_FLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_FLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_FLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_FLabel, "F");
    lv_obj_clear_flag(ui_FLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_FLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_FLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_exposureTimSlider3 = lv_slider_create(ui_ChartFullScreen);
    lv_slider_set_range(ui_exposureTimSlider3, 10, 5000);
    lv_slider_set_value(ui_exposureTimSlider3, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_exposureTimSlider3) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_exposureTimSlider3, 0,
                                                                                                       LV_ANIM_OFF);
    lv_obj_set_width(ui_exposureTimSlider3, 150);
    lv_obj_set_height(ui_exposureTimSlider3, 10);
    lv_obj_set_x(ui_exposureTimSlider3, 72);
    lv_obj_set_y(ui_exposureTimSlider3, -193);
    lv_obj_set_align(ui_exposureTimSlider3, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_exposureTimSlider3,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider3, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider3, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider3, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider3, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider3, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider3, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    lv_obj_add_event_cb(ui_ChartFullMeasureButton, ui_event_ChartFullMeasureButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backButton2, ui_event_backButton2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFullDropdown, ui_event_ChartFullDropdown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_FButton, ui_event_FButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_exposureTimSlider3, ui_event_exposureTimSlider3, LV_EVENT_ALL, NULL);

}
void ui_OptionsScreen_screen_init(void)
{
    ui_OptionsScreen = lv_obj_create(NULL);
    lv_obj_add_flag(ui_OptionsScreen, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_OptionsScreen, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC);      /// Flags

    ui_backButton1 = lv_btn_create(ui_OptionsScreen);
    lv_obj_set_width(ui_backButton1, 40);
    lv_obj_set_height(ui_backButton1, 40);
    lv_obj_set_x(ui_backButton1, 3);
    lv_obj_set_y(ui_backButton1, 3);
    lv_obj_add_flag(ui_backButton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backButton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backButton1, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backButton1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backButton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backButton1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backButton1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backButton1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel3 = lv_label_create(ui_backButton1);
    lv_obj_set_width(ui_backLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel3, "Back");
    lv_obj_clear_flag(ui_backLabel3, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_align(ui_backLabel3, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StartadcButton = lv_btn_create(ui_OptionsScreen);
    lv_obj_set_width(ui_StartadcButton, 113);
    lv_obj_set_height(ui_StartadcButton, 30);
    lv_obj_set_x(ui_StartadcButton, 87);
    lv_obj_set_y(ui_StartadcButton, 24);
    lv_obj_set_align(ui_StartadcButton, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_StartadcButton,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_StartadcButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_StartadcButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_StartadcButton, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_StartadcButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_StartadcButton, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_StartadcButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_StartadcButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_StartadcButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_optionsStartadcLabel = lv_label_create(ui_StartadcButton);
    lv_obj_set_width(ui_optionsStartadcLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_optionsStartadcLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_optionsStartadcLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_optionsStartadcLabel, "Start ADC calibration");
    lv_obj_clear_flag(ui_optionsStartadcLabel,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_optionsStartadcLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_optionsStartadcLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_optionsStartadcLabel, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_optionRoller = lv_roller_create(ui_OptionsScreen);
    lv_roller_set_options(ui_optionRoller, "Calibration\nSpectral Response\nDark baseline\nExport Data",
                          LV_ROLLER_MODE_INFINITE);
    lv_obj_set_height(ui_optionRoller, 170);
    lv_obj_set_width(ui_optionRoller, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_optionRoller, 10);
    lv_obj_set_y(ui_optionRoller, -10);
    lv_obj_set_align(ui_optionRoller, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_optionRoller, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_optionRoller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_optionRoller, lv_color_hex(0x5E61BC), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_optionRoller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    
    lv_obj_add_event_cb(ui_backButton1, ui_event_backButton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_optionsStartadcLabel, ui_event_optionsStartadcLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StartadcButton, ui_event_StartadcButton, LV_EVENT_ALL, NULL);


}
void ui_ChartparScreen_screen_init(void)
{
    ui_ChartparScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ChartparScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_exposureTimSlider = lv_slider_create(ui_ChartparScreen);
    lv_slider_set_range(ui_exposureTimSlider, 10, 5000);
    lv_slider_set_value(ui_exposureTimSlider, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_exposureTimSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_exposureTimSlider, 0,
                                                                                                      LV_ANIM_OFF);
    lv_obj_set_width(ui_exposureTimSlider, 150);
    lv_obj_set_height(ui_exposureTimSlider, 10);
    lv_obj_set_x(ui_exposureTimSlider, 72);
    lv_obj_set_y(ui_exposureTimSlider, -193);
    lv_obj_set_align(ui_exposureTimSlider, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_exposureTimSlider,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_ChartparMeasureButton = lv_btn_create(ui_ChartparScreen);
    lv_obj_set_width(ui_ChartparMeasureButton, 70);
    lv_obj_set_height(ui_ChartparMeasureButton, 30);
    lv_obj_set_x(ui_ChartparMeasureButton, 5);
    lv_obj_set_y(ui_ChartparMeasureButton, 49);
    lv_obj_clear_flag(ui_ChartparMeasureButton,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_ChartparMeasureButton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartparMeasureButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartparMeasureButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartparMeasureButton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_measureLabel = lv_label_create(ui_ChartparMeasureButton);
    lv_obj_set_width(ui_measureLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_measureLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_measureLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_measureLabel, "Measure");
    lv_obj_clear_flag(ui_measureLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_measureLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_measureLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartparChart = lv_chart_create(ui_ChartparScreen);
<<<<<<< HEAD
    lv_obj_set_width(ui_ChartparChart, lv_pct(68));
    lv_obj_set_height(ui_ChartparChart, lv_pct(53));
    lv_obj_set_x(ui_ChartparChart, 38);
    lv_obj_set_y(ui_ChartparChart, -24);
=======
    lv_obj_set_width(ui_ChartparChart, lv_pct(74));
    lv_obj_set_height(ui_ChartparChart, lv_pct(60));
    lv_obj_set_x(ui_ChartparChart, 15);
    lv_obj_set_y(ui_ChartparChart, -10);
>>>>>>> origin/UserInterface
    lv_obj_set_align(ui_ChartparChart, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_ChartparChart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartparChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_ChartparChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartparChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_ChartparChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartparChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartparChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartparChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

//here
    lv_chart_set_update_mode(ui_ChartparChart, LV_CHART_UPDATE_MODE_CIRCULAR);
    lv_chart_set_type(ui_ChartparChart, LV_CHART_TYPE_SCATTER);
<<<<<<< HEAD
    //lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
    lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_Y, 0, 1000);
    lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_X, 400, 700);
    lv_chart_set_point_count(ui_ChartparChart, 288);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_X, 6, 3, 5, 2, true, 250);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_Y, 4, 2, 6, 1, true, 10);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 0, 1, 1, false, 0);
    lv_obj_set_style_size(ui_ChartparChart, 0, LV_PART_INDICATOR);	// size of a data point
    lv_obj_set_style_line_width(ui_ChartparChart, 1, LV_PART_ITEMS);	// thickness of a line

    wavelength_range(true, &first_pixel, &last_pixel);
=======
    lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
    lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_Y, 0, 1000);
    lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_X, 350, 750);
    lv_chart_set_point_count(ui_ChartparChart, 288);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_X, 8, 3, 5, 2, true, 300);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 6, 1, true, 30);
    lv_chart_set_axis_tick(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 5, 5, 4, 1, true, 20);
    lv_obj_set_style_size(ui_ChartparChart, 0, LV_PART_INDICATOR);	// size of a data point
    lv_obj_set_style_line_width(ui_ChartparChart, 1, LV_PART_ITEMS);	// thickness of a line
    wavelength_range(false, &first_pixel, &last_pixel);
>>>>>>> origin/UserInterface
    ser1 = lv_chart_add_series(ui_ChartparChart, lv_palette_lighten(LV_PALETTE_GREEN, 1), LV_CHART_AXIS_SECONDARY_Y);
		refresh_chart();
//tohere

    ui_backButton = lv_btn_create(ui_ChartparScreen);
    lv_obj_set_width(ui_backButton, 40);
    lv_obj_set_height(ui_backButton, 40);
    lv_obj_set_x(ui_backButton, 3);
    lv_obj_set_y(ui_backButton, 3);
    lv_obj_add_flag(ui_backButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backButton, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backButton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backButton, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backButton, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel2 = lv_label_create(ui_backButton);
    lv_obj_set_width(ui_backLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel2, "Back");
    lv_obj_set_style_text_align(ui_backLabel2, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menuDropdown = lv_dropdown_create(ui_ChartparScreen);
    lv_dropdown_set_options(ui_menuDropdown, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_menuDropdown, false);
    lv_dropdown_set_text(ui_menuDropdown, "Menu");
    lv_obj_set_width(ui_menuDropdown, 90);
    lv_obj_set_height(ui_menuDropdown, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_menuDropdown, 50);
    lv_obj_set_y(ui_menuDropdown, 3);
    lv_obj_add_flag(ui_menuDropdown, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_menuDropdown, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_menuDropdown, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_menuDropdown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_menuDropdown, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_menuDropdown, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menuDropdown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_exposuretimLabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_exposuretimLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_exposuretimLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_exposuretimLabel1, 64);
    lv_obj_set_y(ui_exposuretimLabel1, -102);
    lv_obj_set_align(ui_exposuretimLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_exposuretimLabel1, "Exposure tim");
    lv_obj_set_style_text_color(ui_exposuretimLabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_exposuretimLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_exposuretimLabel1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CCTlabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CCTlabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CCTlabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CCTlabel1, 125);
    lv_obj_set_y(ui_CCTlabel1, -45);
    lv_obj_set_align(ui_CCTlabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CCTlabel1, "CCT");
    lv_obj_clear_flag(ui_CCTlabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CCTlabel1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CCTlabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CCTlabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CCTlabel1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CRIlabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CRIlabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CRIlabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CRIlabel1, 125);
    lv_obj_set_y(ui_CRIlabel1, 4);
    lv_obj_set_align(ui_CRIlabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CRIlabel1, "CRI");
    lv_obj_clear_flag(ui_CRIlabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CRIlabel1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CRIlabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CRIlabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CRIlabel1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CIE1931Label = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CIE1931Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CIE1931Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CIE1931Label, 125);
    lv_obj_set_y(ui_CIE1931Label, 64);
    lv_obj_set_align(ui_CIE1931Label, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CIE1931Label, "CIE 1931");
    lv_obj_clear_flag(ui_CIE1931Label, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CIE1931Label, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CIE1931Label, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CIE1931Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CIE1931Label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CIE1931Label, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CCTeditLabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CCTeditLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CCTeditLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CCTeditLabel1, 125);
    lv_obj_set_y(ui_CCTeditLabel1, -25);
    lv_obj_set_align(ui_CCTeditLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CCTeditLabel1, "6456");
    lv_obj_clear_flag(ui_CCTeditLabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CCTeditLabel1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CCTeditLabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CCTeditLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CCTeditLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CCTeditLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CRIeditLabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CRIeditLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CRIeditLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CRIeditLabel1, 125);
    lv_obj_set_y(ui_CRIeditLabel1, 26);
    lv_obj_set_align(ui_CRIeditLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CRIeditLabel1, "77");
    lv_obj_clear_flag(ui_CRIeditLabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CRIeditLabel1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CRIeditLabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CRIeditLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CRIeditLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CRIeditLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CIE1931editLabel1 = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_CIE1931editLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CIE1931editLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CIE1931editLabel1, 125);
    lv_obj_set_y(ui_CIE1931editLabel1, 95);
    lv_obj_set_align(ui_CIE1931editLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_CIE1931editLabel1, "x:  0.43\ny: 0.34");
    lv_obj_clear_flag(ui_CIE1931editLabel1,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_CIE1931editLabel1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_CIE1931editLabel1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CIE1931editLabel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_CIE1931editLabel1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CIE1931editLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PPFDlabel = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_PPFDlabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PPFDlabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PPFDlabel, -51);
    lv_obj_set_y(ui_PPFDlabel, -56);
    lv_obj_set_align(ui_PPFDlabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PPFDlabel, "PPFD");
    lv_obj_set_style_text_color(ui_PPFDlabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PPFDlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PPFDlabel, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PPFDeditLabel = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_PPFDeditLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PPFDeditLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PPFDeditLabel, 136);
    lv_obj_set_y(ui_PPFDeditLabel, 55);
    lv_label_set_text(ui_PPFDeditLabel, "ppfdvalue");
    lv_obj_set_style_text_color(ui_PPFDeditLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PPFDeditLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_PPFDeditLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PPFDeditLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_usLabel = lv_label_create(ui_ChartparScreen);
    lv_obj_set_width(ui_usLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_usLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_usLabel, 137);
    lv_obj_set_y(ui_usLabel, -91);
    lv_obj_set_align(ui_usLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_usLabel, "50 us");
    lv_obj_clear_flag(ui_usLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_usLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_usLabel, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_usLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_usLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_usLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Fbutton = lv_btn_create(ui_ChartparScreen);
    lv_obj_set_width(ui_Fbutton, 30);
    lv_obj_set_height(ui_Fbutton, 20);
    lv_obj_set_x(ui_Fbutton, 229);
    lv_obj_set_y(ui_Fbutton, 55);
    lv_obj_clear_flag(ui_Fbutton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Fbutton, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Fbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Fbutton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Fbutton, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Flabel = lv_label_create(ui_Fbutton);
    lv_obj_set_width(ui_Flabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Flabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Flabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Flabel, "F");
    lv_obj_set_style_text_font(ui_Flabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_exposureTimSlider, ui_event_exposureTimSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartparMeasureButton, ui_event_ChartparMeasureButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backButton, ui_event_backButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_menuDropdown, ui_event_menuDropdown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Flabel, ui_event_Flabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Fbutton, ui_event_Fbutton, LV_EVENT_ALL, NULL);

}
void ui_Chartfullfull_screen_init(void)
{
    ui_Chartfullfull = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chartfullfull, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_exposureTimSlider1 = lv_slider_create(ui_Chartfullfull);
    lv_slider_set_range(ui_exposureTimSlider1, 10, 5000);
    lv_slider_set_value(ui_exposureTimSlider1, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_exposureTimSlider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_exposureTimSlider1, 0,
                                                                                                       LV_ANIM_OFF);
    lv_obj_set_width(ui_exposureTimSlider1, 150);
    lv_obj_set_height(ui_exposureTimSlider1, 7);
    lv_obj_set_x(ui_exposureTimSlider1, 77);
    lv_obj_set_y(ui_exposureTimSlider1, -224);
    lv_obj_set_align(ui_exposureTimSlider1, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_exposureTimSlider1,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider1, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider1, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider1, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider1, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button7 = lv_btn_create(ui_Chartfullfull);
    lv_obj_set_height(ui_Measurements_Button7, 28);
    lv_obj_set_width(ui_Measurements_Button7, LV_SIZE_CONTENT);   /// 70
    lv_obj_set_x(ui_Measurements_Button7, 116);
    lv_obj_set_y(ui_Measurements_Button7, 5);
    lv_obj_clear_flag(ui_Measurements_Button7,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button7, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button7, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label12 = lv_label_create(ui_Measurements_Button7);
    lv_obj_set_width(ui_Measurements_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label12, 0);
    lv_obj_set_y(ui_Measurements_Label12, -1);
    lv_obj_set_align(ui_Measurements_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label12, "M");
    lv_obj_clear_flag(ui_Measurements_Label12,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_font(ui_Measurements_Label12, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartfullfullChart = lv_chart_create(ui_Chartfullfull);
    lv_obj_set_width(ui_ChartfullfullChart, lv_pct(91));
    lv_obj_set_height(ui_ChartfullfullChart, lv_pct(78));
    lv_obj_set_x(ui_ChartfullfullChart, 15);
    lv_obj_set_y(ui_ChartfullfullChart, -15);
    lv_obj_set_align(ui_ChartfullfullChart, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_ChartfullfullChart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartfullfullChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_ChartfullfullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartfullfullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_ChartfullfullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartfullfullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartfullfullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartfullfullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_backbutton = lv_btn_create(ui_Chartfullfull);
    lv_obj_set_width(ui_backbutton, 40);
    lv_obj_set_height(ui_backbutton, 30);
    lv_obj_set_x(ui_backbutton, 3);
    lv_obj_set_y(ui_backbutton, 3);
    lv_obj_clear_flag(ui_backbutton, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_backbutton, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_backbutton, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backbutton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backbutton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backbutton, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backbutton, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backbutton, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel = lv_label_create(ui_backbutton);
    lv_obj_set_width(ui_backLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel, "Back");
    lv_obj_clear_flag(ui_backLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_backLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_align(ui_backLabel, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_menuDropdown1 = lv_dropdown_create(ui_Chartfullfull);
    lv_dropdown_set_options(ui_menuDropdown1, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_menuDropdown1, false);
    lv_dropdown_set_text(ui_menuDropdown1, "Menu");
    lv_obj_set_width(ui_menuDropdown1, 60);
    lv_obj_set_height(ui_menuDropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_menuDropdown1, 50);
    lv_obj_set_y(ui_menuDropdown1, 3);
    lv_obj_add_flag(ui_menuDropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_menuDropdown1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_menuDropdown1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_menuDropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_menuDropdown1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_menuDropdown1, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_menuDropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_menuDropdown1, &lv_font_montserrat_8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_usLabel2 = lv_label_create(ui_Chartfullfull);
    lv_obj_set_width(ui_usLabel2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_usLabel2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_usLabel2, 134);
    lv_obj_set_y(ui_usLabel2, -92);
    lv_obj_set_align(ui_usLabel2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_usLabel2, "50 us");
    lv_obj_clear_flag(ui_usLabel2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_usLabel2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_usLabel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_usLabel2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_usLabel2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_exposureTimSlider1, ui_event_exposureTimSlider1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button7, ui_event_Measurements_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backbutton, ui_event_backbutton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_menuDropdown1, ui_event_menuDropdown1, LV_EVENT_ALL, NULL);

}
void ui_Chartparfull_screen_init(void)
{
    ui_Chartparfull = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chartparfull, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_exposureTimSlider2 = lv_slider_create(ui_Chartparfull);
    lv_slider_set_range(ui_exposureTimSlider2, 10, 5000);
    lv_slider_set_value(ui_exposureTimSlider2, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_exposureTimSlider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_exposureTimSlider2, 0,
                                                                                                       LV_ANIM_OFF);
    lv_obj_set_width(ui_exposureTimSlider2, 150);
    lv_obj_set_height(ui_exposureTimSlider2, 7);
    lv_obj_set_x(ui_exposureTimSlider2, 77);
    lv_obj_set_y(ui_exposureTimSlider2, -224);
    lv_obj_set_align(ui_exposureTimSlider2, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_exposureTimSlider2,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider2, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider2, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_exposureTimSlider2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_exposureTimSlider2, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_exposureTimSlider2, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_exposureTimSlider2, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button10 = lv_btn_create(ui_Chartparfull);
    lv_obj_set_height(ui_Measurements_Button10, 28);
    lv_obj_set_width(ui_Measurements_Button10, LV_SIZE_CONTENT);   /// 70
    lv_obj_set_x(ui_Measurements_Button10, 116);
    lv_obj_set_y(ui_Measurements_Button10, 5);
    lv_obj_clear_flag(ui_Measurements_Button10,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button10, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button10, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label17 = lv_label_create(ui_Measurements_Button10);
    lv_obj_set_width(ui_Measurements_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label17, 0);
    lv_obj_set_y(ui_Measurements_Label17, -1);
    lv_obj_set_align(ui_Measurements_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label17, "M");
    lv_obj_clear_flag(ui_Measurements_Label17,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_Measurements_Label17, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_Measurements_Label17, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartParfullChart = lv_chart_create(ui_Chartparfull);
    lv_obj_set_width(ui_ChartParfullChart, lv_pct(91));
    lv_obj_set_height(ui_ChartParfullChart, lv_pct(78));
    lv_obj_set_x(ui_ChartParfullChart, 15);
    lv_obj_set_y(ui_ChartParfullChart, -15);
    lv_obj_set_align(ui_ChartParfullChart, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_ChartParfullChart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartParfullChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_ChartParfullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartParfullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_ChartParfullChart, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_ChartParfullChart, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartParfullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_ChartParfullChart, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_backbutton1 = lv_btn_create(ui_Chartparfull);
    lv_obj_set_width(ui_backbutton1, 40);
    lv_obj_set_height(ui_backbutton1, 30);
    lv_obj_set_x(ui_backbutton1, 3);
    lv_obj_set_y(ui_backbutton1, 3);
    lv_obj_add_flag(ui_backbutton1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backbutton1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backbutton1, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backbutton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_backbutton1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_backbutton1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_backbutton1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_backbutton1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backbutton1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backLabel1 = lv_label_create(ui_backbutton1);
    lv_obj_set_width(ui_backLabel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_backLabel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_backLabel1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_backLabel1, "Back");
    lv_obj_clear_flag(ui_backLabel1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_align(ui_backLabel1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_backLabel1, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Dropdown4 = lv_dropdown_create(ui_Chartparfull);
    lv_dropdown_set_options(ui_ChartFull_Dropdown4, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_ChartFull_Dropdown4, false);
    lv_dropdown_set_text(ui_ChartFull_Dropdown4, "Menu");
    lv_obj_set_width(ui_ChartFull_Dropdown4, 60);
    lv_obj_set_height(ui_ChartFull_Dropdown4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Dropdown4, 50);
    lv_obj_set_y(ui_ChartFull_Dropdown4, 3);
    lv_obj_add_flag(ui_ChartFull_Dropdown4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChartFull_Dropdown4,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_ChartFull_Dropdown4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Dropdown4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Dropdown4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ChartFull_Dropdown4, lv_color_hex(0x3938CD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFull_Dropdown4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_ChartFull_Dropdown4, &lv_font_montserrat_8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_usLabel3 = lv_label_create(ui_Chartparfull);
    lv_obj_set_width(ui_usLabel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_usLabel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_usLabel3, 134);
    lv_obj_set_y(ui_usLabel3, -92);
    lv_obj_set_align(ui_usLabel3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_usLabel3, "50 us");
    lv_obj_clear_flag(ui_usLabel3, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_usLabel3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_usLabel3, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_usLabel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_usLabel3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_usLabel3, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_exposureTimSlider2, ui_event_exposureTimSlider2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label17, ui_event_Measurements_Label17, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button10, ui_event_Measurements_Button10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_backbutton1, ui_event_backbutton1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFull_Dropdown4, ui_event_ChartFull_Dropdown4, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_HomeScreen_screen_init();
    ui_MeasurementsScreen_screen_init();
    ui_ChartFullScreen_screen_init();
    ui_OptionsScreen_screen_init();
    ui_ChartparScreen_screen_init();
    ui_Chartfullfull_screen_init();
    ui_Chartparfull_screen_init();
    lv_disp_load_scr(ui_HomeScreen);
}
