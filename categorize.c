/*
	This is the example program of chapter 3 on page 140.
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if(argc!=6)
	{
		fprintf(stderr,"Invalid argument.");
		return 1;
	}

	char line[80];
	FILE *in = fopen("spooky.csv","r");

	if (!in)
	{
		fprintf(stderr,"can't find input file.");
		return 1;
	}
	/*For using fopen, it will have problem of permission to write file in linux system.
	Need to use "sudo ./categorize" to write file. */
	FILE *file1 = fopen(argv[2], "w");
	FILE *file2 = fopen(argv[4], "w");
	FILE *file3 = fopen(argv[5], "w");

	while (fscanf(in, "%79[^\n]\n", line) ==1)
	{
		if (strstr(line, argv[1]))
			fprintf(file1, "%s\n",line);
		else if (strstr(line, argv[3]))
			fprintf(file2, "%s\n",line);
		else
			fprintf(file3, "%s\n",line);
	}

	fclose(in);
	fclose(file1);	
	fclose(file2);
	fclose(file3);

	return 0;
}
