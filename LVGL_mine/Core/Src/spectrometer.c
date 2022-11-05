/*
 * spectrometer.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Daniel
 */
#include "main.h"
#include <math.h>

float wavelength(uint16_t pix);
void wavelength_convert(void);
float adc_convert(uint16_t i);
// float adc_converted_test[288]; For testing purposes

extern float wavelength_converted[288];
extern uint16_t adc_buf[288];


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
float sensitivity_percent [288]= {
		0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.695, 0.708, 0.721, 0.734, 0.747, 0.760, 0.773, 0.787,
		0.800, 0.813, 0.826, 0.839, 0.852, 0.865, 0.878, 0.891, 0.903, 0.916, 0.929, 0.942, 0.955, 0.968, 0.981, 0.983, 0.984, 0.985, 0.986, 0.987,
		0.988, 0.989, 0.990, 0.991, 0.991, 0.992, 0.993, 0.994, 0.995, 0.996, 0.997, 0.998, 0.999, 1.000, 0.996, 0.982, 0.968, 0.955, 0.941, 0.928,
		0.914, 0.901, 0.887, 0.874, 0.861, 0.847, 0.834, 0.821, 0.807, 0.794, 0.781, 0.767, 0.754, 0.741, 0.729, 0.726, 0.723, 0.720, 0.717, 0.714,
		0.711, 0.708, 0.705, 0.702, 0.699, 0.697, 0.694, 0.691, 0.688, 0.685, 0.682, 0.679, 0.676, 0.673, 0.670, 0.668, 0.667, 0.666, 0.665, 0.665,
		0.664, 0.663, 0.663, 0.662, 0.661, 0.661, 0.660, 0.659, 0.659, 0.658, 0.657, 0.657, 0.656, 0.655, 0.655, 0.654, 0.653, 0.653, 0.649, 0.645,
		0.640, 0.636, 0.632, 0.627, 0.623, 0.619, 0.614, 0.610, 0.606, 0.601, 0.597, 0.593, 0.588, 0.584, 0.580, 0.576, 0.571, 0.567, 0.563, 0.559,
		0.555, 0.551, 0.546, 0.542, 0.538, 0.532, 0.527, 0.522, 0.517, 0.512, 0.507, 0.502, 0.496, 0.491, 0.486, 0.481, 0.476, 0.471, 0.466, 0.461,
		0.456, 0.451, 0.446, 0.441, 0.437, 0.432, 0.427, 0.422, 0.417, 0.412, 0.408, 0.403, 0.398, 0.394, 0.391, 0.387, 0.384, 0.380, 0.377, 0.373,
		0.370, 0.366, 0.363, 0.360, 0.356, 0.353, 0.349, 0.346, 0.343, 0.339, 0.336, 0.333, 0.329, 0.326, 0.323, 0.320, 0.316, 0.313, 0.310, 0.307,
		0.303, 0.300, 0.296, 0.292, 0.288, 0.284, 0.280, 0.276, 0.272, 0.269, 0.265, 0.261, 0.257, 0.253, 0.249, 0.246, 0.242, 0.238, 0.234, 0.231,
		0.227, 0.223, 0.219, 0.216, 0.212, 0.209, 0.205, 0.201, 0.198, 0.194, 0.190, 0.187, 0.183, 0.180, 0.177, 0.175, 0.172, 0.170, 0.167, 0.165,
		0.162, 0.160, 0.157, 0.155, 0.153, 0.150, 0.148, 0.145, 0.143, 0.141, 0.138, 0.136, 0.134, 0.131, 0.129, 0.127, 0.124, 0.122, 0.120, 0.118,
		0.115, 0.113, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111,
		0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.111
};
/* takes into account the sensitivity of module used for the project */
float adc_convert(uint16_t i){
float	adc_converted = adc_buf[i] * sensitivity_percent[i];
// adc_converted_test[i] = adc_converted; Use for testing purposes
		return adc_converted;
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
