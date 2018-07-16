#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int main()
{
	FILE *fp;
	char line[MAXLINE];

	fp = fopen("feof.c", "r");
	
	while (feof(fp) == 0) {
		fgets(line, MAXLINE, fp);
		fputs(line, stdout);	
	}//end of while loop

	fclose(fp);

	return 0;
}//end of main function
