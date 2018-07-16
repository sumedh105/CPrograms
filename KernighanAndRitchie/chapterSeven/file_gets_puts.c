#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int main()
{
	FILE *fp, *fp2;
	char line[MAXLINE];	

	fp = fopen("stdin_stdout.c", "r");
	fp2 = fopen("puts.txt", "w");

	while (fgets(line, MAXLINE, fp) != NULL) {
		fputs(line, fp2);
	}//end of while loop

	fclose(fp);
	fclose(fp2);

	return 0;
}//end of main function
