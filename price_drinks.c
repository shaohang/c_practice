/*
	This is the program of chapter 7 on page 348.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdarg.h>

enum drink {MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE};

double price(enum drink d)
{
	switch(d){
		case MUDSLIDE:
			return 6.79;
		case FUZZY_NAVEL:
			return 5.31;
		case MONKEY_GLAND:
			return 4.82;
		case ZOMBIE:
			return 5.89;
	}

	return 0;
}

double total(int args,...)
{
	double total =0;
	va_list ap;
	va_start(ap,args);

	int i = 0;
	for (i = 0; i<args;i++)
	{
		total = total + price(va_arg(ap,enum drink));
	}

	//printf("Price is %2.f\n", total);
	va_end(ap);
	return total;
}

int main(){
	printf("Price is %.2f\n", total(2, MONKEY_GLAND,MUDSLIDE));
	printf("Price is %.2f\n", total(3, MONKEY_GLAND,MUDSLIDE,FUZZY_NAVEL));
	printf("Price is %.2f\n", total(1, ZOMBIE));

	return 0;
}




