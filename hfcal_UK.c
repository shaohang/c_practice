/*
	This is the program of chapter 8 on page 381.
*/

#include<stdio.h>
#include<hfcal.h>

void display_calories(float weight, float distance, float coeff)
{
	printf("Weight: %3.2f kgs\n",weight/2.2046);
	printf("Distance: %3.2f kms\n",distance*1.609344);
	printf("Calories: %3.2f cals\n",coeff*weight*distance);	
}




