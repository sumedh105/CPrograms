#include <stdio.h>

void filecopy(FILE *, FILE *);

int main(int argc, char **argv)
{
	int c;
	FILE *fp;

	if (argc == 1) {
		filecopy(stdin, stdout);
	}//end of if condition

	else {
		while (--argc > 0) {
			if ((fp = fopen(*++argv, "r")) == NULL) {
				printf("\nFile cannot be opened\n");
				return 1;
			}//end of if condition

			else {
				filecopy(fp, stdout);
				fclose(fp);
			}//end of else condition
		}//end of while loop	
	}//end of else condition

	return 0;
}//end of main function

void filecopy(FILE *ifp, FILE *ofp) {
	int c;

	while ((c = getc(ifp)) != EOF) {
		putc(c, ofp);
	}//end of while loop
}//end of filecopy() function
