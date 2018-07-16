#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 1000

int main()
{
	FILE *fp1, *fp2;
	char line1[MAXLINE];
	char line2[MAXLINE];

	fp1 = fopen("stdin_stdout.c", "r");
	fp2 = fopen("stdin_stdout.c", "r");

	while ((fgets(line1, MAXLINE, fp1) != NULL) && (fgets(line2, MAXLINE, fp2) != NULL)) {
		if (strcmp(line1, line2) != 0) {
			printf("\nline1: %s\n", line1);
			printf("\nline2: %s\n", line2);
			exit(1);
		}//end of if condition

		else {
			printf("%s", line1);
			printf("%s", line2);
		}//end of else condition
	}//end of while loop

	return 0;
}//end of main function
