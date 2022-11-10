// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: SpectrometerDisplayV1

#include "ui.h"

extern bool auto_exposure;


void faveraging(lv_event_t * e)
{
	// Your code here
}

void fgaincheck(lv_event_t * e)
{
	lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 10000);
}

void fgainunchecked(lv_event_t * e)
{
	lv_chart_set_range(ui_ChartparChart, LV_CHART_AXIS_SECONDARY_Y, 0, 3500);
}

void fautoexposureon(lv_event_t * e)
{
	auto_exposure = true;
}

void fautoexposureunchecked(lv_event_t * e)
{
	auto_exposure = false;
}

void fmeasure(lv_event_t * e)
{
	// Your code here
}

void menuchanged(lv_event_t * e)
{
	// Your code here
}

void fexposurechange(lv_event_t * e)
{
	// exposure slider for par
}
