// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: SpectrometerDisplayV1

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_Label1;
void ui_event_Bar1(lv_event_t * e);
lv_obj_t * ui_Bar1;
lv_obj_t * ui_Label2;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label3;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Measurements;
lv_obj_t * ui_Label5;
void ui_event_Back(lv_event_t * e);
lv_obj_t * ui_Back;
lv_obj_t * ui_Measurements_Label6;
void ui_event_Measurements_Button3(lv_event_t * e);
lv_obj_t * ui_Measurements_Button3;
lv_obj_t * ui_Measurements_Label1;
void ui_event_Measurements_Button1(lv_event_t * e);
lv_obj_t * ui_Measurements_Button1;
lv_obj_t * ui_Measurements_Label2;
lv_obj_t * ui_Measurements_Button2;
lv_obj_t * ui_Measurements_Label3;
void ui_event_Measurements_Slider1(lv_event_t * e);
lv_obj_t * ui_Measurements_Slider1;
void ui_event_Measurements_Button4(lv_event_t * e);
lv_obj_t * ui_Measurements_Button4;
lv_obj_t * ui_Measurements_Label7;
void ui_event_Measurements_Switch1(lv_event_t * e);
lv_obj_t * ui_Measurements_Switch1;
void ui_event_Measurements_Switch2(lv_event_t * e);
lv_obj_t * ui_Measurements_Switch2;
lv_obj_t * ui_Measurements_Label8;
lv_obj_t * ui_Measurements_Label9;
lv_obj_t * ui_Measurements_Label14;
lv_obj_t * ui_ChartFull;
void ui_event_Measurements_Slider2(lv_event_t * e);
lv_obj_t * ui_Measurements_Slider2;
void ui_event_Measurements_Button5(lv_event_t * e);
lv_obj_t * ui_Measurements_Button5;
void ui_event_Measurements_Label5(lv_event_t * e);
lv_obj_t * ui_Measurements_Label5;
lv_obj_t * ui_Chart1;
void ui_event_Back1(lv_event_t * e);
lv_obj_t * ui_Back1;
lv_obj_t * ui_Measurements_Label4;
void ui_event_ChartFull_Dropdown1(lv_event_t * e);
lv_obj_t * ui_ChartFull_Dropdown1;
lv_obj_t * ui_ChartFull_Label10;
lv_obj_t * ui_ChartFull_Label11;
lv_obj_t * ui_ChartFull_Label1;
lv_obj_t * ui_ChartFull_Label2;
lv_obj_t * ui_ChartFull_Label3;
lv_obj_t * ui_ChartFull_Label4;
lv_obj_t * ui_ChartFull_Label5;
lv_obj_t * ui_ChartFull_Label26;
void ui_event_Measurements_Button8(lv_event_t * e);
lv_obj_t * ui_Measurements_Button8;
void ui_event_Measurements_Label15(lv_event_t * e);
lv_obj_t * ui_Measurements_Label15;
lv_obj_t * ui_Options;
void ui_event_Back5(lv_event_t * e);
lv_obj_t * ui_Back5;
lv_obj_t * ui_Measurements_Label19;
void ui_event_Measurements_Button11(lv_event_t * e);
lv_obj_t * ui_Measurements_Button11;
void ui_event_Measurements_Label20(lv_event_t * e);
lv_obj_t * ui_Measurements_Label20;
lv_obj_t * ui_Options_Roller2;
lv_obj_t * ui_Chartpar;
void ui_event_Measurements_Slider3(lv_event_t * e);
lv_obj_t * ui_Measurements_Slider3;
void ui_event_Measurements_Button6(lv_event_t * e);
lv_obj_t * ui_Measurements_Button6;
void ui_event_Measurements_Label10(lv_event_t * e);
lv_obj_t * ui_Measurements_Label10;
lv_obj_t * ui_Chart3;
void ui_event_Back2(lv_event_t * e);
lv_obj_t * ui_Back2;
lv_obj_t * ui_Measurements_Label11;
void ui_event_ChartFull_Dropdown2(lv_event_t * e);
lv_obj_t * ui_ChartFull_Dropdown2;
lv_obj_t * ui_ChartFull_Label6;
lv_obj_t * ui_ChartFull_Label7;
lv_obj_t * ui_ChartFull_Label8;
lv_obj_t * ui_ChartFull_Label9;
lv_obj_t * ui_ChartFull_Label12;
lv_obj_t * ui_ChartFull_Label13;
lv_obj_t * ui_ChartFull_Label14;
lv_obj_t * ui_ChartFull_Label15;
lv_obj_t * ui_ChartFull_Label16;
lv_obj_t * ui_ChartFull_Label24;
void ui_event_Measurements_Button9(lv_event_t * e);
lv_obj_t * ui_Measurements_Button9;
void ui_event_Measurements_Label16(lv_event_t * e);
lv_obj_t * ui_Measurements_Label16;
lv_obj_t * ui_Chartfullfull;
void ui_event_Measurements_Slider4(lv_event_t * e);
lv_obj_t * ui_Measurements_Slider4;
void ui_event_Measurements_Button7(lv_event_t * e);
lv_obj_t * ui_Measurements_Button7;
void ui_event_Measurements_Label12(lv_event_t * e);
lv_obj_t * ui_Measurements_Label12;
lv_obj_t * ui_Chart4;
void ui_event_Back3(lv_event_t * e);
lv_obj_t * ui_Back3;
lv_obj_t * ui_Measurements_Label13;
void ui_event_ChartFull_Dropdown3(lv_event_t * e);
lv_obj_t * ui_ChartFull_Dropdown3;
lv_obj_t * ui_ChartFull_Label25;
lv_obj_t * ui_Chartparfull;
void ui_event_Measurements_Slider5(lv_event_t * e);
lv_obj_t * ui_Measurements_Slider5;
void ui_event_Measurements_Button10(lv_event_t * e);
lv_obj_t * ui_Measurements_Button10;
void ui_event_Measurements_Label17(lv_event_t * e);
lv_obj_t * ui_Measurements_Label17;
lv_obj_t * ui_Chart5;
void ui_event_Back4(lv_event_t * e);
lv_obj_t * ui_Back4;
lv_obj_t * ui_Measurements_Label18;
void ui_event_ChartFull_Dropdown4(lv_event_t * e);
lv_obj_t * ui_ChartFull_Dropdown4;
lv_obj_t * ui_ChartFull_Label17;


extern uint16_t adc_buf[288];
extern float wavelength_converted[288];
extern void adc_convert_first(void);
extern void adc_convert_second(void);
extern uint16_t adc_converted[288];
extern uint32_t adc_avg[288];
extern void wavelength_range(bool par, uint16_t *first_pixel, uint16_t *last_pixel);
extern uint16_t first_pixel;
extern uint16_t last_pixel;

static lv_chart_series_t * ser1;
bool hilo = false;

void refresh_chart(void);
void refresh_chart_y(void);
void gain(void);

//static lv_chart_series_t * ser2;

//extern ADC_BUF_L;


///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void refresh_chart(void){

	uint16_t i;
	for(i = 0; i < 288; i++ ){
		lv_chart_set_next_value2(ui_Chart1, ser1, wavelength_converted[i], 0);
	}
}

void refresh_chart_y(void){


			lv_chart_set_ext_y_array(ui_Chart1, ser1, (lv_coord_t *)adc_converted);


}

void gain(void){
	if(hilo == true) {
		lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
	}
	else{
		lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 0, 3500);
	}

}

void ui_event_Bar1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        _ui_bar_increment(ui_Bar1, 100, LV_ANIM_ON);
    }
}
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Measurements, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Options, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Back(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartpar, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Slider1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        faveraging(e);
        _ui_slider_set_text_value(ui_Measurements_Label14, target, "", "");
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
        _ui_state_modify(ui_Measurements_Slider1, LV_STATE_DISABLED, _UI_MODIFY_STATE_TOGGLE);
    }
}
void ui_event_Measurements_Switch1(lv_event_t * e)
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
void ui_event_Measurements_Switch2(lv_event_t * e)
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
void ui_event_Measurements_Slider2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_ChartFull_Label26, target, "", " us");
    }
}
void ui_event_Measurements_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_Measurements_Label5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Back1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Measurements, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ChartFull_Dropdown1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_Measurements_Button8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartfullfull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Label15(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Back5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Button11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Label20(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Measurements_Slider3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_ChartFull_Label24, target, "", " us");
    }
}
void ui_event_Measurements_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        fmeasure(e);
    }
}
void ui_event_Measurements_Label10(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Back2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Measurements, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ChartFull_Dropdown2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_Measurements_Button9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartparfull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_Measurements_Label16(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Measurements_Slider4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_ChartFull_Label25, target, "", " us");
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
void ui_event_Measurements_Label12(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        fmeasure(e);
    }
}
void ui_event_Back3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_ChartFull, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ChartFull_Dropdown3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        menuchanged(e);
    }
}
void ui_event_Measurements_Slider5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        fexposurechange(e);
        _ui_slider_set_text_value(ui_ChartFull_Label17, target, "", " us");
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
void ui_event_Back4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Chartpar, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
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
void ui_Home_screen_init(void)
{
    ui_Home = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_grad_color(ui_Home, lv_color_hex(0x4E48A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Home, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Home, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Home);
    lv_obj_set_width(ui_Label1, 200);
    lv_obj_set_height(ui_Label1, 50);
    lv_obj_set_x(ui_Label1, 1);
    lv_obj_set_y(ui_Label1, -78);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Quantum Spectrometer\nDaniel Wiejak");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Bar1 = lv_bar_create(ui_Home);
    lv_bar_set_value(ui_Bar1, 50, LV_ANIM_OFF);
    lv_obj_set_width(ui_Bar1, 100);
    lv_obj_set_height(ui_Bar1, 15);
    lv_obj_set_x(ui_Bar1, 0);
    lv_obj_set_y(ui_Bar1, 90);
    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);
    lv_obj_set_style_anim_time(ui_Bar1, 500, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0x2924A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Bar1, 50, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Bar1, 1000, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Bar1, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Bar1, lv_color_hex(0x0D07A2), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Bar1, LV_BLEND_MODE_NORMAL, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Home);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 10
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 10
    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 72);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Calibration Progress");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x2924A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Home);
    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);
    lv_obj_set_x(ui_Button1, 10);
    lv_obj_set_y(ui_Button1, 0);
    lv_obj_set_align(ui_Button1, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x302BCA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button1, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Button1, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -1);
    lv_obj_set_y(ui_Label3, 0);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Start");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Label3, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Home);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, -10);
    lv_obj_set_y(ui_Button2, 0);
    lv_obj_set_align(ui_Button2, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x3E3AC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button2, lv_color_hex(0x302BCA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Button2, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -1);
    lv_obj_set_y(ui_Label4, 0);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Options");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_blend_mode(ui_Label4, LV_BLEND_MODE_NORMAL, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Bar1, ui_event_Bar1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);

}
void ui_Measurements_screen_init(void)
{
    ui_Measurements = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Measurements, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Label5 = lv_label_create(ui_Measurements);
    lv_obj_set_width(ui_Label5, 147);
    lv_obj_set_height(ui_Label5, 15);
    lv_obj_set_x(ui_Label5, 0);
    lv_obj_set_y(ui_Label5, -100);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "MEASUREMENTS");
    lv_obj_clear_flag(ui_Label5, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x2823C9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Back = lv_btn_create(ui_Measurements);
    lv_obj_set_width(ui_Back, 40);
    lv_obj_set_height(ui_Back, 40);
    lv_obj_set_x(ui_Back, 3);
    lv_obj_set_y(ui_Back, 3);
    lv_obj_add_flag(ui_Back, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label6 = lv_label_create(ui_Back);
    lv_obj_set_width(ui_Measurements_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label6, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label6, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Button3 = lv_btn_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Button3, 90);
    lv_obj_set_height(ui_Measurements_Button3, 45);
    lv_obj_set_x(ui_Measurements_Button3, 10);
    lv_obj_set_y(ui_Measurements_Button3, 80);
    lv_obj_add_flag(ui_Measurements_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Measurements_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button3, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label1 = lv_label_create(ui_Measurements_Button3);
    lv_obj_set_width(ui_Measurements_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label1, "Full");

    ui_Measurements_Button1 = lv_btn_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Button1, 90);
    lv_obj_set_height(ui_Measurements_Button1, 45);
    lv_obj_set_x(ui_Measurements_Button1, 0);
    lv_obj_set_y(ui_Measurements_Button1, 80);
    lv_obj_set_align(ui_Measurements_Button1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_Measurements_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Measurements_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button1, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label2 = lv_label_create(ui_Measurements_Button1);
    lv_obj_set_width(ui_Measurements_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label2, "PAR");

    ui_Measurements_Button2 = lv_btn_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Button2, 90);
    lv_obj_set_height(ui_Measurements_Button2, 45);
    lv_obj_set_x(ui_Measurements_Button2, -10);
    lv_obj_set_y(ui_Measurements_Button2, 80);
    lv_obj_set_align(ui_Measurements_Button2, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Measurements_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Measurements_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button2, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label3 = lv_label_create(ui_Measurements_Button2);
    lv_obj_set_width(ui_Measurements_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label3, "User");

    ui_Measurements_Slider1 = lv_slider_create(ui_Measurements);
    lv_slider_set_range(ui_Measurements_Slider1, 1, 50);
    lv_slider_set_value(ui_Measurements_Slider1, 5, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Measurements_Slider1) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Measurements_Slider1, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Measurements_Slider1, 150);
    lv_obj_set_height(ui_Measurements_Slider1, 10);
    lv_obj_set_x(ui_Measurements_Slider1, 0);
    lv_obj_set_y(ui_Measurements_Slider1, -10);
    lv_obj_set_align(ui_Measurements_Slider1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_state(ui_Measurements_Slider1, LV_STATE_PRESSED);       /// States
    lv_obj_clear_flag(ui_Measurements_Slider1,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider1, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider1, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider1, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider1, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider1, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button4 = lv_btn_create(ui_Measurements);
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
    lv_obj_set_style_text_font(ui_Measurements_Button4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Measurements_Label7 = lv_label_create(ui_Measurements_Button4);
    lv_obj_set_width(ui_Measurements_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label7, "Averaging");
    lv_obj_set_style_text_color(ui_Measurements_Label7, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Measurements_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label7, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Switch1 = lv_switch_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Switch1, 45);
    lv_obj_set_height(ui_Measurements_Switch1, 20);
    lv_obj_set_x(ui_Measurements_Switch1, 10);
    lv_obj_set_y(ui_Measurements_Switch1, -10);
    lv_obj_set_align(ui_Measurements_Switch1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(ui_Measurements_Switch1,
                      LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Switch1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Switch1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch1, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Measurements_Switch1, lv_color_hex(0x312CA4),
                              LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_Measurements_Switch1, lv_color_hex(0x7674A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Switch1, lv_color_hex(0x312CA4), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch1, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_Measurements_Switch2 = lv_switch_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Switch2, 45);
    lv_obj_set_height(ui_Measurements_Switch2, 20);
    lv_obj_set_x(ui_Measurements_Switch2, -10);
    lv_obj_set_y(ui_Measurements_Switch2, -10);
    lv_obj_set_align(ui_Measurements_Switch2, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_clear_flag(ui_Measurements_Switch2,
                      LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Switch2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Switch2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch2, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Measurements_Switch2, lv_color_hex(0x312CA4),
                              LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch2, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    lv_obj_set_style_bg_color(ui_Measurements_Switch2, lv_color_hex(0x7674A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Switch2, lv_color_hex(0x312CA4), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Measurements_Switch2, 255, LV_PART_INDICATOR | LV_STATE_CHECKED);

    ui_Measurements_Label8 = lv_label_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label8, -127);
    lv_obj_set_y(ui_Measurements_Label8, 73);
    lv_obj_set_align(ui_Measurements_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label8, "Gain");
    lv_obj_clear_flag(ui_Measurements_Label8,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Measurements_Label8, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Measurements_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label8, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Measurements_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Measurements_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label9 = lv_label_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label9, 125);
    lv_obj_set_y(ui_Measurements_Label9, 69);
    lv_obj_set_align(ui_Measurements_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label9, "Auto\nexposure");
    lv_obj_set_style_text_color(ui_Measurements_Label9, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Measurements_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Label9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label9, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label14 = lv_label_create(ui_Measurements);
    lv_obj_set_width(ui_Measurements_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label14, 61);
    lv_obj_set_y(ui_Measurements_Label14, 91);
    lv_obj_set_align(ui_Measurements_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label14, "5");
    lv_obj_clear_flag(ui_Measurements_Label14,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_text_color(ui_Measurements_Label14, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Measurements_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label14, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Measurements_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Measurements_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Back, ui_event_Back, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button3, ui_event_Measurements_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button1, ui_event_Measurements_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Slider1, ui_event_Measurements_Slider1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button4, ui_event_Measurements_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Switch1, ui_event_Measurements_Switch1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Switch2, ui_event_Measurements_Switch2, LV_EVENT_ALL, NULL);

}
void ui_ChartFull_screen_init(void)
{
    ui_ChartFull = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ChartFull, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Measurements_Slider2 = lv_slider_create(ui_ChartFull);
    lv_slider_set_range(ui_Measurements_Slider2, 10, 5000);
    lv_slider_set_value(ui_Measurements_Slider2, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Measurements_Slider2) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Measurements_Slider2, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Measurements_Slider2, 150);
    lv_obj_set_height(ui_Measurements_Slider2, 10);
    lv_obj_set_x(ui_Measurements_Slider2, 72);
    lv_obj_set_y(ui_Measurements_Slider2, -193);
    lv_obj_set_align(ui_Measurements_Slider2, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Measurements_Slider2,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider2, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider2, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider2, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider2, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider2, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider2, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button5 = lv_btn_create(ui_ChartFull);
    lv_obj_set_width(ui_Measurements_Button5, 70);
    lv_obj_set_height(ui_Measurements_Button5, 30);
    lv_obj_set_x(ui_Measurements_Button5, 5);
    lv_obj_set_y(ui_Measurements_Button5, 49);
    lv_obj_clear_flag(ui_Measurements_Button5,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button5, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label5 = lv_label_create(ui_Measurements_Button5);
    lv_obj_set_width(ui_Measurements_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label5, "Measure");
    lv_obj_set_style_text_font(ui_Measurements_Label5, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart1 = lv_chart_create(ui_ChartFull);
    lv_obj_set_width(ui_Chart1, lv_pct(74));
    lv_obj_set_height(ui_Chart1, lv_pct(60));
    lv_obj_set_x(ui_Chart1, 15);
    lv_obj_set_y(ui_Chart1, -10);
    lv_obj_set_align(ui_Chart1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_Chart1, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_Chart1, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_Back1 = lv_btn_create(ui_ChartFull);
    lv_obj_set_width(ui_Back1, 40);
    lv_obj_set_height(ui_Back1, 40);
    lv_obj_set_x(ui_Back1, 3);
    lv_obj_set_y(ui_Back1, 3);
    lv_obj_add_flag(ui_Back1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back1, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label4 = lv_label_create(ui_Back1);
    lv_obj_set_width(ui_Measurements_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label4, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label4, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Dropdown1 = lv_dropdown_create(ui_ChartFull);
    lv_dropdown_set_options(ui_ChartFull_Dropdown1, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_ChartFull_Dropdown1, false);
    lv_dropdown_set_text(ui_ChartFull_Dropdown1, "Menu");
    lv_obj_set_width(ui_ChartFull_Dropdown1, 90);
    lv_obj_set_height(ui_ChartFull_Dropdown1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Dropdown1, 50);
    lv_obj_set_y(ui_ChartFull_Dropdown1, 3);
    lv_obj_add_flag(ui_ChartFull_Dropdown1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChartFull_Dropdown1,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_ChartFull_Dropdown1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Dropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Dropdown1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ChartFull_Dropdown1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFull_Dropdown1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label10 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label10, 59);
    lv_obj_set_y(ui_ChartFull_Label10, -103);
    lv_obj_set_align(ui_ChartFull_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label10, "Exposure tim");
    lv_obj_set_style_text_color(ui_ChartFull_Label10, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label10, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label11 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label11, 125);
    lv_obj_set_y(ui_ChartFull_Label11, -45);
    lv_obj_set_align(ui_ChartFull_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label11, "CCT");
    lv_obj_set_style_text_color(ui_ChartFull_Label11, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label11, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label1 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label1, 125);
    lv_obj_set_y(ui_ChartFull_Label1, 4);
    lv_obj_set_align(ui_ChartFull_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label1, "CRI");
    lv_obj_set_style_text_color(ui_ChartFull_Label1, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label2 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label2, 125);
    lv_obj_set_y(ui_ChartFull_Label2, 64);
    lv_obj_set_align(ui_ChartFull_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label2, "CIE 1931");
    lv_obj_set_style_text_color(ui_ChartFull_Label2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label3 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label3, 125);
    lv_obj_set_y(ui_ChartFull_Label3, -25);
    lv_obj_set_align(ui_ChartFull_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label3, "6543");
    lv_obj_set_style_text_color(ui_ChartFull_Label3, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label4 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label4, 125);
    lv_obj_set_y(ui_ChartFull_Label4, 26);
    lv_obj_set_align(ui_ChartFull_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label4, "69");
    lv_obj_set_style_text_color(ui_ChartFull_Label4, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label5 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label5, 125);
    lv_obj_set_y(ui_ChartFull_Label5, 95);
    lv_obj_set_align(ui_ChartFull_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label5, "x: 0.25\ny: 0.32");
    lv_obj_set_style_text_color(ui_ChartFull_Label5, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label26 = lv_label_create(ui_ChartFull);
    lv_obj_set_width(ui_ChartFull_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label26, 137);
    lv_obj_set_y(ui_ChartFull_Label26, -91);
    lv_obj_set_align(ui_ChartFull_Label26, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label26, "50 us");
    lv_obj_set_style_text_color(ui_ChartFull_Label26, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label26, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label26, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label26, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Button8 = lv_btn_create(ui_ChartFull);
    lv_obj_set_width(ui_Measurements_Button8, 30);
    lv_obj_set_height(ui_Measurements_Button8, 20);
    lv_obj_set_x(ui_Measurements_Button8, 207);
    lv_obj_set_y(ui_Measurements_Button8, 56);
    lv_obj_clear_flag(ui_Measurements_Button8,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button8, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button8, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label15 = lv_label_create(ui_Measurements_Button8);
    lv_obj_set_width(ui_Measurements_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label15, "F");
    lv_obj_set_style_text_font(ui_Measurements_Label15, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Measurements_Slider2, ui_event_Measurements_Slider2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label5, ui_event_Measurements_Label5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button5, ui_event_Measurements_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Back1, ui_event_Back1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFull_Dropdown1, ui_event_ChartFull_Dropdown1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label15, ui_event_Measurements_Label15, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button8, ui_event_Measurements_Button8, LV_EVENT_ALL, NULL);

}
void ui_Options_screen_init(void)
{
    ui_Options = lv_obj_create(NULL);
    lv_obj_add_flag(ui_Options, LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_Options, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC);      /// Flags

    ui_Back5 = lv_btn_create(ui_Options);
    lv_obj_set_width(ui_Back5, 40);
    lv_obj_set_height(ui_Back5, 40);
    lv_obj_set_x(ui_Back5, 3);
    lv_obj_set_y(ui_Back5, 3);
    lv_obj_add_flag(ui_Back5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back5, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back5, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label19 = lv_label_create(ui_Back5);
    lv_obj_set_width(ui_Measurements_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label19, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label19, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label19, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Button11 = lv_btn_create(ui_Options);
    lv_obj_set_width(ui_Measurements_Button11, 113);
    lv_obj_set_height(ui_Measurements_Button11, 30);
    lv_obj_set_x(ui_Measurements_Button11, 87);
    lv_obj_set_y(ui_Measurements_Button11, 24);
    lv_obj_set_align(ui_Measurements_Button11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Measurements_Button11,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_Measurements_Button11, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_Measurements_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_Measurements_Button11, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_Measurements_Button11, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button11, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label20 = lv_label_create(ui_Measurements_Button11);
    lv_obj_set_width(ui_Measurements_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label20, "Start ADC calibration");
    lv_obj_set_style_text_color(ui_Measurements_Label20, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Measurements_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label20, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Options_Roller2 = lv_roller_create(ui_Options);
    lv_roller_set_options(ui_Options_Roller2, "Calibration\nSpectral Response\nDark baseline\nExport Data",
                          LV_ROLLER_MODE_INFINITE);
    lv_obj_set_height(ui_Options_Roller2, 170);
    lv_obj_set_width(ui_Options_Roller2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Options_Roller2, 10);
    lv_obj_set_y(ui_Options_Roller2, -10);
    lv_obj_set_align(ui_Options_Roller2, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_Options_Roller2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Options_Roller2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Options_Roller2, lv_color_hex(0x5E61BC), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Options_Roller2, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Back5, ui_event_Back5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label20, ui_event_Measurements_Label20, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button11, ui_event_Measurements_Button11, LV_EVENT_ALL, NULL);

}
void ui_Chartpar_screen_init(void)
{
    ui_Chartpar = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chartpar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Measurements_Slider3 = lv_slider_create(ui_Chartpar);
    lv_slider_set_range(ui_Measurements_Slider3, 10, 5000);
    lv_slider_set_value(ui_Measurements_Slider3, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Measurements_Slider3) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Measurements_Slider3, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Measurements_Slider3, 150);
    lv_obj_set_height(ui_Measurements_Slider3, 10);
    lv_obj_set_x(ui_Measurements_Slider3, 72);
    lv_obj_set_y(ui_Measurements_Slider3, -193);
    lv_obj_set_align(ui_Measurements_Slider3, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Measurements_Slider3,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider3, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider3, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider3, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider3, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider3, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider3, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button6 = lv_btn_create(ui_Chartpar);
    lv_obj_set_width(ui_Measurements_Button6, 70);
    lv_obj_set_height(ui_Measurements_Button6, 30);
    lv_obj_set_x(ui_Measurements_Button6, 5);
    lv_obj_set_y(ui_Measurements_Button6, 49);
    lv_obj_clear_flag(ui_Measurements_Button6,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button6, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button6, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label10 = lv_label_create(ui_Measurements_Button6);
    lv_obj_set_width(ui_Measurements_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label10, "Measure");
    lv_obj_set_style_text_font(ui_Measurements_Label10, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart3 = lv_chart_create(ui_Chartpar);
    lv_obj_set_width(ui_Chart3, lv_pct(74));
    lv_obj_set_height(ui_Chart3, lv_pct(60));
    lv_obj_set_x(ui_Chart3, 15);
    lv_obj_set_y(ui_Chart3, -10);
    lv_obj_set_align(ui_Chart3, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_Chart3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_Chart3, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart3, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_Chart3, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart3, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart3, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart3, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    
//here
    lv_chart_set_update_mode(ui_Chart3, LV_CHART_UPDATE_MODE_CIRCULAR);
    lv_chart_set_type(ui_Chart3, LV_CHART_TYPE_SCATTER);
    lv_chart_set_range(ui_Chart3, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
    lv_chart_set_range(ui_Chart3, LV_CHART_AXIS_PRIMARY_Y, 0, 1000);
    lv_chart_set_range(ui_Chart3, LV_CHART_AXIS_PRIMARY_X, 350, 750);
    lv_chart_set_point_count(ui_Chart3, 288);
    lv_chart_set_axis_tick(ui_Chart3, LV_CHART_AXIS_PRIMARY_X, 8, 3, 5, 2, true, 300);
    lv_chart_set_axis_tick(ui_Chart3, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 6, 1, true, 30);
    lv_chart_set_axis_tick(ui_Chart3, LV_CHART_AXIS_SECONDARY_Y, 5, 5, 4, 1, true, 20);
    lv_obj_set_style_size(ui_Chart3, 0, LV_PART_INDICATOR);	// size of a data point
    lv_obj_set_style_line_width(ui_Chart3, 1, LV_PART_ITEMS);	// thickness of a line
    wavelength_range(false, &first_pixel, &last_pixel);
    ser1 = lv_chart_add_series(ui_Chart3, lv_palette_lighten(LV_PALETTE_GREEN, 1), LV_CHART_AXIS_SECONDARY_Y);
		refresh_chart();
//tohere
    ui_Back2 = lv_btn_create(ui_Chartpar);
    lv_obj_set_width(ui_Back2, 40);
    lv_obj_set_height(ui_Back2, 40);
    lv_obj_set_x(ui_Back2, 3);
    lv_obj_set_y(ui_Back2, 3);
    lv_obj_add_flag(ui_Back2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back2, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back2, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label11 = lv_label_create(ui_Back2);
    lv_obj_set_width(ui_Measurements_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label11, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label11, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label11, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Dropdown2 = lv_dropdown_create(ui_Chartpar);
    lv_dropdown_set_options(ui_ChartFull_Dropdown2, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_ChartFull_Dropdown2, false);
    lv_dropdown_set_text(ui_ChartFull_Dropdown2, "Menu");
    lv_obj_set_width(ui_ChartFull_Dropdown2, 90);
    lv_obj_set_height(ui_ChartFull_Dropdown2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Dropdown2, 50);
    lv_obj_set_y(ui_ChartFull_Dropdown2, 3);
    lv_obj_add_flag(ui_ChartFull_Dropdown2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChartFull_Dropdown2,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_ChartFull_Dropdown2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Dropdown2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Dropdown2, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ChartFull_Dropdown2, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFull_Dropdown2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label6 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label6, 64);
    lv_obj_set_y(ui_ChartFull_Label6, -102);
    lv_obj_set_align(ui_ChartFull_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label6, "Exposure tim");
    lv_obj_set_style_text_color(ui_ChartFull_Label6, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label6, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label7 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label7, 125);
    lv_obj_set_y(ui_ChartFull_Label7, -45);
    lv_obj_set_align(ui_ChartFull_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label7, "CCT");
    lv_obj_set_style_text_color(ui_ChartFull_Label7, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label7, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label8 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label8, 125);
    lv_obj_set_y(ui_ChartFull_Label8, 4);
    lv_obj_set_align(ui_ChartFull_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label8, "CRI");
    lv_obj_set_style_text_color(ui_ChartFull_Label8, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label8, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label9 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label9, 125);
    lv_obj_set_y(ui_ChartFull_Label9, 64);
    lv_obj_set_align(ui_ChartFull_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label9, "CIE 1931");
    lv_obj_set_style_text_color(ui_ChartFull_Label9, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label9, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label12 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label12, 125);
    lv_obj_set_y(ui_ChartFull_Label12, -25);
    lv_obj_set_align(ui_ChartFull_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label12, "6456");
    lv_obj_set_style_text_color(ui_ChartFull_Label12, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label12, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label13 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label13, 125);
    lv_obj_set_y(ui_ChartFull_Label13, 26);
    lv_obj_set_align(ui_ChartFull_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label13, "77");
    lv_obj_set_style_text_color(ui_ChartFull_Label13, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label13, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label14 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label14, 125);
    lv_obj_set_y(ui_ChartFull_Label14, 95);
    lv_obj_set_align(ui_ChartFull_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label14, "x:  0.43\ny: 0.34");
    lv_obj_set_style_text_color(ui_ChartFull_Label14, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label14, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label15 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label15, -51);
    lv_obj_set_y(ui_ChartFull_Label15, -56);
    lv_obj_set_align(ui_ChartFull_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label15, "PPFD");
    lv_obj_set_style_text_color(ui_ChartFull_Label15, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label15, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label16 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label16, 136);
    lv_obj_set_y(ui_ChartFull_Label16, 55);
    lv_label_set_text(ui_ChartFull_Label16, "ppfdvalue");
    lv_obj_set_style_text_color(ui_ChartFull_Label16, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label16, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label16, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Label24 = lv_label_create(ui_Chartpar);
    lv_obj_set_width(ui_ChartFull_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label24, 137);
    lv_obj_set_y(ui_ChartFull_Label24, -91);
    lv_obj_set_align(ui_ChartFull_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label24, "50 us");
    lv_obj_set_style_text_color(ui_ChartFull_Label24, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label24, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label24, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Button9 = lv_btn_create(ui_Chartpar);
    lv_obj_set_width(ui_Measurements_Button9, 30);
    lv_obj_set_height(ui_Measurements_Button9, 20);
    lv_obj_set_x(ui_Measurements_Button9, 229);
    lv_obj_set_y(ui_Measurements_Button9, 55);
    lv_obj_clear_flag(ui_Measurements_Button9,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button9, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button9, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label16 = lv_label_create(ui_Measurements_Button9);
    lv_obj_set_width(ui_Measurements_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label16, "F");
    lv_obj_set_style_text_font(ui_Measurements_Label16, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Measurements_Slider3, ui_event_Measurements_Slider3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label10, ui_event_Measurements_Label10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button6, ui_event_Measurements_Button6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Back2, ui_event_Back2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFull_Dropdown2, ui_event_ChartFull_Dropdown2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label16, ui_event_Measurements_Label16, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button9, ui_event_Measurements_Button9, LV_EVENT_ALL, NULL);

}
void ui_Chartfullfull_screen_init(void)
{
    ui_Chartfullfull = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chartfullfull, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Measurements_Slider4 = lv_slider_create(ui_Chartfullfull);
    lv_slider_set_range(ui_Measurements_Slider4, 10, 5000);
    lv_slider_set_value(ui_Measurements_Slider4, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Measurements_Slider4) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Measurements_Slider4, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Measurements_Slider4, 150);
    lv_obj_set_height(ui_Measurements_Slider4, 7);
    lv_obj_set_x(ui_Measurements_Slider4, 77);
    lv_obj_set_y(ui_Measurements_Slider4, -224);
    lv_obj_set_align(ui_Measurements_Slider4, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Measurements_Slider4,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider4, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider4, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider4, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider4, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider4, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider4, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button7 = lv_btn_create(ui_Chartfullfull);
    lv_obj_set_height(ui_Measurements_Button7, 28);
    lv_obj_set_width(ui_Measurements_Button7, LV_SIZE_CONTENT);   /// 70
    lv_obj_set_x(ui_Measurements_Button7, 116);
    lv_obj_set_y(ui_Measurements_Button7, 5);
    lv_obj_clear_flag(ui_Measurements_Button7,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button7, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button7, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label12 = lv_label_create(ui_Measurements_Button7);
    lv_obj_set_width(ui_Measurements_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label12, 0);
    lv_obj_set_y(ui_Measurements_Label12, -1);
    lv_obj_set_align(ui_Measurements_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label12, "M");
    lv_obj_set_style_text_font(ui_Measurements_Label12, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart4 = lv_chart_create(ui_Chartfullfull);
    lv_obj_set_width(ui_Chart4, lv_pct(91));
    lv_obj_set_height(ui_Chart4, lv_pct(78));
    lv_obj_set_x(ui_Chart4, 15);
    lv_obj_set_y(ui_Chart4, -15);
    lv_obj_set_align(ui_Chart4, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_Chart4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_Chart4, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart4, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_Chart4, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart4, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart4, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart4, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_Back3 = lv_btn_create(ui_Chartfullfull);
    lv_obj_set_width(ui_Back3, 40);
    lv_obj_set_height(ui_Back3, 30);
    lv_obj_set_x(ui_Back3, 3);
    lv_obj_set_y(ui_Back3, 3);
    lv_obj_add_flag(ui_Back3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back3, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back3, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label13 = lv_label_create(ui_Back3);
    lv_obj_set_width(ui_Measurements_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label13, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label13, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label13, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ChartFull_Dropdown3 = lv_dropdown_create(ui_Chartfullfull);
    lv_dropdown_set_options(ui_ChartFull_Dropdown3, "Full \nPeak\nContinues\nSave");
    lv_dropdown_set_selected_highlight(ui_ChartFull_Dropdown3, false);
    lv_dropdown_set_text(ui_ChartFull_Dropdown3, "Menu");
    lv_obj_set_width(ui_ChartFull_Dropdown3, 60);
    lv_obj_set_height(ui_ChartFull_Dropdown3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Dropdown3, 50);
    lv_obj_set_y(ui_ChartFull_Dropdown3, 3);
    lv_obj_add_flag(ui_ChartFull_Dropdown3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ChartFull_Dropdown3,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_text_color(ui_ChartFull_Dropdown3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Dropdown3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Dropdown3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ChartFull_Dropdown3, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFull_Dropdown3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_ChartFull_Dropdown3, &lv_font_montserrat_10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ChartFull_Label25 = lv_label_create(ui_Chartfullfull);
    lv_obj_set_width(ui_ChartFull_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label25, 134);
    lv_obj_set_y(ui_ChartFull_Label25, -92);
    lv_obj_set_align(ui_ChartFull_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label25, "50 us");
    lv_obj_set_style_text_color(ui_ChartFull_Label25, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label25, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label25, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Measurements_Slider4, ui_event_Measurements_Slider4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label12, ui_event_Measurements_Label12, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button7, ui_event_Measurements_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Back3, ui_event_Back3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFull_Dropdown3, ui_event_ChartFull_Dropdown3, LV_EVENT_ALL, NULL);

}
void ui_Chartparfull_screen_init(void)
{
    ui_Chartparfull = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Chartparfull, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Measurements_Slider5 = lv_slider_create(ui_Chartparfull);
    lv_slider_set_range(ui_Measurements_Slider5, 10, 5000);
    lv_slider_set_value(ui_Measurements_Slider5, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_Measurements_Slider5) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(
            ui_Measurements_Slider5, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Measurements_Slider5, 150);
    lv_obj_set_height(ui_Measurements_Slider5, 7);
    lv_obj_set_x(ui_Measurements_Slider5, 77);
    lv_obj_set_y(ui_Measurements_Slider5, -224);
    lv_obj_set_align(ui_Measurements_Slider5, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Measurements_Slider5,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x4541A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider5, lv_color_hex(0x8988A4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider5, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x9999A4), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_MAIN | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x5653A4), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Measurements_Slider5, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Measurements_Slider5, LV_GRAD_DIR_HOR, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x8281A3), LV_PART_INDICATOR | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_INDICATOR | LV_STATE_DISABLED);

    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x312CA4), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Measurements_Slider5, lv_color_hex(0x5D59A4), LV_PART_KNOB | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_Measurements_Slider5, 255, LV_PART_KNOB | LV_STATE_DISABLED);

    ui_Measurements_Button10 = lv_btn_create(ui_Chartparfull);
    lv_obj_set_height(ui_Measurements_Button10, 28);
    lv_obj_set_width(ui_Measurements_Button10, LV_SIZE_CONTENT);   /// 70
    lv_obj_set_x(ui_Measurements_Button10, 116);
    lv_obj_set_y(ui_Measurements_Button10, 5);
    lv_obj_clear_flag(ui_Measurements_Button10,
                      LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE |
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_bg_color(ui_Measurements_Button10, lv_color_hex(0x332FA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Measurements_Button10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Measurements_Button10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Button10, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label17 = lv_label_create(ui_Measurements_Button10);
    lv_obj_set_width(ui_Measurements_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Measurements_Label17, 0);
    lv_obj_set_y(ui_Measurements_Label17, -1);
    lv_obj_set_align(ui_Measurements_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label17, "M");
    lv_obj_set_style_text_font(ui_Measurements_Label17, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Chart5 = lv_chart_create(ui_Chartparfull);
    lv_obj_set_width(ui_Chart5, lv_pct(91));
    lv_obj_set_height(ui_Chart5, lv_pct(78));
    lv_obj_set_x(ui_Chart5, 15);
    lv_obj_set_y(ui_Chart5, -15);
    lv_obj_set_align(ui_Chart5, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_style_bg_color(ui_Chart5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_color(ui_Chart5, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart5, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_Chart5, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_Chart5, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart5, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);
    lv_obj_set_style_line_width(ui_Chart5, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);

    ui_Back4 = lv_btn_create(ui_Chartparfull);
    lv_obj_set_width(ui_Back4, 40);
    lv_obj_set_height(ui_Back4, 30);
    lv_obj_set_x(ui_Back4, 3);
    lv_obj_set_y(ui_Back4, 3);
    lv_obj_add_flag(ui_Back4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Back4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Back4, lv_color_hex(0x395EAB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Back4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_Back4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Back4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Back4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Back4, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Back4, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Measurements_Label18 = lv_label_create(ui_Back4);
    lv_obj_set_width(ui_Measurements_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Measurements_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Measurements_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Measurements_Label18, "Back");
    lv_obj_set_style_text_align(ui_Measurements_Label18, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Measurements_Label18, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_obj_set_style_bg_color(ui_ChartFull_Dropdown4, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ChartFull_Dropdown4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_font(ui_ChartFull_Dropdown4, &lv_font_montserrat_10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ChartFull_Label17 = lv_label_create(ui_Chartparfull);
    lv_obj_set_width(ui_ChartFull_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ChartFull_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ChartFull_Label17, 134);
    lv_obj_set_y(ui_ChartFull_Label17, -92);
    lv_obj_set_align(ui_ChartFull_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ChartFull_Label17, "50 us");
    lv_obj_set_style_text_color(ui_ChartFull_Label17, lv_color_hex(0x312CA4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ChartFull_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_ChartFull_Label17, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ChartFull_Label17, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Measurements_Slider5, ui_event_Measurements_Slider5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Label17, ui_event_Measurements_Label17, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Measurements_Button10, ui_event_Measurements_Button10, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Back4, ui_event_Back4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ChartFull_Dropdown4, ui_event_ChartFull_Dropdown4, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    ui_Measurements_screen_init();
    ui_ChartFull_screen_init();
    ui_Options_screen_init();
    ui_Chartpar_screen_init();
    ui_Chartfullfull_screen_init();
    ui_Chartparfull_screen_init();
    lv_disp_load_scr(ui_Home);
}
