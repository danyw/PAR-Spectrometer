/*
 * spectrometer.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Daniel
 */
#include "main.h"
#include <math.h>
#include "tim.h"
#include <stdbool.h>

float wavelength(uint16_t pix);
void wavelength_convert(void);
void adc_convert_first(void);
void adc_convert_second(void);
void adc_convert(void);
void exposure_time (uint32_t st_us);
void averaging_buf(void);
void autoexposure(void);
void peak_wavelength(void);
void wavelength_range(bool par, uint16_t *first_pixel, uint16_t *last_pixel);
// float adc_converted_test[288]; For testing purposes
uint16_t first_pixel = 15;
uint16_t last_pixel = 201 + 1;
uint32_t adc_avg[288];
uint16_t max_adc = 3820;
bool overexposed = false;

extern uint16_t avg_counter;
extern uint16_t avg;
extern bool auto_exposure;

extern float wavelength_converted[288];
extern uint16_t adc_buf[288];
extern uint16_t adc_base;
extern uint16_t avg_counter;
extern void refresh_chart_y(void);
extern uint32_t exptime;
extern void measure (void);
extern uint16_t peak_pixel;


uint16_t adc_converted[288];

void wavelength_range(bool par, uint16_t *first_pixel, uint16_t *last_pixel){
	if(par == true){
		*first_pixel = 34;
		*last_pixel = 169;
	}
	else {
		*first_pixel = 15;
		*last_pixel = 202;
	}
}

// wavelength correction [nm]
float wavelength(uint16_t pix){
	uint16_t nm = (3.068537876*pow(10,2) + 2.70082964998025 * pix - 1.062891037*pow(10,-3) * pow(pix,2)
			- 8.375289840*pow(10,-6) * pow(pix,3) + 1.175669178*pow(10,-8) * pow(pix,4)
			+ 1.798047227*pow(10,-12) * pow(pix,5))*10;
	float wavelength = nm/10.0;	// more efficient to first int * 10, and then convert it to float
	return wavelength;
}


void wavelength_convert(void){
	for(uint16_t i = 1; i <= 288; i++) wavelength_converted[i-1] = wavelength(i);
}

/* data imported from Excel. 100% sensitivity happens at 54th pixel, at 448.4nm*/
const float sensitivity_percent [288]= {
		/* very low sensitivity at the far right spectrum. Changed to a small value, unless needed.
		 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.49, 1.46, 1.43, 1.40, 1.37, 1.34, 1.32,
		 1.29, 1.27, 1.24, 1.22, 1.20, 1.18, 1.16, 1.14, 1.12, 1.10, 1.09, 1.07, 1.05, 1.04, 1.02, 1.02, 1.02, 1.02, 1.02, 1.02,
		 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.00, 1.00, 1.00, 1.00, 1.00, 1.01, 1.02, 1.04, 1.05, 1.07, 1.09,
		 1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.28, 1.30, 1.33, 1.35, 1.38, 1.41, 1.44, 1.45, 1.45, 1.46, 1.47, 1.47,
		 1.48, 1.49, 1.50, 1.50, 1.51, 1.52, 1.53, 1.53, 1.54, 1.55, 1.56, 1.57, 1.57, 1.58, 1.59, 1.60, 1.60, 1.60, 1.60, 1.61,
		 1.61, 1.61, 1.61, 1.61, 1.62, 1.62, 1.62, 1.62, 1.62, 1.63, 1.63, 1.63, 1.63, 1.63, 1.64, 1.64, 1.64, 1.64, 1.65, 1.67,
		 1.68, 1.69, 1.71, 1.72, 1.74, 1.75, 1.77, 1.78, 1.80, 1.81, 1.83, 1.85, 1.86, 1.88, 1.90, 1.91, 1.93, 1.95, 1.97, 1.99,
		 2.00, 2.02, 2.04, 2.06, 2.08, 2.11, 2.14, 2.16, 2.19, 2.22, 2.25, 2.28, 2.31, 2.34, 2.37, 2.40, 2.43, 2.47, 2.50, 2.54,
		 2.57, 2.61, 2.65, 2.69, 2.73, 2.77, 2.81, 2.86, 2.90, 2.95, 3.00, 3.04, 3.10, 3.14, 3.18, 3.22, 3.26, 3.30, 3.34, 3.39,
		 3.43, 3.48, 3.52, 3.57, 3.62, 3.67, 3.72, 3.78, 3.83, 3.89, 3.95, 4.01, 4.07, 4.13, 4.19, 4.26, 4.32, 4.39, 4.47, 4.54,
		 4.61, 4.69, 4.79, 4.90, 5.01, 5.12, 5.24, 5.36, 5.49, 5.63, 5.77, 5.92, 6.07, 6.23, 6.40, 6.58, 6.77, 6.97, 7.18, 7.41,
		 7.64, 7.89, 8.16, 8.45, 8.75, 9.08, 9.43, 9.80, 10.21, 10.64, 11.12, 11.64, 12.20, 12.83, 13.33, 13.85, 14.41, 15.01,
		 15.66, 16.37, 17.14, 17.99, 18.92, 19.94, 21.08, 22.36, 23.79, 25.41, 27.26, 29.39, 31.87, 34.79, 38.29, 42.56, 47.87,
		 54.68, 63.69, 76.20, 94.74, 125.06, 183.58, 343.88, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75,
		 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75,
		 2642.75, 2642.75, 2642.75, 2642.75, 2642.75, 2642.75
		 */
		 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.52, 1.49, 1.46, 1.43, 1.40, 1.37, 1.34, 1.32,
		 1.29, 1.27, 1.24, 1.22, 1.20, 1.18, 1.16, 1.14, 1.12, 1.10, 1.09, 1.07, 1.05, 1.04, 1.02, 1.02, 1.02, 1.02, 1.02, 1.02,
		 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.01, 1.00, 1.00, 1.00, 1.00, 1.00, 1.01, 1.02, 1.04, 1.05, 1.07, 1.09,
		 1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.28, 1.30, 1.33, 1.35, 1.38, 1.41, 1.44, 1.45, 1.45, 1.46, 1.47, 1.47,
		 1.48, 1.49, 1.50, 1.50, 1.51, 1.52, 1.53, 1.53, 1.54, 1.55, 1.56, 1.57, 1.57, 1.58, 1.59, 1.60, 1.60, 1.60, 1.60, 1.61,
		 1.61, 1.61, 1.61, 1.61, 1.62, 1.62, 1.62, 1.62, 1.62, 1.63, 1.63, 1.63, 1.63, 1.63, 1.64, 1.64, 1.64, 1.64, 1.65, 1.67,
		 1.68, 1.69, 1.71, 1.72, 1.74, 1.75, 1.77, 1.78, 1.80, 1.81, 1.83, 1.85, 1.86, 1.88, 1.90, 1.91, 1.93, 1.95, 1.97, 1.99,
		 2.00, 2.02, 2.04, 2.06, 2.08, 2.11, 2.14, 2.16, 2.19, 2.22, 2.25, 2.28, 2.31, 2.34, 2.37, 2.40, 2.43, 2.47, 2.50, 2.54,
		 2.57, 2.61, 2.65, 2.69, 2.73, 2.77, 2.81, 2.86, 2.90, 2.95, 3.00, 3.04, 3.10, 3.14, 3.18, 3.22, 3.26, 3.30, 3.34, 3.39,
		 3.43, 3.48, 3.52, 3.57, 3.62, 3.67, 3.72, 3.78, 3.83, 3.89, 3.95, 4.01, 4.07, 4.13, 4.19, 4.26, 4.32, 4.39, 4.47, 4.54,
		 4.61, 4.69, 4.79, 4.90, 5.01, 5.12, 5.24, 5.36, 5.49, 5.63, 5.77, 5.92, 6.07, 6.23, 6.40, 6.58, 6.77, 6.97, 7.18, 7.41,
		 7.64, 7.89, 8.16, 8.45, 8.75, 9.08, 9.43, 9.80, 10.21, 10.64, 11.12, 11.64, 12.20, 12.83, 13.33, 13.85, 14.41, 15.01,
		 15.66, 16.37, 17.14, 17.99, 18.92, 19.94, 21.08, 22.36, 23.79, 25.41, 27.26, 29.39, 31.87, 34.79, 38.29, 42.56, 47.87,
		 54.68, 63.69, 76.20, 94.74, 125.06, 183.58, 343.88, 26, 26, 26, 26, 26, 26, 26,
		 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26,
		 26, 26, 26, 26, 26, 26
};
/* takes into account the sensitivity of module used for the project */
/* TODO better conversion float to int */

void adc_convert(void){
		for(uint16_t i = first_pixel; i < last_pixel; i++){
			adc_converted[i] = (adc_avg[i] - adc_base)  * sensitivity_percent[i];
		}
		refresh_chart_y();
}

void adc_convert_first(void){
	for(uint16_t i = first_pixel; i < 144; i++){
	adc_converted[i] = (adc_buf[i] - adc_base)  * sensitivity_percent[i];

	}
}
	void adc_convert_second(void){
		for(uint16_t i = 144; i < last_pixel; i++){
		adc_converted[i] = (adc_buf[i] - adc_base)  * sensitivity_percent[i];
		}
}



void exposure_time (uint32_t st_us){
	// 1/clk - 1/1MHz = 1us. If clk different convert us to pulses.
	__HAL_TIM_SET_AUTORELOAD(&htim2, st_us + 500); //299, changed to higher value to slow down continuous
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_1, st_us - 1);
	__HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_2, st_us + 85);
}


void averaging_buf(void){
	if(avg_counter == 0){
		for(uint16_t i = first_pixel; i < last_pixel; i++){
			adc_avg[i] = adc_buf[i];
		}
		avg_counter++;
	}
	else if(avg_counter < avg-1){
		for(uint16_t i = first_pixel; i < last_pixel; i++){
				adc_avg[i] += adc_buf[i];
		}
				avg_counter++;
	}
	else {
		if(auto_exposure == false){
			for(uint16_t i = first_pixel; i < last_pixel; i++){
					adc_avg[i] = ((adc_buf[i] + adc_avg[i]) / avg);
			}
			avg_counter = 0;
			adc_convert();
		}
		else {
			for(uint16_t i = first_pixel; i < last_pixel; i++){
					adc_avg[i] = ((adc_buf[i] + adc_avg[i]) / avg);
					if(adc_avg[i] > max_adc) overexposed = true;
			}
			if(overexposed == true){
						autoexposure();
						avg_counter = 0;
						overexposed = false;
						measure();

			}
			else {
				overexposed = false;
					avg_counter = 0;
					adc_convert();

			}
		}

	}
}

void autoexposure(void){
	if(exptime > 5000) exptime = exptime - 500;
	else if (exptime > 3000) exptime = exptime - 200;
	else if(exptime > 1500) exptime = exptime - 100;
	else if(exptime > 1000) exptime = exptime - 50;
	else if(exptime > 500) exptime = exptime - 20;
	else if(exptime > 250) exptime = exptime - 10;
	else exptime = exptime - 1;

	exposure_time(exptime);
}

void peak_wavelength(void){
	for(uint16_t i = first_pixel; i < last_pixel; i++){
		uint16_t max = 0;
		for(uint16_t i = first_pixel; i < last_pixel; i++){
			if (adc_converted[i] > max) {
				max = adc_converted[i];
				peak_pixel = i;
			}
		}
	}

}




/*

// C program to find maximum in arr[] of size n
#include <stdio.h>

// C function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
  int i;

  // Initialize maximum element
  int max = arr[0];

  // Traverse array elements from second and
  // compare every element with current max
  for (i = 1; i < n; i++)
    if (arr[i] > max)
      max = arr[i];

  return max;
}

int main()
{
  int arr[] = {10, 324, 45, 90, 9808};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Largest in given array is %d", largest(arr, n));
  return 0;
}
*/
