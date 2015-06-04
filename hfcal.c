/*
	This is the program of chapter 8 on page 381.
*/

#include<stdio.h>
#include<hfcal.h>

void display_calories(float weight, float distance, float coeff)
{
	printf("Weight: %3.2f lbs\n",weight);
	printf("Distance: %3.2f lbs\n",distance);
	printf("Calories: %3.2f lbs\n",coeff*weight*distance);	
}




