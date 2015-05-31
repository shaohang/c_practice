/*
	This is the program of chapter 4 on page 186.
*/

#include<stdio.h>
#include"encrypt.h"

int main(){
	char msg[80];
	while(fgets(msg,80,stdin))
	{
		encrypt(msg);
		printf("%s",msg);
	}
}
