/* 
 this is the text search example in chapter 2.5 on page 94.
*/

#include<stdio.h>
#include<string.h>

char tracks[][80] = {
"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};

void find_track(char search_for[])
{
	int i;
	
	for (i= 0; i<5; i++){
		if (strstr(tracks[i], search_for))
			printf("Track %i: '%s' \n", i , tracks[i]);
	}

}

int main()
{
	char search_for[80];
	printf("Search for: ");
	
	/* This is different from the book.
	   When using fgets, it will include the termination symbol "\n".
	   Therefore, when calling strstr function, it will compare the string: "town\n". This is 
	   problem of the original program.  
	*/
	scanf("%79s", search_for);
	find_track(search_for);


	return 0;

}

