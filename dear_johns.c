/*
	This is the program of chapter 7 on page 341.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum response_type {DUMP,SECOND_CHANCE,MARRIAGE};

typedef struct {
	char *name;
	enum response_type type;
} response;


void dump(response r){
	printf("Dear %s, \n", r.name);
	puts("You fail.\n");
}

void second_chance(response r){
	printf("Dear %s, \n", r.name);
	puts("You get second chance.\n");
}

void marriage(response r){
	printf("Dear %s, \n", r.name);
	puts("You success.\n");
}

void (*replies[])(response) = {dump, second_chance, marriage};

int main(){
	response r[] = {{"Mike",DUMP}, {"Luis",SECOND_CHANCE},{"Matt", SECOND_CHANCE}, {"William", MARRIAGE}};

	int i;
	for (i=0;i<4;i++)
	{
		(replies[r[i].type])(r[i]);
	}

	return 0;
}


