/*
	This is the program of chapter 8 on page 361.
*/

#include<stdio.h>
#include<encrypt.h>
#include<checksum.h>

int main()
{
	char s[] = "Speak friend and enter";

	encrypt(s);
	printf("Encrypt to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));

	encrypt(s);
	printf("Decrypted back to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));


	return 0;
}
