// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SpectrometerDisplayV1

#include "ui.h"
#include "ui_helpers.h"


///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Bar1;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Chart1;


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
    #error "#error LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
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

static void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_RELEASED) {
        _ui_screen_change(ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
static void ui_event_Chart1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
lv_obj_t * obj = lv_event_get_target(e);

}
// XXX Do I need draw_event_cb?
static void draw_event_cb(lv_event_t * e)
{
	lv_obj_draw_part_dsc_t * dsc = lv_event_get_draw_part_dsc(e);
	if(!lv_obj_draw_part_check_type(dsc, &lv_chart_class, LV_CHART_DRAW_PART_TICK_LABEL)) return;

	   //     if(dsc->id == LV_CHART_AXIS_PRIMARY_X && dsc->text) {
	     //       const char * wavelength[] = {"380", "440", "500", "560", "620", "680", "740", "800", "850"};
	        //    lv_snprintf(dsc->text, dsc->text_length, "%s", wavelength[dsc->value]);
	     //   }
}


static void add_data(lv_timer_t * timer)
{
    LV_UNUSED(timer);
    static uint32_t cnt = 0;
    lv_chart_set_next_value(ui_Chart1, ser1, lv_rand(20, 90));

  // if(cnt % 4 == 0) lv_chart_set_next_value(ui_Chart1, ser2, lv_rand(40, 60));

    cnt++;
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x9BA1E0), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, -90);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "Quantum Spectrometer\nDaniel Wiejak");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x12024D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Bar1

    ui_Bar1 = lv_bar_create(ui_Screen1);
    lv_bar_set_range(ui_Bar1, 0, 100);
    lv_bar_set_value(ui_Bar1, 1, LV_ANIM_OFF);

    lv_obj_set_width(ui_Bar1, 100);
    lv_obj_set_height(ui_Bar1, 15);

    lv_obj_set_x(ui_Bar1, 0);
    lv_obj_set_y(ui_Bar1, 90);

    lv_obj_set_align(ui_Bar1, LV_ALIGN_CENTER);

    lv_obj_set_style_bg_grad_color(ui_Bar1, lv_color_hex(0x434FCE), LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 0);
    lv_obj_set_y(ui_Label2, 72);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "Calibration Progress");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x6F9BF4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 50);

    lv_obj_set_x(ui_Button1, 10);
    lv_obj_set_y(ui_Button1, 0);

    lv_obj_set_align(ui_Button1, LV_ALIGN_LEFT_MID);

    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xF44444), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button1, lv_color_hex(0xC14B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    //lv_obj_set_style_blend_mode(ui_Button1, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Button1);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, -1);
    lv_obj_set_y(ui_Label3, 0);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Start");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xCF83E3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button2

    ui_Button2 = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 50);

    lv_obj_set_x(ui_Button2, -10);
    lv_obj_set_y(ui_Button2, 0);

    lv_obj_set_align(ui_Button2, LV_ALIGN_RIGHT_MID);

    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE |
                      LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xF44444), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button2, lv_color_hex(0xC14B4B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
   // lv_obj_set_style_blend_mode(ui_Button2, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Button2);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, -1);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "Options");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xCF83E3), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{


    // ui_Screen2

    ui_Screen2 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_Screen2);

    lv_obj_set_width(ui_Chart1, 300);	//lv_pct(90)
    lv_obj_set_height(ui_Chart1, lv_pct(70));

    lv_obj_set_x(ui_Chart1, 12);
    lv_obj_set_y(ui_Chart1, -30);

    lv_obj_set_align(ui_Chart1, LV_ALIGN_BOTTOM_MID);
// XXX add event cb?
// lv_obj_add_event_cb(ui_Chart1, draw_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL);
    lv_obj_add_event_cb(ui_Chart1, ui_event_Chart1, LV_EVENT_ALL, NULL);
   // XXX next line stay?
    lv_obj_add_event_cb(ui_Chart1, draw_event_cb, LV_EVENT_DRAW_PART_BEGIN, NULL); // ADD IT
    lv_chart_set_update_mode(ui_Chart1, LV_CHART_UPDATE_MODE_CIRCULAR);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);



   // lv_obj_set_style_line_color(ui_Chart1, lv_color_hex(0x9BA1E0), LV_PART_ITEMS | LV_STATE_DEFAULT);
   // lv_obj_set_style_line_opa(ui_Chart1, 255, LV_PART_ITEMS | LV_STATE_DEFAULT);


   // lv_obj_set_style_line_width(ui_Chart1, 10, LV_PART_ITEMS | LV_STATE_DEFAULT);


    // Copy paste each time
    lv_chart_set_type(ui_Chart1, LV_CHART_TYPE_SCATTER);
    lv_chart_set_div_line_count(ui_Chart1, 4, 9);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 0, 1000);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 350, 750);

    lv_chart_set_point_count(ui_Chart1, 288);

    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_X, 8, 3, 5, 2, true, 300);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, 5, 5, 6, 1, true, 30);
    lv_chart_set_axis_tick(ui_Chart1, LV_CHART_AXIS_SECONDARY_Y, 5, 5, 4, 1, true, 20);

    lv_obj_set_style_size(ui_Chart1, 0, LV_PART_INDICATOR);	// size of a data point

    lv_obj_set_style_line_width(ui_Chart1, 1, LV_PART_ITEMS);	// thickness of a line
    wavelength_range(false, &first_pixel, &last_pixel);
    ser1 = lv_chart_add_series(ui_Chart1, lv_palette_lighten(LV_PALETTE_GREEN, 1), LV_CHART_AXIS_SECONDARY_Y);




     // ser2 = lv_chart_add_series(ui_Chart1, lv_palette_lighten(LV_PALETTE_DEEP_ORANGE, 2), LV_CHART_AXIS_SECONDARY_Y);
    /*Set the next points on 'ser1'*/
    //lv_chart_set_next_value(ui_Chart1, ser1, 5);

// XXX set ext array
 //lv_chart_set_ext_y_array(ui_Chart1, ser1, (lv_coord_t *)adc_buf);
 //lv_chart_set_ext_x_array(ui_Chart1, ser1, (lv_coord_t *)wavelength_converted);

    refresh_chart();


}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    lv_disp_load_scr(ui_Screen1);



}

/*
	lv_obj_t * obj = lv_event_get_target(e);


	//Add the faded area before the lines are drawn
  //  lv_obj_draw_part_dsc_t * dsc = lv_event_get_draw_part_dsc(e);

    if(dsc->part == LV_PART_ITEMS) {
    				if(!dsc->p1 || !dsc->p2) return;

    	//Add a line mask that keeps the area below the line
			lv_draw_mask_line_param_t line_mask_param;
			lv_draw_mask_line_points_init(&line_mask_param, dsc->p1->x, dsc->p1->y, dsc->p2->x, dsc->p2->y,
																		LV_DRAW_MASK_LINE_SIDE_BOTTOM);
			int16_t line_mask_id = lv_draw_mask_add(&line_mask_param, NULL);

			//Add a fade effect: transparent bottom covering top
			        lv_coord_t h = lv_obj_get_height(obj);
			        lv_draw_mask_fade_param_t fade_mask_param;
			        lv_draw_mask_fade_init(&fade_mask_param, &obj->coords, LV_OPA_COVER, obj->coords.y1 + h / 8, LV_OPA_TRANSP,
			                               obj->coords.y2);
			        int16_t fade_mask_id = lv_draw_mask_add(&fade_mask_param, NULL);

			        lv_coord_t h = lv_obj_get_height(obj);
			        lv_draw_mask_fade_param_t fade_mask_param;
			        lv_draw_mask_fade_init(&fade_mask_param, &obj->coords, LV_OPA_COVER, obj->coords.y1 + h / 8, LV_OPA_TRANSP,
			                               obj->coords.y2);
			        int16_t fade_mask_id = lv_draw_mask_add(&fade_mask_param, NULL);


			//Draw a rectangle that will be affected by the mask
			        lv_draw_rect_dsc_t draw_rect_dsc;
			        lv_draw_rect_dsc_init(&draw_rect_dsc);
			        draw_rect_dsc.bg_opa = LV_OPA_20;
			        draw_rect_dsc.bg_color = dsc->line_dsc->color;

			        lv_area_t a;
			        a.x1 = dsc->p1->x;
			        a.x2 = dsc->p2->x - 1;
			        a.y1 = LV_MIN(dsc->p1->y, dsc->p2->y);
			        a.y2 = obj->coords.y2;
			        lv_draw_rect(dsc->draw_ctx, &draw_rect_dsc, &a);

			        //Remove the masks
			        lv_draw_mask_free_param(&line_mask_param);
			        lv_draw_mask_free_param(&fade_mask_param);
			        lv_draw_mask_remove_id(line_mask_id);
			        lv_draw_mask_remove_id(fade_mask_id);
    	}
			        //Hook the division lines too
			           else if(dsc->part == LV_PART_MAIN) {
			               if(dsc->line_dsc == NULL || dsc->p1 == NULL || dsc->p2 == NULL) return;

			               //Vertical line
			               if(dsc->p1->x == dsc->p2->x) {
			                   dsc->line_dsc->color  = lv_palette_lighten(LV_PALETTE_GREY, 1);
			                   if(dsc->id == 3) {
			                       dsc->line_dsc->width  = 2;
			                       dsc->line_dsc->dash_gap  = 0;
			                       dsc->line_dsc->dash_width  = 0;
			                   }
			                   else {
			                       dsc->line_dsc->width = 1;
			                       dsc->line_dsc->dash_gap  = 6;
			                       dsc->line_dsc->dash_width  = 6;
			                   }
			               }
			               //Horizontal line
			               else {
			                   if(dsc->id == 2) {
			                       dsc->line_dsc->width  = 2;
			                       dsc->line_dsc->dash_gap  = 0;
			                       dsc->line_dsc->dash_width  = 0;
			                   }
			                   else {
			                       dsc->line_dsc->width = 2;
			                       dsc->line_dsc->dash_gap  = 6;
			                       dsc->line_dsc->dash_width  = 6;
			                   }

			                   if(dsc->id == 1  || dsc->id == 3) {
			                       dsc->line_dsc->color  = lv_palette_main(LV_PALETTE_GREEN);
			                   }
			                   else {
			                       dsc->line_dsc->color  = lv_palette_lighten(LV_PALETTE_GREY, 1);
			                   }
			               }
			           }

    }
*/
