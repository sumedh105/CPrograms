#include <stdio.h>

int main()
{
	FILE *fp;
	int c;

	if ((fp = fopen("file_one.txt", "r")) == NULL) {
		printf("\nCannot open file for reading\n");
		return 1;
	}//end of if condition	
	
	else {
		while ((c = getc(fp)) != EOF) {
			putc(c, stdout);
		}//end of while loop
	}//end of else condition

	fclose(fp);

	return 0;
}//end of main function
