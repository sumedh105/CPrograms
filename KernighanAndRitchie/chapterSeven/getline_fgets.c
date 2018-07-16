#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int main()
{
	char line[MAXLINE];
	FILE *fp;

	fp = fopen("getline.c", "r");

	while (fgets(line, MAXLINE, fp) != NULL) {	
		printf("%s", line);
	}//end of while loop

	return 0;
}//end of main function
