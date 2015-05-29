/*
  This is the test of scanf function on page 65.
*/

#include<stdio.h>

int main(){
	
	char first_name[2];
	char last_name[2];
	
	puts("Enter name: ");
	scanf("%1s  %1s", first_name, last_name);

	printf("Name: %s  %s \n", first_name, last_name);

	return 0;
}
