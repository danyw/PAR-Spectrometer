/*
 * spectrometer.c
 *
 *  Created on: Sep 18, 2022
 *      Author: Daniel
 */
#include "main.h"


// wavelength correction [nm]
float wavelength(uint16_t pix){
	uint16_t nm = (3.068537876*pow(10,2) + 2.70082964998025 * pix - 1.062891037*pow(10,-3) * pow(pix,2)
			- 8.375289840*pow(10,-6) * pow(pix,3) + 1.175669178*pow(10,-8) * pow(pix,4)
			+ 1.798047227*pow(10,-12) * pow(pix,5))*10;
	float wavelength = nm/10.0;	// more efficient to first int * 10, and then convert it to float
	return wavelength;
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
