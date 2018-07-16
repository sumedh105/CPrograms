#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	int c;

	if ((fp1 = fopen("file_one.txt", "r")) == NULL) {
		printf("\nCannot open the file and hence exiting\n");
		return 1;
	}

	else {
		if ((fp2 = fopen("file_three.txt", "w")) == NULL) {
			printf("\nCannot open the file and hence exiting\n");
			fclose(fp1);
			return 1;
		}//end of if condition

		else {
			while ((c = getc(fp1)) != EOF) {
				putc(c, fp2);
			}//end of while loop	
		}//end of else condition
	}//end of else conditon	

	fclose(fp1);
	fclose(fp2);

	return 0;
}//end of main function
