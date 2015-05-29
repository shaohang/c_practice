/*
  This is the program in chapter 2 (Pointer) on page 50.
*/

#include<stdio.h>

void go_south_east(int *lat,int  *lon){
	*lat = *lat -1;
	*lon = *lon +1;
}

void fortune_cookie(char msg[]){
	printf("message reads: %s \n", msg);
	printf("start from second character: \n");
	puts(msg+1);
	printf("message occupies: %i bytes \n ", sizeof(msg));
}

int main(){
	int latitude = 32;
	int longitude = -64;

	int does[] = {1,3,2,1000};
	printf("%i \n", 3[does]);

	go_south_east(&latitude, &longitude);
	printf("Now at: [%i, %i]\n", latitude, longitude);
	
	char quote[] = "test";
	printf("size of the string in main function: %i \n", sizeof(quote));
	fortune_cookie(quote);
	
	printf("char array address: %p \n", &quote);	

	return 0;
}
